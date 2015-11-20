/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _manageTIU_input_input_from_TIU_API_Pkg_H_
#define _manageTIU_input_input_from_TIU_API_Pkg_H_

#include "kcg_types.h"
#include "getTIUStatusFromData_input_from_TIU_API_Pkg.h"
#include "mergeTIU_Info_input_from_TIU_API_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TIU_trainStatus_T_TIU_Types_Pkg /* input_from_TIU_API_Pkg::manageTIU_input::outTIUStatus */ outTIUStatus;
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg /* input_from_TIU_API_Pkg::manageTIU_input::outTIUCurrentInfo */ outTIUCurrentInfo;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg /* input_from_TIU_API_Pkg::manageTIU_input::storeTIU */ storeTIU;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_manageTIU_input_input_from_TIU_API_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* input_from_TIU_API_Pkg::manageTIU_input */
extern void manageTIU_input_input_from_TIU_API_Pkg(
  /* input_from_TIU_API_Pkg::manageTIU_input::inTIUfromAPI */ TIU_Input_msg_API_TIU_Pkg *inTIUfromAPI,
  /* input_from_TIU_API_Pkg::manageTIU_input::evc_trainData */ trainData_T_TIU_Types_Pkg *evc_trainData,
  outC_manageTIU_input_input_from_TIU_API_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void manageTIU_input_reset_input_from_TIU_API_Pkg(
  outC_manageTIU_input_input_from_TIU_API_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void manageTIU_input_init_input_from_TIU_API_Pkg(
  outC_manageTIU_input_input_from_TIU_API_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _manageTIU_input_input_from_TIU_API_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** manageTIU_input_input_from_TIU_API_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

