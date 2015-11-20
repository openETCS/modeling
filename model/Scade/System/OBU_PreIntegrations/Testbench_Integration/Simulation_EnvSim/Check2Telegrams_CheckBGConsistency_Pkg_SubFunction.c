/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Check2Telegrams_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams */
void Check2Telegrams_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams::telegram1 */Telegram_T_BG_Types_Pkg *telegram1,
  /* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams::telegram2 */Telegram_T_BG_Types_Pkg *telegram2,
  /* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams::isConsistent */kcg_bool *isConsistent,
  /* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams::telegram_out */Telegram_T_BG_Types_Pkg *telegram_out)
{
  kcg_copy_Telegram_T_BG_Types_Pkg(telegram_out, telegram2);
  *isConsistent = (*telegram1).valid & /* 1 */
    Check2Headers_CheckBGConsistency_Pkg_SubFunction(
      &(*telegram1).telegramheader,
      (*telegram1).checkResult,
      &(*telegram_out).telegramheader,
      (*telegram_out).checkResult) & (*telegram_out).valid;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Check2Telegrams_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

