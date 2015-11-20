/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram */
void replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::newTelegram */ Telegram_T_BG_Types_Pkg *newTelegram,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::inTelegramArray */ Telegram_T_BG_Types_Pkg *inTelegramArray,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::cont */ kcg_bool *cont,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::outTelegrams */ Telegram_T_BG_Types_Pkg *outTelegrams,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::outIsDuplicate */ kcg_bool *outIsDuplicate)
{
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram */
  static kcg_bool op_call;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram */
  static kcg_bool ck_every;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::doReplace */
  static kcg_bool doReplace;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::_L1 */
  static Telegram_T_BG_Types_Pkg _L1;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::_L2 */
  static Telegram_T_BG_Types_Pkg _L2;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::_L3 */
  static kcg_bool _L3;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::_L4 */
  static Telegram_T_BG_Types_Pkg _L4;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::_L6 */
  static N_PIG _L6;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::_L7 */
  static N_PIG _L7;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::_L8 */
  static kcg_bool _L8;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::_L9 */
  static kcg_bool _L9;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::_L10 */
  static kcg_bool _L10;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::_L11 */
  static kcg_bool _L11;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::_L12 */
  static kcg_bool _L12;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::_L13 */
  static kcg_bool _L13;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::_L14 */
  static kcg_bool _L14;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::_L15 */
  static kcg_bool _L15;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::_L16 */
  static kcg_bool _L16;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::_L17 */
  static Telegram_T_BG_Types_Pkg _L17;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::_L18 */
  static Telegram_T_BG_Types_Pkg _L18;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::_L19 */
  static kcg_bool _L19;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::replaceTelegram::_L20 */
  static kcg_bool _L20;
  
  kcg_copy_Telegram_T_BG_Types_Pkg(&_L2, inTelegramArray);
  _L3 = _L2.valid;
  _L7 = _L2.telegramheader.n_pig;
  kcg_copy_Telegram_T_BG_Types_Pkg(&_L1, newTelegram);
  _L6 = _L1.telegramheader.n_pig;
  _L8 = _L7 == _L6;
  _L9 = _L3 & _L8;
  doReplace = _L9;
  _L19 = doReplace;
  ck_every = _L19;
  kcg_copy_Telegram_T_BG_Types_Pkg(&_L17, newTelegram);
  kcg_copy_Telegram_T_BG_Types_Pkg(&_L18, inTelegramArray);
  /* ck_replaceTelegram */ if (ck_every) {
    op_call = /* 1 */
      compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport(&_L17, &_L18);
  }
  _L10 = doReplace;
  _L11 = !_L10;
  /* 1 */ if (_L11) {
    kcg_copy_Telegram_T_BG_Types_Pkg(&_L4, &_L2);
  }
  else {
    kcg_copy_Telegram_T_BG_Types_Pkg(&_L4, &_L1);
  }
  kcg_copy_Telegram_T_BG_Types_Pkg(outTelegrams, &_L4);
  _L12 = _L2.valid;
  _L13 = doReplace;
  _L14 = !_L13;
  _L15 = _L12 & _L14;
  *cont = _L15;
  _L20 = kcg_false;
  /* ck_replaceTelegram */ if (ck_every) {
    _L16 = op_call;
  }
  else {
    _L16 = _L20;
  }
  *outIsDuplicate = _L16;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

