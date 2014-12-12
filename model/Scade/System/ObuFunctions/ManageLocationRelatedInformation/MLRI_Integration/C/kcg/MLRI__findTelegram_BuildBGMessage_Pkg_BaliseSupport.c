/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__findTelegram_BuildBGMessage_Pkg_BaliseSupport.h"

/* BuildBGMessage_Pkg::BaliseSupport::findTelegram */
kcg_bool MLRI__findTelegram_BuildBGMessage_Pkg_BaliseSupport(
  /* BuildBGMessage_Pkg::BaliseSupport::findTelegram::which_pig */MLRI__N_PIG which_pig,
  /* BuildBGMessage_Pkg::BaliseSupport::findTelegram::HeaderArray */MLRI__TelegramArray_T_BG_Types_Pkg *HeaderArray,
  /* BuildBGMessage_Pkg::BaliseSupport::findTelegram::doSearch */kcg_bool doSearch)
{
  kcg_bool tmp1;
  kcg_bool tmp;
  kcg_int i;
  /* BuildBGMessage_Pkg::BaliseSupport::findTelegram::telegramAlreadyInGroup */ kcg_bool telegramAlreadyInGroup;
  
  if ((*HeaderArray)[0].valid) {
    telegramAlreadyInGroup = kcg_true;
    if (doSearch) {
      for (i = 0; i < 8; i++) {
        tmp1 = telegramAlreadyInGroup;
        /* 7 */
        MLRI__simpleTelegramCheck_BuildBGMessage_Pkg_BaliseSupport(
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
** MLRI__findTelegram_BuildBGMessage_Pkg_BaliseSupport.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

