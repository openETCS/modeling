/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck */
void simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck::iteratorIndex */ kcg_int iteratorIndex,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck::accu */ kcg_bool accu,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck::telegram */ Telegram_T_BG_Types_Pkg *telegram,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck::which_pig */ N_PIG which_pig,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck::cont */ kcg_bool *cont,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck::telegramAlreadyInGroup */ kcg_bool *telegramAlreadyInGroup)
{
  static kcg_int noname;
  static kcg_bool _1_noname;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck::_L5 */
  static kcg_bool _L5;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck::_L2 */
  static kcg_bool _L2;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck::_L3 */
  static N_PIG _L3;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck::_L1 */
  static Telegram_T_BG_Types_Pkg _L1;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck::_L8 */
  static kcg_int _L8;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck::_L12 */
  static kcg_bool _L12;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck::_L13 */
  static kcg_bool _L13;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck::_L14 */
  static kcg_bool _L14;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck::_L15 */
  static N_PIG _L15;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck::_L16 */
  static kcg_bool _L16;
  
  kcg_copy_Telegram_T_BG_Types_Pkg(&_L1, telegram);
  _L15 = _L1.telegramheader.n_pig;
  _L3 = which_pig;
  _L5 = _L15 == _L3;
  _L2 = _L1.valid;
  _L8 = iteratorIndex;
  _L12 = _L2 & _L5;
  *telegramAlreadyInGroup = _L12;
  _L14 = !_L12;
  _L13 = _L2 & _L14;
  *cont = _L13;
  noname = _L8;
  _L16 = accu;
  _1_noname = _L16;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

