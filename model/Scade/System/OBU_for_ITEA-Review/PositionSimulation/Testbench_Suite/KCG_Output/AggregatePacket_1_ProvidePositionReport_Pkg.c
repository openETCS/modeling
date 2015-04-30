/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "AggregatePacket_1_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::AggregatePacket_1 */
void AggregatePacket_1_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::AggregatePacket_1::modeLevelStatus */ ModeAndLevelStatus_T_BG_Types_Pkg *modeLevelStatus,
  /* ProvidePositionReport_Pkg::AggregatePacket_1::posBGs */ positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* ProvidePositionReport_Pkg::AggregatePacket_1::trainPos */ trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* ProvidePositionReport_Pkg::AggregatePacket_1::train2trackStatus */ TrainToTrackStatus_T_BG_Types_Pkg *train2trackStatus,
  /* ProvidePositionReport_Pkg::AggregatePacket_1::TrainRearEndPos4 */ L_TRAININT TrainRearEndPos4,
  /* ProvidePositionReport_Pkg::AggregatePacket_1::directionLRBG */ BG_Orientation_T_ProvidePositionReport_Pkg directionLRBG,
  /* ProvidePositionReport_Pkg::AggregatePacket_1::prvDirTrain */ Q_DIRTRAIN prvDirTrain,
  /* ProvidePositionReport_Pkg::AggregatePacket_1::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* ProvidePositionReport_Pkg::AggregatePacket_1::sendNoReport */ kcg_bool *sendNoReport,
  /* ProvidePositionReport_Pkg::AggregatePacket_1::packet1 */ PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *packet1)
{
  Q_DLRBG tmp1;
  Q_DIRTRAIN tmp;
  /* ProvidePositionReport_Pkg::AggregatePacket_1::IfBlock1::else */ kcg_bool _2_else_clock_IfBlock1;
  /* ProvidePositionReport_Pkg::AggregatePacket_1::IfBlock1::else::else */ kcg_bool else_clock_IfBlock1;
  /* ProvidePositionReport_Pkg::AggregatePacket_1::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* ProvidePositionReport_Pkg::AggregatePacket_1::cond_3_4_2_3_3_2 */ kcg_bool cond_3_4_2_3_3_2;
  /* ProvidePositionReport_Pkg::AggregatePacket_1::cond_3_4_2_3_3_3 */ kcg_bool cond_3_4_2_3_3_3;
  /* ProvidePositionReport_Pkg::AggregatePacket_1::cond_3_4_2_3_3_4 */ kcg_bool cond_3_4_2_3_3_4;
  /* ProvidePositionReport_Pkg::AggregatePacket_1::_L5 */ Position_Report_TrainToTrack _L5;
  /* ProvidePositionReport_Pkg::AggregatePacket_1::_L171 */ kcg_int _L171;
  
  /* 1 */
  op_prepack_0_ProvidePositionReport_Pkg(
    TrainRearEndPos4,
    trainPos,
    train2trackStatus,
    posBGs,
    odometry,
    modeLevelStatus,
    &else_clock_IfBlock1,
    &_L5);
  /* op_cond_3_4_2_3_3 */
  op_cond_3_4_2_3_3_ProvidePositionReport_Pkg(
    &_L5,
    trainPos,
    prvDirTrain,
    &_L171,
    &cond_3_4_2_3_3_2,
    &cond_3_4_2_3_3_3,
    &cond_3_4_2_3_3_4);
  IfBlock1_clock = cond_3_4_2_3_3_2 & (directionLRBG == Q_DIRLRBG_Reverse);
  _2_else_clock_IfBlock1 = !else_clock_IfBlock1;
  (*packet1).valid = _2_else_clock_IfBlock1;
  (*packet1).packet1.NID_PACKET = _L5.NID_PACKET;
  (*packet1).packet1.L_PACKET = _L5.L_PACKET;
  (*packet1).packet1.qscale = _L5.qscale;
  (*packet1).packet1.NID_LRBG = _L5.NID_LRBG;
  (*packet1).packet1.NID_PRVLRBG = _L171;
  (*packet1).packet1.D_LRBG = _L5.D_LRBG;
  (*packet1).packet1.L_DOUBTOVER = _L5.L_DOUBTOVER;
  (*packet1).packet1.L_DOUBTUNDER = _L5.L_DOUBTUNDER;
  (*packet1).packet1.length = _L5.length;
  (*packet1).packet1.L_TRAININT = _L5.L_TRAININT;
  (*packet1).packet1.V_TRAIN = _L5.V_TRAIN;
  (*packet1).packet1.mode = _L5.mode;
  (*packet1).packet1.level = _L5.level;
  (*packet1).packet1.NID_NTC = _L5.NID_NTC;
  *sendNoReport = _2_else_clock_IfBlock1 & !cond_3_4_2_3_3_2;
  if (IfBlock1_clock) {
    (*packet1).packet1.dirlrbg = Q_DIRLRBG_Reverse;
    tmp1 = Q_DLRBG_Reverse;
    tmp = Q_DIRTRAIN_Reverse;
  }
  else {
    _2_else_clock_IfBlock1 = cond_3_4_2_3_3_2 & (directionLRBG ==
        Q_DIRLRBG_Nominal);
    if (_2_else_clock_IfBlock1) {
      (*packet1).packet1.dirlrbg = Q_DIRLRBG_Nominal;
      tmp1 = Q_DLRBG_Nominal;
      tmp = Q_DIRTRAIN_Nominal;
    }
    else {
      else_clock_IfBlock1 = (cond_3_4_2_3_3_2 & (directionLRBG ==
            Q_DIRLRBG_Unknown)) | cond_3_4_2_3_3_3 | cond_3_4_2_3_3_4;
      if (else_clock_IfBlock1) {
        (*packet1).packet1.dirlrbg = Q_DIRLRBG_Unknown;
        tmp1 = Q_DLRBG_Unknown;
        tmp = Q_DIRTRAIN_Unknown;
      }
      else {
        (*packet1).packet1.dirlrbg = Q_DIRLRBG_Unknown;
        tmp1 = Q_DLRBG_Unknown;
        tmp = Q_DIRTRAIN_Unknown;
      }
    }
  }
  (*packet1).packet1.dlrbg = tmp1;
  (*packet1).packet1.dirtrain = tmp;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** AggregatePacket_1_ProvidePositionReport_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

