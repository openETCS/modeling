/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Supervise_Events_ProvidePositionReport_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void Supervise_Events_init_ProvidePositionReport_Pkg(
  outC_Supervise_Events_ProvidePositionReport_Pkg *outC)
{
  outC->result = kcg_true;
  /* 1 */ op_3_6_5_1_4_j_init_ProvidePositionReport_Pkg(&outC->_5_Context_1);
  /* 1 */ op_3_6_5_1_4_c_d_init_ProvidePositionReport_Pkg(&outC->_4_Context_1);
  /* 1 */
  op_3_6_5_1_4_e_h_k_init_ProvidePositionReport_Pkg(&outC->_3_Context_1);
  /* 1 */ op_3_6_5_1_4_b_init_ProvidePositionReport_Pkg(&outC->_2_Context_1);
  /* 1 */ op_3_6_5_1_4_a_i_init_ProvidePositionReport_Pkg(&outC->_1_Context_1);
  /* 1 */ op_3_6_5_1_4_f_g_init_ProvidePositionReport_Pkg(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Supervise_Events_reset_ProvidePositionReport_Pkg(
  outC_Supervise_Events_ProvidePositionReport_Pkg *outC)
{
  /* 1 */ op_3_6_5_1_4_j_reset_ProvidePositionReport_Pkg(&outC->_5_Context_1);
  /* 1 */ op_3_6_5_1_4_c_d_reset_ProvidePositionReport_Pkg(&outC->_4_Context_1);
  /* 1 */
  op_3_6_5_1_4_e_h_k_reset_ProvidePositionReport_Pkg(&outC->_3_Context_1);
  /* 1 */ op_3_6_5_1_4_b_reset_ProvidePositionReport_Pkg(&outC->_2_Context_1);
  /* 1 */ op_3_6_5_1_4_a_i_reset_ProvidePositionReport_Pkg(&outC->_1_Context_1);
  /* 1 */ op_3_6_5_1_4_f_g_reset_ProvidePositionReport_Pkg(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* ProvidePositionReport_Pkg::Supervise_Events */
void Supervise_Events_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::Supervise_Events::posBGs */ positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* ProvidePositionReport_Pkg::Supervise_Events::trainPos */ trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* ProvidePositionReport_Pkg::Supervise_Events::modeLevelStatus */ ModeLevel2PositionReport_T_ProvidePositionReport_Pkg *modeLevelStatus,
  /* ProvidePositionReport_Pkg::Supervise_Events::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* ProvidePositionReport_Pkg::Supervise_Events::train2trackStatus */ TrainToTrackStatus_T_BG_Types_Pkg *train2trackStatus,
  /* ProvidePositionReport_Pkg::Supervise_Events::rbcComm */ RBC_Communication_T_ProvidePositionReport_Pkg *rbcComm,
  /* ProvidePositionReport_Pkg::Supervise_Events::trackInfo */ LocationBasedEvents_T_ProvidePositionReport_Pkg *trackInfo,
  outC_Supervise_Events_ProvidePositionReport_Pkg *outC)
{
  static kcg_bool noname;
  /* ProvidePositionReport_Pkg::Supervise_Events::_L15 */
  static kcg_bool _L15;
  /* ProvidePositionReport_Pkg::Supervise_Events::_L16 */
  static positionedBG_T_TrainPosition_Types_Pck _L16;
  /* ProvidePositionReport_Pkg::Supervise_Events::_L14 */
  static LocationBasedEvents_T_ProvidePositionReport_Pkg _L14;
  /* ProvidePositionReport_Pkg::Supervise_Events::_L13 */
  static kcg_bool _L13;
  /* ProvidePositionReport_Pkg::Supervise_Events::_L12 */
  static kcg_bool _L12;
  /* ProvidePositionReport_Pkg::Supervise_Events::_L11 */
  static positionedBGs_T_TrainPosition_Types_Pck _L11;
  /* ProvidePositionReport_Pkg::Supervise_Events::_L10 */
  static odometry_T_Obu_BasicTypes_Pkg _L10;
  /* ProvidePositionReport_Pkg::Supervise_Events::_L9 */
  static kcg_bool _L9;
  /* ProvidePositionReport_Pkg::Supervise_Events::_L8 */
  static kcg_bool _L8;
  /* ProvidePositionReport_Pkg::Supervise_Events::_L7 */
  static TrainToTrackStatus_T_BG_Types_Pkg _L7;
  /* ProvidePositionReport_Pkg::Supervise_Events::_L6 */
  static kcg_bool _L6;
  /* ProvidePositionReport_Pkg::Supervise_Events::_L5 */
  static trainPosition_T_TrainPosition_Types_Pck _L5;
  /* ProvidePositionReport_Pkg::Supervise_Events::_L4 */
  static kcg_bool _L4;
  /* ProvidePositionReport_Pkg::Supervise_Events::_L3 */
  static RBC_Communication_T_ProvidePositionReport_Pkg _L3;
  /* ProvidePositionReport_Pkg::Supervise_Events::_L2 */
  static ModeLevel2PositionReport_T_ProvidePositionReport_Pkg _L2;
  /* ProvidePositionReport_Pkg::Supervise_Events::_L1 */
  static kcg_bool _L1;
  
  kcg_copy_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg(
    &_L2,
    modeLevelStatus);
  /* 1 */ op_3_6_5_1_4_f_g_ProvidePositionReport_Pkg(&_L2, &outC->Context_1);
  _L1 = outC->Context_1.trigger;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&_L10, odometry);
  /* 1 */
  op_3_6_5_1_4_a_i_ProvidePositionReport_Pkg(&_L10, &outC->_1_Context_1);
  _L13 = outC->_1_Context_1.trigger;
  /* 1 */ op_3_6_5_1_4_b_ProvidePositionReport_Pkg(&_L2, &outC->_2_Context_1);
  _L4 = outC->_2_Context_1.trigger;
  kcg_copy_LocationBasedEvents_T_ProvidePositionReport_Pkg(&_L14, trackInfo);
  kcg_copy_RBC_Communication_T_ProvidePositionReport_Pkg(&_L3, rbcComm);
  /* 1 */
  op_3_6_5_1_4_e_h_k_ProvidePositionReport_Pkg(
    &_L14,
    &_L3,
    &outC->_3_Context_1);
  _L6 = outC->_3_Context_1.trigger;
  kcg_copy_TrainToTrackStatus_T_BG_Types_Pkg(&_L7, train2trackStatus);
  /* 1 */ op_3_6_5_1_4_c_d_ProvidePositionReport_Pkg(&_L7, &outC->_4_Context_1);
  _L9 = outC->_4_Context_1.trigger;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L11, posBGs);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L5, trainPos);
  /* 1 */
  op_GetLRBGfromBGs_ProvidePositionReport_Pkg(&_L11, &_L5, &_L15, &_L16);
  /* 1 */
  op_3_6_5_1_4_j_ProvidePositionReport_Pkg(&_L16, &_L5, &outC->_5_Context_1);
  _L12 = outC->_5_Context_1.trigger;
  _L8 = _L13 | _L4 | _L1 | _L6 | _L9 | _L12;
  outC->result = _L8;
  noname = _L15;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Supervise_Events_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

