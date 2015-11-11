//     Project: openETCS libenvsim
//      Module: scade / scade_remote.c
// Description: Implementation of the init and cycle functions for the SCADE RemoteXXX operators
//
// History:
// - 06.10.15, J. Kastner: initial version
// - 11.10.15, J. Kastner: add support for RemoteGUI
// - 20.10.15, J. Kastner: add support for new EVC-DMI-Bus
// - 28.10.15, J. Kastner: extend remote_gui_cycle() for new SimCtrl features
// - 10.11.15, J. Kastner: read remote GUI addr/port from env variables ENVSIM_REMOTE_GUI_ADDR/_PORT;
//                         correct bug in dmibus_cycle() (present not set to false when no msg arrviced in this cycle)

#ifdef WITH_SCADE
#include "RemoteDMI_EnvSim.h"
#include "RemoteEVC_EnvSim.h"
#include "scade_common.h"
#include "../logging.h"
#include "../tcp.h"
#include "../rcontrol.h"
#include "RemoteGUI_EnvSim.h"
#include "RemoteDMIBus_EnvSim.h"
#include "RemoteEVCBus_EnvSim.h"

#define REMOTE_DMI_ADDR "127.0.0.1"
#define REMOTE_DMI_PORT1 20001
#define REMOTE_DMI_PORT2 20002
#define REMOTE_GUI_ADDR "127.0.0.1"
#define REMOTE_GUI_PORT 20003

// send TIU data only in cycles which are a multiple of this value
#define SEND_TIUDATA_DIVIDER 1

#define SEND_GUIDATA_DIVIDER 10


typedef es_TCPStream STREAM;

STREAM *es_remote_dmi_conn1 = NULL;
STREAM *es_remote_dmi_conn2 = NULL;
STREAM *es_remote_evc_conn1 = NULL;
STREAM *es_remote_evc_conn2 = NULL;
STREAM *es_remote_gui_conn = NULL;
const size_t EVC2DMI_STRUCT_SIZE = sizeof(EVC_to_DMI_Message_T_API_DMI_Pkg);
const size_t EVC2DMI_BUSMSG_SIZE = 999*sizeof(int32_t);
const size_t TIU2DMI_STRUCT_SIZE = sizeof(TIU_Input_msg_API_TIU_Pkg);
const size_t DMI2EVC_STRUCT_SIZE = sizeof(DMI_to_EVC_Message_T_API_DMI_Pkg);
const size_t DMI2EVC_BUSMSG_SIZE = 311*sizeof(int32_t);
const size_t EVC2GUI_STRUCT_SIZE = sizeof(EVC_to_GUI_EnvSim);
const size_t GUI2EVC_STRUCT_SIZE = sizeof(GUI_to_EVC_EnvSim);

char *es_remote_dmi_addr = NULL;
int es_remote_dmi_port1 = 0;
int es_remote_dmi_port2 = 0;
char *es_remote_gui_addr = NULL;
int es_remote_gui_port = 0;
int es_remote_tiudata_divider = SEND_TIUDATA_DIVIDER;

void es_remote_init() {
  static int initialized = 0;
  if(initialized) {
    return;
  }
  initialized = 1;
  es_remote_dmi_addr = getenv("ENVSIM_REMOTE_DMI_ADDR");
  if( es_remote_dmi_addr == NULL ) {
    es_remote_dmi_addr = REMOTE_DMI_ADDR;
  }
  char *tmp = getenv("ENVSIM_REMOTE_DMI_PORT1");
  es_remote_dmi_port1 = tmp==NULL ? REMOTE_DMI_PORT1 : atoi(tmp);
  tmp = getenv("ENVSIM_REMOTE_DMI_PORT2");
  es_remote_dmi_port2 = tmp==NULL ? REMOTE_DMI_PORT2 : atoi(tmp);

  es_remote_gui_addr = getenv("ENVSIM_REMOTE_GUI_ADDR");
  if( es_remote_gui_addr == NULL ) {
    es_remote_gui_addr = REMOTE_GUI_ADDR;
  }
  tmp = getenv("ENVSIM_REMOTE_GUI_PORT");
  es_remote_gui_port =  tmp==NULL ? REMOTE_GUI_PORT : atoi(tmp);

  tmp = getenv("ENVSIM_SEND_TIUDATA_DIVIDER");
  if( tmp != NULL ) {
    es_remote_tiudata_divider = atoi(tmp);
  }

}


void es_remote_flow_control() {
  static bool run = true;
  if( es_remote_dmi_conn1 != NULL && es_remote_dmi_conn2 != NULL ) {
    es_remote_dmi_conn1->run = run;
    if (es_remote_dmi_conn2->nin > 5 && run) {
      LOG_INFO(scade_remote, "stopping remote DMI");
      run = false;
      es_tcp_send(es_remote_dmi_conn1,TCPMSG_STOP,NULL,0);
    }
    else if (es_remote_dmi_conn2->nin <=1 && !run) {
      LOG_INFO(scade_remote, "resuming remote DMI");
      run = true;
      es_tcp_send(es_remote_dmi_conn1,TCPMSG_RUN,NULL,0);
    }
  }
  if( es_remote_evc_conn1 != NULL && es_remote_evc_conn2 != NULL ) {
    es_remote_evc_conn2->run = run;
    if (es_remote_evc_conn1->nin > 5 && run) {
      LOG_INFO(scade_remote, "stopping remote EVC");
      run = false;
      es_tcp_send(es_remote_evc_conn2,TCPMSG_STOP,NULL,0);
    }
    else if (es_remote_evc_conn1->nin <=1 && !run) {
      LOG_INFO(scade_remote,"resuming remote EVC");
      run = true;
      es_tcp_send(es_remote_evc_conn2,TCPMSG_RUN,NULL,0);
    }
  }
}

void es_remote_dmi_init(outC_RemoteDMI_EnvSim *out) {
  es_log_init("envsim_main.log");
  es_remote_init();

  LOG_INFO(scade_remote,"Initializing RemoteDMI operator");
//  es_scade_load_config();

//  es_Interp *interp = es_get_interp();


  // connect to DMI server
  es_remote_dmi_conn1 = NULL;
  es_TCPContext *ctx = es_scade_get_tcp();
  if( ctx == NULL ) {
    LOG_ERROR(scade_remote,"could not initialize TCPContext for RemoteDMI");
    return;
  }

  if( es_tcp_connect(ctx,es_remote_dmi_addr,es_remote_dmi_port1,"dmi_conn1",&es_remote_dmi_conn1) ) {
    LOG_ERROR(scade_remote,"could not connect to RemoteDMI server @ %s:%d",es_remote_dmi_addr,es_remote_dmi_port1);
    es_remote_dmi_conn1 = NULL;
    return;
  }

  LOG_INFO(scade_remote,"connected to RemoteDMI server @ %s:%d for EVC2DMI messages",es_remote_dmi_addr,es_remote_dmi_port1);

  es_remote_dmi_conn2 = NULL;

  if( es_tcp_connect(ctx,es_remote_dmi_addr,es_remote_dmi_port2,"dmi_conn2",&es_remote_dmi_conn2) ) {
    LOG_ERROR(scade_remote,"could not connect to RemoteDMI server @ %s:%d",es_remote_dmi_addr,es_remote_dmi_port2);
    es_remote_dmi_conn2 = NULL;
    return;
  }
  else {
    es_remote_dmi_conn2->afterSend = es_remote_flow_control;
  }

  LOG_INFO(scade_remote,"connected to RemoteDMI server @ %s:%d for DMI2EVC messages",es_remote_dmi_addr,es_remote_dmi_port2);

}


void es_remote_dmi_cycle(EVC_to_DMI_Message_T_API_DMI_Pkg *evcToDMI, TIU_Input_msg_API_TIU_Pkg *tiuToDMI, outC_RemoteDMI_EnvSim *outC) {

  // SEND
  if(es_remote_dmi_conn1 != NULL && es_remote_dmi_conn1->socket != INVALID_SOCKET) {
    bool send = evcToDMI->trainRunningNumber.valid ||
                evcToDMI->adhesionFactor.valid ||
                evcToDMI->displayControl.valid ||
                evcToDMI->driverIdentifier.valid ||
                evcToDMI->dynamic.valid ||
                evcToDMI->entry_request.valid ||
                evcToDMI->evc_coded_train_data.valid ||
                evcToDMI->EVC_levelData.valid ||
                evcToDMI->EVC_radioNetData.valid ||
                evcToDMI->iconRequest.valid ||
                evcToDMI->identifierRequest.valid ||
                evcToDMI->menu_request.valid ||
                evcToDMI->systemVersion.valid ||
                evcToDMI->textMessage.valid ||
                evcToDMI->trackDescription.valid ||
                evcToDMI->trainData.valid;
    if(send) {
      es_tcp_send(es_remote_dmi_conn1, TCPMSG_EVC2DMI, (const char *) evcToDMI, EVC2DMI_STRUCT_SIZE);
    }
    send = tiuToDMI->valid;
    if(send) {
//      LOG_INFO(scade_remote,"sending TIU2DMI; openDesk: %d",tiuToDMI->info.train_status.m_cab_st);
      es_tcp_send(es_remote_dmi_conn1, TCPMSG_TIU2DMI, (const char*) tiuToDMI, TIU2DMI_STRUCT_SIZE);
    }
  }

  // RECEIVE
  if(es_remote_dmi_conn2 != NULL) {
    es_TCPMessage *msg = NULL;
    es_tcp_read(es_remote_dmi_conn2,TCPMSG_DMI2EVC,&msg);
    if( msg != NULL ) {
      if(msg->len != DMI2EVC_STRUCT_SIZE) {
        LOG_ERROR(scade_remote,"Invalid DMI2EVC message: received %d bytes, expected %d bytes",msg->len,DMI2EVC_STRUCT_SIZE);
      }
      else {
        memcpy(&outC->dmiToEVC,msg->data,DMI2EVC_STRUCT_SIZE);
      }
      es_tcp_free_msg(msg);
    }
    else {
      outC->dmiToEVC.present = false;
    }
  }
}


void es_remote_dmibus_init(outC_RemoteDMIBus_EnvSim *out) {
  es_log_init("envsim_main.log");
  es_remote_init();

  LOG_INFO(scade_remote,"Initializing RemoteDMIBus operator");
  LOG_INFO(scade_remote,"sending TIU data every %d cycles",es_remote_tiudata_divider);
//  es_scade_load_config();

//  es_Interp *interp = es_get_interp();


  // connect to DMI server
  es_remote_dmi_conn1 = NULL;
  es_TCPContext *ctx = es_scade_get_tcp();
  if( ctx == NULL ) {
    LOG_ERROR(scade_remote,"could not initialize TCPContext for RemoteDMI");
    return;
  }
  if( es_tcp_connect(ctx,es_remote_dmi_addr,es_remote_dmi_port1,"dmi_conn1",&es_remote_dmi_conn1) ) {
    LOG_ERROR(scade_remote,"could not connect to RemoteDMI server @ %s:%d",es_remote_dmi_addr,es_remote_dmi_port1);
    es_remote_dmi_conn1 = NULL;
    return;
  }

  LOG_INFO(scade_remote,"connected to RemoteDMI server @ %s:%d for EVC2DMI messages",es_remote_dmi_addr,es_remote_dmi_port1);

  es_remote_dmi_conn2 = NULL;
  if( es_tcp_connect(ctx,es_remote_dmi_addr,es_remote_dmi_port2,"dmi_conn2",&es_remote_dmi_conn2) ) {
    LOG_ERROR(scade_remote,"could not connect to RemoteDMI server @ %s:%d",es_remote_dmi_addr,es_remote_dmi_port2);
    es_remote_dmi_conn2 = NULL;
    return;
  }
  else {
    es_remote_dmi_conn2->afterSend = es_remote_flow_control;
  }

  LOG_INFO(scade_remote,"connected to RemoteDMI server @ %s:%d for DMI2EVC messages",es_remote_dmi_addr,es_remote_dmi_port2);

}

void es_remote_dmibus_cycle(EVC_to_DMI_Message_int_T_API_DMI_Pkg *evcToDMI, TIU_Input_msg_API_TIU_Pkg *tiuToDMI, outC_RemoteDMIBus_EnvSim *outC) {
  static int cycle = 0;

  int *in = (int*)evcToDMI;

  // SEND
  if(es_remote_dmi_conn1 != NULL && es_remote_dmi_conn1->socket != INVALID_SOCKET) {
    int send = in[0];
    if(tiuToDMI->valid && cycle % es_remote_tiudata_divider == 0) {
      es_tcp_send(es_remote_dmi_conn1, TCPMSG_TIU2DMI, (const char*) tiuToDMI, TIU2DMI_STRUCT_SIZE);
    }
    if(send) {
      //if( in[40] ) {
//        LOG_INFO(scade_remote,"TEXTMSG @cycle=%d",cycle);
//      }
      es_tcp_send(es_remote_dmi_conn1, TCPMSG_EVC2DMI_BUS, (const char *) evcToDMI, EVC2DMI_BUSMSG_SIZE);
    }
  }
  // RECEIVE
  if(es_remote_dmi_conn2 != NULL) {
    es_TCPMessage *msg = NULL;
    es_tcp_read(es_remote_dmi_conn2,TCPMSG_DMI2EVC_BUS,&msg);
    if( msg != NULL ) {
      if(msg->len != DMI2EVC_BUSMSG_SIZE) {
        LOG_ERROR(scade_remote,"Invalid DMI2EVC message: received %d bytes, expected %d bytes",msg->len,DMI2EVC_STRUCT_SIZE);
      }
      else {
        memcpy(&outC->dmiToEVC,msg->data,DMI2EVC_BUSMSG_SIZE);
      }
      es_tcp_free_msg(msg);
    }
  }

  cycle += 1;

}


void es_remote_evc_init(outC_RemoteEVC_EnvSim *out) {
  es_log_init("envsim_dmi.log");
  es_remote_init();

  LOG_INFO(scade_remote,"Initializing RemoteEVC operator");
//  es_scade_load_config();

//  es_Interp *interp = es_get_interp();

  // listen for EVC connections
  es_remote_evc_conn1 = NULL;
  es_remote_evc_conn2 = NULL;
  es_TCPContext *ctx = es_scade_get_tcp();
  if( ctx == NULL ) {
    LOG_ERROR(scade_remote,"could not initialize TCPContext for RemoteEVC");
    return;
  }

  if( es_tcp_listen(ctx,es_remote_dmi_port1,"evc_conn1",&es_remote_evc_conn1) ) {
    LOG_ERROR(scade_remote,"could not start RemoteEVC server on port %d",es_remote_dmi_port1);
    es_remote_evc_conn1 = NULL;
    return;
  }

  LOG_INFO(scade_remote,"started RemoteEVC server for EVC2DMI messages on port %d",es_remote_dmi_port1);

  if( es_tcp_listen(ctx,es_remote_dmi_port2,"evc_conn2",&es_remote_evc_conn2) ) {
    LOG_ERROR(scade_remote,"could not start RemoteEVC server on port %d",es_remote_dmi_port2);
    es_remote_evc_conn2 = NULL;
    return;
  }

  LOG_INFO(scade_remote,"started RemoteEVC server for EVC2DMI messages on port %d",es_remote_dmi_port2);
}

void es_remote_evc_cycle(DMI_to_EVC_Message_T_API_DMI_Pkg *dmiToEVC, outC_RemoteEVC_EnvSim *outC) {
  static bool run = true;

  bool send = dmiToEVC->trainData.valid ||
              dmiToEVC->adhesionFactor.valid ||
              dmiToEVC->driverIdentifier.valid ||
              dmiToEVC->driverRequest.valid ||
              dmiToEVC->iconAck.valid ||
              dmiToEVC->identifier.valid ||
              dmiToEVC->radioNetData.valid ||
              dmiToEVC->selectedLevel.valid ||
              dmiToEVC->status.valid ||
              dmiToEVC->trainDataAck.valid ||
              dmiToEVC->textMessageAck.valid ||
              dmiToEVC->trainRunningNumber.valid;
  // SEND
  if( send && es_remote_evc_conn2 != NULL && es_remote_evc_conn2->client != INVALID_SOCKET && dmiToEVC->present) {
    es_tcp_send(es_remote_evc_conn2,TCPMSG_DMI2EVC,(const char*)dmiToEVC,DMI2EVC_STRUCT_SIZE);
  }

  // RECEIVE
  if(es_remote_evc_conn1 == NULL) {
    return;
  }
  //run = es_remote_evc_conn1->run;
  //LOG_INFO(scade_remote,"status: %d",run);
  //if( run ) {
    es_TCPMessage *msg = NULL;
    es_tcp_read(es_remote_evc_conn1, TCPMSG_EVC2DMI,&msg);
    if (msg != NULL) {
      run = true;
      if (msg->len != EVC2DMI_STRUCT_SIZE) {
        LOG_ERROR(scade_remote, "Invalid EVC2DMI message: received %d bytes, expected %d bytes", msg->len,
                  EVC2DMI_STRUCT_SIZE);
      }
      else {
        memcpy(&outC->evcToDMI, msg->data, EVC2DMI_STRUCT_SIZE);
      }
      es_tcp_free_msg(msg);
    }
    //else {
    //  outC->evcToDMI.present = false;
    //}

    msg = NULL;
    es_tcp_read(es_remote_evc_conn1, TCPMSG_TIU2DMI, &msg);
    if( msg != NULL ) {
      if (msg->len != TIU2DMI_STRUCT_SIZE) {
        LOG_ERROR(scade_remote, "Invalid TIU2DMI message: received %d bytes, expected %d bytes", msg->len,
                  TIU2DMI_STRUCT_SIZE);
      }
      else {
        memcpy(&outC->tiuToDMI, msg->data, TIU2DMI_STRUCT_SIZE);
//        LOG_TRACE(scade_remote,"received TIU2DMI; desk open: %d",outC->tiuToDMI.info.train_status.m_cab_st);
      }
      es_tcp_free_msg(msg);
    }
    else {
      run = false;
    //  outC->tiuToDMI.valid = false;
    }

  //}

  //outC->run = run;
  outC->run = true;
}


void es_remote_evcbus_init(outC_RemoteEVCBus_EnvSim *out) {
  es_log_init("envsim_dmi.log");
  es_remote_init();

  LOG_INFO(scade_remote,"Initializing RemoteEVCBus operator");
//  es_scade_load_config();

//  es_Interp *interp = es_get_interp();

  // listen for EVC connections
  es_remote_evc_conn1 = NULL;
  es_remote_evc_conn2 = NULL;
  es_TCPContext *ctx = es_scade_get_tcp();
  if( ctx == NULL ) {
    LOG_ERROR(scade_remote,"could not initialize TCPContext for RemoteEVC");
    return;
  }

  if( es_tcp_listen(ctx,es_remote_dmi_port1,"evc_conn1",&es_remote_evc_conn1) ) {
    LOG_ERROR(scade_remote,"could not start RemoteEVC server on port %d",es_remote_dmi_port1);
    es_remote_evc_conn1 = NULL;
    return;
  }

  LOG_INFO(scade_remote,"started RemoteEVC server for EVC2DMI messages on port %d",es_remote_dmi_port1);

  if( es_tcp_listen(ctx,es_remote_dmi_port2,"evc_conn2",&es_remote_evc_conn2) ) {
    LOG_ERROR(scade_remote,"could not start RemoteEVC server on port %d",es_remote_dmi_port2);
    es_remote_evc_conn2 = NULL;
    return;
  }

  LOG_INFO(scade_remote,"started RemoteEVC server for EVC2DMI messages on port %d",es_remote_dmi_port2);
}

void es_remote_evcbus_cycle(DMI_to_EVC_Message_int_T_API_DMI_Pkg *dmiToEVC, outC_RemoteEVCBus_EnvSim *outC) {
  static bool run = true;
  int *in = (int*)dmiToEVC;
  int send = in[0];

  // SEND
  if( send && es_remote_evc_conn2 != NULL && es_remote_evc_conn2->client != INVALID_SOCKET) {
    es_tcp_send(es_remote_evc_conn2,TCPMSG_DMI2EVC_BUS,(const char*)dmiToEVC,DMI2EVC_BUSMSG_SIZE);
  }

  // RECEIVE
  if(es_remote_evc_conn1 == NULL) {
    return;
  }
  //run = es_remote_evc_conn1->run;
  //LOG_INFO(scade_remote,"status: %d",run);
  //if( run ) {
    es_TCPMessage *msg = NULL;
    es_tcp_read(es_remote_evc_conn1, TCPMSG_EVC2DMI_BUS,&msg);
    if (msg != NULL) {
      LOG_INFO(scade_remote,"received message")
      run = true;
      if (msg->len != EVC2DMI_BUSMSG_SIZE) {
        LOG_ERROR(scade_remote, "Invalid EVC2DMI message: received %d bytes, expected %d bytes", msg->len,
                  EVC2DMI_BUSMSG_SIZE);
      }
      else {
        memcpy(&outC->evcToDMI, msg->data, EVC2DMI_BUSMSG_SIZE);
      }
      es_tcp_free_msg(msg);
    }
    else {
      outC->evcToDMI[0] = 0;
    }
    //else {
    //  outC->evcToDMI.present = false;
    //}

    msg = NULL;
    es_tcp_read(es_remote_evc_conn1, TCPMSG_TIU2DMI, &msg);
  while( msg != NULL ) {
    if (msg->len != TIU2DMI_STRUCT_SIZE) {
      LOG_ERROR(scade_remote, "Invalid TIU2DMI message: received %d bytes, expected %d bytes", msg->len,
                TIU2DMI_STRUCT_SIZE);
    }
    else {
      memcpy(&outC->tiuToDMI, msg->data, TIU2DMI_STRUCT_SIZE);
//        LOG_TRACE(scade_remote,"received TIU2DMI; desk open: %d",outC->tiuToDMI.info.train_status.m_cab_st);
    }
    es_tcp_free_msg(msg);
    msg = NULL;
    es_tcp_read(es_remote_evc_conn1, TCPMSG_TIU2DMI, &msg);
  }

  outC->run = true;
}


extern void es_remote_gui_init(outC_RemoteGUI_EnvSim *out) {
  es_log_init("envsim_main.log");
  es_remote_init();

  LOG_INFO(scade_remote,"Initializing RemoteGUI operator");

  // connect to GUI server
  es_remote_gui_conn = NULL;
  es_TCPContext *ctx = es_scade_get_tcp();
  if( ctx == NULL ) {
    LOG_ERROR(scade_remote,"could not initialize TCPContext for RemoteGUI");
    return;
  }
  if( es_tcp_connect(ctx,es_remote_gui_addr,es_remote_gui_port,"gui_conn",&es_remote_gui_conn) ) {
    LOG_ERROR(scade_remote,"could not connect to RemoteGUI server @ %s:%d",es_remote_gui_addr,es_remote_gui_port);
    es_remote_gui_conn = NULL;
    return;
  }

  LOG_INFO(scade_remote,"connected to RemoteGUI server @ %s:%d",es_remote_gui_addr,es_remote_gui_port);

}


extern void es_remote_gui_cycle(EVC_to_GUI_EnvSim *evcToGUI, outC_RemoteGUI_EnvSim *outC) {
  static int cycle = 0;

  // SEND
  if( cycle % SEND_GUIDATA_DIVIDER==0 && es_remote_gui_conn != NULL && es_remote_gui_conn->client != INVALID_SOCKET) {
    es_tcp_send(es_remote_gui_conn,TCPMSG_EVC2GUI,(const char*)evcToGUI,EVC2GUI_STRUCT_SIZE);
  }

  // RECEIVE
  if(es_remote_gui_conn != NULL) {
    es_TCPMessage *msg = NULL;
    es_tcp_read(es_remote_gui_conn,TCPMSG_ANY,&msg);

    while( msg != NULL ) {
      if( msg->id == TCPMSG_GUI2EVC ) {
        if (msg->len != GUI2EVC_STRUCT_SIZE) {
          LOG_ERROR(scade_remote, "Invalid GUI2EVC message: received %d bytes, expected %d bytes", msg->len,
                    GUI2EVC_STRUCT_SIZE);
        }
        else {
          memcpy(&outC->guiToEVC, msg->data, GUI2EVC_STRUCT_SIZE);
        }
      }
      else {
        es_rcontrol_handle_msg(msg,es_remote_gui_conn);
      }
      es_tcp_free_msg(msg);
      es_tcp_read(es_remote_gui_conn,TCPMSG_ANY,&msg);
    }

  }

  cycle++;
}
#endif
