/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "EvaluateTrigger_ProvidePositionReport_Pkg.h"

void EvaluateTrigger_init_ProvidePositionReport_Pkg(
  outC_EvaluateTrigger_ProvidePositionReport_Pkg *outC)
{
  outC->result = kcg_true;
  op_D_cycloc_init_ProvidePositionReport_Pkg(&outC->Context_1);
  op_N_iter_init_ProvidePositionReport_Pkg(&outC->_1_Context_1);
  op_M_loc_init_ProvidePositionReport_Pkg(&outC->_2_Context_1);
  op_T_cycloc_init_ProvidePositionReport_Pkg(&outC->_3_Context_1);
}


void EvaluateTrigger_reset_ProvidePositionReport_Pkg(
  outC_EvaluateTrigger_ProvidePositionReport_Pkg *outC)
{
  /* 1 */ op_T_cycloc_reset_ProvidePositionReport_Pkg(&outC->_3_Context_1);
  /* 1 */ op_M_loc_reset_ProvidePositionReport_Pkg(&outC->_2_Context_1);
  /* 1 */ op_N_iter_reset_ProvidePositionReport_Pkg(&outC->_1_Context_1);
  /* 1 */ op_D_cycloc_reset_ProvidePositionReport_Pkg(&outC->Context_1);
}

/* ProvidePositionReport_Pkg::EvaluateTrigger */
void EvaluateTrigger_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::EvaluateTrigger::posBGs */ positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* ProvidePositionReport_Pkg::EvaluateTrigger::trainPos */ trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* ProvidePositionReport_Pkg::EvaluateTrigger::posRepPara */ PositionReportParameter_T_Common_Types_Pkg *posRepPara,
  /* ProvidePositionReport_Pkg::EvaluateTrigger::systemTime */ SystemTime_T_ProvidePositionReport_Pkg systemTime,
  /* ProvidePositionReport_Pkg::EvaluateTrigger::minSafeRearEnd */ kcg_int minSafeRearEnd,
  outC_EvaluateTrigger_ProvidePositionReport_Pkg *outC)
{
  /* ProvidePositionReport_Pkg::EvaluateTrigger::_L12 */ positionedBG_T_TrainPosition_Types_Pck _L12;
  /* ProvidePositionReport_Pkg::EvaluateTrigger::_L11 */ kcg_bool _L11;
  
  /* 1 */
  op_GetLRBGfromBGs_ProvidePositionReport_Pkg(posBGs, trainPos, &_L11, &_L12);
  /* 1 */
  op_D_cycloc_ProvidePositionReport_Pkg(posRepPara, trainPos, &outC->Context_1);
  /* 1 */
  op_N_iter_ProvidePositionReport_Pkg(
    trainPos,
    posRepPara,
    minSafeRearEnd,
    &outC->_1_Context_1);
  /* 1 */
  op_M_loc_ProvidePositionReport_Pkg(
    posRepPara,
    &_L12,
    trainPos,
    &outC->_2_Context_1);
  /* 1 */
  op_T_cycloc_ProvidePositionReport_Pkg(
    posRepPara,
    systemTime,
    &outC->_3_Context_1);
  outC->result = outC->Context_1.b | outC->_1_Context_1.b |
    outC->_2_Context_1.b | outC->_3_Context_1.b;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** EvaluateTrigger_ProvidePositionReport_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

