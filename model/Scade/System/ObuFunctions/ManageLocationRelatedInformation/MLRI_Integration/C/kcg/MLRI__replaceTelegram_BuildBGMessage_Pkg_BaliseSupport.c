/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__replaceTelegram_BuildBGMessage_Pkg_BaliseSupport.h"

/* BuildBGMessage_Pkg::BaliseSupport::replaceTelegram */
void MLRI__replaceTelegram_BuildBGMessage_Pkg_BaliseSupport(
  /* BuildBGMessage_Pkg::BaliseSupport::replaceTelegram::newTelegram */MLRI__Telegram_T_BG_Types_Pkg *newTelegram,
  /* BuildBGMessage_Pkg::BaliseSupport::replaceTelegram::inTelegramArray */MLRI__Telegram_T_BG_Types_Pkg *inTelegramArray,
  /* BuildBGMessage_Pkg::BaliseSupport::replaceTelegram::cont */kcg_bool *cont,
  /* BuildBGMessage_Pkg::BaliseSupport::replaceTelegram::outTelegrams */MLRI__Telegram_T_BG_Types_Pkg *outTelegrams)
{
  *cont = (*inTelegramArray).valid;
  if (*cont) {
    MLRI__kcg_copy_Telegram_T_BG_Types_Pkg(outTelegrams, inTelegramArray);
  }
  else {
    MLRI__kcg_copy_Telegram_T_BG_Types_Pkg(outTelegrams, newTelegram);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__replaceTelegram_BuildBGMessage_Pkg_BaliseSupport.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

