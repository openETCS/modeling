/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_Packet1_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::Build_Packet1 */
void Build_Packet1_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::Build_Packet1::packet0 */Position_Report_TrainToTrack *packet0,
  /* ProvidePositionReport_Pkg::Build_Packet1::prvDirTrain */Q_DIRTRAIN prvDirTrain,
  /* ProvidePositionReport_Pkg::Build_Packet1::trainPos */trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* ProvidePositionReport_Pkg::Build_Packet1::packet1 */PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *packet1)
{
  static Q_DIRLRBG tmp2;
  static Q_DLRBG tmp1;
  static Q_DIRTRAIN tmp;
  /* ProvidePositionReport_Pkg::Build_Packet1::IfBlock1::else */
  static kcg_bool _3_else_clock_IfBlock1;
  /* ProvidePositionReport_Pkg::Build_Packet1::IfBlock1::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* ProvidePositionReport_Pkg::Build_Packet1::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* ProvidePositionReport_Pkg::Build_Packet1::cond_3_4_2_3_3_4 */
  static kcg_bool cond_3_4_2_3_3_4;
  /* ProvidePositionReport_Pkg::Build_Packet1::cond_3_4_2_3_3_3 */
  static kcg_bool cond_3_4_2_3_3_3;
  /* ProvidePositionReport_Pkg::Build_Packet1::cond_3_4_2_3_3_2 */
  static kcg_bool cond_3_4_2_3_3_2;
  /* ProvidePositionReport_Pkg::Build_Packet1::_L3 */
  static kcg_int _L3;
  
  (*packet1).valid = kcg_true;
  /* 1 */
  op_cond_3_4_2_3_3_ProvidePositionReport_Pkg(
    packet0,
    trainPos,
    prvDirTrain,
    &_L3,
    &cond_3_4_2_3_3_2,
    &cond_3_4_2_3_3_3,
    &cond_3_4_2_3_3_4);
  IfBlock1_clock = cond_3_4_2_3_3_2 & ((*trainPos).trainOrientationToLRBG ==
      Q_DIRLRBG_Reverse);
  if (IfBlock1_clock) {
    tmp2 = Q_DIRLRBG_Reverse;
    tmp1 = Q_DLRBG_Reverse;
    tmp = Q_DIRTRAIN_Reverse;
  }
  else {
    _3_else_clock_IfBlock1 = cond_3_4_2_3_3_2 &
      ((*trainPos).trainOrientationToLRBG == Q_DIRLRBG_Nominal);
    if (_3_else_clock_IfBlock1) {
      tmp2 = Q_DIRLRBG_Nominal;
      tmp1 = Q_DLRBG_Nominal;
      tmp = Q_DIRTRAIN_Nominal;
    }
    else {
      else_clock_IfBlock1 = (cond_3_4_2_3_3_2 &
          ((*trainPos).trainOrientationToLRBG == Q_DIRLRBG_Unknown)) |
        cond_3_4_2_3_3_3 | cond_3_4_2_3_3_4;
      if (else_clock_IfBlock1) {
        tmp2 = Q_DIRLRBG_Unknown;
        tmp1 = Q_DLRBG_Unknown;
        tmp = Q_DIRTRAIN_Unknown;
      }
      else {
        tmp2 = Q_DIRLRBG_Unknown;
        tmp1 = Q_DLRBG_Unknown;
        tmp = Q_DIRTRAIN_Unknown;
      }
    }
  }
  (*packet1).packet1.NID_PACKET = (*packet0).NID_PACKET;
  (*packet1).packet1.L_PACKET = (*packet0).L_PACKET;
  (*packet1).packet1.qscale = (*packet0).qscale;
  (*packet1).packet1.NID_LRBG = (*packet0).NID_LRBG;
  (*packet1).packet1.NID_PRVLRBG = _L3;
  (*packet1).packet1.D_LRBG = (*packet0).D_LRBG;
  (*packet1).packet1.dirlrbg = tmp2;
  (*packet1).packet1.dlrbg = tmp1;
  (*packet1).packet1.L_DOUBTOVER = (*packet0).L_DOUBTOVER;
  (*packet1).packet1.L_DOUBTUNDER = (*packet0).L_DOUBTUNDER;
  (*packet1).packet1.length = (*packet0).length;
  (*packet1).packet1.L_TRAININT = (*packet0).L_TRAININT;
  (*packet1).packet1.V_TRAIN = (*packet0).V_TRAIN;
  (*packet1).packet1.dirtrain = tmp;
  (*packet1).packet1.mode = (*packet0).mode;
  (*packet1).packet1.level = (*packet0).level;
  (*packet1).packet1.NID_NTC = (*packet0).NID_NTC;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Build_Packet1_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

