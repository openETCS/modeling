//     Project: openETCS libenvsim
//      Module: trackmsg.c
// Description: Representation + triggering of trackside messages (balise telegrams and radio messages)
//
// History:
// - 22.09.15, kastner:

#include <stdio.h>
#include "trackmsg.h"
#include "logging.h"

#define GET_TRIGGERED_BM(list_entry) (list_entry==NULL ? NULL : (es_TriggeredBaliseMessage*)list_entry->data);
#define GET_TRIGGERED_RM(list_entry) (list_entry==NULL ? NULL : (es_TriggeredRadioMessage*)list_entry->data);

es_TrackMessages es_tracksim_track = {
  .bmsgs = NULL,
  .rmsgs = NULL
};

static es_ListEntry *es_baliseMsgBuffer = NULL;
static es_ListEntry *es_radioMsgBuffer = NULL;

void es_queue_balise_message(CompressedBaliseMessage_TM *msg) {
  if(es_baliseMsgBuffer==NULL)
    es_baliseMsgBuffer = es_list_append(es_baliseMsgBuffer,(char*)msg);
  else
    es_list_append(es_baliseMsgBuffer,(char*)msg);
}


void es_write_next_balise_message(CompressedBaliseMessage_TM *target) {
  if(es_baliseMsgBuffer==NULL) {
    target->Header.nid_bg=0;
    target->Header.n_total=0;
    target->Header.n_pig=0;
    target->Header.m_dup=0;
    target->Header.m_mcount=0;
    target->Header.m_version=0;
    target->Header.nid_c=0;
    target->Header.q_link=0;
    target->Header.q_media=0;
    target->Header.q_updown=0;
    int i;
    for(i=0;i<MAX_NUM_PACKETS;i++) {
      target->Messages.PacketHeaders[i].valid = false;
    }
    return;
  }

  CompressedBaliseMessage_TM *src;
  es_baliseMsgBuffer = es_list_remove_head(es_baliseMsgBuffer,(char**)&src);

  *target = *src;
}


int es_cmp_tbm(char* tbm1, char* tbm2) {
  es_TriggerPos pos1 = ((es_TriggeredBaliseMessage*)tbm1)->triggerpos;
  es_TriggerPos pos2 = ((es_TriggeredBaliseMessage*)tbm2)->triggerpos;
  if(pos1<pos2) return -1;
  if(pos1>pos2) return 1;
  return 0;
}

int es_cmp_trm(char* tbm1, char* tbm2) {
  es_TriggerPos pos1 = ((es_TriggeredRadioMessage*)tbm1)->triggerpos;
  es_TriggerPos pos2 = ((es_TriggeredRadioMessage*)tbm2)->triggerpos;
  if(pos1<pos2) return -1;
  if(pos1>pos2) return 1;
  return 0;
}

void es_add_triggered_balise_message(es_TrackMessages *track, es_TriggerPos pos, CompressedBaliseMessage_TM *bmsg) {
  es_TriggeredBaliseMessage *tbm = MALLOC(es_TriggeredBaliseMessage);
  tbm->triggerpos = pos;
  //memcpy(&tbm->msg,bmsg, sizeof(CompressedBaliseMessage_TM));
  tbm->msg = *bmsg;
  track->bmsgs = es_list_insert(track->bmsgs,(char*)tbm,es_cmp_tbm);
}

void es_queue_radio_message(CompressedRadioMessage_TM *msg) {
  if(es_radioMsgBuffer==NULL)
    es_radioMsgBuffer = es_list_append(es_radioMsgBuffer,(char*)msg);
  else
    es_list_append(es_radioMsgBuffer,(char*)msg);
}

void es_write_next_radio_message(CompressedRadioMessage_TM *target) {
  if(es_radioMsgBuffer==NULL) {
    target->Header.d_emergencystop = 0;
    target->Header.d_ref = 0;
    target->Header.d_sr = 0;
    target->Header.m_ack = 0;
    target->Header.m_version = 0;
    target->Header.nid_em = 0;
    target->Header.nid_lrbg = 0;
    target->Header.nid_message = 0;
    target->Header.q_dir = 0;
    target->Header.q_scale = 0;
    target->Header.radioDevice = 0;
    target->Header.receivedSystemTime = 0;
    target->Header.t_sh_rqst = 0;
    target->Header.t_train = 0;
    target->Header.t_train_reference = 0;
    int i;
    for(i=0;i<MAX_NUM_PACKETS;i++) {
      target->Messages.PacketHeaders[i].valid = false;
    }
    return;
  }

  CompressedRadioMessage_TM *src;
  es_radioMsgBuffer = es_list_remove_head(es_radioMsgBuffer,(char**)&src);

  *target = *src;
}


void es_add_triggered_radio_message(es_TrackMessages *track, es_TriggerPos pos, CompressedRadioMessage_TM *rmsg) {
  es_TriggeredRadioMessage *trm = MALLOC(es_TriggeredRadioMessage);
  trm->triggerpos = pos;
  trm->msg = *rmsg;
  track->rmsgs = es_list_insert(track->rmsgs,(char*)trm,es_cmp_trm);
}



void es_trigger_balise_msgs(es_TrackSimState *state, es_TriggerPos newBPos) {
  es_ListEntry *next = state->prevBmsg==NULL ? state->messages->bmsgs : state->prevBmsg->tail;
  es_ListEntry *prev = state->prevBmsg;

  es_TriggeredBaliseMessage *nextbm = GET_TRIGGERED_BM(next);

  while(nextbm!=NULL && nextbm->triggerpos<=newBPos) {
    LOG_TRACE(trackmsg,"triggering balise msg BG %d @ %.1f m",nextbm->msg.Header.nid_bg,nextbm->triggerpos);
    es_queue_balise_message(&nextbm->msg);
    prev = next;
    next = next->tail;
    nextbm = GET_TRIGGERED_BM(next);
  }
  state->prevBmsg = prev;
  state->prevBPos = newBPos;
}


void es_trigger_radio_msgs(es_TrackSimState *state, es_TriggerPos newRPos) {
  es_ListEntry *next = state->prevRmsg==NULL ? state->messages->rmsgs : state->prevRmsg->tail;
  es_ListEntry *prev = state->prevRmsg;

  es_TriggeredRadioMessage *nextrm = GET_TRIGGERED_RM(next);

  while(nextrm !=NULL && nextrm->triggerpos<= newRPos) {
    LOG_TRACE(trackmsg,"triggering radio msg %02d (LRBG=%d) @ %.1f m",
              nextrm->msg.Header.nid_message, nextrm->msg.Header.nid_lrbg,nextrm->triggerpos);
    es_queue_radio_message(&nextrm->msg);
    prev = next;
    next = next->tail;
    nextrm = GET_TRIGGERED_RM(next);
  }
  state->prevRmsg = prev;
  state->prevRPos = newRPos;
}

void es_exec_tracksim_cycle(es_TrackSimState *state, es_TriggerPos newBPos, es_TriggerPos newRPos) {
  LOG_TRACE(trackmsg, "checking track messages @ actualPos=%.1f,  radioPos=%.1f", newBPos, newRPos);

  es_trigger_balise_msgs(state,newBPos);
  es_trigger_radio_msgs(state,newRPos);
}

