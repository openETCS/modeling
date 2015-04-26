/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */
#ifndef _op_M_loc_ProvidePositionReport_Pkg_H_
#define _op_M_loc_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"
#include "op_3_6_5_1_4_j_ProvidePositionReport_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* ProvidePositionReport_Pkg::op_M_loc::b */ b;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  PresentxMLOC_T_ProvidePositionReport_Pkg /* ProvidePositionReport_Pkg::op_M_loc::_L24 */ _L24;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_op_M_loc_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::op_M_loc */
extern void op_M_loc_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_M_loc::pRepPara */ PositionReportParameter_T_Common_Types_Pkg *pRepPara,
  /* ProvidePositionReport_Pkg::op_M_loc::posBGs */ positionedBG_T_TrainPosition_Types_Pck *posBGs,
  /* ProvidePositionReport_Pkg::op_M_loc::trainPos */ trainPosition_T_TrainPosition_Types_Pck *trainPos,
  outC_op_M_loc_ProvidePositionReport_Pkg *outC);

extern void op_M_loc_reset_ProvidePositionReport_Pkg(
  outC_op_M_loc_ProvidePositionReport_Pkg *outC);
extern void op_M_loc_init_ProvidePositionReport_Pkg(
  outC_op_M_loc_ProvidePositionReport_Pkg *outC);

#endif /* _op_M_loc_ProvidePositionReport_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** op_M_loc_ProvidePositionReport_Pkg.h
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */

