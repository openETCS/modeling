/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_Packet0_ProvidePositionReport_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void Build_Packet0_init_ProvidePositionReport_Pkg(
  outC_Build_Packet0_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
  outC->rem_modeLevelStatus.currMode = M_MODE_Full_Supervision;
  outC->rem_modeLevelStatus.currLevel = M_LEVEL_Level_0;
  outC->rem_modeLevelStatus.levelTransitionBorderPassed = kcg_true;
  outC->packet0.NID_PACKET = 0;
  outC->packet0.L_PACKET = 0;
  outC->packet0.qscale = Q_SCALE_10_cm_scale;
  outC->packet0.NID_LRBG = 0;
  outC->packet0.D_LRBG = 0;
  outC->packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->packet0.dlrbg = Q_DLRBG_Reverse;
  outC->packet0.L_DOUBTOVER = 0;
  outC->packet0.L_DOUBTUNDER = 0;
  outC->packet0.length = Q_LENGTH_No_train_integrity_information_available;
  outC->packet0.L_TRAININT = 0;
  outC->packet0.V_TRAIN = 0;
  outC->packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->packet0.mode = M_MODE_Full_Supervision;
  outC->packet0.level = M_LEVEL_Level_0;
  outC->packet0.NID_NTC = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Build_Packet0_reset_ProvidePositionReport_Pkg(
  outC_Build_Packet0_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* ProvidePositionReport_Pkg::Build_Packet0 */
void Build_Packet0_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::Build_Packet0::posBGs */ positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* ProvidePositionReport_Pkg::Build_Packet0::modeLevelStatus */ ModeLevel2PositionReport_T_ProvidePositionReport_Pkg *modeLevelStatus,
  /* ProvidePositionReport_Pkg::Build_Packet0::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* ProvidePositionReport_Pkg::Build_Packet0::train2trackStatus */ TrainToTrackStatus_T_BG_Types_Pkg *train2trackStatus,
  /* ProvidePositionReport_Pkg::Build_Packet0::trainProps */ trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* ProvidePositionReport_Pkg::Build_Packet0::trainPos */ trainPosition_T_TrainPosition_Types_Pck *trainPos,
  outC_Build_Packet0_ProvidePositionReport_Pkg *outC)
{
  static kcg_int noname;
  /* ProvidePositionReport_Pkg::Build_Packet0::modeLevelStatus */
  static ModeLevel2PositionReport_T_ProvidePositionReport_Pkg last_modeLevelStatus;
  /* ProvidePositionReport_Pkg::Build_Packet0::_L27 */
  static trainPosition_T_TrainPosition_Types_Pck _L27;
  /* ProvidePositionReport_Pkg::Build_Packet0::_L26 */
  static Q_DIRLRBG _L26;
  /* ProvidePositionReport_Pkg::Build_Packet0::_L25 */
  static NID_BG _L25;
  /* ProvidePositionReport_Pkg::Build_Packet0::_L24 */
  static NID_NTC _L24;
  /* ProvidePositionReport_Pkg::Build_Packet0::_L23 */
  static L_DOUBTUNDER _L23;
  /* ProvidePositionReport_Pkg::Build_Packet0::_L22 */
  static kcg_int _L22;
  /* ProvidePositionReport_Pkg::Build_Packet0::_L21 */
  static ModeLevel2PositionReport_T_ProvidePositionReport_Pkg _L21;
  /* ProvidePositionReport_Pkg::Build_Packet0::_L20 */
  static M_MODE _L20;
  /* ProvidePositionReport_Pkg::Build_Packet0::_L19 */
  static Q_SCALE _L19;
  /* ProvidePositionReport_Pkg::Build_Packet0::_L18 */
  static positionedBGs_T_TrainPosition_Types_Pck _L18;
  /* ProvidePositionReport_Pkg::Build_Packet0::_L16 */
  static positionedBG_T_TrainPosition_Types_Pck _L16;
  /* ProvidePositionReport_Pkg::Build_Packet0::_L14 */
  static L_TRAININT _L14;
  /* ProvidePositionReport_Pkg::Build_Packet0::_L15 */
  static kcg_int _L15;
  /* ProvidePositionReport_Pkg::Build_Packet0::_L13 */
  static Q_LENGTH _L13;
  /* ProvidePositionReport_Pkg::Build_Packet0::_L12 */
  static Q_DLRBG _L12;
  /* ProvidePositionReport_Pkg::Build_Packet0::_L11 */
  static Position_Report_TrainToTrack _L11;
  /* ProvidePositionReport_Pkg::Build_Packet0::_L10 */
  static odometry_T_Obu_BasicTypes_Pkg _L10;
  /* ProvidePositionReport_Pkg::Build_Packet0::_L9 */
  static M_LEVEL _L9;
  /* ProvidePositionReport_Pkg::Build_Packet0::_L8 */
  static TrainToTrackStatus_T_BG_Types_Pkg _L8;
  /* ProvidePositionReport_Pkg::Build_Packet0::_L7 */
  static trainProperties_T_TrainPosition_Types_Pck _L7;
  /* ProvidePositionReport_Pkg::Build_Packet0::_L6 */
  static L_DOUBTOVER _L6;
  /* ProvidePositionReport_Pkg::Build_Packet0::_L4 */
  static OdometrySpeeds_T_Obu_BasicTypes_Pkg _L4;
  /* ProvidePositionReport_Pkg::Build_Packet0::_L3 */
  static kcg_int _L3;
  /* ProvidePositionReport_Pkg::Build_Packet0::_L2 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L2;
  /* ProvidePositionReport_Pkg::Build_Packet0::_L1 */
  static Q_DIRTRAIN _L1;
  /* ProvidePositionReport_Pkg::Build_Packet0::_L35 */
  static kcg_int _L35;
  /* ProvidePositionReport_Pkg::Build_Packet0::_L36 */
  static kcg_int _L36;
  /* ProvidePositionReport_Pkg::Build_Packet0::_L37 */
  static kcg_int _L37;
  /* ProvidePositionReport_Pkg::Build_Packet0::_L38 */
  static kcg_int _L38;
  
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L27, trainPos);
  _L1 = _L27.trainRunningDirectionToLRBG;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&_L10, odometry);
  kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg(&_L4, &_L10.speed);
  _L2 = _L4.v_upper;
  _L3 = 0;
  _L6 = /* 1 */ op_DOUBTOVER_ProvidePositionReport_Pkg(&_L27);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&_L7, trainProps);
  kcg_copy_TrainToTrackStatus_T_BG_Types_Pkg(&_L8, train2trackStatus);
  kcg_copy_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg(
    &_L21,
    modeLevelStatus);
  _L9 = _L21.currLevel;
  _L19 = cQ_SCALE_ProvidePositionReport_Pkg;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L16, &_L27.LRBG);
  _L25 = _L16.nid_bg;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L18, posBGs);
  _L22 = /* 1 */ op_LRBG_ProvidePositionReport_Pkg(&_L18, &_L27);
  _L35 = /* scaleInternalType */
    scaleInternalType_ProvidePositionReport_Pkg(_L19, _L22);
  _L26 = _L27.trainOrientationToLRBG;
  _L12 = _L27.nominalOrReverseToLRBG;
  _L38 = /* 3 */ scaleInternalType_ProvidePositionReport_Pkg(_L19, _L6);
  _L23 = /* 1 */ op_DOUBTUNDER_ProvidePositionReport_Pkg(&_L27);
  _L36 = /* 1 */ scaleInternalType_ProvidePositionReport_Pkg(_L19, _L23);
  _L13 = _L8.q_length;
  /* 1 */
  CalculateSafeTrainLength_ProvidePositionReport_Pkg(&_L7, &_L27, &_L14, &_L15);
  _L37 = /* 2 */ scaleInternalType_ProvidePositionReport_Pkg(_L19, _L14);
  _L20 = _L21.currMode;
  _L24 = _L8.nid_ntc;
  _L11.NID_PACKET = _L3;
  _L11.L_PACKET = _L3;
  _L11.qscale = _L19;
  _L11.NID_LRBG = _L25;
  _L11.D_LRBG = _L35;
  _L11.dirlrbg = _L26;
  _L11.dlrbg = _L12;
  _L11.L_DOUBTOVER = _L38;
  _L11.L_DOUBTUNDER = _L36;
  _L11.length = _L13;
  _L11.L_TRAININT = _L37;
  _L11.V_TRAIN = _L2;
  _L11.dirtrain = _L1;
  _L11.mode = _L20;
  _L11.level = _L9;
  _L11.NID_NTC = _L24;
  kcg_copy_Position_Report_TrainToTrack(&outC->packet0, &_L11);
  noname = _L15;
  /* last_init_ck_modeLevelStatus */ if (outC->init) {
    kcg_copy_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg(
      &last_modeLevelStatus,
      (ModeLevel2PositionReport_T_ProvidePositionReport_Pkg *)
        &cModeAndLevelStatus_ProvidePositionReport_Pkg);
  }
  else {
    kcg_copy_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg(
      &last_modeLevelStatus,
      &outC->rem_modeLevelStatus);
  }
  kcg_copy_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg(
    &outC->rem_modeLevelStatus,
    modeLevelStatus);
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Build_Packet0_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

