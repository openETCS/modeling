/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__CheckOneTelegram_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::CheckOneTelegram */
kcg_bool MLRI__CheckOneTelegram_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::CheckOneTelegram::telegram_in */MLRI__Telegram_T_BG_Types_Pkg *telegram_in)
{
  kcg_bool tmp;
  /* CheckBGConsistency_Pkg::SubFunction::CheckOneTelegram::isConsistent */ kcg_bool isConsistent;
  
  tmp = /* 1 */
    MLRI__CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction(
      &(*telegram_in).telegramheader);
  isConsistent = (*telegram_in).valid & (*telegram_in).checkResult & tmp;
  return isConsistent;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__CheckOneTelegram_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

