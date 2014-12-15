/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__EvaluateTrigger_ProvidePositionReport_Pkg.h"

void MLRI__EvaluateTrigger_reset_ProvidePositionReport_Pkg(
  MLRI__outC_EvaluateTrigger_ProvidePositionReport_Pkg *outC)
{
  /* 1 */ MLRI__op_T_cycloc_reset_ProvidePositionReport_Pkg(&outC->Context_1);
  /* 1 */ MLRI__op_M_loc_reset_ProvidePositionReport_Pkg(&outC->_1_Context_1);
  /* 1 */ MLRI__op_N_iter_reset_ProvidePositionReport_Pkg(&outC->_2_Context_1);
  /* 1 */
  MLRI__op_D_cycloc_reset_ProvidePositionReport_Pkg(&outC->_3_Context_1);
}

/* ProvidePositionReport_Pkg::EvaluateTrigger */
void MLRI__EvaluateTrigger_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::EvaluateTrigger::posBGs */MLRI__positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* ProvidePositionReport_Pkg::EvaluateTrigger::trainPos */MLRI__trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* ProvidePositionReport_Pkg::EvaluateTrigger::posRepPara */MLRI__PositionReportParameter_T_ProvidePositionReport_Pkg *posRepPara,
  /* ProvidePositionReport_Pkg::EvaluateTrigger::systemTime */MLRI__SystemTime_T_ProvidePositionReport_Pkg systemTime,
  /* ProvidePositionReport_Pkg::EvaluateTrigger::minSafeRearEnd */kcg_int minSafeRearEnd,
  MLRI__outC_EvaluateTrigger_ProvidePositionReport_Pkg *outC)
{
  /* ProvidePositionReport_Pkg::EvaluateTrigger::_L12 */ MLRI__positionedBG_T_TrainPosition_Types_Pck _L12;
  /* ProvidePositionReport_Pkg::EvaluateTrigger::_L11 */ kcg_bool _L11;
  
  /* 1 */
  MLRI__op_GetLRBGfromBGs_ProvidePositionReport_Pkg(
    posBGs,
    trainPos,
    &_L11,
    &_L12);
  /* 1 */
  MLRI__op_D_cycloc_ProvidePositionReport_Pkg(
    posRepPara,
    trainPos,
    &outC->_3_Context_1);
  /* 1 */
  MLRI__op_N_iter_ProvidePositionReport_Pkg(
    trainPos,
    posRepPara,
    minSafeRearEnd,
    &outC->_2_Context_1);
  /* 1 */
  MLRI__op_M_loc_ProvidePositionReport_Pkg(
    posRepPara,
    &_L12,
    trainPos,
    &outC->_1_Context_1);
  /* 1 */
  MLRI__op_T_cycloc_ProvidePositionReport_Pkg(
    posRepPara,
    systemTime,
    &outC->Context_1);
  outC->result = outC->_3_Context_1.b | outC->_2_Context_1.b |
    outC->_1_Context_1.b | outC->Context_1.b;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__EvaluateTrigger_ProvidePositionReport_Pkg.c
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

