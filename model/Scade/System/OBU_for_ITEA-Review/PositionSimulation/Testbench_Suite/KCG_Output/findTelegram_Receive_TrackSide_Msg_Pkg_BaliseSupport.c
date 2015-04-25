/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
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
  kcg_bool tmp1;
  kcg_bool tmp;
  kcg_int i;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram::telegramAlreadyInGroup */ kcg_bool telegramAlreadyInGroup;
  
  if ((*HeaderArray)[0].valid) {
    telegramAlreadyInGroup = kcg_true;
    if (doSearch) {
      for (i = 0; i < 4; i++) {
        tmp1 = telegramAlreadyInGroup;
        /* 7 */
        simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport(
          i,
          tmp1,
          &(*HeaderArray)[i],
          which_pig,
          &tmp,
          &telegramAlreadyInGroup);
        if (!tmp) {
          break;
        }
      }
    }
  }
  else {
    telegramAlreadyInGroup = kcg_false;
  }
  return telegramAlreadyInGroup;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

