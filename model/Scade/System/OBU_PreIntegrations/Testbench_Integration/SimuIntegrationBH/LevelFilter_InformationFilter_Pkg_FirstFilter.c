/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "LevelFilter_InformationFilter_Pkg_FirstFilter.h"

/* InformationFilter_Pkg::FirstFilter::LevelFilter */
void LevelFilter_InformationFilter_Pkg_FirstFilter(
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inPendingL1Transition */ kcg_bool inPendingL1Transition,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inPendingL2L3Transition */ kcg_bool inPendingL2L3Transition,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inPendingAckOfTrainData */ kcg_bool inPendingAckOfTrainData,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inEmergencyStopAccepted */ kcg_bool inEmergencyStopAccepted,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inLastAckTextMessageId */ kcg_int inLastAckTextMessageId,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inPendingNTCTransition */ kcg_bool inPendingNTCTransition,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inSPPAndGradientOnBoard */ kcg_bool inSPPAndGradientOnBoard,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inMACoverNotFullLength */ kcg_bool inMACoverNotFullLength,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inLevel */ M_LEVEL inLevel,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inPacketOrigin */ MsgSource_T_Common_Types_Pkg inPacketOrigin,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::inPacketId */ kcg_int inPacketId,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::outStoreInTransitionBuffer */ kcg_bool *outStoreInTransitionBuffer,
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::outPacketAccept */ kcg_bool *outPacketAccept)
{
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::row */
  static kcg_int row;
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::column */
  static kcg_int column;
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::_L2 */
  static M_LEVEL _L2;
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::_L3 */
  static LevelDecisionTableActionKind_DataDictionary_Pkg _L3;
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::_L4 */
  static LevelDecisionTableType_DataDictionary_Pkg _L4;
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::_L5 */
  static LevelDecisionTableType_DataDictionary_Pkg _L5;
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::_L6 */
  static LevelDecisionTableActionKind_DataDictionary_Pkg _L6;
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::_L10 */
  static LevelDecisionTableActionKind_DataDictionary_Pkg _L10;
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::_L14 */
  static MsgSource_T_Common_Types_Pkg _L14;
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::_L11 */
  static kcg_bool _L11;
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::_L16 */
  static kcg_bool _L16;
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::_L17 */
  static kcg_int _L17;
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::_L18 */
  static kcg_int _L18;
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::_L20 */
  static kcg_int _L20;
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::_L21 */
  static kcg_int _L21;
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::_L22 */
  static kcg_int _L22;
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::_L23 */
  static kcg_int _L23;
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::_L24 */
  static kcg_int _L24;
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::_L25 */
  static MsgSource_T_Common_Types_Pkg _L25;
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::_L28 */
  static kcg_bool _L28;
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::_L29 */
  static kcg_bool _L29;
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::_L30 */
  static kcg_bool _L30;
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::_L31 */
  static kcg_bool _L31;
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::_L32 */
  static kcg_bool _L32;
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::_L33 */
  static kcg_int _L33;
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::_L34 */
  static kcg_bool _L34;
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::_L35 */
  static kcg_bool _L35;
  /* InformationFilter_Pkg::FirstFilter::LevelFilter::_L36 */
  static kcg_bool _L36;
  
  _L25 = inPacketOrigin;
  _L14 = msrc_Euroradio_Common_Types_Pkg;
  _L11 = _L25 == _L14;
  kcg_copy_LevelDecisionTableType_DataDictionary_Pkg(
    &_L5,
    (LevelDecisionTableType_DataDictionary_Pkg *)
      &LevelDecisionTableFromRBC_DataDictionary_Pkg);
  _L18 = inPacketId;
  _L17 = /* 1 */ MapPacketIdToRow_InformationFilter_Pkg(_L18);
  row = _L17;
  _L21 = row;
  _L2 = inLevel;
  _L22 = /* 1 */ MapLevelToColumn_InformationFilter_Pkg(_L2);
  column = _L22;
  _L24 = column;
  if ((0 <= _L21) & (_L21 < 256) & ((0 <= _L24) & (_L24 < 5))) {
    _L6 = _L5[_L21][_L24];
  }
  else {
    _L6 = LD_Invalid_DataDictionary_Pkg;
  }
  kcg_copy_LevelDecisionTableType_DataDictionary_Pkg(
    &_L4,
    (LevelDecisionTableType_DataDictionary_Pkg *)
      &LevelDecisionTableFromBalise_DataDictionary_Pkg);
  _L20 = row;
  _L23 = column;
  if ((0 <= _L20) & (_L20 < 256) & ((0 <= _L23) & (_L23 < 5))) {
    _L3 = _L4[_L20][_L23];
  }
  else {
    _L3 = LD_Invalid_DataDictionary_Pkg;
  }
  /* 1 */ if (_L11) {
    _L10 = _L6;
  }
  else {
    _L10 = _L3;
  }
  _L29 = inPendingL1Transition;
  _L30 = inPendingL2L3Transition;
  _L31 = inPendingAckOfTrainData;
  _L32 = inEmergencyStopAccepted;
  _L33 = inLastAckTextMessageId;
  _L34 = inPendingNTCTransition;
  _L35 = inSPPAndGradientOnBoard;
  _L36 = inMACoverNotFullLength;
  /* 1 */
  CheckLevelExceptions_InformationFilter_Pkg_FirstFilter(
    _L10,
    _L29,
    _L30,
    _L31,
    _L32,
    _L33,
    _L34,
    _L35,
    _L36,
    &_L16,
    &_L28);
  *outPacketAccept = _L16;
  *outStoreInTransitionBuffer = _L28;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** LevelFilter_InformationFilter_Pkg_FirstFilter.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

