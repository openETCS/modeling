/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */
#ifndef _MLRI__EvaluateTrigger_ProvidePositionReport_Pkg_H_
#define _MLRI__EvaluateTrigger_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"
#include "MLRI__op_GetLRBGfromBGs_ProvidePositionReport_Pkg.h"
#include "MLRI__op_D_cycloc_ProvidePositionReport_Pkg.h"
#include "MLRI__op_M_loc_ProvidePositionReport_Pkg.h"
#include "MLRI__op_T_cycloc_ProvidePositionReport_Pkg.h"
#include "MLRI__op_N_iter_ProvidePositionReport_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* ProvidePositionReport_Pkg::EvaluateTrigger::result */ result;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  MLRI__outC_op_D_cycloc_ProvidePositionReport_Pkg /* 1 */ _3_Context_1;
  MLRI__outC_op_N_iter_ProvidePositionReport_Pkg /* 1 */ _2_Context_1;
  MLRI__outC_op_M_loc_ProvidePositionReport_Pkg /* 1 */ _1_Context_1;
  MLRI__outC_op_T_cycloc_ProvidePositionReport_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} MLRI__outC_EvaluateTrigger_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::EvaluateTrigger */
extern void MLRI__EvaluateTrigger_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::EvaluateTrigger::posBGs */MLRI__positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* ProvidePositionReport_Pkg::EvaluateTrigger::trainPos */MLRI__trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* ProvidePositionReport_Pkg::EvaluateTrigger::posRepPara */MLRI__PositionReportParameter_T_ProvidePositionReport_Pkg *posRepPara,
  /* ProvidePositionReport_Pkg::EvaluateTrigger::systemTime */MLRI__SystemTime_T_ProvidePositionReport_Pkg systemTime,
  /* ProvidePositionReport_Pkg::EvaluateTrigger::minSafeRearEnd */kcg_int minSafeRearEnd,
  MLRI__outC_EvaluateTrigger_ProvidePositionReport_Pkg *outC);

extern void MLRI__EvaluateTrigger_reset_ProvidePositionReport_Pkg(
  MLRI__outC_EvaluateTrigger_ProvidePositionReport_Pkg *outC);

#endif /* _MLRI__EvaluateTrigger_ProvidePositionReport_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__EvaluateTrigger_ProvidePositionReport_Pkg.h
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

