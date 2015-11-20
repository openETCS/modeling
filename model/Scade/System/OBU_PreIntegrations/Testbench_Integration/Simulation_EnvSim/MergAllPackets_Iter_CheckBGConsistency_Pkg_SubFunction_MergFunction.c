/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MergAllPackets_Iter_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets_Iter */
void MergAllPackets_Iter_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets_Iter::telegramArray */TelegramArray_T_BG_Types_Pkg *telegramArray,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::MergAllPackets_Iter::telegramout */Telegram_T_BG_Types_Pkg *telegramout)
{
  static Telegram_T_BG_Types_Pkg tmp1;
  static kcg_bool tmp;
  static kcg_int i;
  
  kcg_copy_Telegram_T_BG_Types_Pkg(telegramout, &(*telegramArray)[0]);
  for (i = 0; i < 7; i++) {
    kcg_copy_Telegram_T_BG_Types_Pkg(&tmp1, telegramout);
    /* 1 */
    MergAllPackets_CheckBGConsistency_Pkg_SubFunction_MergFunction(
      &tmp1,
      &(*telegramArray)[i + 1],
      &tmp,
      telegramout);
    if (!tmp) {
      break;
    }
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MergAllPackets_Iter_CheckBGConsistency_Pkg_SubFunction_MergFunction.c
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

