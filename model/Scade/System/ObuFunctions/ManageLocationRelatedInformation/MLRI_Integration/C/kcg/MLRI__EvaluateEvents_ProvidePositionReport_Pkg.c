/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__EvaluateEvents_ProvidePositionReport_Pkg.h"

void MLRI__EvaluateEvents_reset_ProvidePositionReport_Pkg(
  MLRI__outC_EvaluateEvents_ProvidePositionReport_Pkg *outC)
{
  /* 1 */
  MLRI__op_3_6_5_1_4_g_reset_ProvidePositionReport_Pkg(&outC->Context_1);
  /* 1 */
  MLRI__op_3_6_5_1_4_b_reset_ProvidePositionReport_Pkg(&outC->_1_Context_1);
  /* 1 */
  MLRI__op_3_6_5_1_4_a_i_reset_ProvidePositionReport_Pkg(&outC->_2_Context_1);
}

/* ProvidePositionReport_Pkg::EvaluateEvents */
void MLRI__EvaluateEvents_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::EvaluateEvents::trackInfo */MLRI__LocationBasedEvents_T_ProvidePositionReport_Pkg *trackInfo,
  /* ProvidePositionReport_Pkg::EvaluateEvents::trainPos */MLRI__trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* ProvidePositionReport_Pkg::EvaluateEvents::posBGs */MLRI__positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* ProvidePositionReport_Pkg::EvaluateEvents::rbcComm */MLRI__RBC_Communication_T_ProvidePositionReport_Pkg *rbcComm,
  /* ProvidePositionReport_Pkg::EvaluateEvents::train2trackStatus */MLRI__TrainToTrackStatus_T_BG_Types_Pkg *train2trackStatus,
  /* ProvidePositionReport_Pkg::EvaluateEvents::trainPosInfo */MLRI__trainPositionInfo_T_TrainPosition_Types_Pck *trainPosInfo,
  MLRI__outC_EvaluateEvents_ProvidePositionReport_Pkg *outC)
{
  kcg_bool tmp2;
  kcg_bool tmp1;
  kcg_bool tmp;
  /* ProvidePositionReport_Pkg::EvaluateEvents::_L17 */ MLRI__positionedBG_T_TrainPosition_Types_Pck _L17;
  
  /* 1 */
  MLRI__op_GetLRBGfromBGs_ProvidePositionReport_Pkg(
    posBGs,
    trainPos,
    &tmp2,
    &_L17);
  /* 1 */
  MLRI__op_3_6_5_1_4_a_i_ProvidePositionReport_Pkg(
    trainPosInfo,
    &outC->_2_Context_1);
  /* 1 */
  MLRI__op_3_6_5_1_4_b_ProvidePositionReport_Pkg(
    train2trackStatus,
    &outC->_1_Context_1);
  tmp2 = /* 1 */
    MLRI__op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg(train2trackStatus);
  tmp1 = /* 1 */
    MLRI__op_3_6_5_1_4_e_f_h_k_ProvidePositionReport_Pkg(trackInfo, rbcComm);
  /* 1 */
  MLRI__op_3_6_5_1_4_g_ProvidePositionReport_Pkg(
    train2trackStatus,
    &outC->Context_1);
  tmp = /* 1 */ MLRI__op_3_6_5_1_4_j_ProvidePositionReport_Pkg(&_L17, trainPos);
  outC->result = outC->_2_Context_1.b | outC->_1_Context_1.b | tmp2 | tmp1 |
    outC->Context_1.b | tmp;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__EvaluateEvents_ProvidePositionReport_Pkg.c
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

