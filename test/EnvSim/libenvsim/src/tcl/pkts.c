//     Project: openETCS libenvsim
//      Module: tcl / pkts.c
// Description: Tcl commands for managing of CompressedPackets
//
// History:
// - 30.09.15, J. Kastner: initial version

#include <string.h>
#include <kcg_types.h>
#include <stdio.h>
#include "pkts.h"
#include "../trackmsg.h"

extern CompressedBaliseMessage_TM es_tcl_track_balise_buf;
extern CompressedRadioMessage_TM es_tcl_track_radio_buf;

CompressedPackets_T_Common_Types_Pkg *es_tcl_pkts_target = NULL;

#define CHECK_PKTS_TARGET if(es_tcl_pkts_target==NULL) {snprintf(es_msg_buf,ES_MSG_BUF_SIZE,"pkts::target not set"); return ES_TCL_ERROR;}

es_Status es_tcl_pkts_set_target(char *subcmd) {
  if(!strcmp("balisebuf",subcmd)) {
    es_tcl_pkts_target = &es_tcl_track_balise_buf.Messages;
    return ES_OK;
  }
  if(!strcmp("radiobuf",subcmd)) {
    es_tcl_pkts_target = &es_tcl_track_radio_buf.Messages;
    return ES_OK;
  }
  snprintf(es_msg_buf,ES_MSG_BUF_SIZE,"invalid subcommand for pkts::target: %s",subcmd);
  return ES_TCL_ERROR;
}

es_Status es_tcl_pkts_get_headers(es_AppendResult appendResult, es_ClientData data) {
  CHECK_PKTS_TARGET;
  int i;
  for(i=0; i<MAX_NUM_PACKETS; i++) {
    MetadataElement_T_Common_Types_Pkg *hd = &es_tcl_pkts_target->PacketHeaders[i];
    if( ! hd->valid ) { break; }
    int nid_packet = hd->nid_packet / 1000000;
    int m_version = (hd->nid_packet % 100000) / 1000;
    int subindex = hd->nid_packet % 1000;
    snprintf(es_msg_buf,ES_MSG_BUF_SIZE,"{index %d nid_packet %d start %d  end %d q_dir %d m_version %d subindex %d} ",
             i,nid_packet,hd->startAddress, hd->endAddress, hd->q_dir, m_version, subindex);
    appendResult(es_msg_buf,data);
  }

  return ES_OK;
}


es_Status es_tcl_pkts_get_data(int index, int npackets, es_AppendResult appendResult, es_ClientData data) {
  CHECK_PKTS_TARGET;
  int lastindex = index + npackets - 1;
  if(index<0||lastindex>=MAX_NUM_PACKETS) {
    snprintf(es_msg_buf,ES_MSG_BUF_SIZE,"Invalid index/npackets: %d / %d",index,npackets);
    return ES_TCL_ERROR;
  }


  MetadataElement_T_Common_Types_Pkg *hd = &es_tcl_pkts_target->PacketHeaders[index];
  int spos = hd->startAddress;
  int epos = es_tcl_pkts_target->PacketHeaders[lastindex].endAddress;
  int i;
  char* buf = es_msg_buf;
  int max = ES_MSG_BUF_SIZE;
  for(i=spos; (i<=epos && max>0); i++) {
    int n = snprintf(buf, max, "%d ", es_tcl_pkts_target->PacketData[i]);
    max -= n;
    buf += n;
  }

  appendResult(es_msg_buf,data);
  return ES_OK;
}

