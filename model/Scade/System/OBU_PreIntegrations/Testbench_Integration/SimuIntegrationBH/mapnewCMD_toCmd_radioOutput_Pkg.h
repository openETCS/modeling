/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _mapnewCMD_toCmd_radioOutput_Pkg_H_
#define _mapnewCMD_toCmd_radioOutput_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  cmdRadioUnit_T_API_RadioCommunication_Pkg /* radioOutput_Pkg::mapnewCMD_toCmd::toRTMCMD */ toRTMCMD;
  NID_RADIO /* radioOutput_Pkg::mapnewCMD_toCmd::outRadio */ outRadio;
  NID_MN /* radioOutput_Pkg::mapnewCMD_toCmd::outMN */ outMN;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  NID_MN /* radioOutput_Pkg::mapnewCMD_toCmd::nidMN */ nidMN;
  NID_RADIO /* radioOutput_Pkg::mapnewCMD_toCmd::nidRadio */ nidRadio;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_mapnewCMD_toCmd_radioOutput_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* radioOutput_Pkg::mapnewCMD_toCmd */
extern void mapnewCMD_toCmd_radioOutput_Pkg(
  /* radioOutput_Pkg::mapnewCMD_toCmd::mobileConnectionCMD */ mobileConnectionCmd_T_RCM_Types_Pkg *mobileConnectionCMD,
  /* radioOutput_Pkg::mapnewCMD_toCmd::mobileRegistrationCMD */ mobileRegistrationCmd_T_RCM_Types_Pkg *mobileRegistrationCMD,
  outC_mapnewCMD_toCmd_radioOutput_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void mapnewCMD_toCmd_reset_radioOutput_Pkg(
  outC_mapnewCMD_toCmd_radioOutput_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void mapnewCMD_toCmd_init_radioOutput_Pkg(
  outC_mapnewCMD_toCmd_radioOutput_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _mapnewCMD_toCmd_radioOutput_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** mapnewCMD_toCmd_radioOutput_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

