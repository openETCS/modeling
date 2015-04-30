/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
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
  BGCollector_T_Receive_TrackSide_Msg_Pkg tmp;
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::newBGInitNeeded */ kcg_bool newBGInitNeeded;
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::_L36 */ kcg_bool _L36;
  /* Receive_TrackSide_Msg_Pkg::checkTelegram::_L63 */ kcg_bool _L63;
  
  _L36 = (*newTelegram).telegramheader.nid_bg == (*BGCollector).BG_ID;
  _L63 = !_L36 & ((*BGCollector).totalTelegrams > 0);
  newBGInitNeeded = _L63 & (*BGCollector).BGMessageSent;
  if (newBGInitNeeded) {
    /* 1 */
    initCollector_Receive_TrackSide_Msg_Pkg_BaliseSupport(newTelegram, &tmp);
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      outTelegramArray,
      (TelegramArray_T_BG_Types_Pkg *) &cEmptyHeaderArray_bigConstants_Pkg);
  }
  else {
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(&tmp, BGCollector);
    kcg_copy_TelegramArray_T_BG_Types_Pkg(outTelegramArray, inTelegramArray);
  }
  /* 1 */
  checkSingleBB_Receive_TrackSide_Msg_Pkg_BaliseSupport(
    newTelegram,
    &tmp,
    outCollector);
  *outBGchangedEarly = _L63 & !(*BGCollector).BGMessageSent;
  *outTelegramNotInGroup = !/* 1 */
    findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport(
      (*newTelegram).telegramheader.n_pig,
      outTelegramArray,
      (kcg_bool) ((*newTelegram).valid & _L36));
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** checkTelegram_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

