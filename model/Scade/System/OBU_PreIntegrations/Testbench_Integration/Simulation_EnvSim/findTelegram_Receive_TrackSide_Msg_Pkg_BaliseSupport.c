/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram */
kcg_bool findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram::which_pig */N_PIG which_pig,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram::HeaderArray */TelegramArray_T_BG_Types_Pkg *HeaderArray,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram::doSearch */kcg_bool doSearch)
{
  static kcg_bool tmp1;
  static kcg_bool tmp;
  static kcg_int i;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram::telegramAlreadyInGroup */
  static kcg_bool telegramAlreadyInGroup;
  
  if ((*HeaderArray)[0].valid) {
    telegramAlreadyInGroup = kcg_true;
    if (doSearch) {
      for (i = 0; i < 8; i++) {
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

/* $*************** KCG Version 6.1.3 (build i6) ****************
** findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport.c
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

