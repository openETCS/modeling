/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "nextGen_Msg136_radioOutput_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void nextGen_Msg136_init_radioOutput_Pkg(
  outC_nextGen_Msg136_radioOutput_Pkg *outC)
{
  static kcg_int i1;
  static kcg_int i;
  
  for (i1 = 0; i1 < 5; i1++) {
    outC->MessageBus_out[i1].Message.valid = kcg_true;
    outC->MessageBus_out[i1].Message.nid_message = 0;
    outC->MessageBus_out[i1].Message.l_message = 0;
    outC->MessageBus_out[i1].Message.t_train = 0;
    outC->MessageBus_out[i1].Message.nid_engine = 0;
    outC->MessageBus_out[i1].Message.field1 = 0;
    outC->MessageBus_out[i1].Message.field2 = 0;
    outC->MessageBus_out[i1].Message.field3 = 0;
    for (i = 0; i < 50; i++) {
      outC->MessageBus_out[i1].OptionalPackets[i] = 0;
    }
  }
  /* 2 */ Send_M136_init_TM_radio_messages(&outC->Context_2);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void nextGen_Msg136_reset_radioOutput_Pkg(
  outC_nextGen_Msg136_radioOutput_Pkg *outC)
{
  /* 2 */ Send_M136_reset_TM_radio_messages(&outC->Context_2);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* radioOutput_Pkg::nextGen_Msg136 */
void nextGen_Msg136_radioOutput_Pkg(
  /* radioOutput_Pkg::nextGen_Msg136::MessageBus */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* radioOutput_Pkg::nextGen_Msg136::inFromPositionReport */ Radio_TrainTrack_Message_T_Radio_Types_Pkg *inFromPositionReport,
  /* radioOutput_Pkg::nextGen_Msg136::inVersion */ M_VERSION inVersion,
  /* radioOutput_Pkg::nextGen_Msg136::inT_TRAIN */ T_TRAIN inT_TRAIN,
  outC_nextGen_Msg136_radioOutput_Pkg *outC)
{
  /* radioOutput_Pkg::nextGen_Msg136 */
  static P001_TM_TrainToTrack _1_op_call;
  /* radioOutput_Pkg::nextGen_Msg136 */
  static P000_TM_TrainToTrack op_call;
  /* radioOutput_Pkg::nextGen_Msg136::MessageBus_out */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _2_MessageBus_out;
  /* radioOutput_Pkg::nextGen_Msg136::IfBlock1::then::_L24 */
  static kcg_int _L24_IfBlock1;
  /* radioOutput_Pkg::nextGen_Msg136::IfBlock1::then::_L23 */
  static M_VERSION _L23_IfBlock1;
  /* radioOutput_Pkg::nextGen_Msg136::IfBlock1::then::_L22 */
  static T_TRAIN _L22_IfBlock1;
  /* radioOutput_Pkg::nextGen_Msg136::IfBlock1::then::_L21 */
  static P005_TM_TrainToTrack _L21_IfBlock1;
  /* radioOutput_Pkg::nextGen_Msg136::IfBlock1::then::_L20 */
  static P044_TM_TrainToTrack _L20_IfBlock1;
  /* radioOutput_Pkg::nextGen_Msg136::IfBlock1::then::_L19 */
  static PT5_TrainRunningNumber_Packet_TrainTypes_Pkg _L19_IfBlock1;
  /* radioOutput_Pkg::nextGen_Msg136::IfBlock1::then::_L18 */
  static P004_TM_TrainToTrack _L18_IfBlock1;
  /* radioOutput_Pkg::nextGen_Msg136::IfBlock1::then::_L17 */
  static PT4_ErrorReporting_T_Packet_TrainTypes_Pkg _L17_IfBlock1;
  /* radioOutput_Pkg::nextGen_Msg136::IfBlock1::then::_L13 */
  static kcg_bool _L13_IfBlock1;
  /* radioOutput_Pkg::nextGen_Msg136::IfBlock1::then::_L14 */
  static PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg _L14_IfBlock1;
  /* radioOutput_Pkg::nextGen_Msg136::IfBlock1::then::_L15 */
  static P001_TM_TrainToTrack _L15_IfBlock1;
  /* radioOutput_Pkg::nextGen_Msg136::IfBlock1::then::_L16 */
  static P001_TM_TrainToTrack _L16_IfBlock1;
  /* radioOutput_Pkg::nextGen_Msg136::IfBlock1::then::_L12 */
  static P000_TM_TrainToTrack _L12_IfBlock1;
  /* radioOutput_Pkg::nextGen_Msg136::IfBlock1::then::_L11 */
  static kcg_bool _L11_IfBlock1;
  /* radioOutput_Pkg::nextGen_Msg136::IfBlock1::then::_L10 */
  static P000_TM_TrainToTrack _L10_IfBlock1;
  /* radioOutput_Pkg::nextGen_Msg136::IfBlock1::then::_L8 */
  static PT0_PositionReport_T_Packet_TrainTypes_Pkg _L8_IfBlock1;
  /* radioOutput_Pkg::nextGen_Msg136::IfBlock1::then::_L1 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L1_IfBlock1;
  /* radioOutput_Pkg::nextGen_Msg136::IfBlock1::then::_L2 */
  static outPackets_T_Common_Types_Pkg _L2_IfBlock1;
  /* radioOutput_Pkg::nextGen_Msg136::IfBlock1::then::_L3 */
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg _L3_IfBlock1;
  /* radioOutput_Pkg::nextGen_Msg136::IfBlock1::then::_L4 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L4_IfBlock1;
  /* radioOutput_Pkg::nextGen_Msg136::IfBlock1::then::_L5 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L5_IfBlock1;
  /* radioOutput_Pkg::nextGen_Msg136::IfBlock1::then::_L6 */
  static M_136_T_TM_radio_messages _L6_IfBlock1;
  static kcg_int noname;
  /* radioOutput_Pkg::nextGen_Msg136::IfBlock1::then */
  static kcg_bool _3_ck_every;
  /* radioOutput_Pkg::nextGen_Msg136::IfBlock1::then */
  static kcg_bool ck_every;
  /* radioOutput_Pkg::nextGen_Msg136::MessageBus_out */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus MessageBus_out;
  /* radioOutput_Pkg::nextGen_Msg136::IfBlock1::else::_L1 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L110_IfBlock1;
  /* radioOutput_Pkg::nextGen_Msg136::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* radioOutput_Pkg::nextGen_Msg136::isPresent */
  static kcg_bool isPresent;
  /* radioOutput_Pkg::nextGen_Msg136::_L9 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L9;
  /* radioOutput_Pkg::nextGen_Msg136::_L8 */
  static kcg_bool _L8;
  
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &_L9,
    inFromPositionReport);
  _L8 = _L9.present;
  isPresent = _L8;
  IfBlock1_clock = isPresent;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &_L1_IfBlock1,
      inFromPositionReport);
    kcg_copy_outPackets_T_Common_Types_Pkg(
      &_L2_IfBlock1,
      &_L1_IfBlock1.packets);
    kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
      &_L14_IfBlock1,
      &_L2_IfBlock1.p1);
    _L13_IfBlock1 = _L14_IfBlock1.valid;
    ck_every = _L13_IfBlock1;
    /* ck_every */ if (ck_every) {
      /* 2 */ nextGen_P01_radioOutput_Pkg(&_L14_IfBlock1, &_1_op_call);
    }
    kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
      &_L8_IfBlock1,
      &_L2_IfBlock1.p0);
    _L11_IfBlock1 = _L8_IfBlock1.valid;
    _3_ck_every = _L11_IfBlock1;
    /* ck_every */ if (_3_ck_every) {
      /* 1 */ nextGen_P00_radioOutput_Pkg(&_L8_IfBlock1, &op_call);
    }
    _L22_IfBlock1 = inT_TRAIN;
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &_L5_IfBlock1,
      MessageBus);
    kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
      &_L3_IfBlock1,
      &_L1_IfBlock1.header);
    /* 2 */ nextGen_MsgHdr136_radioOutput_Pkg(&_L3_IfBlock1, &_L6_IfBlock1);
    kcg_copy_P000_TM_TrainToTrack(
      &_L12_IfBlock1,
      (P000_TM_TrainToTrack *) &noP000_radioOutput_Pkg);
    /* ck_every */ if (_3_ck_every) {
      kcg_copy_P000_TM_TrainToTrack(&_L10_IfBlock1, &op_call);
    }
    else {
      kcg_copy_P000_TM_TrainToTrack(&_L10_IfBlock1, &_L12_IfBlock1);
    }
    kcg_copy_P001_TM_TrainToTrack(
      &_L15_IfBlock1,
      (P001_TM_TrainToTrack *) &noP001_radioOutput_Pkg);
    /* ck_every */ if (ck_every) {
      kcg_copy_P001_TM_TrainToTrack(&_L16_IfBlock1, &_1_op_call);
    }
    else {
      kcg_copy_P001_TM_TrainToTrack(&_L16_IfBlock1, &_L15_IfBlock1);
    }
    kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(
      &_L17_IfBlock1,
      &_L2_IfBlock1.p4);
    /* 1 */ nextGen_P04_radioOutput_Pkg(&_L17_IfBlock1, &_L18_IfBlock1);
    kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(
      &_L19_IfBlock1,
      &_L2_IfBlock1.p5);
    /* 1 */ nextGen_P05_radioOutput_Pkg(&_L19_IfBlock1, &_L21_IfBlock1);
    kcg_copy_P044_TM_TrainToTrack(
      &_L20_IfBlock1,
      (P044_TM_TrainToTrack *) &noP044_radioOutput_Pkg);
    _L23_IfBlock1 = inVersion;
    /* 2 */
    Send_M136_TM_radio_messages(
      _L22_IfBlock1,
      &_L5_IfBlock1,
      &_L6_IfBlock1,
      &_L10_IfBlock1,
      &_L16_IfBlock1,
      &_L18_IfBlock1,
      &_L21_IfBlock1,
      &_L20_IfBlock1,
      _L23_IfBlock1,
      &outC->Context_2);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &_L4_IfBlock1,
      &outC->Context_2.MessageBus_out);
    _L24_IfBlock1 = outC->Context_2.t_train_assigned;
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &_2_MessageBus_out,
      &_L4_IfBlock1);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->MessageBus_out,
      &_2_MessageBus_out);
    noname = _L24_IfBlock1;
  }
  else {
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &_L110_IfBlock1,
      MessageBus);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &MessageBus_out,
      &_L110_IfBlock1);
    kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
      &outC->MessageBus_out,
      &MessageBus_out);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** nextGen_Msg136_radioOutput_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

