//     Project: openETCS libenvsim
//      Module: scade / scade_remote.c
// Description: Implementation of the init and cycle functions for the SCADE RemoteXXX operators
//
// History:
// - 06.10.15, J. Kastner: initial version

#ifdef WITH_SCADE
#include "RemoteDMI_EnvSim.h"
#include "RemoteEVC_EnvSim.h"
#include "scade_common.h"
#include "../logging.h"
#include "../tcp.h"

#define REMOTE_DMI_ADDR "127.0.0.1"
#define REMOTE_DMI_PORT1 20001
#define REMOTE_DMI_PORT2 20002


es_TCPStream *es_remote_dmi_conn1 = NULL;
es_TCPStream *es_remote_dmi_conn2 = NULL;
es_TCPStream *es_remote_evc_conn1 = NULL;
es_TCPStream *es_remote_evc_conn2 = NULL;
const size_t EVC2DMI_STRUCT_SIZE = sizeof(EVC_to_DMI_Message_T_API_DMI_Pkg);
const size_t DMI2EVC_STRUCT_SIZE = sizeof(DMI_to_EVC_Message_T_API_DMI_Pkg);

void es_remote_dmi_init(outC_RemoteDMI_EnvSim *out) {
  es_log_init("envsim_main.log");

  LOG_INFO(scade_remote,"Initializing RemoteDMI operator");
  es_scade_load_config();

  es_Interp *interp = es_get_interp();

  // connect to DMI server
  es_remote_dmi_conn1 = NULL;
  es_TCPContext *ctx = es_scade_get_tcp();
  if( ctx == NULL ) {
    LOG_ERROR(scade_remote,"could not initialize TCPContext for RemoteDMI");
    return;
  }
  if( es_tcp_connect(ctx,REMOTE_DMI_ADDR,REMOTE_DMI_PORT1,&es_remote_dmi_conn1) ) {
    LOG_ERROR(scade_remote,"could not connect to RemoteDMI server @ %s:%d",REMOTE_DMI_ADDR,REMOTE_DMI_PORT1);
    es_remote_dmi_conn1 = NULL;
    return;
  }

  LOG_INFO(scade_remote,"connected to RemoteDMI server @ %s:%d for EVC2DMI messages",REMOTE_DMI_ADDR,REMOTE_DMI_PORT1);

  es_remote_dmi_conn2 = NULL;
  if( es_tcp_connect(ctx,REMOTE_DMI_ADDR,REMOTE_DMI_PORT2,&es_remote_dmi_conn2) ) {
    LOG_ERROR(scade_remote,"could not connect to RemoteDMI server @ %s:%d",REMOTE_DMI_ADDR,REMOTE_DMI_PORT2);
    es_remote_dmi_conn2 = NULL;
    return;
  }

  LOG_INFO(scade_remote,"connected to RemoteDMI server @ %s:%d for DMI2EVC messages",REMOTE_DMI_ADDR,REMOTE_DMI_PORT2);

}


void es_remote_dmi_cycle(EVC_to_DMI_Message_T_API_DMI_Pkg *evcToDMI, outC_RemoteDMI_EnvSim *outC) {
  // SEND
  if(es_remote_dmi_conn1 != NULL && es_remote_dmi_conn1->socket != INVALID_SOCKET && evcToDMI->present) {
    es_tcp_send(es_remote_dmi_conn1,TCPMSG_EVC2DMI,(const char*)evcToDMI,EVC2DMI_STRUCT_SIZE);
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
      outC->dmiToEVC.present = false ;
    }
  }
}


void es_remote_evc_init(outC_RemoteEVC_EnvSim *out) {
  es_log_init("envsim_dmi.log");

  LOG_INFO(scade_remote,"Initializing RemoteEVC operator");
  es_scade_load_config();

  es_Interp *interp = es_get_interp();

  // listen for EVC connections
  es_remote_evc_conn1 = NULL;
  es_remote_evc_conn2 = NULL;
  es_TCPContext *ctx = es_scade_get_tcp();
  if( ctx == NULL ) {
    LOG_ERROR(scade_remote,"could not initialize TCPContext for RemoteEVC");
    return;
  }

  if( es_tcp_listen(ctx,REMOTE_DMI_PORT1,&es_remote_evc_conn1) ) {
    LOG_ERROR(scade_remote,"could not start RemoteEVC server on port %d",REMOTE_DMI_PORT1);
    es_remote_evc_conn1 = NULL;
    return;
  }

  LOG_INFO(scade_remote,"started RemoteEVC server for EVC2DMI messages on port %d",REMOTE_DMI_PORT1);

  if( es_tcp_listen(ctx,REMOTE_DMI_PORT2,&es_remote_evc_conn2) ) {
    LOG_ERROR(scade_remote,"could not start RemoteEVC server on port %d",REMOTE_DMI_PORT2);
    es_remote_evc_conn2 = NULL;
    return;
  }

  LOG_INFO(scade_remote,"started RemoteEVC server for EVC2DMI messages on port %d",REMOTE_DMI_PORT2);
}

void es_remote_evc_cycle(DMI_to_EVC_Message_T_API_DMI_Pkg *dmiToEVC, outC_RemoteEVC_EnvSim *outC) {
  // SEND
  if(es_remote_evc_conn2 != NULL && es_remote_evc_conn2->client != INVALID_SOCKET && dmiToEVC->present) {
    es_tcp_send(es_remote_evc_conn2,TCPMSG_DMI2EVC,(const char*)dmiToEVC,DMI2EVC_STRUCT_SIZE);
  }

  // RECEIVE
  if(es_remote_evc_conn1 != NULL) {
    es_TCPMessage *msg = NULL;
    es_tcp_read(es_remote_evc_conn1, TCPMSG_EVC2DMI,&msg);
    if (msg != NULL) {
      if (msg->len != EVC2DMI_STRUCT_SIZE) {
        LOG_ERROR(scade_remote, "Invalid EVC2DMI message: received %d bytes, expected %d bytes", msg->len,
                  EVC2DMI_STRUCT_SIZE);
      }
      else {
        memcpy(&outC->evcToDMI, msg->data, EVC2DMI_STRUCT_SIZE);
      }
      es_tcp_free_msg(msg);
    }
    else {
      outC->evcToDMI.present = FALSE;
    }
  }
}

#endif
