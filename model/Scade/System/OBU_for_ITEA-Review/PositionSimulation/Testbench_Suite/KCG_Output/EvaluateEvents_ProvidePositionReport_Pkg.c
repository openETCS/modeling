/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "EvaluateEvents_ProvidePositionReport_Pkg.h"

void EvaluateEvents_init_ProvidePositionReport_Pkg(
  outC_EvaluateEvents_ProvidePositionReport_Pkg *outC)
{
  outC->result = kcg_true;
  op_3_6_5_1_4_a_i_init_ProvidePositionReport_Pkg(&outC->Context_1);
  op_3_6_5_1_4_b_init_ProvidePositionReport_Pkg(&outC->_1_Context_1);
  op_3_6_5_1_4_g_init_ProvidePositionReport_Pkg(&outC->_2_Context_1);
}


void EvaluateEvents_reset_ProvidePositionReport_Pkg(
  outC_EvaluateEvents_ProvidePositionReport_Pkg *outC)
{
  /* 1 */ op_3_6_5_1_4_g_reset_ProvidePositionReport_Pkg(&outC->_2_Context_1);
  /* 1 */ op_3_6_5_1_4_b_reset_ProvidePositionReport_Pkg(&outC->_1_Context_1);
  /* 1 */ op_3_6_5_1_4_a_i_reset_ProvidePositionReport_Pkg(&outC->Context_1);
}

/* ProvidePositionReport_Pkg::EvaluateEvents */
void EvaluateEvents_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::EvaluateEvents::trackInfo */ LocationBasedEvents_T_ProvidePositionReport_Pkg *trackInfo,
  /* ProvidePositionReport_Pkg::EvaluateEvents::trainPos */ trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* ProvidePositionReport_Pkg::EvaluateEvents::posBGs */ positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* ProvidePositionReport_Pkg::EvaluateEvents::rbcComm */ RBC_Communication_T_ProvidePositionReport_Pkg *rbcComm,
  /* ProvidePositionReport_Pkg::EvaluateEvents::train2trackStatus */ TrainToTrackStatus_T_BG_Types_Pkg *train2trackStatus,
  /* ProvidePositionReport_Pkg::EvaluateEvents::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* ProvidePositionReport_Pkg::EvaluateEvents::modeLevelStatus */ ModeAndLevelStatus_T_BG_Types_Pkg *modeLevelStatus,
  outC_EvaluateEvents_ProvidePositionReport_Pkg *outC)
{
  /* ProvidePositionReport_Pkg::EvaluateEvents::_L17 */ positionedBG_T_TrainPosition_Types_Pck _L17;
  /* ProvidePositionReport_Pkg::EvaluateEvents::_L16 */ kcg_bool _L16;
  
  /* 1 */
  op_GetLRBGfromBGs_ProvidePositionReport_Pkg(posBGs, trainPos, &_L16, &_L17);
  /* 1 */
  op_3_6_5_1_4_a_i_ProvidePositionReport_Pkg(odometry, &outC->Context_1);
  /* 1 */
  op_3_6_5_1_4_b_ProvidePositionReport_Pkg(
    modeLevelStatus,
    &outC->_1_Context_1);
  /* 1 */
  op_3_6_5_1_4_g_ProvidePositionReport_Pkg(
    modeLevelStatus,
    &outC->_2_Context_1);
  outC->result = outC->Context_1.b | outC->_1_Context_1.b | /* 1 */
    op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg(train2trackStatus) | /* 1 */
    op_3_6_5_1_4_e_f_h_k_ProvidePositionReport_Pkg(trackInfo, rbcComm) |
    outC->_2_Context_1.b | /* 1 */
    op_3_6_5_1_4_j_ProvidePositionReport_Pkg(&_L17, trainPos);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** EvaluateEvents_ProvidePositionReport_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

