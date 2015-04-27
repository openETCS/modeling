/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */
#ifndef _op_T_cycloc_ProvidePositionReport_Pkg_H_
#define _op_T_cycloc_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* ProvidePositionReport_Pkg::op_T_cycloc::b */ b;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  T_CYCLOC /* ProvidePositionReport_Pkg::op_T_cycloc::_L21 */ _L21;
  kcg_int /* ProvidePositionReport_Pkg::op_T_cycloc::Local1 */ rem_Local1;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_op_T_cycloc_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::op_T_cycloc */
extern void op_T_cycloc_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_T_cycloc::pRepPara */ PositionReportParameter_T_Common_Types_Pkg *pRepPara,
  /* ProvidePositionReport_Pkg::op_T_cycloc::systemTime */ SystemTime_T_ProvidePositionReport_Pkg systemTime,
  outC_op_T_cycloc_ProvidePositionReport_Pkg *outC);

extern void op_T_cycloc_reset_ProvidePositionReport_Pkg(
  outC_op_T_cycloc_ProvidePositionReport_Pkg *outC);
extern void op_T_cycloc_init_ProvidePositionReport_Pkg(
  outC_op_T_cycloc_ProvidePositionReport_Pkg *outC);

#endif /* _op_T_cycloc_ProvidePositionReport_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** op_T_cycloc_ProvidePositionReport_Pkg.h
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */

