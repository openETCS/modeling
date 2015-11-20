/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram */
kcg_bool findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram::which_pig */ N_PIG which_pig,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram::HeaderArray */ TelegramArray_T_BG_Types_Pkg *HeaderArray,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram::doSearch */ kcg_bool doSearch)
{
  static kcg_int i1;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram */
  static kcg_bool acc;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram */
  static kcg_bool cond_iterw;
  static kcg_int i;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram::telegramAlreadyInGroup */
  static kcg_bool _2_telegramAlreadyInGroup;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram::IfBlock1::then::_L2 */
  static TelegramArray_T_BG_Types_Pkg _L2_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram::IfBlock1::then::_L3 */
  static array_168531 _L3_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram::IfBlock1::then::_L5 */
  static kcg_bool _L5_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram::IfBlock1::then::_L4 */
  static kcg_int _L4_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram::IfBlock1::then::_L6 */
  static kcg_bool _L6_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram::IfBlock1::then::_L7 */
  static N_PIG _L7_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram::IfBlock1::then::_L9 */
  static kcg_bool _L9_IfBlock1;
  static kcg_int noname;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram::telegramAlreadyInGroup */
  static kcg_bool telegramAlreadyInGroup;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram::IfBlock1::else::_L2 */
  static kcg_bool _L23_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram::valid */
  static kcg_bool valid;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram::_L30 */
  static TelegramArray_T_BG_Types_Pkg _L30;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram::_L31 */
  static kcg_bool _L31;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram::telegramAlreadyInGroup */
  static kcg_bool _4_telegramAlreadyInGroup;
  
  kcg_copy_TelegramArray_T_BG_Types_Pkg(&_L30, HeaderArray);
  _L31 = _L30[0].valid;
  valid = _L31;
  IfBlock1_clock = valid;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L9_IfBlock1 = kcg_true;
    kcg_copy_TelegramArray_T_BG_Types_Pkg(&_L2_IfBlock1, HeaderArray);
    _L7_IfBlock1 = which_pig;
    /* pow */ for (i1 = 0; i1 < 8; i1++) {
      _L3_IfBlock1[i1] = _L7_IfBlock1;
    }
    _L6_IfBlock1 = doSearch;
    _L5_IfBlock1 = _L9_IfBlock1;
    if (_L6_IfBlock1) {
      for (i = 0; i < 8; i++) {
        acc = _L5_IfBlock1;
        /* 7 */
        simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport(
          i,
          acc,
          &_L2_IfBlock1[i],
          _L3_IfBlock1[i],
          &cond_iterw,
          &_L5_IfBlock1);
        _L4_IfBlock1 = i + 1;
        if (!cond_iterw) {
          break;
        }
      }
    }
    else {
      _L4_IfBlock1 = 0;
    }
    _2_telegramAlreadyInGroup = _L5_IfBlock1;
    _4_telegramAlreadyInGroup = _2_telegramAlreadyInGroup;
    noname = _L4_IfBlock1;
  }
  else {
    _L23_IfBlock1 = kcg_false;
    telegramAlreadyInGroup = _L23_IfBlock1;
    _4_telegramAlreadyInGroup = telegramAlreadyInGroup;
  }
  return _4_telegramAlreadyInGroup;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

