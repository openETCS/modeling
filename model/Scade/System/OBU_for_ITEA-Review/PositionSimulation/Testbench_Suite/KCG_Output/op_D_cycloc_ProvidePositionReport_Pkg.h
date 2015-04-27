/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */
#ifndef _op_D_cycloc_ProvidePositionReport_Pkg_H_
#define _op_D_cycloc_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* ProvidePositionReport_Pkg::op_D_cycloc::b */ b;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  _25_SSM_ST_SM1 /* ProvidePositionReport_Pkg::op_D_cycloc::SM1 */ SM1_state_nxt;
  D_CYCLOC /* ProvidePositionReport_Pkg::op_D_cycloc::_L21 */ _L21;
  kcg_int /* ProvidePositionReport_Pkg::op_D_cycloc::currTriggerDistance */ rem_currTriggerDistance;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_op_D_cycloc_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::op_D_cycloc */
extern void op_D_cycloc_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_D_cycloc::pRepPara */ PositionReportParameter_T_Common_Types_Pkg *pRepPara,
  /* ProvidePositionReport_Pkg::op_D_cycloc::trainPos */ trainPosition_T_TrainPosition_Types_Pck *trainPos,
  outC_op_D_cycloc_ProvidePositionReport_Pkg *outC);

extern void op_D_cycloc_reset_ProvidePositionReport_Pkg(
  outC_op_D_cycloc_ProvidePositionReport_Pkg *outC);
extern void op_D_cycloc_init_ProvidePositionReport_Pkg(
  outC_op_D_cycloc_ProvidePositionReport_Pkg *outC);

#endif /* _op_D_cycloc_ProvidePositionReport_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** op_D_cycloc_ProvidePositionReport_Pkg.h
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */

