//     Project: openETCS libenvsim
//      Module: scade / scade_probe.c
// Description: implementation of the init and cycle functions for the SCADE ProbeXXX operators
//
// History:
// - 28.10.15, J. Kastner: initial version
// - 30.10.15, J. Kastner: add handling of train messages to trackside_cycle()

#include <stdio.h>
#include "../tcp.h"
#include "ProbeTracksideInput_EnvSim.h"
#include "ProbeSDM_EnvSim.h"
#include "ProbeEVC_EnvSim.h"
#include "../logging.h"

const size_t PROBE_TRACKSIDE_BMSG_SIZE = sizeof(CompressedBaliseMessage_TM);
const size_t PROBE_TRACKSIDE_RMSG_SIZE = sizeof(CompressedRadioMessage_TM);
const size_t PROBE_TRACKSIDE_TMSG_SIZE = sizeof(M_TrainTrack_Message_T_TM_radio_messages);
const size_t PROBE_SDM_TARGET_SIZE = sizeof(Target_T_TargetManagement_types);


// If not NULL, send all events (track messages, train messages) to this stream
es_TCPStream *scade_probe_evtstream = NULL;

void es_scade_probe_trackside_init(outC_ProbeTracksideInput_EnvSim *outC) {

}

void es_scade_probe_trackside_cycle(double currentPosition,
                                    CompressedBaliseMessage_TM* bm,
                                    CompressedRadioMessage_TM* rm,
                                    M_TrainTrack_Message_T_TM_radio_messages *tm,
                                    outC_ProbeTracksideInput_EnvSim* out) {
  static int last_nid_bg = 0;
  static int last_n_pig = 0;
  //static char hexdata[10000];
  if(scade_probe_evtstream != NULL && scade_probe_evtstream->client != INVALID_SOCKET) {
    if(bm->Header.nid_c > 0 && !(bm->Header.nid_bg==last_nid_bg && bm->Header.n_pig==last_n_pig)) {
      last_nid_bg = bm->Header.nid_bg;
      last_n_pig = bm->Header.n_pig;
      int len = 8 + PROBE_TRACKSIDE_BMSG_SIZE;
      char buf[len];
      memcpy(buf,&currentPosition,8);
      memcpy(buf+8,bm,PROBE_TRACKSIDE_BMSG_SIZE);
      es_tcp_send(scade_probe_evtstream,TCPMSG_ES_EVT_BMSG,buf,len);
    }
    if(rm->Header.nid_message > 0) {
      int len = 8 + PROBE_TRACKSIDE_RMSG_SIZE;
      char buf[len];
      memcpy(buf,&currentPosition,8);
      memcpy(buf+8,rm,PROBE_TRACKSIDE_RMSG_SIZE);
      es_tcp_send(scade_probe_evtstream,TCPMSG_ES_EVT_RMSG,buf,len);
    }
    if(tm->Message.valid || tm->Message.nid_message > 0) {
      int len = 8 + PROBE_TRACKSIDE_TMSG_SIZE;
      char buf[len];
      memcpy(buf,&currentPosition,8);
      memcpy(buf+8,tm,PROBE_TRACKSIDE_TMSG_SIZE);
      es_tcp_send(scade_probe_evtstream,TCPMSG_ES_EVT_TMSG,buf,len);
    }
  }
}


void es_scade_probe_sdm_init(outC_ProbeSDM_EnvSim *outC) {

}

void es_scade_probe_curves(CurveCollection_T_CalcBrakingCurves_types *curves) {
  static int cycle = 0;
  if(curves->EOA_SBD_curve.valid[0] && cycle % 10 == 0) {
    char buf[1000];
    char *p = buf;
    int rest = 1000;
    int len = 0;
    int i;
    for(i=0; i<10; i++) {
      float d = curves->EOA_SBD_curve.distances[i];
      float a = curves->EOA_SBD_curve.accelerations[i];
      float v = curves->EOA_SBD_curve.speeds[i];
      int n = snprintf(p,rest,"{%f %f %f}",d,a,v);
      p += n;
      rest -= n;
      len += n;
    }
    es_tcp_send(scade_probe_evtstream,TCPMSG_ES_EVT_BC,buf,len);
  }

  cycle++;
}

void es_scade_probe_sdm_cycle(TargetCollection_T_TargetManagement_types *targetCollection,
                              CurveCollection_T_CalcBrakingCurves_types *curveCollection,
                              Target_T_TargetManagement_types *target,
                              outC_ProbeSDM_EnvSim *outC) {
  static Target_real_T_TargetManagement_types last_target;

  if( scade_probe_evtstream==NULL || scade_probe_evtstream->client == INVALID_SOCKET ) {
    return;
  }

  if(target->valid) {
    if( memcmp(&last_target,target,PROBE_SDM_TARGET_SIZE) ) {
      memcpy(&last_target,target,PROBE_SDM_TARGET_SIZE);
      es_tcp_send(scade_probe_evtstream,TCPMSG_ES_EVT_TGT,(char*)target,PROBE_SDM_TARGET_SIZE);
    }
  }

  es_scade_probe_curves(curveCollection);

}


void es_scade_probe_evc_init(outC_ProbeEVC_EnvSim *outC) {

}


void es_scade_probe_evc_cycle(MSG_Errors_T_Common_Types_Pkg *msgErrors,
                                     positionErrors_T_TrainPosition_Types_Pck *posErrors,
                                     morcStatus_T_RCM_Session_Types_Pkg *morcStatus,
                                     outC_ProbeEVC_EnvSim *outC) {

}
