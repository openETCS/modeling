//     Project: openETCS libenvsim
//      Module: rcontrol.h
// Description: Handles remote control commands (via TCP messages).
//
// History:
// - 27.10.15, J. Kastner: initial version

#ifndef LIBENVSIM_RCONTROL_H
#define LIBENVSIM_RCONTROL_H

#include "tcp.h"

// Handles incoming command messages and uses the specified responseStream
// for outgoing messages (if a response is required).
// Returns ES_OK, or ES_INVALID_CMD if message was invalid/ not supported.
//
// @param msg Message to be handled
// @param responseStream TCP stream to be used for an outgoing response message (if required)
es_Status es_rcontrol_handle_msg(es_TCPMessage *msg, es_TCPStream *responseStream);

#endif //LIBENVSIM_RCONTROL_H
