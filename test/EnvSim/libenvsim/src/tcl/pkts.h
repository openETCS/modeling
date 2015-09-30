//     Project: openETCS libenvsim
//      Module: tcl / pkts.h
// Description: Tcl commands for managing of CompressedPackets
//
// History:
// - 30.09.15, J. Kastner: initial version

#include "../utils.h"

#ifndef LIBENVSIM_PKTS_H
#define LIBENVSIM_PKTS_H


// Command pkts::target
//
// Sets the target for all following pkts::XXX operations.
// Supported subcommands:
// - balisebuf: set track balise buffer as target for packet operations
// - radiobuf: set track radio buffer as target for packet operations
es_Status es_tcl_pkts_set_target(char *subcmd);

es_Status es_tcl_pkts_get_headers(es_AppendResult appendResult, es_ClientData data);
//es_Status es_tcl_pkts_get(char *subcmd, es_AppendResult appendResult, es_ClientData data);

// Command pkts::get data index
//
// Writes the data array for the packet at the specified index using the provided appendResult function
es_Status es_tcl_pkts_get_data(int index, es_AppendResult appendResult, es_ClientData data);

#endif //LIBENVSIM_PKTS_H
