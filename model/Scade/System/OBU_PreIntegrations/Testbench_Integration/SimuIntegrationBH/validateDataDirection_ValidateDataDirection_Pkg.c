/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "validateDataDirection_ValidateDataDirection_Pkg.h"

/* ValidateDataDirection_Pkg::validateDataDirection */
void validateDataDirection_ValidateDataDirection_Pkg(
  /* ValidateDataDirection_Pkg::validateDataDirection::inMessage */ ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* ValidateDataDirection_Pkg::validateDataDirection::inLRBG */ positionedBG_T_TrainPosition_Types_Pck *inLRBG,
  /* ValidateDataDirection_Pkg::validateDataDirection::inPositionedBGs */ positionedBGs_T_TrainPosition_Types_Pck *inPositionedBGs,
  /* ValidateDataDirection_Pkg::validateDataDirection::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* ValidateDataDirection_Pkg::validateDataDirection::outMessage */ ReceivedMessage_T_Common_Types_Pkg *_11_outMessage)
{
  /* ValidateDataDirection_Pkg::validateDataDirection::trainPositionKnown */
  static kcg_bool _2_trainPositionKnown;
  /* ValidateDataDirection_Pkg::validateDataDirection::outMessage */
  static ReceivedMessage_T_Common_Types_Pkg _1_outMessage;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::then::_L36 */
  static kcg_bool _L36_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::then::_L34 */
  static ReceivedMessage_T_Common_Types_Pkg _L34_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::then::_L33 */
  static kcg_bool _L33_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::then::_L32 */
  static kcg_bool _L32_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::then::_L31 */
  static Q_DIRTRAIN _L31_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::then::_L30 */
  static ReceivedMessage_T_Common_Types_Pkg _L30_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::then::_L29 */
  static trainPosition_T_TrainPosition_Types_Pck _L29_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::then::_L1 */
  static ReceivedMessage_T_Common_Types_Pkg _L1_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::trainPositionKnown */
  static kcg_bool trainPositionKnown;
  /* ValidateDataDirection_Pkg::validateDataDirection::outMessage */
  static ReceivedMessage_T_Common_Types_Pkg outMessage;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::else::_L1 */
  static ReceivedMessage_T_Common_Types_Pkg _L19_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::outMessage */
  static ReceivedMessage_T_Common_Types_Pkg _3_outMessage;
  /* ValidateDataDirection_Pkg::validateDataDirection::trainPositionKnown */
  static kcg_bool _4_trainPositionKnown;
  /* ValidateDataDirection_Pkg::validateDataDirection::outMessage */
  static ReceivedMessage_T_Common_Types_Pkg _8_outMessage;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::IfBlock2::then::_L3 */
  static kcg_bool _L3_IfBlock1_IfBlock2;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::IfBlock2::then::_L2 */
  static ReceivedMessage_T_Common_Types_Pkg _L2_IfBlock1_IfBlock2;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::IfBlock2::then::_L1 */
  static ReceivedMessage_T_Common_Types_Pkg _L1_IfBlock1_IfBlock2;
  /* ValidateDataDirection_Pkg::validateDataDirection::outMessage */
  static ReceivedMessage_T_Common_Types_Pkg _7_outMessage;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::IfBlock2::else::_L45 */
  static ReceivedMessage_T_Common_Types_Pkg _L45_IfBlock1_IfBlock2;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::IfBlock2::else::_L46 */
  static positionedBGs_T_TrainPosition_Types_Pck _L46_IfBlock1_IfBlock2;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::IfBlock2::else::_L47 */
  static Q_DIRTRAIN _L47_IfBlock1_IfBlock2;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::IfBlock2::else::_L48 */
  static positionedBG_T_TrainPosition_Types_Pck _L48_IfBlock1_IfBlock2;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::IfBlock2::else::_L49 */
  static kcg_bool _L49_IfBlock1_IfBlock2;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::IfBlock2::else::_L50 */
  static Q_DIRTRAIN _L50_IfBlock1_IfBlock2;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::IfBlock2::else::_L51 */
  static Q_DIRTRAIN _L51_IfBlock1_IfBlock2;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::IfBlock2::else::_L52 */
  static trainPosition_T_TrainPosition_Types_Pck _L52_IfBlock1_IfBlock2;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::IfBlock2::else::_L53 */
  static ReceivedMessage_T_Common_Types_Pkg _L53_IfBlock1_IfBlock2;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::IfBlock2::else::_L54 */
  static kcg_bool _L54_IfBlock1_IfBlock2;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::IfBlock2::else::_L55 */
  static ReceivedMessage_T_Common_Types_Pkg _L55_IfBlock1_IfBlock2;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::IfBlock2::else::_L56 */
  static kcg_bool _L56_IfBlock1_IfBlock2;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::IfBlock2::else::_L57 */
  static kcg_bool _L57_IfBlock1_IfBlock2;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::IfBlock2::else::_L58 */
  static kcg_bool _L58_IfBlock1_IfBlock2;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::IfBlock2::else::_L59 */
  static kcg_bool _L59_IfBlock1_IfBlock2;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::IfBlock2 */
  static kcg_bool IfBlock2_clock_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::trainRunningDirection */
  static Q_DIRTRAIN trainRunningDirection_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::coordinateSystemAssigned */
  static kcg_bool coordinateSystemAssigned_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::correctRadioHeaderDirection */
  static kcg_bool correctRadioHeaderDirection_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::_L23 */
  static ReceivedMessage_T_Common_Types_Pkg _L23_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::_L22 */
  static positionedBG_T_TrainPosition_Types_Pck _L22_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::_L21 */
  static positionedBGs_T_TrainPosition_Types_Pck _L21_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::_L27 */
  static Q_DIRTRAIN _L27_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::_L26 */
  static kcg_bool _L26_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::_L25 */
  static Q_DIRTRAIN _L25_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::_L24 */
  static Q_DIRTRAIN _L24_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::_L116 */
  static kcg_bool _L116_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::_L115 */
  static kcg_bool _L115_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::_L113 */
  static Q_DIR _L113_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::_L112 */
  static kcg_bool _L112_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::_L111 */
  static kcg_bool _L111_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::_L109 */
  static kcg_bool _L109_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::_L107 */
  static kcg_bool _L107_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::_L106 */
  static kcg_bool _L106_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::_L105 */
  static Q_DIRTRAIN _L105_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::_L104 */
  static Q_DIRTRAIN _L104_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::_L102 */
  static kcg_bool _L102_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::_L101 */
  static kcg_bool _L101_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::_L100 */
  static kcg_bool _L100_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::_L99 */
  static kcg_bool _L99_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::_L98 */
  static Q_DIR _L98_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::_L97 */
  static kcg_bool _L97_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::_L96 */
  static Q_DIR _L96_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::_L119 */
  static Q_DIRTRAIN _L119_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::_L120 */
  static Q_DIRTRAIN _L120_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::_L123 */
  static kcg_bool _L123_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::_L122 */
  static trainPosition_T_TrainPosition_Types_Pck _L122_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::_L121 */
  static kcg_bool _L121_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::_L124 */
  static kcg_bool _L124_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::_L125 */
  static kcg_bool _L125_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::_L129 */
  static kcg_bool _L129_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::_L128 */
  static kcg_bool _L128_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::_L127 */
  static kcg_bool _L127_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::_L126 */
  static kcg_bool _L126_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::_L130 */
  static kcg_bool _L130_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::_L131 */
  static kcg_bool _L131_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::_L132 */
  static Q_DIR _L132_IfBlock1;
  /* ValidateDataDirection_Pkg::validateDataDirection::outMessage */
  static ReceivedMessage_T_Common_Types_Pkg _5_outMessage;
  /* ValidateDataDirection_Pkg::validateDataDirection::trainPositionKnown */
  static kcg_bool _6_trainPositionKnown;
  /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* ValidateDataDirection_Pkg::validateDataDirection::msgSource */
  static MsgSource_T_Common_Types_Pkg msgSource;
  /* ValidateDataDirection_Pkg::validateDataDirection::LRBGKnown */
  static kcg_bool LRBGKnown;
  /* ValidateDataDirection_Pkg::validateDataDirection::trainPositionKnown */
  static kcg_bool _10_trainPositionKnown;
  /* ValidateDataDirection_Pkg::validateDataDirection::_L5 */
  static MsgSource_T_Common_Types_Pkg _L5;
  /* ValidateDataDirection_Pkg::validateDataDirection::_L1 */
  static ReceivedMessage_T_Common_Types_Pkg _L1;
  /* ValidateDataDirection_Pkg::validateDataDirection::_L6 */
  static positionedBG_T_TrainPosition_Types_Pck _L6;
  /* ValidateDataDirection_Pkg::validateDataDirection::_L7 */
  static kcg_bool _L7;
  
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L1, inMessage);
  _L5 = _L1.source;
  msgSource = _L5;
  IfBlock1_clock = msgSource == msrc_Eurobalise_Common_Types_Pkg;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
  }
  else {
    else_clock_IfBlock1 = msgSource == msrc_Euroradio_Common_Types_Pkg;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L23_IfBlock1, inMessage);
      _L132_IfBlock1 = _L23_IfBlock1.Radio_Common_Header.q_dir;
      _L113_IfBlock1 = Q_DIR_Nominal;
      _L109_IfBlock1 = _L132_IfBlock1 == _L113_IfBlock1;
      _L105_IfBlock1 = Q_DIRTRAIN_Nominal;
      kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
        &_L21_IfBlock1,
        inPositionedBGs);
      /* 10 */
      getLRBGForRadioMessage_ValidateDataDirectionGeneral_Pkg_Subfunctions(
        &_L23_IfBlock1,
        &_L21_IfBlock1,
        &_L22_IfBlock1);
      _L26_IfBlock1 = _L22_IfBlock1.valid;
      _L27_IfBlock1 =
        _L22_IfBlock1.infoFromPassing.BG_Header.trainRunningDirectionToBG;
      _L25_IfBlock1 = Q_DIRTRAIN_Unknown;
      /* 11 */ if (_L26_IfBlock1) {
        _L24_IfBlock1 = _L27_IfBlock1;
      }
      else {
        _L24_IfBlock1 = _L25_IfBlock1;
      }
      trainRunningDirection_IfBlock1 = _L24_IfBlock1;
      _L119_IfBlock1 = trainRunningDirection_IfBlock1;
      _L116_IfBlock1 = _L105_IfBlock1 == _L119_IfBlock1;
      kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
        &_L122_IfBlock1,
        trainPosition);
      _L125_IfBlock1 = _L122_IfBlock1.valid;
      _L123_IfBlock1 = _L122_IfBlock1.trainPositionIsUnknown;
      _L121_IfBlock1 = !_L123_IfBlock1;
      _L124_IfBlock1 = _L125_IfBlock1 & _L121_IfBlock1;
      _6_trainPositionKnown = _L124_IfBlock1;
      _L100_IfBlock1 = _6_trainPositionKnown;
      _L127_IfBlock1 =
        _L22_IfBlock1.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned;
      _L128_IfBlock1 = !_L127_IfBlock1;
      _L129_IfBlock1 = kcg_false;
      /* 12 */ if (_L26_IfBlock1) {
        _L126_IfBlock1 = _L128_IfBlock1;
      }
      else {
        _L126_IfBlock1 = _L129_IfBlock1;
      }
      coordinateSystemAssigned_IfBlock1 = _L126_IfBlock1;
      _L130_IfBlock1 = coordinateSystemAssigned_IfBlock1;
    }
    else {
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L19_IfBlock1, inMessage);
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &_3_outMessage,
        &_L19_IfBlock1);
    }
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L6, inLRBG);
  _L7 = _L6.valid;
  LRBGKnown = _L7;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L1_IfBlock1, inMessage);
    _L31_IfBlock1 = _L1_IfBlock1.BG_Common_Header.trainRunningDirectionToBG;
    _L36_IfBlock1 = kcg_true;
    kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
      &_L29_IfBlock1,
      trainPosition);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L34_IfBlock1, inMessage);
    _L33_IfBlock1 =
      _L34_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned;
    _L32_IfBlock1 = !_L33_IfBlock1;
    /* 2 */
    validateDataDirection_General_ValidateDataDirectionGeneral_Pkg(
      &_L1_IfBlock1,
      _L31_IfBlock1,
      _L36_IfBlock1,
      &_L29_IfBlock1,
      _L32_IfBlock1,
      &_L30_IfBlock1);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_1_outMessage, &_L30_IfBlock1);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(_11_outMessage, &_1_outMessage);
    _2_trainPositionKnown = kcg_false;
    _10_trainPositionKnown = _2_trainPositionKnown;
  }
  else {
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      _L112_IfBlock1 = LRBGKnown;
      _L99_IfBlock1 = _L109_IfBlock1 & _L116_IfBlock1 & _L100_IfBlock1 &
        _L130_IfBlock1 & _L112_IfBlock1;
      _L98_IfBlock1 = Q_DIR_Reverse;
      _L101_IfBlock1 = _L132_IfBlock1 == _L98_IfBlock1;
      _L104_IfBlock1 = Q_DIRTRAIN_Reverse;
      _L120_IfBlock1 = trainRunningDirection_IfBlock1;
      _L111_IfBlock1 = _L104_IfBlock1 == _L120_IfBlock1;
      _L107_IfBlock1 = _6_trainPositionKnown;
      _L131_IfBlock1 = coordinateSystemAssigned_IfBlock1;
      _L115_IfBlock1 = LRBGKnown;
      _L106_IfBlock1 = _L101_IfBlock1 & _L111_IfBlock1 & _L107_IfBlock1 &
        _L131_IfBlock1 & _L115_IfBlock1;
      _L96_IfBlock1 = Q_DIR_Both_directions;
      _L102_IfBlock1 = _L132_IfBlock1 == _L96_IfBlock1;
      _L97_IfBlock1 = _L99_IfBlock1 | _L106_IfBlock1 | _L102_IfBlock1;
      correctRadioHeaderDirection_IfBlock1 = _L97_IfBlock1;
      IfBlock2_clock_IfBlock1 = ((*inMessage).radioMetadata.q_dir == kcg_true) &
        !correctRadioHeaderDirection_IfBlock1;
      /* ck_IfBlock2 */ if (IfBlock2_clock_IfBlock1) {
        kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
          &_L2_IfBlock1_IfBlock2,
          inMessage);
        _L3_IfBlock1_IfBlock2 = kcg_false;
        kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
          &_L1_IfBlock1_IfBlock2,
          &_L2_IfBlock1_IfBlock2);
        if (kcg_true) {
          _L1_IfBlock1_IfBlock2.valid = _L3_IfBlock1_IfBlock2;
        }
        kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
          &_8_outMessage,
          &_L1_IfBlock1_IfBlock2);
        kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
          &_5_outMessage,
          &_8_outMessage);
      }
      else {
        kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
          &_L45_IfBlock1_IfBlock2,
          inMessage);
        kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
          &_L53_IfBlock1_IfBlock2,
          inMessage);
        kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
          &_L46_IfBlock1_IfBlock2,
          inPositionedBGs);
        /* 6 */
        getLRBGForRadioMessage_ValidateDataDirectionGeneral_Pkg_Subfunctions(
          &_L53_IfBlock1_IfBlock2,
          &_L46_IfBlock1_IfBlock2,
          &_L48_IfBlock1_IfBlock2);
        _L54_IfBlock1_IfBlock2 = _L48_IfBlock1_IfBlock2.valid;
        _L47_IfBlock1_IfBlock2 =
          _L48_IfBlock1_IfBlock2.infoFromPassing.BG_Header.trainRunningDirectionToBG;
        _L51_IfBlock1_IfBlock2 = Q_DIRTRAIN_Unknown;
        /* 10 */ if (_L54_IfBlock1_IfBlock2) {
          _L50_IfBlock1_IfBlock2 = _L47_IfBlock1_IfBlock2;
        }
        else {
          _L50_IfBlock1_IfBlock2 = _L51_IfBlock1_IfBlock2;
        }
        _L59_IfBlock1_IfBlock2 = LRBGKnown;
        kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
          &_L52_IfBlock1_IfBlock2,
          trainPosition);
        _L49_IfBlock1_IfBlock2 =
          _L48_IfBlock1_IfBlock2.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned;
        _L58_IfBlock1_IfBlock2 = !_L49_IfBlock1_IfBlock2;
        _L57_IfBlock1_IfBlock2 = kcg_false;
        /* 9 */ if (_L54_IfBlock1_IfBlock2) {
          _L56_IfBlock1_IfBlock2 = _L58_IfBlock1_IfBlock2;
        }
        else {
          _L56_IfBlock1_IfBlock2 = _L57_IfBlock1_IfBlock2;
        }
        /* 6 */
        validateDataDirection_General_ValidateDataDirectionGeneral_Pkg(
          &_L45_IfBlock1_IfBlock2,
          _L50_IfBlock1_IfBlock2,
          _L59_IfBlock1_IfBlock2,
          &_L52_IfBlock1_IfBlock2,
          _L56_IfBlock1_IfBlock2,
          &_L55_IfBlock1_IfBlock2);
        kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
          &_7_outMessage,
          &_L55_IfBlock1_IfBlock2);
        kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
          &_5_outMessage,
          &_7_outMessage);
      }
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outMessage, &_5_outMessage);
    }
    else {
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outMessage, &_3_outMessage);
    }
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(_11_outMessage, &outMessage);
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      trainPositionKnown = _6_trainPositionKnown;
    }
    else {
      _4_trainPositionKnown = kcg_false;
      trainPositionKnown = _4_trainPositionKnown;
    }
    _10_trainPositionKnown = trainPositionKnown;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** validateDataDirection_ValidateDataDirection_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

