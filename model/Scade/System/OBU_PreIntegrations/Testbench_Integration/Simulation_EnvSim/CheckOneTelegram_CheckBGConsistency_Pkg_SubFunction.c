/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckOneTelegram_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::CheckOneTelegram */
kcg_bool CheckOneTelegram_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::CheckOneTelegram::telegram_in */Telegram_T_BG_Types_Pkg *telegram_in)
{
  /* CheckBGConsistency_Pkg::SubFunction::CheckOneTelegram::isConsistent */
  static kcg_bool isConsistent;
  
  isConsistent = (*telegram_in).valid & (*telegram_in).checkResult & /* 1 */
    CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction(
      &(*telegram_in).telegramheader);
  return isConsistent;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckOneTelegram_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

