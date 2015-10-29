//     Project: openETCS libenvsim
//      Module: scade / scade_probe.c
// Description: implementation of the init and cycle functions for the SCADE ProbeXXX operators
//
// History:
// - 28.10.15, J. Kastner: initial version

#include "../tcp.h"
#include "ProbeTracksideInput_EnvSim.h"
#include "../logging.h"

#define PROBE_EVENT_TRACKSIDE T

// If not NULL, send all events (track messages, train messages) to this stream
es_TCPStream *scade_probe_evtstream = NULL;

void es_scade_probe_trackside_init(outC_ProbeTracksideInput_EnvSim *outC) {

}

void es_scade_probe_trackside_cycle(API_TrackSideInput_T_API_Msg_Pkg *in,
                                    outC_ProbeTracksideInput_EnvSim *outC) {
  if(in->valid && scade_probe_evtstream != NULL && scade_probe_evtstream->client != INVALID_SOCKET) {

    //es_tcp_send(scade_probe_evtstream,TCPMSG_ES_EVT,)
  }
}
