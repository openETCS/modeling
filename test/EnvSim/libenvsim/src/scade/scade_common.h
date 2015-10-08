//     Project: openETCS libenvsim
//      Module: scade / scade_common.h
// Description: Provides common utility functions for libenvsim imported SCADE operator implementations
//
// History:
// - 06.10.15, J. Kastner: initial version

#include "../tcl/interp.h"
#include "../tcp.h"

#ifdef WITH_SCADE
#ifndef LIBENVSIM_SCADE_COMMON_H
#define LIBENVSIM_SCADE_COMMON_H

es_Status es_scade_load_config();

es_TCPContext* es_scade_get_tcp();

#endif //LIBENVSIM_SCADE_COMMON_H
#endif
