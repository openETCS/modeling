/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg_H_
#define _countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp::counter */ counter;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_int /* CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp::_L11 */ _L11;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp */
extern void countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg(
  /* CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp::count */ kcg_bool count,
  /* CalculateTrainPosition_Pkg::gp_functions_Pkg::countUp::reset */ kcg_bool reset,
  outC_countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void countUp_reset_CalculateTrainPosition_Pkg_gp_functions_Pkg(
  outC_countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void countUp_init_CalculateTrainPosition_Pkg_gp_functions_Pkg(
  outC_countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** countUp_CalculateTrainPosition_Pkg_gp_functions_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

