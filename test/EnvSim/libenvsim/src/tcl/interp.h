//     Project: openETCS libenvsim
//      Module: tcl / interp.h
// Description: Custom interface to the embedded Tcl interpreter (Jim)
//
// History:
// - 22.09.15, J. Kastner: initial version
// - 28.10.15, J. Kastner: add es_tcl_last_result()

#ifndef ENGINE_INTERP_H
#define ENGINE_INTERP_H
#ifdef WITH_JIM

#include "../utils.h"
#include <jim.h>

typedef Jim_Interp es_Interp;

// Returns the global Tcl interpreter instance
es_Interp* es_get_interp();

// Creates and initializes a new embedded Tcl interpreter
es_Interp* es_init_interp();

// Destroys the specified Tcl interpreter instance
void es_free_interp(es_Interp *interp);

// Evaluates the specified Tcl script file in the provided interpreter instance.
//
// @param interp Tcl interpreter instance
// @param script Path to the script to be evaluated
es_Status es_eval_tcl(es_Interp *interp, const char *script);

// Returns the result of the last evaluation for the specified interpreter instance.
const char* es_tcl_last_result(es_Interp *interp);

#endif
#endif //ENGINE_INTERP_H
