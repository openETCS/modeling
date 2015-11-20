/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SinglePosReport2_9_ProvidePositionReport_Pkg.h"

/* ProvidePositionReport_Pkg::SinglePosReport2_9 */
void SinglePosReport2_9_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::SinglePosReport2_9::errMessage */ ErrorMessage_T_ProvidePositionReport_Pkg *errMessage,
  /* ProvidePositionReport_Pkg::SinglePosReport2_9::trainProps */ trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* ProvidePositionReport_Pkg::SinglePosReport2_9::in_packet0 */ PT0_PositionReport_T_Packet_TrainTypes_Pkg *in_packet0,
  /* ProvidePositionReport_Pkg::SinglePosReport2_9::in_packet1 */ PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *in_packet1,
  /* ProvidePositionReport_Pkg::SinglePosReport2_9::t_train */ T_TRAIN t_train)
{
  /* ProvidePositionReport_Pkg::SinglePosReport2_9 */
  static PT5_TrainRunningNumber_Packet_TrainTypes_Pkg op_call;
  /* ProvidePositionReport_Pkg::SinglePosReport2_9 */
  static PT4_ErrorReporting_T_Packet_TrainTypes_Pkg _1_op_call;
  /* ProvidePositionReport_Pkg::SinglePosReport2_9 */
  static PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg _2_op_call;
  /* ProvidePositionReport_Pkg::SinglePosReport2_9 */
  static PT0_PositionReport_T_Packet_TrainTypes_Pkg _3_op_call;
  /* ProvidePositionReport_Pkg::SinglePosReport2_9 */
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg _4_op_call;
  /* ProvidePositionReport_Pkg::SinglePosReport2_9 */
  static kcg_bool ck_every;
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg noname;
  static PT0_PositionReport_T_Packet_TrainTypes_Pkg _5_noname;
  static PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg _6_noname;
  static PT4_ErrorReporting_T_Packet_TrainTypes_Pkg _7_noname;
  static PT5_TrainRunningNumber_Packet_TrainTypes_Pkg _8_noname;
  /* ProvidePositionReport_Pkg::SinglePosReport2_9::_L2 */
  static ErrorMessage_T_ProvidePositionReport_Pkg _L2;
  /* ProvidePositionReport_Pkg::SinglePosReport2_9::_L4 */
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg _L4;
  /* ProvidePositionReport_Pkg::SinglePosReport2_9::_L5 */
  static PT0_PositionReport_T_Packet_TrainTypes_Pkg _L5;
  /* ProvidePositionReport_Pkg::SinglePosReport2_9::_L6 */
  static PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg _L6;
  /* ProvidePositionReport_Pkg::SinglePosReport2_9::_L7 */
  static PT4_ErrorReporting_T_Packet_TrainTypes_Pkg _L7;
  /* ProvidePositionReport_Pkg::SinglePosReport2_9::_L8 */
  static PT5_TrainRunningNumber_Packet_TrainTypes_Pkg _L8;
  /* ProvidePositionReport_Pkg::SinglePosReport2_9::_L9 */
  static PT5_TrainRunningNumber_Packet_TrainTypes_Pkg _L9;
  /* ProvidePositionReport_Pkg::SinglePosReport2_9::_L10 */
  static PT0_PositionReport_T_Packet_TrainTypes_Pkg _L10;
  /* ProvidePositionReport_Pkg::SinglePosReport2_9::_L11 */
  static PT4_ErrorReporting_T_Packet_TrainTypes_Pkg _L11;
  /* ProvidePositionReport_Pkg::SinglePosReport2_9::_L12 */
  static PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg _L12;
  /* ProvidePositionReport_Pkg::SinglePosReport2_9::_L13 */
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg _L13;
  /* ProvidePositionReport_Pkg::SinglePosReport2_9::_L14 */
  static kcg_bool _L14;
  /* ProvidePositionReport_Pkg::SinglePosReport2_9::_L23 */
  static trainProperties_T_TrainPosition_Types_Pck _L23;
  /* ProvidePositionReport_Pkg::SinglePosReport2_9::_L24 */
  static PT0_PositionReport_T_Packet_TrainTypes_Pkg _L24;
  /* ProvidePositionReport_Pkg::SinglePosReport2_9::_L25 */
  static PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg _L25;
  /* ProvidePositionReport_Pkg::SinglePosReport2_9::_L26 */
  static T_TRAIN _L26;
  
  kcg_copy_ErrorMessage_T_ProvidePositionReport_Pkg(&_L2, errMessage);
  _L14 = _L2.present;
  ck_every = _L14;
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&_L23, trainProps);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&_L24, in_packet0);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(&_L25, in_packet1);
  _L26 = t_train;
  /* ck_SinglePosReport2_9 */ if (ck_every) {
    /* 3 */
    Build_SinglePosReport_ProvidePositionReport_Pkg(
      &_L23,
      &_L2,
      &_L24,
      &_L25,
      _L26,
      &_4_op_call,
      &_3_op_call,
      &_2_op_call,
      &_1_op_call,
      &op_call);
  }
  kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(
    &_L9,
    (PT5_TrainRunningNumber_Packet_TrainTypes_Pkg *)
      &emptyPacket5_ProvidePositionReport_Pkg);
  /* ck_SinglePosReport2_9 */ if (ck_every) {
    kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(&_L8, &op_call);
  }
  else {
    kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(&_L8, &_L9);
  }
  kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(
    &_L11,
    (PT4_ErrorReporting_T_Packet_TrainTypes_Pkg *)
      &emptyPacket4_ProvidePositionReport_Pkg);
  /* ck_SinglePosReport2_9 */ if (ck_every) {
    kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(&_L7, &_1_op_call);
  }
  else {
    kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(&_L7, &_L11);
  }
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
    &_L12,
    (PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *)
      &emptyPacket1_ProvidePositionReport_Pkg);
  /* ck_SinglePosReport2_9 */ if (ck_every) {
    kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(&_L6, &_2_op_call);
  }
  else {
    kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(&_L6, &_L12);
  }
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
    &_L10,
    (PT0_PositionReport_T_Packet_TrainTypes_Pkg *)
      &emptyPacket0_ProvidePositionReport_Pkg);
  /* ck_SinglePosReport2_9 */ if (ck_every) {
    kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&_L5, &_3_op_call);
  }
  else {
    kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&_L5, &_L10);
  }
  kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
    &_L13,
    (Radio_TrainTrack_Header_T_Radio_Types_Pkg *)
      &emptyHeader_ProvidePositionReport_Pkg);
  /* ck_SinglePosReport2_9 */ if (ck_every) {
    kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(&_L4, &_4_op_call);
  }
  else {
    kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(&_L4, &_L13);
  }
  kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(&noname, &_L4);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&_5_noname, &_L5);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(&_6_noname, &_L6);
  kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(&_7_noname, &_L7);
  kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(&_8_noname, &_L8);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SinglePosReport2_9_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

