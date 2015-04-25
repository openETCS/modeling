/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */
#ifndef _op_3_6_5_1_4_b_ProvidePositionReport_Pkg_H_
#define _op_3_6_5_1_4_b_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* ProvidePositionReport_Pkg::op_3_6_5_1_4_b::b */ b;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  ModeAndLevelStatus_T_BG_Types_Pkg /* ProvidePositionReport_Pkg::op_3_6_5_1_4_b::modeLevelStatus */ rem_modeLevelStatus;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_op_3_6_5_1_4_b_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::op_3_6_5_1_4_b */
extern void op_3_6_5_1_4_b_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_3_6_5_1_4_b::modeLevelStatus */ ModeAndLevelStatus_T_BG_Types_Pkg *modeLevelStatus,
  outC_op_3_6_5_1_4_b_ProvidePositionReport_Pkg *outC);

extern void op_3_6_5_1_4_b_reset_ProvidePositionReport_Pkg(
  outC_op_3_6_5_1_4_b_ProvidePositionReport_Pkg *outC);
extern void op_3_6_5_1_4_b_init_ProvidePositionReport_Pkg(
  outC_op_3_6_5_1_4_b_ProvidePositionReport_Pkg *outC);

#endif /* _op_3_6_5_1_4_b_ProvidePositionReport_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** op_3_6_5_1_4_b_ProvidePositionReport_Pkg.h
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */

