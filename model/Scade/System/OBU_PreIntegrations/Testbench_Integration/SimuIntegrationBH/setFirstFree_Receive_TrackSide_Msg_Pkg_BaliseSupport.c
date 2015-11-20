/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::setFirstFree */
void setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::setFirstFree::newTelegram */ Telegram_T_BG_Types_Pkg *newTelegram,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::setFirstFree::inTelegramArray */ Telegram_T_BG_Types_Pkg *inTelegramArray,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::setFirstFree::cont */ kcg_bool *cont,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::setFirstFree::outTelegrams */ Telegram_T_BG_Types_Pkg *outTelegrams)
{
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::setFirstFree::_L1 */
  static Telegram_T_BG_Types_Pkg _L1;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::setFirstFree::_L2 */
  static Telegram_T_BG_Types_Pkg _L2;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::setFirstFree::_L4 */
  static Telegram_T_BG_Types_Pkg _L4;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::setFirstFree::_L14 */
  static kcg_bool _L14;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::setFirstFree::_L15 */
  static kcg_bool _L15;
  
  kcg_copy_Telegram_T_BG_Types_Pkg(&_L1, newTelegram);
  kcg_copy_Telegram_T_BG_Types_Pkg(&_L2, inTelegramArray);
  _L14 = _L2.valid;
  _L15 = !_L14;
  /* 1 */ if (_L15) {
    kcg_copy_Telegram_T_BG_Types_Pkg(&_L4, &_L1);
  }
  else {
    kcg_copy_Telegram_T_BG_Types_Pkg(&_L4, &_L2);
  }
  kcg_copy_Telegram_T_BG_Types_Pkg(outTelegrams, &_L4);
  *cont = _L14;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

