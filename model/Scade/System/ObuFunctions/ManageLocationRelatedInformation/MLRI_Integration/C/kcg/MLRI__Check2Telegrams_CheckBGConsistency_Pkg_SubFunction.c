/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__Check2Telegrams_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams */
void MLRI__Check2Telegrams_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams::telegram1 */MLRI__Telegram_T_BG_Types_Pkg *telegram1,
  /* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams::telegram2 */MLRI__Telegram_T_BG_Types_Pkg *telegram2,
  /* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams::isConsistent */kcg_bool *isConsistent,
  /* CheckBGConsistency_Pkg::SubFunction::Check2Telegrams::telegram_out */MLRI__Telegram_T_BG_Types_Pkg *telegram_out)
{
  kcg_bool tmp;
  
  tmp = (*telegram1).checkResult & (*telegram2).checkResult;
  if (tmp) {
    MLRI__kcg_copy_Telegram_T_BG_Types_Pkg(telegram_out, telegram2);
    /* 1 */
    MLRI__mergeAddInfo_CheckBGConsistency_Pkg_SubFunction(
      &(*telegram1).packets,
      &(*telegram2).packets,
      &(*telegram_out).packets);
  }
  else {
    MLRI__kcg_copy_Telegram_T_BG_Types_Pkg(telegram_out, telegram1);
  }
  tmp = /* 1 */
    MLRI__Check2Headers_CheckBGConsistency_Pkg_SubFunction(
      &(*telegram1).telegramheader,
      (*telegram1).checkResult,
      &(*telegram2).telegramheader,
      (*telegram2).checkResult);
  *isConsistent = (*telegram1).valid & tmp & (*telegram2).valid;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__Check2Telegrams_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

