/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams */
kcg_bool compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams::inTelegram1 */ Telegram_T_BG_Types_Pkg *inTelegram1,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams::inTelegram2 */ Telegram_T_BG_Types_Pkg *inTelegram2)
{
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams::isEqual */
  static kcg_bool _1_isEqual;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams::IfBlock1::then::_L1 */
  static kcg_bool _L1_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams::IfBlock1::then::_L2 */
  static CompressedPackets_T_Common_Types_Pkg _L2_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams::IfBlock1::then::_L3 */
  static CompressedPackets_T_Common_Types_Pkg _L3_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams::IfBlock1::then::_L4 */
  static Telegram_T_BG_Types_Pkg _L4_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams::IfBlock1::then::_L5 */
  static Telegram_T_BG_Types_Pkg _L5_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams::isEqual */
  static kcg_bool isEqual;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams::IfBlock1::else::_L1 */
  static kcg_bool _L12_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams::HeaderIsEqual */
  static kcg_bool HeaderIsEqual;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams::_L1 */
  static Telegram_T_BG_Types_Pkg _L1;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams::_L2 */
  static Telegram_T_BG_Types_Pkg _L2;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams::_L3 */
  static TelegramHeader_T_BG_Types_Pkg _L3;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams::_L4 */
  static TelegramHeader_T_BG_Types_Pkg _L4;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams::_L5 */
  static kcg_bool _L5;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::compareTelegrams::isEqual */
  static kcg_bool _3_isEqual;
  
  kcg_copy_Telegram_T_BG_Types_Pkg(&_L1, inTelegram1);
  kcg_copy_Telegram_T_BG_Types_Pkg(&_L2, inTelegram2);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&_L3, &_L1.telegramheader);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&_L4, &_L2.telegramheader);
  _L5 = kcg_comp_TelegramHeader_T_BG_Types_Pkg(&_L3, &_L4);
  HeaderIsEqual = _L5;
  IfBlock1_clock = HeaderIsEqual;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_Telegram_T_BG_Types_Pkg(&_L5_IfBlock1, inTelegram1);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L2_IfBlock1,
      &_L5_IfBlock1.packets);
    kcg_copy_Telegram_T_BG_Types_Pkg(&_L4_IfBlock1, inTelegram2);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L3_IfBlock1,
      &_L4_IfBlock1.packets);
    _L1_IfBlock1 = kcg_comp_CompressedPackets_T_Common_Types_Pkg(
        &_L2_IfBlock1,
        &_L3_IfBlock1);
    _1_isEqual = _L1_IfBlock1;
    _3_isEqual = _1_isEqual;
  }
  else {
    _L12_IfBlock1 = kcg_false;
    isEqual = _L12_IfBlock1;
    _3_isEqual = isEqual;
  }
  return _3_isEqual;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** compareTelegrams_Receive_TrackSide_Msg_Pkg_BaliseSupport.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

