//     Project: openETCS libenvsim
//      Module: scade / scade_probe.c
// Description: implementation of the init and cycle functions for the SCADE ProbeXXX operators
//
// History:
// - 28.10.15, J. Kastner: initial version

#include "../tcp.h"
#include "ProbeTracksideInput_EnvSim.h"
#include "ProbeSDM_EnvSim.h"
#include "../logging.h"

const size_t PROBE_TRACKSIDE_BMSG_SIZE = sizeof(CompressedBaliseMessage_TM);
const size_t PROBE_TRACKSIDE_RMSG_SIZE = sizeof(CompressedRadioMessage_TM);


// If not NULL, send all events (track messages, train messages) to this stream
es_TCPStream *scade_probe_evtstream = NULL;

void es_scade_probe_trackside_init(outC_ProbeTracksideInput_EnvSim *outC) {

}

void es_scade_probe_trackside_cycle(CompressedBaliseMessage_TM* bm,
                                    CompressedRadioMessage_TM* rm,
                                    outC_ProbeTracksideInput_EnvSim* out) {
  //static char hexdata[10000];
  if(scade_probe_evtstream != NULL && scade_probe_evtstream->client != INVALID_SOCKET) {
    if(bm->Header.nid_c > 0) {
//      int len = es_bytes_to_hex(PROBE_TRACKSIDE_BMSG_SIZE,(char*)bm,hexdata);
//      es_tcp_send(scade_probe_evtstream,TCPMSG_ES_EVT_BMSG,hexdata,len);
      es_tcp_send(scade_probe_evtstream,TCPMSG_ES_EVT_BMSG,(char*)bm,PROBE_TRACKSIDE_BMSG_SIZE);
    }
    //es_tcp_send(scade_probe_evtstream,TCPMSG_ES_EVT,)
  }
}


void es_scade_probe_sdm_init(outC_ProbeSDM_EnvSim *outC) {

}


void es_scade_probe_sdm_cycle(TargetCollection_T_TargetManagement_types *targetCollection,
                              CurveCollection_T_CalcBrakingCurves_types *curveCollection,
                              Target_T_TargetManagement_types *target,
                              outC_ProbeSDM_EnvSim *outC) {

}
