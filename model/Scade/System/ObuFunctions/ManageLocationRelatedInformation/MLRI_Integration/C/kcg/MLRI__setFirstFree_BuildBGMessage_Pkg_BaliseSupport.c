/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__setFirstFree_BuildBGMessage_Pkg_BaliseSupport.h"

/* BuildBGMessage_Pkg::BaliseSupport::setFirstFree */
void MLRI__setFirstFree_BuildBGMessage_Pkg_BaliseSupport(
  /* BuildBGMessage_Pkg::BaliseSupport::setFirstFree::newTelegram */MLRI__Telegram_T_BG_Types_Pkg *newTelegram,
  /* BuildBGMessage_Pkg::BaliseSupport::setFirstFree::inTelegramArray */MLRI__Telegram_T_BG_Types_Pkg *inTelegramArray,
  /* BuildBGMessage_Pkg::BaliseSupport::setFirstFree::cont */kcg_bool *cont,
  /* BuildBGMessage_Pkg::BaliseSupport::setFirstFree::outTelegrams */MLRI__Telegram_T_BG_Types_Pkg *outTelegrams)
{
  /* BuildBGMessage_Pkg::BaliseSupport::setFirstFree::_L7 */ kcg_bool _L7;
  
  _L7 = (*inTelegramArray).telegramheader.n_pig ==
    (*newTelegram).telegramheader.n_pig;
  *cont = !(_L7 | (*inTelegramArray).valid);
  if ((*inTelegramArray).valid & _L7) {
    MLRI__kcg_copy_Telegram_T_BG_Types_Pkg(outTelegrams, newTelegram);
  }
  else {
    MLRI__kcg_copy_Telegram_T_BG_Types_Pkg(outTelegrams, inTelegramArray);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__setFirstFree_BuildBGMessage_Pkg_BaliseSupport.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

