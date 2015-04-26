/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */
#ifndef _op_N_iter_ProvidePositionReport_Pkg_H_
#define _op_N_iter_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"
#include "op_StoreIterPacket58_ProvidePositionReport_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* ProvidePositionReport_Pkg::op_N_iter::b */ b;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_int /* ProvidePositionReport_Pkg::op_N_iter::currTriggerDistance */ rem_currTriggerDistance;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_op_StoreIterPacket58_ProvidePositionReport_Pkg /* op_StoreIterPacket58 */ Context_op_StoreIterPacket58;
  /* ----------------- no clocks of observable data ------------------ */
} outC_op_N_iter_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::op_N_iter */
extern void op_N_iter_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::op_N_iter::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* ProvidePositionReport_Pkg::op_N_iter::pRepPara */ PositionReportParameter_T_Common_Types_Pkg *pRepPara,
  /* ProvidePositionReport_Pkg::op_N_iter::minSafeRearEnd */ kcg_int minSafeRearEnd,
  outC_op_N_iter_ProvidePositionReport_Pkg *outC);

extern void op_N_iter_reset_ProvidePositionReport_Pkg(
  outC_op_N_iter_ProvidePositionReport_Pkg *outC);
extern void op_N_iter_init_ProvidePositionReport_Pkg(
  outC_op_N_iter_ProvidePositionReport_Pkg *outC);

#endif /* _op_N_iter_ProvidePositionReport_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** op_N_iter_ProvidePositionReport_Pkg.h
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */

