/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Build_PosReport_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::Build_PosReport */
void Build_PosReport_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::Build_PosReport::trainProps */ trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* ProvidePositionReport_Pkg::Build_PosReport::in_packet0 */ PT0_PositionReport_T_Packet_TrainTypes_Pkg *in_packet0,
  /* ProvidePositionReport_Pkg::Build_PosReport::in_packet1 */ PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *in_packet1,
  /* ProvidePositionReport_Pkg::Build_PosReport::errorVector */ array_168990 *errorVector,
  /* ProvidePositionReport_Pkg::Build_PosReport::t_train */ T_TRAIN t_train,
  /* ProvidePositionReport_Pkg::Build_PosReport::posRepHeader */ Radio_TrainTrack_Header_T_Radio_Types_Pkg *posRepHeader,
  /* ProvidePositionReport_Pkg::Build_PosReport::packet0 */ PT0_PositionReport_T_Packet_TrainTypes_Pkg *packet0,
  /* ProvidePositionReport_Pkg::Build_PosReport::packet1 */ PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *packet1,
  /* ProvidePositionReport_Pkg::Build_PosReport::packet4 */ PT4_ErrorReporting_T_Packet_TrainTypes_Pkg *packet4,
  /* ProvidePositionReport_Pkg::Build_PosReport::packet5 */ PT5_TrainRunningNumber_Packet_TrainTypes_Pkg *packet5)
{
  /* ProvidePositionReport_Pkg::Build_PosReport */
  static kcg_bool acc;
  static kcg_int i;
  /* ProvidePositionReport_Pkg::Build_PosReport */
  static PT5_TrainRunningNumber_Packet_TrainTypes_Pkg op_call;
  /* ProvidePositionReport_Pkg::Build_PosReport */
  static PT4_ErrorReporting_T_Packet_TrainTypes_Pkg _1_op_call;
  /* ProvidePositionReport_Pkg::Build_PosReport */
  static PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg _2_op_call;
  /* ProvidePositionReport_Pkg::Build_PosReport */
  static PT0_PositionReport_T_Packet_TrainTypes_Pkg _3_op_call;
  /* ProvidePositionReport_Pkg::Build_PosReport */
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg _4_op_call;
  /* ProvidePositionReport_Pkg::Build_PosReport */
  static kcg_bool ck_every;
  static kcg_bool noname;
  /* ProvidePositionReport_Pkg::Build_PosReport::_L10 */
  static array_168990 _L10;
  /* ProvidePositionReport_Pkg::Build_PosReport::_L26 */
  static PT0_PositionReport_T_Packet_TrainTypes_Pkg _L26;
  /* ProvidePositionReport_Pkg::Build_PosReport::_L25 */
  static PT5_TrainRunningNumber_Packet_TrainTypes_Pkg _L25;
  /* ProvidePositionReport_Pkg::Build_PosReport::_L24 */
  static PT4_ErrorReporting_T_Packet_TrainTypes_Pkg _L24;
  /* ProvidePositionReport_Pkg::Build_PosReport::_L23 */
  static PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg _L23;
  /* ProvidePositionReport_Pkg::Build_PosReport::_L22 */
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg _L22;
  /* ProvidePositionReport_Pkg::Build_PosReport::_L28 */
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg _L28;
  /* ProvidePositionReport_Pkg::Build_PosReport::_L29 */
  static PT0_PositionReport_T_Packet_TrainTypes_Pkg _L29;
  /* ProvidePositionReport_Pkg::Build_PosReport::_L30 */
  static PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg _L30;
  /* ProvidePositionReport_Pkg::Build_PosReport::_L31 */
  static PT4_ErrorReporting_T_Packet_TrainTypes_Pkg _L31;
  /* ProvidePositionReport_Pkg::Build_PosReport::_L32 */
  static PT5_TrainRunningNumber_Packet_TrainTypes_Pkg _L32;
  /* ProvidePositionReport_Pkg::Build_PosReport::_L53 */
  static ErrorMessage_T_ProvidePositionReport_Pkg _L53;
  /* ProvidePositionReport_Pkg::Build_PosReport::_L56 */
  static kcg_bool _L56;
  /* ProvidePositionReport_Pkg::Build_PosReport::_L58 */
  static kcg_bool _L58;
  /* ProvidePositionReport_Pkg::Build_PosReport::_L84 */
  static ErrorMessage_T_ProvidePositionReport_Pkg _L84;
  /* ProvidePositionReport_Pkg::Build_PosReport::_L167 */
  static ErrorMessage_T_ProvidePositionReport_Pkg _L167;
  /* ProvidePositionReport_Pkg::Build_PosReport::_L168 */
  static ErrorMessage_T_ProvidePositionReport_Pkg _L168;
  /* ProvidePositionReport_Pkg::Build_PosReport::_L169 */
  static ErrorMessage_T_ProvidePositionReport_Pkg _L169;
  /* ProvidePositionReport_Pkg::Build_PosReport::_L170 */
  static ErrorMessage_T_ProvidePositionReport_Pkg _L170;
  /* ProvidePositionReport_Pkg::Build_PosReport::_L171 */
  static ErrorMessage_T_ProvidePositionReport_Pkg _L171;
  /* ProvidePositionReport_Pkg::Build_PosReport::_L172 */
  static ErrorMessage_T_ProvidePositionReport_Pkg _L172;
  /* ProvidePositionReport_Pkg::Build_PosReport::_L173 */
  static ErrorMessage_T_ProvidePositionReport_Pkg _L173;
  /* ProvidePositionReport_Pkg::Build_PosReport::_L14 */
  static trainProperties_T_TrainPosition_Types_Pck _L14;
  /* ProvidePositionReport_Pkg::Build_PosReport::_L176 */
  static PT0_PositionReport_T_Packet_TrainTypes_Pkg _L176;
  /* ProvidePositionReport_Pkg::Build_PosReport::_L177 */
  static PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg _L177;
  /* ProvidePositionReport_Pkg::Build_PosReport::_L178 */
  static T_TRAIN _L178;
  /* ProvidePositionReport_Pkg::Build_PosReport::_L179 */
  static kcg_bool _L179;
  /* ProvidePositionReport_Pkg::Build_PosReport::_L180 */
  static kcg_bool _L180;
  /* ProvidePositionReport_Pkg::Build_PosReport::_L181 */
  static kcg_bool _L181;
  
  _L181 = kcg_true;
  ck_every = _L181;
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&_L14, trainProps);
  kcg_copy_array_168990(&_L10, errorVector);
  kcg_copy_ErrorMessage_T_ProvidePositionReport_Pkg(&_L53, &_L10[0]);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&_L176, in_packet0);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(&_L177, in_packet1);
  _L178 = t_train;
  /* ck_Build_PosReport */ if (ck_every) {
    /* Build_SinglePosReport */
    Build_SinglePosReport_ProvidePositionReport_Pkg(
      &_L14,
      &_L53,
      &_L176,
      &_L177,
      _L178,
      &_4_op_call,
      &_3_op_call,
      &_2_op_call,
      &_1_op_call,
      &op_call);
  }
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
    &_L29,
    (PT0_PositionReport_T_Packet_TrainTypes_Pkg *)
      &emptyPacket0_ProvidePositionReport_Pkg);
  /* ck_Build_PosReport */ if (ck_every) {
    kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&_L26, &_3_op_call);
  }
  else {
    kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&_L26, &_L29);
  }
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(packet0, &_L26);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
    &_L30,
    (PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *)
      &emptyPacket1_ProvidePositionReport_Pkg);
  /* ck_Build_PosReport */ if (ck_every) {
    kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(&_L23, &_2_op_call);
  }
  else {
    kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(&_L23, &_L30);
  }
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(packet1, &_L23);
  kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(
    &_L31,
    (PT4_ErrorReporting_T_Packet_TrainTypes_Pkg *)
      &emptyPacket4_ProvidePositionReport_Pkg);
  /* ck_Build_PosReport */ if (ck_every) {
    kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(&_L24, &_1_op_call);
  }
  else {
    kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(&_L24, &_L31);
  }
  kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(packet4, &_L24);
  kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(
    &_L32,
    (PT5_TrainRunningNumber_Packet_TrainTypes_Pkg *)
      &emptyPacket5_ProvidePositionReport_Pkg);
  /* ck_Build_PosReport */ if (ck_every) {
    kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(&_L25, &op_call);
  }
  else {
    kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(&_L25, &_L32);
  }
  kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(packet5, &_L25);
  kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
    &_L28,
    (Radio_TrainTrack_Header_T_Radio_Types_Pkg *)
      &emptyHeader_ProvidePositionReport_Pkg);
  /* ck_Build_PosReport */ if (ck_every) {
    kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(&_L22, &_4_op_call);
  }
  else {
    kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(&_L22, &_L28);
  }
  kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(posRepHeader, &_L22);
  _L56 = kcg_false;
  _L58 = _L56;
  for (i = 0; i < 9; i++) {
    acc = _L58;
    _L58 = /* IsError */ IsError_ProvidePositionReport_Pkg(acc, &_L10[i]);
  }
  kcg_copy_ErrorMessage_T_ProvidePositionReport_Pkg(&_L84, &_L10[1]);
  /* SinglePosReport2_9 */
  SinglePosReport2_9_ProvidePositionReport_Pkg(
    &_L84,
    &_L14,
    &_L176,
    &_L177,
    _L178);
  kcg_copy_ErrorMessage_T_ProvidePositionReport_Pkg(&_L167, &_L10[2]);
  /* 1 */
  SinglePosReport2_9_ProvidePositionReport_Pkg(
    &_L167,
    &_L14,
    &_L176,
    &_L177,
    _L178);
  kcg_copy_ErrorMessage_T_ProvidePositionReport_Pkg(&_L168, &_L10[3]);
  /* 2 */
  SinglePosReport2_9_ProvidePositionReport_Pkg(
    &_L168,
    &_L14,
    &_L176,
    &_L177,
    _L178);
  kcg_copy_ErrorMessage_T_ProvidePositionReport_Pkg(&_L169, &_L10[4]);
  /* 3 */
  SinglePosReport2_9_ProvidePositionReport_Pkg(
    &_L169,
    &_L14,
    &_L176,
    &_L177,
    _L178);
  kcg_copy_ErrorMessage_T_ProvidePositionReport_Pkg(&_L170, &_L10[5]);
  /* 4 */
  SinglePosReport2_9_ProvidePositionReport_Pkg(
    &_L170,
    &_L14,
    &_L176,
    &_L177,
    _L178);
  kcg_copy_ErrorMessage_T_ProvidePositionReport_Pkg(&_L171, &_L10[6]);
  /* 5 */
  SinglePosReport2_9_ProvidePositionReport_Pkg(
    &_L171,
    &_L14,
    &_L176,
    &_L177,
    _L178);
  kcg_copy_ErrorMessage_T_ProvidePositionReport_Pkg(&_L172, &_L10[7]);
  /* 6 */
  SinglePosReport2_9_ProvidePositionReport_Pkg(
    &_L172,
    &_L14,
    &_L176,
    &_L177,
    _L178);
  kcg_copy_ErrorMessage_T_ProvidePositionReport_Pkg(&_L173, &_L10[8]);
  /* 7 */
  SinglePosReport2_9_ProvidePositionReport_Pkg(
    &_L173,
    &_L14,
    &_L176,
    &_L177,
    _L178);
  _L180 = _L53.present;
  /* 1 */ if (_L58) {
    _L179 = _L180;
  }
  else {
    _L179 = _L181;
  }
  noname = _L179;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Build_PosReport_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

