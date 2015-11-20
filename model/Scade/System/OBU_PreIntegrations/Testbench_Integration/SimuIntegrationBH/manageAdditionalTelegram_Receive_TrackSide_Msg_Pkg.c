/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg.h"

/* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram */
void manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::inDecodedTelegram */ Telegram_T_BG_Types_Pkg *inDecodedTelegram,
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::incenterOfBalisePosition */ centerOfBalisePosition_T_BG_Types_Pkg *incenterOfBalisePosition,
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::inTelegramStore */ TelegramStore_T_Receive_TrackSide_Msg_Pkg *inTelegramStore,
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::inputTelegramPresent */ kcg_bool inputTelegramPresent,
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::outputPresent */ kcg_bool *outputPresent,
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::outDecodedTelegram */ Telegram_T_BG_Types_Pkg *outDecodedTelegram,
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::outcenterOfBalisePosition */ centerOfBalisePosition_T_BG_Types_Pkg *outcenterOfBalisePosition,
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::outNeedStore */ kcg_bool *outNeedStore)
{
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::storeValid */
  static kcg_bool storeValid;
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::_L52 */
  static kcg_bool _L52;
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::_L51 */
  static kcg_bool _L51;
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::_L21 */
  static centerOfBalisePosition_T_BG_Types_Pkg _L21;
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::_L7 */
  static Telegram_T_BG_Types_Pkg _L7;
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::_L26 */
  static kcg_bool _L26;
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::_L20 */
  static Telegram_T_BG_Types_Pkg _L20;
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::_L22 */
  static kcg_bool _L22;
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::_L46 */
  static TelegramStore_T_Receive_TrackSide_Msg_Pkg _L46;
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::_L19 */
  static centerOfBalisePosition_T_BG_Types_Pkg _L19;
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::_L18 */
  static Telegram_T_BG_Types_Pkg _L18;
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::_L17 */
  static kcg_bool _L17;
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::_L9 */
  static centerOfBalisePosition_T_BG_Types_Pkg _L9;
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::_L28 */
  static kcg_bool _L28;
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::_L27 */
  static kcg_bool _L27;
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::_L55 */
  static kcg_bool _L55;
  
  kcg_copy_TelegramStore_T_Receive_TrackSide_Msg_Pkg(&_L46, inTelegramStore);
  _L17 = _L46.valid;
  storeValid = _L17;
  _L51 = storeValid;
  _L55 = inputTelegramPresent;
  _L52 = _L51 & _L55;
  *outNeedStore = _L52;
  _L22 = storeValid;
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(&_L19, &_L46.position);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &_L9,
    incenterOfBalisePosition);
  /* 2 */ if (_L22) {
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(&_L21, &_L19);
  }
  else {
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(&_L21, &_L9);
  }
  kcg_copy_Telegram_T_BG_Types_Pkg(&_L7, inDecodedTelegram);
  _L26 = storeValid;
  kcg_copy_Telegram_T_BG_Types_Pkg(&_L18, &_L46.telegram);
  /* 1 */ if (_L26) {
    kcg_copy_Telegram_T_BG_Types_Pkg(&_L20, &_L18);
  }
  else {
    kcg_copy_Telegram_T_BG_Types_Pkg(&_L20, &_L7);
  }
  kcg_copy_Telegram_T_BG_Types_Pkg(outDecodedTelegram, &_L20);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    outcenterOfBalisePosition,
    &_L21);
  _L28 = storeValid;
  _L27 = _L55 | _L28;
  *outputPresent = _L27;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

