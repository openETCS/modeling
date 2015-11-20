/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _locReachedOrPassed_BasicLocationFunctions_Pkg_H_
#define _locReachedOrPassed_BasicLocationFunctions_Pkg_H_

#include "kcg_types.h"
#include "sub_2_distances_BasicLocationFunctions_Pkg.h"
#include "overlapOf_2_Locations_BasicLocationFunctions_Pkg.h"
#include "RisingEdge_digital.h"
#include "signChanged_BasicLocationFunctions_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* BasicLocationFunctions_Pkg::locReachedOrPassed::hit */ hit;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RisingEdge_digital /* 1 */ _1_Context_1;
  outC_signChanged_BasicLocationFunctions_Pkg /* 2 */ Context_2;
  outC_signChanged_BasicLocationFunctions_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_locReachedOrPassed_BasicLocationFunctions_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* BasicLocationFunctions_Pkg::locReachedOrPassed */
extern void locReachedOrPassed_BasicLocationFunctions_Pkg(
  /* BasicLocationFunctions_Pkg::locReachedOrPassed::loc_2 */ LocWithInAcc_T_Obu_BasicTypes_Pkg *loc_2,
  /* BasicLocationFunctions_Pkg::locReachedOrPassed::loc_1 */ LocWithInAcc_T_Obu_BasicTypes_Pkg *loc_1,
  outC_locReachedOrPassed_BasicLocationFunctions_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void locReachedOrPassed_reset_BasicLocationFunctions_Pkg(
  outC_locReachedOrPassed_BasicLocationFunctions_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void locReachedOrPassed_init_BasicLocationFunctions_Pkg(
  outC_locReachedOrPassed_BasicLocationFunctions_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _locReachedOrPassed_BasicLocationFunctions_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** locReachedOrPassed_BasicLocationFunctions_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

