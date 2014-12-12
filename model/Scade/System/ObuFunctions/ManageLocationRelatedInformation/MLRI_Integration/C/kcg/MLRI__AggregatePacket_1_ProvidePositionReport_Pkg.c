/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__AggregatePacket_1_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::AggregatePacket_1 */
void MLRI__AggregatePacket_1_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::AggregatePacket_1::posBGs */MLRI__positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* ProvidePositionReport_Pkg::AggregatePacket_1::trainPos */MLRI__trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* ProvidePositionReport_Pkg::AggregatePacket_1::train2trackStatus */MLRI__TrainToTrackStatus_T_BG_Types_Pkg *train2trackStatus,
  /* ProvidePositionReport_Pkg::AggregatePacket_1::TrainRearEndPos4 */MLRI__L_TRAININT TrainRearEndPos4,
  /* ProvidePositionReport_Pkg::AggregatePacket_1::directionLRBG */MLRI__BG_Orientation_T_ProvidePositionReport_Pkg directionLRBG,
  /* ProvidePositionReport_Pkg::AggregatePacket_1::prvDirTrain */MLRI__Q_DIRTRAIN prvDirTrain,
  /* ProvidePositionReport_Pkg::AggregatePacket_1::trainPosInfo */MLRI__trainPositionInfo_T_TrainPosition_Types_Pck *trainPosInfo,
  /* ProvidePositionReport_Pkg::AggregatePacket_1::sendNoReport */kcg_bool *sendNoReport,
  /* ProvidePositionReport_Pkg::AggregatePacket_1::packet1 */MLRI__Packet1_T_ProvidePositionReport_Pkg *packet1)
{
  MLRI__Q_DIRLRBG tmp2;
  MLRI__Q_DLRBG tmp1;
  MLRI__Q_DIRTRAIN tmp;
  /* ProvidePositionReport_Pkg::AggregatePacket_1::IfBlock1::else */ kcg_bool _3_else_clock_IfBlock1;
  /* ProvidePositionReport_Pkg::AggregatePacket_1::IfBlock1::else::else */ kcg_bool else_clock_IfBlock1;
  /* ProvidePositionReport_Pkg::AggregatePacket_1::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* ProvidePositionReport_Pkg::AggregatePacket_1::cond_3_4_2_3_3_2 */ kcg_bool cond_3_4_2_3_3_2;
  /* ProvidePositionReport_Pkg::AggregatePacket_1::cond_3_4_2_3_3_3 */ kcg_bool cond_3_4_2_3_3_3;
  /* ProvidePositionReport_Pkg::AggregatePacket_1::_L6 */ kcg_bool _L6;
  /* ProvidePositionReport_Pkg::AggregatePacket_1::_L5 */ MLRI__Position_Report_TrainToTrack _L5;
  /* ProvidePositionReport_Pkg::AggregatePacket_1::_L7 */ kcg_bool _L7;
  /* ProvidePositionReport_Pkg::AggregatePacket_1::_L171 */ kcg_int _L171;
  
  /* 1 */
  MLRI__op_prepack_0_ProvidePositionReport_Pkg(
    TrainRearEndPos4,
    trainPos,
    train2trackStatus,
    posBGs,
    trainPosInfo,
    &_L6,
    &_L5);
  /* op_cond_3_4_2_3_3 */
  MLRI__op_cond_3_4_2_3_3_ProvidePositionReport_Pkg(
    &_L5,
    trainPos,
    prvDirTrain,
    &_L171,
    &cond_3_4_2_3_3_2,
    &cond_3_4_2_3_3_3,
    &_L7);
  IfBlock1_clock = cond_3_4_2_3_3_2 & (directionLRBG ==
      MLRI__orientation_reverse_ProvidePositionReport_Pkg);
  if (IfBlock1_clock) {
  }
  else {
    _3_else_clock_IfBlock1 = cond_3_4_2_3_3_2 & (directionLRBG ==
        MLRI__orientation_nominal_ProvidePositionReport_Pkg);
    if (_3_else_clock_IfBlock1) {
    }
    else {
      else_clock_IfBlock1 = (cond_3_4_2_3_3_2 & (directionLRBG ==
            MLRI__orientation_unknown_ProvidePositionReport_Pkg)) |
        cond_3_4_2_3_3_3 | _L7;
    }
  }
  _L7 = !_L6;
  (*packet1).valid = _L7;
  *sendNoReport = _L7 & !cond_3_4_2_3_3_2;
  if (IfBlock1_clock) {
    tmp2 = MLRI__Q_DIRLRBG_Reverse;
    tmp1 = MLRI__Q_DLRBG_Reverse;
    tmp = MLRI__Q_DIRTRAIN_Reverse;
  }
  else if (_3_else_clock_IfBlock1) {
    tmp2 = MLRI__Q_DIRLRBG_Nominal;
    tmp1 = MLRI__Q_DLRBG_Nominal;
    tmp = MLRI__Q_DIRTRAIN_Nominal;
  }
  else if (else_clock_IfBlock1) {
    tmp2 = MLRI__Q_DIRLRBG_Unknown;
    tmp1 = MLRI__Q_DLRBG_Unknown;
    tmp = MLRI__Q_DIRTRAIN_Unknown;
  }
  else {
    tmp2 = MLRI__Q_DIRLRBG_Unknown;
    tmp1 = MLRI__Q_DLRBG_Unknown;
    tmp = MLRI__Q_DIRTRAIN_Unknown;
  }
  (*packet1).packet1.NID_PACKET = _L5.NID_PACKET;
  (*packet1).packet1.L_PACKET = _L5.L_PACKET;
  (*packet1).packet1.qscale = _L5.qscale;
  (*packet1).packet1.NID_LRBG = _L5.NID_LRBG;
  (*packet1).packet1.NID_PRVLRBG = _L171;
  (*packet1).packet1.D_LRBG = _L5.D_LRBG;
  (*packet1).packet1.dirlrbg = tmp2;
  (*packet1).packet1.dlrbg = tmp1;
  (*packet1).packet1.L_DOUBTOVER = _L5.L_DOUBTOVER;
  (*packet1).packet1.L_DOUBTUNDER = _L5.L_DOUBTUNDER;
  (*packet1).packet1.length = _L5.length;
  (*packet1).packet1.L_TRAININT = _L5.L_TRAININT;
  (*packet1).packet1.V_TRAIN = _L5.V_TRAIN;
  (*packet1).packet1.dirtrain = tmp;
  (*packet1).packet1.mode = _L5.mode;
  (*packet1).packet1.level = _L5.level;
  (*packet1).packet1.NID_NTC = _L5.NID_NTC;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__AggregatePacket_1_ProvidePositionReport_Pkg.c
** Generation date: 2014-12-12T12:03:55
*************************************************************$ */

