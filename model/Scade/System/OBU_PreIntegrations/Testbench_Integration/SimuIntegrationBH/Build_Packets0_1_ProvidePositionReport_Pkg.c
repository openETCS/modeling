/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_Packets0_1_ProvidePositionReport_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void Build_Packets0_1_init_ProvidePositionReport_Pkg(
  outC_Build_Packets0_1_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
  outC->_L22.valid = kcg_true;
  outC->_L22.packet0.NID_PACKET = 0;
  outC->_L22.packet0.L_PACKET = 0;
  outC->_L22.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->_L22.packet0.NID_LRBG = 0;
  outC->_L22.packet0.D_LRBG = 0;
  outC->_L22.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L22.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->_L22.packet0.L_DOUBTOVER = 0;
  outC->_L22.packet0.L_DOUBTUNDER = 0;
  outC->_L22.packet0.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L22.packet0.L_TRAININT = 0;
  outC->_L22.packet0.V_TRAIN = 0;
  outC->_L22.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L22.packet0.mode = M_MODE_Full_Supervision;
  outC->_L22.packet0.level = M_LEVEL_Level_0;
  outC->_L22.packet0.NID_NTC = 0;
  outC->_L21.valid = kcg_true;
  outC->_L21.packet1.NID_PACKET = 0;
  outC->_L21.packet1.L_PACKET = 0;
  outC->_L21.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->_L21.packet1.NID_LRBG = 0;
  outC->_L21.packet1.NID_PRVLRBG = 0;
  outC->_L21.packet1.D_LRBG = 0;
  outC->_L21.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->_L21.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->_L21.packet1.L_DOUBTOVER = 0;
  outC->_L21.packet1.L_DOUBTUNDER = 0;
  outC->_L21.packet1.length = Q_LENGTH_No_train_integrity_information_available;
  outC->_L21.packet1.L_TRAININT = 0;
  outC->_L21.packet1.V_TRAIN = 0;
  outC->_L21.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->_L21.packet1.mode = M_MODE_Full_Supervision;
  outC->_L21.packet1.level = M_LEVEL_Level_0;
  outC->_L21.packet1.NID_NTC = 0;
  outC->packet1.valid = kcg_true;
  outC->packet1.packet1.NID_PACKET = 0;
  outC->packet1.packet1.L_PACKET = 0;
  outC->packet1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->packet1.packet1.NID_LRBG = 0;
  outC->packet1.packet1.NID_PRVLRBG = 0;
  outC->packet1.packet1.D_LRBG = 0;
  outC->packet1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->packet1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->packet1.packet1.L_DOUBTOVER = 0;
  outC->packet1.packet1.L_DOUBTUNDER = 0;
  outC->packet1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->packet1.packet1.L_TRAININT = 0;
  outC->packet1.packet1.V_TRAIN = 0;
  outC->packet1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->packet1.packet1.mode = M_MODE_Full_Supervision;
  outC->packet1.packet1.level = M_LEVEL_Level_0;
  outC->packet1.packet1.NID_NTC = 0;
  outC->packet0.valid = kcg_true;
  outC->packet0.packet0.NID_PACKET = 0;
  outC->packet0.packet0.L_PACKET = 0;
  outC->packet0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->packet0.packet0.NID_LRBG = 0;
  outC->packet0.packet0.D_LRBG = 0;
  outC->packet0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->packet0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->packet0.packet0.L_DOUBTOVER = 0;
  outC->packet0.packet0.L_DOUBTUNDER = 0;
  outC->packet0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->packet0.packet0.L_TRAININT = 0;
  outC->packet0.packet0.V_TRAIN = 0;
  outC->packet0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->packet0.packet0.mode = M_MODE_Full_Supervision;
  outC->packet0.packet0.level = M_LEVEL_Level_0;
  outC->packet0.packet0.NID_NTC = 0;
  /* 2 */ Build_Packet0_init_ProvidePositionReport_Pkg(&outC->Context_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Build_Packets0_1_reset_ProvidePositionReport_Pkg(
  outC_Build_Packets0_1_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
  /* 2 */ Build_Packet0_reset_ProvidePositionReport_Pkg(&outC->Context_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* ProvidePositionReport_Pkg::Build_Packets0_1 */
void Build_Packets0_1_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::Build_Packets0_1::trainProps */ trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* ProvidePositionReport_Pkg::Build_Packets0_1::posBGs */ positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* ProvidePositionReport_Pkg::Build_Packets0_1::modeLevelStatus */ ModeLevel2PositionReport_T_ProvidePositionReport_Pkg *modeLevelStatus,
  /* ProvidePositionReport_Pkg::Build_Packets0_1::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* ProvidePositionReport_Pkg::Build_Packets0_1::trainPos */ trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* ProvidePositionReport_Pkg::Build_Packets0_1::train2trackStatus */ TrainToTrackStatus_T_BG_Types_Pkg *train2trackStatus,
  /* ProvidePositionReport_Pkg::Build_Packets0_1::prvDirTrain */ Q_DIRTRAIN prvDirTrain,
  outC_Build_Packets0_1_ProvidePositionReport_Pkg *outC)
{
  /* ProvidePositionReport_Pkg::Build_Packets0_1 */
  static PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg tmp1;
  /* ProvidePositionReport_Pkg::Build_Packets0_1 */
  static PT0_PositionReport_T_Packet_TrainTypes_Pkg tmp;
  /* ProvidePositionReport_Pkg::Build_Packets0_1 */
  static PT0_PositionReport_T_Packet_TrainTypes_Pkg _2_op_call;
  /* ProvidePositionReport_Pkg::Build_Packets0_1 */
  static PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg op_call;
  /* ProvidePositionReport_Pkg::Build_Packets0_1 */
  static kcg_bool ck_every;
  /* ProvidePositionReport_Pkg::Build_Packets0_1 */
  static kcg_bool _3_ck_every;
  /* ProvidePositionReport_Pkg::Build_Packets0_1::_L14 */
  static trainProperties_T_TrainPosition_Types_Pck _L14;
  /* ProvidePositionReport_Pkg::Build_Packets0_1::_L11 */
  static ModeLevel2PositionReport_T_ProvidePositionReport_Pkg _L11;
  /* ProvidePositionReport_Pkg::Build_Packets0_1::_L10 */
  static TrainToTrackStatus_T_BG_Types_Pkg _L10;
  /* ProvidePositionReport_Pkg::Build_Packets0_1::_L7 */
  static Q_DIRTRAIN _L7;
  /* ProvidePositionReport_Pkg::Build_Packets0_1::_L5 */
  static positionedBGs_T_TrainPosition_Types_Pck _L5;
  /* ProvidePositionReport_Pkg::Build_Packets0_1::_L4 */
  static odometry_T_Obu_BasicTypes_Pkg _L4;
  /* ProvidePositionReport_Pkg::Build_Packets0_1::_L1 */
  static trainPosition_T_TrainPosition_Types_Pck _L1;
  /* ProvidePositionReport_Pkg::Build_Packets0_1::_L19 */
  static kcg_bool _L19;
  /* ProvidePositionReport_Pkg::Build_Packets0_1::_L20 */
  static Position_Report_TrainToTrack _L20;
  /* ProvidePositionReport_Pkg::Build_Packets0_1::_L23 */
  static kcg_bool _L23;
  /* ProvidePositionReport_Pkg::Build_Packets0_1::_L24 */
  static positionedBG_T_TrainPosition_Types_Pck _L24;
  
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L1, trainPos);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L24, &_L1.LRBG);
  /* 2 */
  DeterminePacketValidity_ProvidePositionReport_Pkg(&_L24, &_L19, &_L23);
  ck_every = _L19;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L5, posBGs);
  kcg_copy_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg(
    &_L11,
    modeLevelStatus);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&_L4, odometry);
  kcg_copy_TrainToTrackStatus_T_BG_Types_Pkg(&_L10, train2trackStatus);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&_L14, trainProps);
  /* 2 */
  Build_Packet0_ProvidePositionReport_Pkg(
    &_L5,
    &_L11,
    &_L4,
    &_L10,
    &_L14,
    &_L1,
    &outC->Context_2);
  kcg_copy_Position_Report_TrainToTrack(&_L20, &outC->Context_2.packet0);
  /* ck_Build_Packets0_1 */ if (ck_every) {
    /* 3 */ Activate_Packet0_ProvidePositionReport_Pkg(&_L20, &_2_op_call);
  }
  _3_ck_every = _L23;
  _L7 = prvDirTrain;
  /* ck_Build_Packets0_1 */ if (_3_ck_every) {
    /* 2 */ Build_Packet1_ProvidePositionReport_Pkg(&_L20, _L7, &_L1, &op_call);
    kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
      &outC->_L21,
      &op_call);
  }
  else {
    if (outC->init) {
      kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
        &tmp1,
        (PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *)
          &emptyPacket1_ProvidePositionReport_Pkg);
    }
    else {
      kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
        &tmp1,
        &outC->_L21);
    }
    kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(&outC->_L21, &tmp1);
  }
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
    &outC->packet1,
    &outC->_L21);
  /* ck_Build_Packets0_1 */ if (ck_every) {
    kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
      &outC->_L22,
      &_2_op_call);
  }
  else {
    if (outC->init) {
      kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
        &tmp,
        (PT0_PositionReport_T_Packet_TrainTypes_Pkg *)
          &emptyPacket0_ProvidePositionReport_Pkg);
    }
    else {
      kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&tmp, &outC->_L22);
    }
    kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&outC->_L22, &tmp);
  }
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
    &outC->packet0,
    &outC->_L22);
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Build_Packets0_1_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

