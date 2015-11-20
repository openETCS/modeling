/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "manageTelegram_Receive_TrackSide_Msg_Pkg.h"

/* Receive_TrackSide_Msg_Pkg::manageTelegram */
void manageTelegram_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::newTelegram */ Telegram_T_BG_Types_Pkg *newTelegram,
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::incenterOfBalisePosition */ centerOfBalisePosition_T_BG_Types_Pkg *incenterOfBalisePosition,
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::inCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg *inCollector,
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::inoldTelegramArray */ TelegramArray_T_BG_Types_Pkg *inoldTelegramArray,
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::outBGisComplete */ kcg_bool *outBGisComplete,
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::outBGisChangedEarly */ kcg_bool *outBGisChangedEarly,
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::outCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg *outCollector,
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::outTelegramArray */ TelegramArray_T_BG_Types_Pkg *outTelegramArray,
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::outStoresChanged */ kcg_bool *outStoresChanged)
{
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::isNotReceivedAlready */
  static kcg_bool isNotReceivedAlready;
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::needsReplace */
  static kcg_bool needsReplace;
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::_L6 */
  static Telegram_T_BG_Types_Pkg _L6;
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::_L11 */
  static kcg_bool _L11;
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::_L10 */
  static kcg_bool _L10;
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::_L47 */
  static centerOfBalisePosition_T_BG_Types_Pkg _L47;
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::_L51 */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg _L51;
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::_L54 */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg _L54;
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::_L53 */
  static kcg_bool _L53;
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::_L58 */
  static TelegramArray_T_BG_Types_Pkg _L58;
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::_L60 */
  static TelegramArray_T_BG_Types_Pkg _L60;
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::_L63 */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg _L63;
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::_L64 */
  static TelegramArray_T_BG_Types_Pkg _L64;
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::_L65 */
  static kcg_bool _L65;
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::_L66 */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg _L66;
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::_L67 */
  static kcg_bool _L67;
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::_L68 */
  static kcg_bool _L68;
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::_L69 */
  static kcg_bool _L69;
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::_L70 */
  static kcg_bool _L70;
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::_L72 */
  static kcg_bool _L72;
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::_L73 */
  static kcg_bool _L73;
  
  kcg_copy_Telegram_T_BG_Types_Pkg(&_L6, newTelegram);
  kcg_copy_TelegramArray_T_BG_Types_Pkg(&_L60, inoldTelegramArray);
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(&_L51, inCollector);
  /* 1 */ checkInit_Receive_TrackSide_Msg_Pkg(&_L6, &_L51, &_L66);
  /* 1 */
  checkTelegram_Receive_TrackSide_Msg_Pkg(
    &_L6,
    &_L60,
    &_L66,
    &_L63,
    &_L64,
    &_L10,
    &_L11);
  isNotReceivedAlready = _L10;
  _L69 = isNotReceivedAlready;
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &_L47,
    incenterOfBalisePosition);
  /* 4 */
  addTelegram_Receive_TrackSide_Msg_Pkg(
    &_L6,
    &_L63,
    &_L64,
    _L69,
    &_L47,
    &_L54,
    &_L58,
    &_L53,
    &_L67);
  _L65 = _L53 | _L11;
  *outBGisComplete = _L65;
  *outBGisChangedEarly = _L11;
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(outCollector, &_L54);
  kcg_copy_TelegramArray_T_BG_Types_Pkg(outTelegramArray, &_L58);
  _L70 = isNotReceivedAlready;
  _L73 = !_L67;
  needsReplace = _L73;
  _L72 = needsReplace;
  _L68 = _L70 | _L72;
  *outStoresChanged = _L68;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** manageTelegram_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

