/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */
#ifndef _EvaluateTrigger_ProvidePositionReport_Pkg_H_
#define _EvaluateTrigger_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"
#include "op_GetLRBGfromBGs_ProvidePositionReport_Pkg.h"
#include "op_D_cycloc_ProvidePositionReport_Pkg.h"
#include "op_M_loc_ProvidePositionReport_Pkg.h"
#include "op_N_iter_ProvidePositionReport_Pkg.h"
#include "op_T_cycloc_ProvidePositionReport_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* ProvidePositionReport_Pkg::EvaluateTrigger::result */ result;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_op_T_cycloc_ProvidePositionReport_Pkg /* 1 */ _3_Context_1;
  outC_op_M_loc_ProvidePositionReport_Pkg /* 1 */ _2_Context_1;
  outC_op_N_iter_ProvidePositionReport_Pkg /* 1 */ _1_Context_1;
  outC_op_D_cycloc_ProvidePositionReport_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_EvaluateTrigger_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::EvaluateTrigger */
extern void EvaluateTrigger_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::EvaluateTrigger::posBGs */ positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* ProvidePositionReport_Pkg::EvaluateTrigger::trainPos */ trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* ProvidePositionReport_Pkg::EvaluateTrigger::posRepPara */ PositionReportParameter_T_Common_Types_Pkg *posRepPara,
  /* ProvidePositionReport_Pkg::EvaluateTrigger::systemTime */ SystemTime_T_ProvidePositionReport_Pkg systemTime,
  /* ProvidePositionReport_Pkg::EvaluateTrigger::minSafeRearEnd */ kcg_int minSafeRearEnd,
  outC_EvaluateTrigger_ProvidePositionReport_Pkg *outC);

extern void EvaluateTrigger_reset_ProvidePositionReport_Pkg(
  outC_EvaluateTrigger_ProvidePositionReport_Pkg *outC);
extern void EvaluateTrigger_init_ProvidePositionReport_Pkg(
  outC_EvaluateTrigger_ProvidePositionReport_Pkg *outC);

#endif /* _EvaluateTrigger_ProvidePositionReport_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** EvaluateTrigger_ProvidePositionReport_Pkg.h
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */

