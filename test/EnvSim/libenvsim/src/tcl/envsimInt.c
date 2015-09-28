//     Project: openETCS libenvsim
//      Module: tcl / envsimInt.c
// Description: Tcl extension for libenvsim
//
// History:
// - 23.09.15, J. Kastner: initial version

#ifdef WITH_TCL_EXTENSION
#include "envsimInt.h"
#include "track.h"

void envsim_append_result(char* res, char* clientData) {
  Tcl_AppendResult((Tcl_Interp*)clientData, res, NULL);
}


//----------------------------- track commands ------------------------------
int envsim_track_balise_cmd(ClientData data, Tcl_Interp *interp, int objc, Tcl_Obj *const *objv) {
  if(objc!=3) {
    Tcl_WrongNumArgs(interp,1,objv,"raw {arg}");
    return TCL_ERROR;
  }
  if(es_tcl_track_balise(Tcl_GetString(objv[1]), Tcl_GetString(objv[2]),envsim_append_result,(es_ClientData)interp)) {
    Tcl_AddErrorInfo(interp,es_msg_buf);
    return TCL_ERROR;
  };
  return TCL_OK;
}


int envsim_track_radio_cmd(ClientData data, Tcl_Interp *interp, int objc, Tcl_Obj *const *objv) {
  if(objc!=3) {
    Tcl_WrongNumArgs(interp,1,objv,"raw {arg}");
    return TCL_ERROR;
  }
  if(es_tcl_track_radio(Tcl_GetString(objv[1]), Tcl_GetString(objv[2]),envsim_append_result,(es_ClientData)interp)) {
    Tcl_AddErrorInfo(interp,es_msg_buf);
    return TCL_ERROR;
  };
  return TCL_OK;
}


int envsim_track_add_cmd(ClientData data, Tcl_Interp *interp, int objc, Tcl_Obj *const *objv) {
  if(objc!=3) {
    Tcl_WrongNumArgs(interp,1,objv,"balise|radio position");
    return TCL_ERROR;
  }
  double pos = 0.0;
  Tcl_GetDoubleFromObj(interp,objv[2],&pos);
  if(es_tcl_track_add(Tcl_GetString(objv[1]), pos)) {
    Tcl_AddErrorInfo(interp,es_msg_buf);
    return TCL_ERROR;
  }
  return TCL_OK;
}

int envsim_track_info_cmd(ClientData data, Tcl_Interp *interp, int objc, Tcl_Obj *const *objv) {
  if(objc!=1) {
    Tcl_WrongNumArgs(interp,1,objv,"");
    return TCL_ERROR;
  }
  if(es_tcl_track_info(envsim_append_result,(es_ClientData)interp)) {
    Tcl_AddErrorInfo(interp,es_msg_buf);
    return TCL_ERROR;
  }
  return TCL_OK;
}

//-------------------------- extension interface ----------------------------
int Envsim_Init(Tcl_Interp *interp) {
  Tcl_CreateObjCommand(interp, "track::balise", envsim_track_balise_cmd, NULL, NULL);
  Tcl_CreateObjCommand(interp, "track::radio", envsim_track_radio_cmd, NULL, NULL);
  Tcl_CreateObjCommand(interp, "track::add", envsim_track_add_cmd, NULL, NULL);
  Tcl_CreateObjCommand(interp, "track::info", envsim_track_info_cmd, NULL, NULL);
  return TCL_OK;
}

int Envsim_Unload(Tcl_Interp *interp) {
  return TCL_OK;
}

int Envsim_SafeInit() {
  return TCL_OK;
}

int Envsim_SafeUnload() {
  return TCL_OK;
}


#endif //WITH_TCL_EXTENSION