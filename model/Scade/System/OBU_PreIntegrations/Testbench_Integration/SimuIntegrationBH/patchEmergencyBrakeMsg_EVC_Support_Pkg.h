/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _patchEmergencyBrakeMsg_EVC_Support_Pkg_H_
#define _patchEmergencyBrakeMsg_EVC_Support_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  DataForModeAndLevel_t_TrackAtlasTypes /* EVC_Support_Pkg::patchEmergencyBrakeMsg::outToML */ outToML;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  DataForModeAndLevel_t_TrackAtlasTypes /* EVC_Support_Pkg::patchEmergencyBrakeMsg::_L1 */ _L1;
  T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg /* EVC_Support_Pkg::patchEmergencyBrakeMsg::_L2 */ _L2;
  T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg /* EVC_Support_Pkg::patchEmergencyBrakeMsg::_L3 */ _L3;
  kcg_bool /* EVC_Support_Pkg::patchEmergencyBrakeMsg::_L4 */ _L4;
  kcg_bool /* EVC_Support_Pkg::patchEmergencyBrakeMsg::_L6 */ _L6;
  T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg /* EVC_Support_Pkg::patchEmergencyBrakeMsg::_L5 */ _L5;
  DataForModeAndLevel_t_TrackAtlasTypes /* EVC_Support_Pkg::patchEmergencyBrakeMsg::_L8 */ _L8;
} outC_patchEmergencyBrakeMsg_EVC_Support_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* EVC_Support_Pkg::patchEmergencyBrakeMsg */
extern void patchEmergencyBrakeMsg_EVC_Support_Pkg(
  /* EVC_Support_Pkg::patchEmergencyBrakeMsg::inFromTA */ DataForModeAndLevel_t_TrackAtlasTypes *inFromTA,
  outC_patchEmergencyBrakeMsg_EVC_Support_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void patchEmergencyBrakeMsg_reset_EVC_Support_Pkg(
  outC_patchEmergencyBrakeMsg_EVC_Support_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void patchEmergencyBrakeMsg_init_EVC_Support_Pkg(
  outC_patchEmergencyBrakeMsg_EVC_Support_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _patchEmergencyBrakeMsg_EVC_Support_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** patchEmergencyBrakeMsg_EVC_Support_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

