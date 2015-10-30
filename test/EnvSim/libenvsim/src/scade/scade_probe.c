//     Project: openETCS libenvsim
//      Module: scade / scade_probe.c
// Description: implementation of the init and cycle functions for the SCADE ProbeXXX operators
//
// History:
// - 28.10.15, J. Kastner: initial version
// - 30.10.15, J. Kastner: add handling of train messages to trackside_cycle()

#include "../tcp.h"
#include "ProbeTracksideInput_EnvSim.h"
#include "ProbeSDM_EnvSim.h"
#include "../logging.h"

const size_t PROBE_TRACKSIDE_BMSG_SIZE = sizeof(CompressedBaliseMessage_TM);
const size_t PROBE_TRACKSIDE_RMSG_SIZE = sizeof(CompressedRadioMessage_TM);
const size_t PROBE_TRACKSIDE_TMSG_SIZE = sizeof(M_TrainTrack_Message_T_TM_radio_messages);


// If not NULL, send all events (track messages, train messages) to this stream
es_TCPStream *scade_probe_evtstream = NULL;

void es_scade_probe_trackside_init(outC_ProbeTracksideInput_EnvSim *outC) {

}

void es_scade_probe_trackside_cycle(double currentPosition,
                                    CompressedBaliseMessage_TM* bm,
                                    CompressedRadioMessage_TM* rm,
                                    M_TrainTrack_Message_T_TM_radio_messages *tm,
                                    outC_ProbeTracksideInput_EnvSim* out) {
  //static char hexdata[10000];
  if(scade_probe_evtstream != NULL && scade_probe_evtstream->client != INVALID_SOCKET) {
    if(bm->Header.nid_c > 0) {
      LOG_INFO(scade_probe,"Sending BM");
      int len = 8 + PROBE_TRACKSIDE_BMSG_SIZE;
      char buf[len];
      memcpy(buf,&currentPosition,8);
      memcpy(buf+8,bm,PROBE_TRACKSIDE_BMSG_SIZE);
      es_tcp_send(scade_probe_evtstream,TCPMSG_ES_EVT_BMSG,buf,len);
    }
    if(rm->Header.nid_message > 0) {
      LOG_INFO(scade_probe,"Sending RM");
      int len = 8 + PROBE_TRACKSIDE_RMSG_SIZE;
      char buf[len];
      memcpy(buf,&currentPosition,8);
      memcpy(buf+8,rm,PROBE_TRACKSIDE_RMSG_SIZE);
      es_tcp_send(scade_probe_evtstream,TCPMSG_ES_EVT_RMSG,buf,len);
    }
    if(tm->Message.valid || tm->Message.nid_message > 0) {
      LOG_INFO(scade_probe,"Sending TRAINMSG %d %d",tm->Message.valid,tm->Message.nid_message);
    }
  }
}


void es_scade_probe_sdm_init(outC_ProbeSDM_EnvSim *outC) {

}


void es_scade_probe_sdm_cycle(TargetCollection_T_TargetManagement_types *targetCollection,
                              CurveCollection_T_CalcBrakingCurves_types *curveCollection,
                              Target_T_TargetManagement_types *target,
                              outC_ProbeSDM_EnvSim *outC) {

}
