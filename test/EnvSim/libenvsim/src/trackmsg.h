//     Project: openETCS libenvsim
//      Module: trackmsg.h
// Description: Management + triggering of trackside messages (balise telegrams and radio messages)
//
// History:
// - 22.09.15, J. Kastner: initial version

#ifndef ENGINE_TRACKMSG_H
#define ENGINE_TRACKMSG_H

#include "utils.h"
#include "scade/ScriptedTrack_EnvSim.h"

#define MAX_NUM_PACKETS 30

typedef double es_TriggerPos;

typedef struct {
  es_TriggerPos triggerpos;
  CompressedBaliseMessage_TM msg;
} es_TriggeredBaliseMessage;

typedef struct {
  es_TriggerPos triggerpos;
  CompressedRadioMessage_TM msg;
} es_TriggeredRadioMessage;

typedef struct {
  // title of the loaded track, or NULL
  char *title;
  // linked list with balise messages
  // (in ascending order w.r.t. triggerpos)
  es_ListEntry *bmsgs;
  // linked list with radio messages
  es_ListEntry *rmsgs;
} es_TrackMessages;


typedef struct {
  es_TrackMessages *messages;
  // last passed balise message
  es_ListEntry *prevBmsg;
  // last train position used for triggering of balise messages
  es_TriggerPos prevBPos;
  // last passed radio message
  es_ListEntry *prevRmsg;
  // last train position used for triggering of radio messages
  es_TriggerPos prevRPos;
} es_TrackSimState;

// global struct with currently defined track messages
// (used by the Tcl track::xxx commands and ScriptedTrack_EnvSim.c)
extern es_TrackMessages es_tracksim_track;

// Enqueues a balise message into the output buffer.
// Every time es_write_next_balise_message is called,
// it takes the next message from this buffer.
void es_queue_balise_message(CompressedBaliseMessage_TM *msg);

// Writes the next pending balise message from the buffer to the specified
// target structure (using memcpy). Does nothing if there is no message left
// in the balise message buffer.
void es_write_next_balise_message(CompressedBaliseMessage_TM *target);

// Adds a new balise message to the provided track at the specified trigger position.
void es_add_triggered_balise_message(es_TrackMessages *track, es_TriggerPos pos, CompressedBaliseMessage_TM *bmsg);

// Enqueues a radio message into the output buffer.
// Every time es_write_next_radio_message is called,
// it takes the next message from this buffer.
void es_queue_radio_message(CompressedRadioMessage_TM *msg);

// Writes the next pending radio message from the buffer to the specified
// target structure (using memcpy). Does nothing if there is no message left
// in the radio message buffer.
void es_write_next_radio_message(CompressedRadioMessage_TM *target);

// Adds a new radio message to the provided track at the specified trigger position.
void es_add_triggered_radio_message(es_TrackMessages *track, es_TriggerPos pos, CompressedRadioMessage_TM *tmsg);

// Clears all messages from the specified track instance
void es_track_clear(es_TrackMessages *track);

void es_exec_tracksim_cycle(es_TrackSimState *state, es_TriggerPos newBPos, es_TriggerPos newRPos);

#endif //ENGINE_TRACKMSG_H

