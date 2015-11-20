/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkTelegram_Receive_TrackSide_Msg_Pkg.h"

/* Receive_TrackSide_Msg_Pkg::checkTelegram */
void checkTelegram_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::newTelegram */ Telegram_T_BG_Types_Pkg *newTelegram,
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::inTelegramArray */ TelegramArray_T_BG_Types_Pkg *inTelegramArray,
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::BGCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg *BGCollector,
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::outCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg *outCollector,
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::outTelegramArray */ TelegramArray_T_BG_Types_Pkg *outTelegramArray,
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::outTelegramNotInGroup */ kcg_bool *outTelegramNotInGroup,
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::outBGchangedEarly */ kcg_bool *outBGchangedEarly)
{
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::newBGInitNeeded */
  static kcg_bool newBGInitNeeded;
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::_L2 */
  static Telegram_T_BG_Types_Pkg _L2;
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::_L4 */
  static kcg_bool _L4;
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::_L31 */
  static kcg_bool _L31;
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::_L32 */
  static NID_BG _L32;
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::_L36 */
  static kcg_bool _L36;
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::_L40 */
  static TelegramArray_T_BG_Types_Pkg _L40;
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::_L41 */
  static kcg_bool _L41;
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::_L55 */
  static N_PIG _L55;
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::_L56 */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg _L56;
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::_L61 */
  static NID_BG _L61;
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::_L62 */
  static kcg_bool _L62;
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::_L63 */
  static kcg_bool _L63;
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::_L64 */
  static kcg_int _L64;
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::_L65 */
  static kcg_bool _L65;
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::_L66 */
  static kcg_int _L66;
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::_L67 */
  static kcg_bool _L67;
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::_L68 */
  static kcg_bool _L68;
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::_L69 */
  static TelegramArray_T_BG_Types_Pkg _L69;
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::_L70 */
  static kcg_bool _L70;
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::_L73 */
  static kcg_bool _L73;
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::_L72 */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg _L72;
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::_L74 */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg _L74;
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::_L86 */
  static kcg_bool _L86;
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::_L87 */
  static kcg_bool _L87;
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::_L88 */
  static kcg_bool _L88;
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::_L92 */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg _L92;
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::_L93 */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg _L93;
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::_L94 */
  static TelegramArray_T_BG_Types_Pkg _L94;
  
  kcg_copy_Telegram_T_BG_Types_Pkg(&_L2, newTelegram);
  _L4 = _L2.valid;
  _L32 = _L2.telegramheader.nid_bg;
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(&_L56, BGCollector);
  _L61 = _L56.BG_ID;
  _L36 = _L32 == _L61;
  _L31 = _L4 & _L36;
  _L55 = _L2.telegramheader.n_pig;
  _L62 = !_L36;
  _L64 = _L56.totalTelegrams;
  _L66 = 0;
  _L65 = _L64 > _L66;
  _L63 = _L62 & _L65;
  _L67 = _L56.BGMessageSent;
  _L68 = _L63 & _L67;
  newBGInitNeeded = _L68;
  _L70 = newBGInitNeeded;
  kcg_copy_TelegramArray_T_BG_Types_Pkg(
    &_L94,
    (TelegramArray_T_BG_Types_Pkg *) &cEmptyTelegramArray_BG_Types_Pkg);
  kcg_copy_TelegramArray_T_BG_Types_Pkg(&_L40, inTelegramArray);
  /* 1 */ if (_L70) {
    kcg_copy_TelegramArray_T_BG_Types_Pkg(&_L69, &_L94);
  }
  else {
    kcg_copy_TelegramArray_T_BG_Types_Pkg(&_L69, &_L40);
  }
  _L41 = /* 1 */
    findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport(_L55, &_L69, _L31);
  _L86 = !_L41;
  *outTelegramNotInGroup = _L86;
  _L87 = !_L67;
  _L88 = _L63 & _L87;
  *outBGchangedEarly = _L88;
  _L73 = newBGInitNeeded;
  /* 1 */ initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport(&_L2, &_L92);
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(&_L74, BGCollector);
  /* 2 */ if (_L73) {
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(&_L72, &_L92);
  }
  else {
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(&_L72, &_L74);
  }
  /* 1 */
  checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport(&_L2, &_L72, &_L93);
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(outCollector, &_L93);
  kcg_copy_TelegramArray_T_BG_Types_Pkg(outTelegramArray, &_L69);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** checkTelegram_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

