/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_Packet1_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::Build_Packet1 */
void Build_Packet1_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::Build_Packet1::packet0 */ Position_Report_TrainToTrack *packet0,
  /* ProvidePositionReport_Pkg::Build_Packet1::prvDirTrain */ Q_DIRTRAIN prvDirTrain,
  /* ProvidePositionReport_Pkg::Build_Packet1::trainPos */ trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* ProvidePositionReport_Pkg::Build_Packet1::packet1 */ PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *packet1)
{
  /* ProvidePositionReport_Pkg::Build_Packet1::in_dirlrbg */
  static Q_DIRLRBG _3_in_dirlrbg;
  /* ProvidePositionReport_Pkg::Build_Packet1::in_dlrbg */
  static Q_DLRBG _2_in_dlrbg;
  /* ProvidePositionReport_Pkg::Build_Packet1::in_dirtrain */
  static Q_DIRTRAIN _1_in_dirtrain;
  /* ProvidePositionReport_Pkg::Build_Packet1::IfBlock1::then::_L1 */
  static Q_DIRTRAIN _L1_IfBlock1;
  /* ProvidePositionReport_Pkg::Build_Packet1::IfBlock1::then::_L2 */
  static Q_DLRBG _L2_IfBlock1;
  /* ProvidePositionReport_Pkg::Build_Packet1::IfBlock1::then::_L3 */
  static Q_DIRLRBG _L3_IfBlock1;
  /* ProvidePositionReport_Pkg::Build_Packet1::in_dirlrbg */
  static Q_DIRLRBG in_dirlrbg;
  /* ProvidePositionReport_Pkg::Build_Packet1::in_dlrbg */
  static Q_DLRBG in_dlrbg;
  /* ProvidePositionReport_Pkg::Build_Packet1::in_dirtrain */
  static Q_DIRTRAIN in_dirtrain;
  /* ProvidePositionReport_Pkg::Build_Packet1::IfBlock1::else */
  static kcg_bool _18_else_clock_IfBlock1;
  /* ProvidePositionReport_Pkg::Build_Packet1::in_dirlrbg */
  static Q_DIRLRBG _15_in_dirlrbg;
  /* ProvidePositionReport_Pkg::Build_Packet1::in_dlrbg */
  static Q_DLRBG _14_in_dlrbg;
  /* ProvidePositionReport_Pkg::Build_Packet1::in_dirtrain */
  static Q_DIRTRAIN _13_in_dirtrain;
  /* ProvidePositionReport_Pkg::Build_Packet1::IfBlock1::else::else::then::_L1 */
  static Q_DLRBG _L122_IfBlock1;
  /* ProvidePositionReport_Pkg::Build_Packet1::IfBlock1::else::else::then::_L2 */
  static Q_DIRLRBG _L223_IfBlock1;
  /* ProvidePositionReport_Pkg::Build_Packet1::IfBlock1::else::else::then::_L3 */
  static Q_DIRTRAIN _L324_IfBlock1;
  /* ProvidePositionReport_Pkg::Build_Packet1::in_dirlrbg */
  static Q_DIRLRBG _12_in_dirlrbg;
  /* ProvidePositionReport_Pkg::Build_Packet1::in_dlrbg */
  static Q_DLRBG _11_in_dlrbg;
  /* ProvidePositionReport_Pkg::Build_Packet1::in_dirtrain */
  static Q_DIRTRAIN _10_in_dirtrain;
  /* ProvidePositionReport_Pkg::Build_Packet1::IfBlock1::else::else */
  static kcg_bool else_clock_IfBlock1;
  /* ProvidePositionReport_Pkg::Build_Packet1::in_dirtrain */
  static Q_DIRTRAIN _4_in_dirtrain;
  /* ProvidePositionReport_Pkg::Build_Packet1::in_dlrbg */
  static Q_DLRBG _5_in_dlrbg;
  /* ProvidePositionReport_Pkg::Build_Packet1::in_dirlrbg */
  static Q_DIRLRBG _6_in_dirlrbg;
  /* ProvidePositionReport_Pkg::Build_Packet1::IfBlock1::else::then::_L3 */
  static Q_DLRBG _L321_IfBlock1;
  /* ProvidePositionReport_Pkg::Build_Packet1::IfBlock1::else::then::_L2 */
  static Q_DIRTRAIN _L220_IfBlock1;
  /* ProvidePositionReport_Pkg::Build_Packet1::IfBlock1::else::then::_L1 */
  static Q_DIRLRBG _L119_IfBlock1;
  /* ProvidePositionReport_Pkg::Build_Packet1::in_dirtrain */
  static Q_DIRTRAIN _7_in_dirtrain;
  /* ProvidePositionReport_Pkg::Build_Packet1::in_dlrbg */
  static Q_DLRBG _8_in_dlrbg;
  /* ProvidePositionReport_Pkg::Build_Packet1::in_dirlrbg */
  static Q_DIRLRBG _9_in_dirlrbg;
  static Q_DLRBG noname;
  static Q_DIRTRAIN _16_noname;
  static Q_DIRLRBG _17_noname;
  /* ProvidePositionReport_Pkg::Build_Packet1::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* ProvidePositionReport_Pkg::Build_Packet1::in_dirtrain */
  static Q_DIRTRAIN _27_in_dirtrain;
  /* ProvidePositionReport_Pkg::Build_Packet1::in_dlrbg */
  static Q_DLRBG _26_in_dlrbg;
  /* ProvidePositionReport_Pkg::Build_Packet1::dirLRBG */
  static BG_Orientation_T_ProvidePositionReport_Pkg dirLRBG;
  /* ProvidePositionReport_Pkg::Build_Packet1::in_dirlrbg */
  static Q_DIRLRBG _25_in_dirlrbg;
  /* ProvidePositionReport_Pkg::Build_Packet1::cond_3_4_2_3_3_4 */
  static kcg_bool cond_3_4_2_3_3_4;
  /* ProvidePositionReport_Pkg::Build_Packet1::cond_3_4_2_3_3_3 */
  static kcg_bool cond_3_4_2_3_3_3;
  /* ProvidePositionReport_Pkg::Build_Packet1::cond_3_4_2_3_3_2 */
  static kcg_bool cond_3_4_2_3_3_2;
  /* ProvidePositionReport_Pkg::Build_Packet1::_L35 */
  static trainPosition_T_TrainPosition_Types_Pck _L35;
  /* ProvidePositionReport_Pkg::Build_Packet1::_L34 */
  static Position_Report_based_on_two_balise_groups_TrainToTrack _L34;
  /* ProvidePositionReport_Pkg::Build_Packet1::_L33 */
  static Q_DIRTRAIN _L33;
  /* ProvidePositionReport_Pkg::Build_Packet1::_L14 */
  static kcg_int _L14;
  /* ProvidePositionReport_Pkg::Build_Packet1::_L15 */
  static kcg_int _L15;
  /* ProvidePositionReport_Pkg::Build_Packet1::_L16 */
  static Q_SCALE _L16;
  /* ProvidePositionReport_Pkg::Build_Packet1::_L17 */
  static kcg_int _L17;
  /* ProvidePositionReport_Pkg::Build_Packet1::_L18 */
  static kcg_int _L18;
  /* ProvidePositionReport_Pkg::Build_Packet1::_L19 */
  static Q_DIRLRBG _L19;
  /* ProvidePositionReport_Pkg::Build_Packet1::_L20 */
  static Q_DLRBG _L20;
  /* ProvidePositionReport_Pkg::Build_Packet1::_L21 */
  static kcg_int _L21;
  /* ProvidePositionReport_Pkg::Build_Packet1::_L22 */
  static kcg_int _L22;
  /* ProvidePositionReport_Pkg::Build_Packet1::_L23 */
  static Q_LENGTH _L23;
  /* ProvidePositionReport_Pkg::Build_Packet1::_L24 */
  static kcg_int _L24;
  /* ProvidePositionReport_Pkg::Build_Packet1::_L25 */
  static kcg_int _L25;
  /* ProvidePositionReport_Pkg::Build_Packet1::_L26 */
  static Q_DIRTRAIN _L26;
  /* ProvidePositionReport_Pkg::Build_Packet1::_L27 */
  static M_MODE _L27;
  /* ProvidePositionReport_Pkg::Build_Packet1::_L28 */
  static M_LEVEL _L28;
  /* ProvidePositionReport_Pkg::Build_Packet1::_L29 */
  static kcg_int _L29;
  /* ProvidePositionReport_Pkg::Build_Packet1::_L12 */
  static Q_DIRTRAIN _L12;
  /* ProvidePositionReport_Pkg::Build_Packet1::_L7 */
  static Q_DLRBG _L7;
  /* ProvidePositionReport_Pkg::Build_Packet1::_L3 */
  static kcg_int _L3;
  /* ProvidePositionReport_Pkg::Build_Packet1::_L4 */
  static kcg_bool _L4;
  /* ProvidePositionReport_Pkg::Build_Packet1::_L5 */
  static kcg_bool _L5;
  /* ProvidePositionReport_Pkg::Build_Packet1::_L6 */
  static kcg_bool _L6;
  /* ProvidePositionReport_Pkg::Build_Packet1::_L1 */
  static Q_DIRLRBG _L1;
  /* ProvidePositionReport_Pkg::Build_Packet1::_L39 */
  static Position_Report_TrainToTrack _L39;
  /* ProvidePositionReport_Pkg::Build_Packet1::_L40 */
  static PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg _L40;
  /* ProvidePositionReport_Pkg::Build_Packet1::_L41 */
  static kcg_bool _L41;
  /* ProvidePositionReport_Pkg::Build_Packet1::_L42 */
  static Q_DIRLRBG _L42;
  
  kcg_copy_Position_Report_TrainToTrack(&_L39, packet0);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L35, trainPos);
  _L12 = prvDirTrain;
  /* 1 */
  op_cond_3_4_2_3_3_ProvidePositionReport_Pkg(
    &_L39,
    &_L35,
    _L12,
    &_L3,
    &_L4,
    &_L5,
    &_L6);
  cond_3_4_2_3_3_2 = _L4;
  _L42 = _L35.trainOrientationToLRBG;
  dirLRBG = _L42;
  IfBlock1_clock = (cond_3_4_2_3_3_2 == kcg_true) & (dirLRBG ==
      Q_DIRLRBG_Reverse);
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
  }
  else {
    _18_else_clock_IfBlock1 = (cond_3_4_2_3_3_2 == kcg_true) & (dirLRBG ==
        Q_DIRLRBG_Nominal);
  }
  cond_3_4_2_3_3_3 = _L5;
  cond_3_4_2_3_3_4 = _L6;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L3_IfBlock1 = Q_DIRLRBG_Reverse;
    _3_in_dirlrbg = _L3_IfBlock1;
    _25_in_dirlrbg = _3_in_dirlrbg;
  }
  else {
    /* ck_anon_activ */ if (_18_else_clock_IfBlock1) {
      _L119_IfBlock1 = Q_DIRLRBG_Nominal;
      _9_in_dirlrbg = _L119_IfBlock1;
      in_dirlrbg = _9_in_dirlrbg;
    }
    else {
      else_clock_IfBlock1 = ((cond_3_4_2_3_3_2 == kcg_true) & (dirLRBG ==
            Q_DIRLRBG_Unknown)) | (cond_3_4_2_3_3_3 == kcg_true) |
        (cond_3_4_2_3_3_4 == kcg_true);
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        _L223_IfBlock1 = Q_DIRLRBG_Unknown;
        _15_in_dirlrbg = _L223_IfBlock1;
        _6_in_dirlrbg = _15_in_dirlrbg;
      }
      else {
        _12_in_dirlrbg = Q_DIRLRBG_Unknown;
        _6_in_dirlrbg = _12_in_dirlrbg;
      }
      in_dirlrbg = _6_in_dirlrbg;
    }
    _25_in_dirlrbg = in_dirlrbg;
  }
  _L1 = _25_in_dirlrbg;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L2_IfBlock1 = Q_DLRBG_Reverse;
    _2_in_dlrbg = _L2_IfBlock1;
    _26_in_dlrbg = _2_in_dlrbg;
  }
  else {
    /* ck_anon_activ */ if (_18_else_clock_IfBlock1) {
      _L321_IfBlock1 = Q_DLRBG_Nominal;
      _8_in_dlrbg = _L321_IfBlock1;
      in_dlrbg = _8_in_dlrbg;
    }
    else {
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        _L122_IfBlock1 = Q_DLRBG_Unknown;
        _14_in_dlrbg = _L122_IfBlock1;
        _5_in_dlrbg = _14_in_dlrbg;
      }
      else {
        _11_in_dlrbg = Q_DLRBG_Unknown;
        _5_in_dlrbg = _11_in_dlrbg;
      }
      in_dlrbg = _5_in_dlrbg;
    }
    _26_in_dlrbg = in_dlrbg;
  }
  _L7 = _26_in_dlrbg;
  _L29 = _L39.NID_NTC;
  _L28 = _L39.level;
  _L27 = _L39.mode;
  _L26 = _L39.dirtrain;
  _L25 = _L39.V_TRAIN;
  _L24 = _L39.L_TRAININT;
  _L23 = _L39.length;
  _L22 = _L39.L_DOUBTUNDER;
  _L21 = _L39.L_DOUBTOVER;
  _L20 = _L39.dlrbg;
  _L19 = _L39.dirlrbg;
  _L18 = _L39.D_LRBG;
  _L17 = _L39.NID_LRBG;
  _L16 = _L39.qscale;
  _L15 = _L39.L_PACKET;
  _L14 = _L39.NID_PACKET;
  noname = _L20;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L1_IfBlock1 = Q_DIRTRAIN_Reverse;
    _1_in_dirtrain = _L1_IfBlock1;
    _27_in_dirtrain = _1_in_dirtrain;
  }
  else {
    /* ck_anon_activ */ if (_18_else_clock_IfBlock1) {
      _L220_IfBlock1 = Q_DIRTRAIN_Nominal;
      _7_in_dirtrain = _L220_IfBlock1;
      in_dirtrain = _7_in_dirtrain;
    }
    else {
      /* ck_anon_activ */ if (else_clock_IfBlock1) {
        _L324_IfBlock1 = Q_DIRTRAIN_Unknown;
        _13_in_dirtrain = _L324_IfBlock1;
        _4_in_dirtrain = _13_in_dirtrain;
      }
      else {
        _10_in_dirtrain = Q_DIRTRAIN_Unknown;
        _4_in_dirtrain = _10_in_dirtrain;
      }
      in_dirtrain = _4_in_dirtrain;
    }
    _27_in_dirtrain = in_dirtrain;
  }
  _L33 = _27_in_dirtrain;
  _16_noname = _L26;
  _L34.NID_PACKET = _L14;
  _L34.L_PACKET = _L15;
  _L34.qscale = _L16;
  _L34.NID_LRBG = _L17;
  _L34.NID_PRVLRBG = _L3;
  _L34.D_LRBG = _L18;
  _L34.dirlrbg = _L1;
  _L34.dlrbg = _L7;
  _L34.L_DOUBTOVER = _L21;
  _L34.L_DOUBTUNDER = _L22;
  _L34.length = _L23;
  _L34.L_TRAININT = _L24;
  _L34.V_TRAIN = _L25;
  _L34.dirtrain = _L33;
  _L34.mode = _L27;
  _L34.level = _L28;
  _L34.NID_NTC = _L29;
  _17_noname = _L19;
  _L41 = kcg_true;
  _L40.valid = _L41;
  kcg_copy_Position_Report_based_on_two_balise_groups_TrainToTrack(
    &_L40.packet1,
    &_L34);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(packet1, &_L40);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Build_Packet1_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

