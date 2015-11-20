/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "splitInputData_Handover_Pkg_handoverUtils_Pkg.h"

/* Handover_Pkg::handoverUtils_Pkg::splitInputData */
void splitInputData_Handover_Pkg_handoverUtils_Pkg(
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::dataFromTrack_in */ msgFromTrack_T_RCM_MsgTypes_Pkg *dataFromTrack_in,
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::useInformationFromAcceptingRBC */ kcg_bool useInformationFromAcceptingRBC,
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::handingOverMobile_is_mobile_1 */ kcg_bool handingOverMobile_is_mobile_1,
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::morcStatus_1 */ morcStatus_T_RCM_Session_Types_Pkg *morcStatus_1,
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::morcStatus_2 */ morcStatus_T_RCM_Session_Types_Pkg *morcStatus_2,
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::sessionManagementAbility */ abilityToHandleCommunicationSessions_Handover_Pkg sessionManagementAbility,
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::dataFromHandingOverMobile */ msgFromTrack_T_RCM_MsgTypes_Pkg *_12_dataFromHandingOverMobile,
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::dataFromAcceptingMobile */ msgFromTrack_T_RCM_MsgTypes_Pkg *_11_dataFromAcceptingMobile,
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::dataFromBalise */ msgFromTrack_T_RCM_MsgTypes_Pkg *_10_dataFromBalise,
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::dataFromTrack_out */ msgFromTrack_T_RCM_MsgTypes_Pkg *_9_dataFromTrack_out)
{
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::morcStatusFromAcceptingMobile */
  static morcStatus_T_RCM_Session_Types_Pkg _6_morcStatusFromAcceptingMobile;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::morcStatusFromHandingOverMobile */
  static morcStatus_T_RCM_Session_Types_Pkg _5_morcStatusFromHandingOverMobile;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::dataFromTrack_out */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _4_dataFromTrack_out;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::dataFromBalise */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _3_dataFromBalise;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::dataFromAcceptingMobile */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _2_dataFromAcceptingMobile;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::dataFromHandingOverMobile */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _1_dataFromHandingOverMobile;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::then::_L47 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L47_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::then::_L46 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L46_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::then::_L45 */
  static kcg_bool _L45_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::then::_L44 */
  static kcg_bool _L44_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::then::_L43 */
  static kcg_bool _L43_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::then::_L42 */
  static MsgSource_T_Common_Types_Pkg _L42_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::then::_L41 */
  static MsgSource_T_Common_Types_Pkg _L41_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::then::_L40 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L40_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::then::_L28 */
  static kcg_bool _L28_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::then::_L29 */
  static kcg_bool _L29_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::then::_L30 */
  static kcg_bool _L30_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::then::_L32 */
  static kcg_bool _L32_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::then::_L33 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L33_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::then::_L34 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L34_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::then::_L36 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L36_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::then::_L37 */
  static MsgSource_T_Common_Types_Pkg _L37_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::then::_L27 */
  static morcStatus_T_RCM_Session_Types_Pkg _L27_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::then::_L26 */
  static morcStatus_T_RCM_Session_Types_Pkg _L26_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::then::_L25 */
  static morcStatus_T_RCM_Session_Types_Pkg _L25_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::then::_L24 */
  static morcStatus_T_RCM_Session_Types_Pkg _L24_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::then::_L21 */
  static kcg_bool _L21_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::morcStatusFromAcceptingMobile */
  static morcStatus_T_RCM_Session_Types_Pkg morcStatusFromAcceptingMobile;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::morcStatusFromHandingOverMobile */
  static morcStatus_T_RCM_Session_Types_Pkg morcStatusFromHandingOverMobile;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::dataFromTrack_out */
  static msgFromTrack_T_RCM_MsgTypes_Pkg dataFromTrack_out;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::dataFromBalise */
  static msgFromTrack_T_RCM_MsgTypes_Pkg dataFromBalise;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::dataFromAcceptingMobile */
  static msgFromTrack_T_RCM_MsgTypes_Pkg dataFromAcceptingMobile;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::dataFromHandingOverMobile */
  static msgFromTrack_T_RCM_MsgTypes_Pkg dataFromHandingOverMobile;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L157 */
  static kcg_bool _L157_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L156 */
  static kcg_bool _L156_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L155 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L155_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L154 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L154_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L153 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L153_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L149 */
  static sessionStatus_T_RCM_Session_Types_Pkg _L149_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L148 */
  static kcg_bool _L148_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L147 */
  static NID_RBC _L147_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L144 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L144_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L142 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L142_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L141 */
  static kcg_bool _L141_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L140 */
  static kcg_bool _L140_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L89 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L89_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L127 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L127_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L125 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L125_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L120 */
  static kcg_bool _L120_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L119 */
  static kcg_bool _L119_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L118 */
  static MsgSource_T_Common_Types_Pkg _L118_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L117 */
  static morcStatus_T_RCM_Session_Types_Pkg _L117_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L105 */
  static kcg_bool _L105_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L107 */
  static kcg_bool _L107_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L108 */
  static NID_C _L108_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L109 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L109_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L110 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L110_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L111 */
  static kcg_bool _L111_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L112 */
  static NID_RBC _L112_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L113 */
  static sessionPhase_T_RCM_Session_Types_Pkg _L113_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L115 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L115_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L116 */
  static kcg_bool _L116_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L67 */
  static kcg_bool _L67_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L80 */
  static MsgSource_T_Common_Types_Pkg _L80_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L81 */
  static MsgSource_T_Common_Types_Pkg _L81_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L82 */
  static kcg_bool _L82_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L83 */
  static kcg_bool _L83_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L84 */
  static RBC_Id_T_Common_Types_Pkg _L84_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L86 */
  static NID_C _L86_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L90 */
  static NID_C _L90_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L91 */
  static NID_RBC _L91_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L96 */
  static kcg_bool _L96_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L97 */
  static kcg_bool _L97_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L98 */
  static kcg_bool _L98_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L99 */
  static kcg_bool _L99_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L100 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L100_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L102 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L102_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L101 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L101_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L88 */
  static morcStatus_T_RCM_Session_Types_Pkg _L88_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L66 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L66_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L61 */
  static morcStatus_T_RCM_Session_Types_Pkg _L61_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L62 */
  static morcStatus_T_RCM_Session_Types_Pkg _L62_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L63 */
  static kcg_bool _L63_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L64 */
  static morcStatus_T_RCM_Session_Types_Pkg _L64_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1::else::_L65 */
  static morcStatus_T_RCM_Session_Types_Pkg _L65_IfBlock1;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::morcStatusFromHandingOverMobile */
  static morcStatus_T_RCM_Session_Types_Pkg _8_morcStatusFromHandingOverMobile;
  /* Handover_Pkg::handoverUtils_Pkg::splitInputData::morcStatusFromAcceptingMobile */
  static morcStatus_T_RCM_Session_Types_Pkg _7_morcStatusFromAcceptingMobile;
  
  IfBlock1_clock = sessionManagementAbility ==
    isAbleToManageOneSession_Handover_Pkg;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L45_IfBlock1 = useInformationFromAcceptingRBC;
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &_L34_IfBlock1,
      (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L36_IfBlock1, dataFromTrack_in);
    _L41_IfBlock1 = _L36_IfBlock1.source;
    _L42_IfBlock1 = msrc_Euroradio_Common_Types_Pkg;
    _L44_IfBlock1 = _L41_IfBlock1 == _L42_IfBlock1;
    _L28_IfBlock1 = _L36_IfBlock1.valid;
    _L43_IfBlock1 = _L44_IfBlock1 & _L28_IfBlock1;
    /* 38 */ if (_L43_IfBlock1) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L40_IfBlock1, &_L36_IfBlock1);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L40_IfBlock1, &_L34_IfBlock1);
    }
    /* 39 */ if (_L45_IfBlock1) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L46_IfBlock1, &_L34_IfBlock1);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L46_IfBlock1, &_L40_IfBlock1);
    }
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &_1_dataFromHandingOverMobile,
      &_L46_IfBlock1);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      _12_dataFromHandingOverMobile,
      &_1_dataFromHandingOverMobile);
    /* 40 */ if (_L45_IfBlock1) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L47_IfBlock1, &_L40_IfBlock1);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L47_IfBlock1, &_L34_IfBlock1);
    }
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &_2_dataFromAcceptingMobile,
      &_L47_IfBlock1);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      _11_dataFromAcceptingMobile,
      &_2_dataFromAcceptingMobile);
    _L29_IfBlock1 = _L36_IfBlock1.BG_Common_Header.valid;
    _L37_IfBlock1 = msrc_Eurobalise_Common_Types_Pkg;
    _L30_IfBlock1 = _L37_IfBlock1 == _L41_IfBlock1;
    _L32_IfBlock1 = _L29_IfBlock1 & _L30_IfBlock1 & _L28_IfBlock1;
    /* 37 */ if (_L32_IfBlock1) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L33_IfBlock1, &_L36_IfBlock1);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L33_IfBlock1, &_L34_IfBlock1);
    }
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &_3_dataFromBalise,
      &_L33_IfBlock1);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      _10_dataFromBalise,
      &_3_dataFromBalise);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &_4_dataFromTrack_out,
      &_L36_IfBlock1);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      _9_dataFromTrack_out,
      &_4_dataFromTrack_out);
    _L21_IfBlock1 = handingOverMobile_is_mobile_1;
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&_L24_IfBlock1, morcStatus_1);
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&_L25_IfBlock1, morcStatus_2);
    /* 28 */ if (_L21_IfBlock1) {
      kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
        &_L26_IfBlock1,
        &_L24_IfBlock1);
    }
    else {
      kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
        &_L26_IfBlock1,
        &_L25_IfBlock1);
    }
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &_5_morcStatusFromHandingOverMobile,
      &_L26_IfBlock1);
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &_8_morcStatusFromHandingOverMobile,
      &_5_morcStatusFromHandingOverMobile);
    /* 29 */ if (_L21_IfBlock1) {
      kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
        &_L27_IfBlock1,
        &_L25_IfBlock1);
    }
    else {
      kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
        &_L27_IfBlock1,
        &_L24_IfBlock1);
    }
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &_6_morcStatusFromAcceptingMobile,
      &_L27_IfBlock1);
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &_7_morcStatusFromAcceptingMobile,
      &_6_morcStatusFromAcceptingMobile);
  }
  else {
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L66_IfBlock1, dataFromTrack_in);
    _L67_IfBlock1 = _L66_IfBlock1.valid;
    _L80_IfBlock1 = _L66_IfBlock1.source;
    _L81_IfBlock1 = msrc_Euroradio_Common_Types_Pkg;
    _L82_IfBlock1 = _L80_IfBlock1 == _L81_IfBlock1;
    kcg_copy_RBC_Id_T_Common_Types_Pkg(
      &_L84_IfBlock1,
      &_L66_IfBlock1.sendingRBC);
    _L148_IfBlock1 = _L84_IfBlock1.valid;
    _L63_IfBlock1 = handingOverMobile_is_mobile_1;
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&_L62_IfBlock1, morcStatus_1);
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&_L64_IfBlock1, morcStatus_2);
    /* 31 */ if (_L63_IfBlock1) {
      kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
        &_L61_IfBlock1,
        &_L62_IfBlock1);
    }
    else {
      kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
        &_L61_IfBlock1,
        &_L64_IfBlock1);
    }
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &morcStatusFromHandingOverMobile,
      &_L61_IfBlock1);
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &_L88_IfBlock1,
      &morcStatusFromHandingOverMobile);
    kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
      &_L149_IfBlock1,
      &_L88_IfBlock1.session);
    _L156_IfBlock1 = _L149_IfBlock1.valid;
    _L83_IfBlock1 = _L67_IfBlock1 & _L82_IfBlock1 & _L148_IfBlock1 &
      _L156_IfBlock1;
    _L89_IfBlock1 = _L149_IfBlock1.phase;
    _L153_IfBlock1 = sp_maintaining_RCM_Session_Types_Pkg;
    _L96_IfBlock1 = _L89_IfBlock1 == _L153_IfBlock1;
    _L90_IfBlock1 = _L149_IfBlock1.nid_c;
    _L86_IfBlock1 = _L84_IfBlock1.nid_c;
    _L97_IfBlock1 = _L90_IfBlock1 == _L86_IfBlock1;
    _L147_IfBlock1 = _L84_IfBlock1.rbc_id;
    _L91_IfBlock1 = _L149_IfBlock1.nid_rbc;
    _L98_IfBlock1 = _L147_IfBlock1 == _L91_IfBlock1;
    _L99_IfBlock1 = _L83_IfBlock1 & _L96_IfBlock1 & _L97_IfBlock1 &
      _L98_IfBlock1;
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L101_IfBlock1, dataFromTrack_in);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &_L102_IfBlock1,
      (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
    /* 32 */ if (_L99_IfBlock1) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &_L100_IfBlock1,
        &_L101_IfBlock1);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &_L100_IfBlock1,
        &_L102_IfBlock1);
    }
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &dataFromHandingOverMobile,
      &_L100_IfBlock1);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      _12_dataFromHandingOverMobile,
      &dataFromHandingOverMobile);
    /* 30 */ if (_L63_IfBlock1) {
      kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
        &_L65_IfBlock1,
        &_L64_IfBlock1);
    }
    else {
      kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
        &_L65_IfBlock1,
        &_L62_IfBlock1);
    }
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &morcStatusFromAcceptingMobile,
      &_L65_IfBlock1);
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &_L117_IfBlock1,
      &morcStatusFromAcceptingMobile);
    kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(
      &_L154_IfBlock1,
      &_L117_IfBlock1.session);
    _L113_IfBlock1 = _L154_IfBlock1.phase;
    _L155_IfBlock1 = sp_maintaining_RCM_Session_Types_Pkg;
    _L111_IfBlock1 = _L113_IfBlock1 == _L155_IfBlock1;
    _L108_IfBlock1 = _L154_IfBlock1.nid_c;
    _L107_IfBlock1 = _L86_IfBlock1 == _L108_IfBlock1;
    _L112_IfBlock1 = _L154_IfBlock1.nid_rbc;
    _L116_IfBlock1 = _L147_IfBlock1 == _L112_IfBlock1;
    _L157_IfBlock1 = _L154_IfBlock1.valid;
    _L105_IfBlock1 = _L83_IfBlock1 & _L111_IfBlock1 & _L107_IfBlock1 &
      _L116_IfBlock1 & _L157_IfBlock1;
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L110_IfBlock1, dataFromTrack_in);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &_L115_IfBlock1,
      (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
    /* 33 */ if (_L105_IfBlock1) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &_L109_IfBlock1,
        &_L110_IfBlock1);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &_L109_IfBlock1,
        &_L115_IfBlock1);
    }
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &dataFromAcceptingMobile,
      &_L109_IfBlock1);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      _11_dataFromAcceptingMobile,
      &dataFromAcceptingMobile);
    _L140_IfBlock1 = _L66_IfBlock1.BG_Common_Header.valid;
    _L118_IfBlock1 = msrc_Eurobalise_Common_Types_Pkg;
    _L119_IfBlock1 = _L118_IfBlock1 == _L80_IfBlock1;
    _L120_IfBlock1 = _L140_IfBlock1 & _L119_IfBlock1 & _L67_IfBlock1;
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &_L127_IfBlock1,
      (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
    /* 34 */ if (_L120_IfBlock1) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L125_IfBlock1, &_L66_IfBlock1);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &_L125_IfBlock1,
        &_L127_IfBlock1);
    }
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&dataFromBalise, &_L125_IfBlock1);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      _10_dataFromBalise,
      &dataFromBalise);
    _L141_IfBlock1 = useInformationFromAcceptingRBC;
    /* 35 */ if (_L141_IfBlock1) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &_L142_IfBlock1,
        &_L109_IfBlock1);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &_L142_IfBlock1,
        &_L100_IfBlock1);
    }
    /* 36 */ if (_L120_IfBlock1) {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &_L144_IfBlock1,
        &_L125_IfBlock1);
    }
    else {
      kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
        &_L144_IfBlock1,
        &_L142_IfBlock1);
    }
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      &dataFromTrack_out,
      &_L144_IfBlock1);
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
      _9_dataFromTrack_out,
      &dataFromTrack_out);
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &_8_morcStatusFromHandingOverMobile,
      &morcStatusFromHandingOverMobile);
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(
      &_7_morcStatusFromAcceptingMobile,
      &morcStatusFromAcceptingMobile);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** splitInputData_Handover_Pkg_handoverUtils_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

