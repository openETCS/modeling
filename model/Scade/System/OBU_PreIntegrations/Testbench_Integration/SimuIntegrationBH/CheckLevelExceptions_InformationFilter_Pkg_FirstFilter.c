/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckLevelExceptions_InformationFilter_Pkg_FirstFilter.h"

/* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions */
void CheckLevelExceptions_InformationFilter_Pkg_FirstFilter(
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::inAction */ LevelDecisionTableActionKind_DataDictionary_Pkg inAction,
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::inPendingL1Transition */ kcg_bool inPendingL1Transition,
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::inPendingL2L3Transition */ kcg_bool inPendingL2L3Transition,
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::inPendingAckOfTrainData */ kcg_bool inPendingAckOfTrainData,
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::inEmergencyBrakeActive */ kcg_bool inEmergencyBrakeActive,
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::inLastAckTextMessageId */ kcg_int inLastAckTextMessageId,
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::inPendingNTCTransition */ kcg_bool inPendingNTCTransition,
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::inSPPAndGradientOnBoard */ kcg_bool inSPPAndGradientOnBoard,
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::MACoverNotFullLength */ kcg_bool MACoverNotFullLength,
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::outAccept */ kcg_bool *outAccept,
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::outStoreInTransitionBuffer */ kcg_bool *outStoreInTransitionBuffer)
{
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e01m */
  static kcg_bool e01m;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e01b */
  static kcg_bool e01b;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e02m */
  static kcg_bool e02m;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e02b */
  static kcg_bool e02b;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e03m */
  static kcg_bool e03m;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e03b */
  static kcg_bool e03b;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e05m */
  static kcg_bool e05m;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e05b */
  static kcg_bool e05b;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e06m */
  static kcg_bool e06m;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e06b */
  static kcg_bool e06b;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e07m */
  static kcg_bool e07m;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e07b */
  static kcg_bool e07b;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e09m */
  static kcg_bool e09m;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e09b */
  static kcg_bool e09b;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e11m */
  static kcg_bool e11m;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e11b */
  static kcg_bool e11b;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e12m */
  static kcg_bool e12m;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e12b */
  static kcg_bool e12b;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e04b */
  static kcg_bool e04b;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e04m */
  static kcg_bool e04m;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e13m */
  static kcg_bool e13m;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e13b */
  static kcg_bool e13b;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e0102m */
  static kcg_bool e0102m;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e0102b */
  static kcg_bool e0102b;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e030405m */
  static kcg_bool e030405m;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::e030405b */
  static kcg_bool e030405b;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L11 */
  static kcg_bool _L11;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L13 */
  static kcg_bool _L13;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L14 */
  static kcg_bool _L14;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L24 */
  static kcg_bool _L24;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L25 */
  static kcg_bool _L25;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L26 */
  static kcg_bool _L26;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L27 */
  static kcg_bool _L27;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L28 */
  static kcg_int _L28;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L29 */
  static kcg_bool _L29;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L31 */
  static kcg_bool _L31;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L30 */
  static kcg_bool _L30;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L33 */
  static kcg_bool _L33;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L35 */
  static kcg_bool _L35;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L34 */
  static kcg_bool _L34;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L37 */
  static kcg_bool _L37;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L36 */
  static kcg_bool _L36;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L39 */
  static kcg_bool _L39;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L38 */
  static kcg_bool _L38;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L41 */
  static kcg_bool _L41;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L40 */
  static kcg_bool _L40;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L66 */
  static kcg_bool _L66;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L65 */
  static kcg_bool _L65;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L75 */
  static LevelDecisionTableActionKind_DataDictionary_Pkg _L75;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L76 */
  static LevelDecisionTableActionKind_DataDictionary_Pkg _L76;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L77 */
  static kcg_bool _L77;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L78 */
  static kcg_bool _L78;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L79 */
  static kcg_bool _L79;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L80 */
  static kcg_bool _L80;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L81 */
  static kcg_bool _L81;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L82 */
  static kcg_bool _L82;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L84 */
  static kcg_bool _L84;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L85 */
  static kcg_bool _L85;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L90 */
  static kcg_bool _L90;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L92 */
  static kcg_bool _L92;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L93 */
  static kcg_bool _L93;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L94 */
  static kcg_bool _L94;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L95 */
  static kcg_bool _L95;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L96 */
  static kcg_bool _L96;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L97 */
  static kcg_bool _L97;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L98 */
  static kcg_bool _L98;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L99 */
  static kcg_bool _L99;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L100 */
  static kcg_bool _L100;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L103 */
  static kcg_bool _L103;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L104 */
  static kcg_bool _L104;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L112 */
  static kcg_bool _L112;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L111 */
  static kcg_bool _L111;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L114 */
  static kcg_bool _L114;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L113 */
  static kcg_bool _L113;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L116 */
  static kcg_bool _L116;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L115 */
  static kcg_bool _L115;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L118 */
  static kcg_bool _L118;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L117 */
  static kcg_bool _L117;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L119 */
  static kcg_bool _L119;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L120 */
  static kcg_int _L120;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L121 */
  static kcg_bool _L121;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L122 */
  static kcg_bool _L122;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L123 */
  static kcg_bool _L123;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L124 */
  static kcg_bool _L124;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L125 */
  static kcg_bool _L125;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L126 */
  static kcg_bool _L126;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L127 */
  static kcg_bool _L127;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L128 */
  static kcg_bool _L128;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L130 */
  static kcg_bool _L130;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L131 */
  static kcg_bool _L131;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L132 */
  static kcg_bool _L132;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L133 */
  static kcg_bool _L133;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L134 */
  static kcg_bool _L134;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L136 */
  static kcg_bool _L136;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L135 */
  static kcg_bool _L135;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L138 */
  static kcg_bool _L138;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L137 */
  static kcg_bool _L137;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L139 */
  static kcg_bool _L139;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L141 */
  static kcg_bool _L141;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L142 */
  static kcg_bool _L142;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L143 */
  static kcg_bool _L143;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L144 */
  static kcg_bool _L144;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L145 */
  static kcg_bool _L145;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L146 */
  static kcg_bool _L146;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L147 */
  static kcg_bool _L147;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L148 */
  static kcg_bool _L148;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L149 */
  static kcg_bool _L149;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L150 */
  static kcg_bool _L150;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L151 */
  static kcg_bool _L151;
  /* InformationFilter_Pkg::FirstFilter::CheckLevelExceptions::_L152 */
  static kcg_bool _L152;
  
  _L75 = inAction;
  _L13 = kcg_true;
  _L14 = kcg_false;
  _L84 = kcg_false;
  _L24 = inPendingL1Transition;
  /* 2 */
  Exception01StoreOnboardIfPendingL1Transition_InformationFilter_Pkg_FirstFilter(
    _L24,
    &_L30,
    &_L31);
  e01m = _L30;
  _L77 = e01m;
  _L25 = inPendingL2L3Transition;
  /* 2 */
  Exception02StoreOnboardIfPendingL2L3Transition_InformationFilter_Pkg_FirstFilter(
    _L25,
    &_L34,
    &_L35);
  e02m = _L34;
  _L78 = e02m;
  _L26 = inPendingAckOfTrainData;
  /* 2 */
  Exception03RejectIfPendingAckOfTrainData_InformationFilter_Pkg_FirstFilter(
    _L26,
    &_L36,
    &_L37);
  e03m = _L36;
  _L79 = e03m;
  _L132 = inSPPAndGradientOnBoard;
  _L133 = MACoverNotFullLength;
  /* 1 */
  Exception04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength_InformationFilter_Pkg_FirstFilter(
    _L132,
    _L133,
    &_L127,
    &_L128);
  e04m = _L127;
  _L130 = e04m;
  _L27 = inEmergencyBrakeActive;
  /* 2 */
  Exception05RejectIfEmergencyStopAccepted_InformationFilter_Pkg_FirstFilter(
    _L27,
    &_L38,
    &_L39);
  e05m = _L38;
  _L80 = e05m;
  _L29 = inPendingNTCTransition;
  /* 2 */
  Exception06StoreOnboardIfPendingNTCTransition_InformationFilter_Pkg_FirstFilter(
    _L29,
    &_L40,
    &_L41);
  e06m = _L40;
  _L81 = e06m;
  /* 1 */
  Exception07RejectIfNoPendingNTCTransition_InformationFilter_Pkg_FirstFilter(
    _L29,
    &_L65,
    &_L66);
  e07m = _L65;
  _L82 = e07m;
  _L90 = kcg_false;
  _L119 = kcg_false;
  /* 1 */
  Exception09RejectIfNoL2L3TransitionIsStored_InformationFilter_Pkg_FirstFilter(
    _L119,
    &_L111,
    &_L112);
  e09m = _L111;
  _L121 = e09m;
  _L85 = kcg_false;
  /* 1 */
  Exception11RejectIfPendingTransition_InformationFilter_Pkg_FirstFilter(
    _L119,
    _L24,
    _L25,
    &_L113,
    &_L114);
  e11m = _L113;
  _L124 = e11m;
  _L120 = 0;
  _L28 = inLastAckTextMessageId;
  /* 1 */
  Exception12RejectIfTextMessageAckPending_InformationFilter_Pkg_FirstFilter(
    _L120,
    _L28,
    &_L115,
    &_L116);
  e12m = _L115;
  _L125 = e12m;
  /* 1 */
  Exception13RejectIfNotWithImmediateL1L2L3Transition_InformationFilter_Pkg_FirstFilter(
    _L119,
    &_L117,
    &_L118);
  e13m = _L117;
  _L152 = e13m;
  _L145 = inPendingL1Transition;
  _L146 = inPendingL2L3Transition;
  /* 1 */
  Exception0102StoreOnboardIfPendingTransition_InformationFilter_Pkg_FirstFilter(
    _L145,
    _L146,
    &_L135,
    &_L136);
  e0102m = _L135;
  _L144 = e0102m;
  _L147 = inPendingAckOfTrainData;
  _L148 = inSPPAndGradientOnBoard;
  _L149 = MACoverNotFullLength;
  _L150 = inEmergencyBrakeActive;
  /* 1 */
  Exception030405Reject_InformationFilter_Pkg_FirstFilter(
    _L147,
    _L148,
    _L149,
    _L150,
    &_L137,
    &_L138);
  e030405m = _L137;
  _L143 = e030405m;
  _L134 = kcg_false;
  switch (_L75) {
    case LD_Accept_DataDictionary_Pkg :
      _L11 = _L13;
      break;
    case LD_Reject_DataDictionary_Pkg :
      _L11 = _L14;
      break;
    case LD_NotRelevant_DataDictionary_Pkg :
      _L11 = _L84;
      break;
    case LD_01StoreIfPendingL1Transition_DataDictionary_Pkg :
      _L11 = _L77;
      break;
    case LD_02StoreIfPendingL2L3Transition_DataDictionary_Pkg :
      _L11 = _L78;
      break;
    case LD_03RejectIfPendingAckOfTrainData_DataDictionary_Pkg :
      _L11 = _L79;
      break;
    case LD_04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength_DataDictionary_Pkg :
      _L11 = _L130;
      break;
    case LD_05RejectIfEmergencyBrakeActive_DataDictionary_Pkg :
      _L11 = _L80;
      break;
    case LD_06StoreIfPendingNTCTransition_DataDictionary_Pkg :
      _L11 = _L81;
      break;
    case LD_07RejectIfNoPendingNTCTransition_DataDictionary_Pkg :
      _L11 = _L82;
      break;
    case LD_08InhibitionOfRevocableTSR_DataDictionary_Pkg :
      _L11 = _L90;
      break;
    case LD_09RejectIfNoL2L3TransitionStored_DataDictionary_Pkg :
      _L11 = _L121;
      break;
    case LD_10ReferredLRBGWithDifferentPreviousLRBG_DataDictionary_Pkg :
      _L11 = _L85;
      break;
    case LD_11LevelTransitionOrderInSameMessage_DataDictionary_Pkg :
      _L11 = _L124;
      break;
    case LD_12RejectIfSameMessageWithDriverAck_DataDictionary_Pkg :
      _L11 = _L125;
      break;
    case LD_13RejectIfNotTogetherWithImmediateLevelTransitionOrder_DataDictionary_Pkg :
      _L11 = _L152;
      break;
    case LD_0102StoreIfPendingLevelTransition_DataDictionary_Pkg :
      _L11 = _L144;
      break;
    case LD_030405Reject_DataDictionary_Pkg :
      _L11 = _L143;
      break;
    case LD_Invalid_DataDictionary_Pkg :
      _L11 = _L134;
      break;
    
  }
  *outAccept = _L11;
  _L76 = inAction;
  _L92 = kcg_false;
  _L93 = kcg_false;
  _L94 = kcg_false;
  e01b = _L31;
  _L95 = e01b;
  e02b = _L35;
  _L96 = e02b;
  e03b = _L37;
  _L97 = e03b;
  e04b = _L128;
  _L131 = e04b;
  e05b = _L39;
  _L98 = e05b;
  e06b = _L41;
  _L99 = e06b;
  e07b = _L66;
  _L100 = e07b;
  _L103 = kcg_false;
  e09b = _L112;
  _L122 = e09b;
  _L104 = kcg_false;
  e11b = _L114;
  _L123 = e11b;
  e12b = _L116;
  _L126 = e12b;
  e13b = _L118;
  _L151 = e13b;
  e0102b = _L136;
  _L142 = e0102b;
  e030405b = _L138;
  _L141 = e030405b;
  _L139 = kcg_false;
  switch (_L76) {
    case LD_Accept_DataDictionary_Pkg :
      _L33 = _L92;
      break;
    case LD_Reject_DataDictionary_Pkg :
      _L33 = _L93;
      break;
    case LD_NotRelevant_DataDictionary_Pkg :
      _L33 = _L94;
      break;
    case LD_01StoreIfPendingL1Transition_DataDictionary_Pkg :
      _L33 = _L95;
      break;
    case LD_02StoreIfPendingL2L3Transition_DataDictionary_Pkg :
      _L33 = _L96;
      break;
    case LD_03RejectIfPendingAckOfTrainData_DataDictionary_Pkg :
      _L33 = _L97;
      break;
    case LD_04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength_DataDictionary_Pkg :
      _L33 = _L131;
      break;
    case LD_05RejectIfEmergencyBrakeActive_DataDictionary_Pkg :
      _L33 = _L98;
      break;
    case LD_06StoreIfPendingNTCTransition_DataDictionary_Pkg :
      _L33 = _L99;
      break;
    case LD_07RejectIfNoPendingNTCTransition_DataDictionary_Pkg :
      _L33 = _L100;
      break;
    case LD_08InhibitionOfRevocableTSR_DataDictionary_Pkg :
      _L33 = _L103;
      break;
    case LD_09RejectIfNoL2L3TransitionStored_DataDictionary_Pkg :
      _L33 = _L122;
      break;
    case LD_10ReferredLRBGWithDifferentPreviousLRBG_DataDictionary_Pkg :
      _L33 = _L104;
      break;
    case LD_11LevelTransitionOrderInSameMessage_DataDictionary_Pkg :
      _L33 = _L123;
      break;
    case LD_12RejectIfSameMessageWithDriverAck_DataDictionary_Pkg :
      _L33 = _L126;
      break;
    case LD_13RejectIfNotTogetherWithImmediateLevelTransitionOrder_DataDictionary_Pkg :
      _L33 = _L151;
      break;
    case LD_0102StoreIfPendingLevelTransition_DataDictionary_Pkg :
      _L33 = _L142;
      break;
    case LD_030405Reject_DataDictionary_Pkg :
      _L33 = _L141;
      break;
    case LD_Invalid_DataDictionary_Pkg :
      _L33 = _L139;
      break;
    
  }
  *outStoreInTransitionBuffer = _L33;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CheckLevelExceptions_InformationFilter_Pkg_FirstFilter.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

