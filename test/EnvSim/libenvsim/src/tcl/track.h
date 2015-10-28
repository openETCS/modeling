//     Project: openETCS libenvsim
//      Module: tcl / track.h
// Description: Tcl interface for management of track messages
//
// History:
// - 23.09.15, J. Kastner: initial version

#ifndef LIBENVSIM_TRACK_H
#define LIBENVSIM_TRACK_H

#include "../utils.h"
#include "../trackmsg.h"

// handle subcommands for command "track::balise"
es_Status es_tcl_track_balise(char* subcmd, char* arg, void (*appendResult)(char*,es_ClientData), es_ClientData data);

// handle subcommands for command "track::radio"
es_Status es_tcl_track_radio(char* subcmd, char* arg, void (*appendResult)(char*,es_ClientData), es_ClientData data);

// handle subcommands for command "track::add"
es_Status es_tcl_track_add(char* subcmd, double pos);

// handle subcommands for command "track::info"
es_Status es_tcl_track_info(void (*appendResult)(char* res, es_ClientData data), es_ClientData data);

// handle command "track::title"
es_Status es_tcl_track_title(char *title);

 // handle command "track::clear"
es_Status es_tcl_track_clear();

#endif //LIBENVSIM_TRACK_H
