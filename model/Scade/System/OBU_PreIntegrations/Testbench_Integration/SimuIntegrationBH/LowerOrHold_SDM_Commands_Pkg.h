/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _LowerOrHold_SDM_Commands_Pkg_H_
#define _LowerOrHold_SDM_Commands_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  V_odometry_Type_Obu_BasicTypes_Pkg /* SDM_Commands_Pkg::LowerOrHold::vo */ vo;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  Target_T_TargetManagement_types /* SDM_Commands_Pkg::LowerOrHold::mrdt */ rem_mrdt;
  V_odometry_Type_Obu_BasicTypes_Pkg /* SDM_Commands_Pkg::LowerOrHold::vi */ rem_vi;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_LowerOrHold_SDM_Commands_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* SDM_Commands_Pkg::LowerOrHold */
extern void LowerOrHold_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::LowerOrHold::vi */ V_odometry_Type_Obu_BasicTypes_Pkg vi,
  /* SDM_Commands_Pkg::LowerOrHold::mrdt */ Target_T_TargetManagement_types *mrdt,
  outC_LowerOrHold_SDM_Commands_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void LowerOrHold_reset_SDM_Commands_Pkg(
  outC_LowerOrHold_SDM_Commands_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void LowerOrHold_init_SDM_Commands_Pkg(
  outC_LowerOrHold_SDM_Commands_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _LowerOrHold_SDM_Commands_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** LowerOrHold_SDM_Commands_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

