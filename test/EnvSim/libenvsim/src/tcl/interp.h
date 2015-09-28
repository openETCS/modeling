//     Project: openETCS libenvsim
//      Module: tcl / interp.h
// Description: Custom interface to the embedded Tcl interpreter (Jim)
//
// History:
// - 22.09.15, J. Kastner: initial version

#ifndef ENGINE_INTERP_H
#define ENGINE_INTERP_H
#ifdef WITH_JIM

#include "../utils.h"
#include <jim.h>

typedef Jim_Interp es_Interp;

// Returns the global Tcl interpreter instance
es_Interp* es_get_interp();

es_Interp* es_init_interp();

void es_free_interp(es_Interp *interp);

es_Status es_eval_tcl(es_Interp *interp, const char *script);

#endif
#endif //ENGINE_INTERP_H
