/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _mapCMDToRTM_radioOutput_Pkg_H_
#define _mapCMDToRTM_radioOutput_Pkg_H_

#include "kcg_types.h"
#include "mapnewCMD_toCmd_radioOutput_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  RadioManagement_T_API_RadioCommunication_Pkg /* radioOutput_Pkg::mapCMDToRTM::toRTM */ toRTM;
  NID_RADIO /* radioOutput_Pkg::mapCMDToRTM::outRadio */ outRadio;
  NID_MN /* radioOutput_Pkg::mapCMDToRTM::outMN */ outMN;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_mapnewCMD_toCmd_radioOutput_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_mapCMDToRTM_radioOutput_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* radioOutput_Pkg::mapCMDToRTM */
extern void mapCMDToRTM_radioOutput_Pkg(
  /* radioOutput_Pkg::mapCMDToRTM::mobileConnectionCMD */ mobileConnectionCmd_T_RCM_Types_Pkg *mobileConnectionCMD,
  /* radioOutput_Pkg::mapCMDToRTM::mobileRegistrationCMD */ mobileRegistrationCmd_T_RCM_Types_Pkg *mobileRegistrationCMD,
  outC_mapCMDToRTM_radioOutput_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void mapCMDToRTM_reset_radioOutput_Pkg(
  outC_mapCMDToRTM_radioOutput_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void mapCMDToRTM_init_radioOutput_Pkg(
  outC_mapCMDToRTM_radioOutput_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _mapCMDToRTM_radioOutput_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** mapCMDToRTM_radioOutput_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

