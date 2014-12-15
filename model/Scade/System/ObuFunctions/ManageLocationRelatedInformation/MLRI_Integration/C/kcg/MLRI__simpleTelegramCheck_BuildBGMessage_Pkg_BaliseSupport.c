/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__simpleTelegramCheck_BuildBGMessage_Pkg_BaliseSupport.h"

/* BuildBGMessage_Pkg::BaliseSupport::simpleTelegramCheck */
void MLRI__simpleTelegramCheck_BuildBGMessage_Pkg_BaliseSupport(
  /* BuildBGMessage_Pkg::BaliseSupport::simpleTelegramCheck::iteratorIndex */kcg_int iteratorIndex,
  /* BuildBGMessage_Pkg::BaliseSupport::simpleTelegramCheck::accu */kcg_bool accu,
  /* BuildBGMessage_Pkg::BaliseSupport::simpleTelegramCheck::telegram */MLRI__Telegram_T_BG_Types_Pkg *telegram,
  /* BuildBGMessage_Pkg::BaliseSupport::simpleTelegramCheck::which_pig */MLRI__N_PIG which_pig,
  /* BuildBGMessage_Pkg::BaliseSupport::simpleTelegramCheck::cont */kcg_bool *cont,
  /* BuildBGMessage_Pkg::BaliseSupport::simpleTelegramCheck::telegramAlreadyInGroup */kcg_bool *telegramAlreadyInGroup)
{
  *telegramAlreadyInGroup = (*telegram).valid &
    ((*telegram).telegramheader.n_pig == which_pig);
  *cont = (*telegram).valid & !*telegramAlreadyInGroup;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__simpleTelegramCheck_BuildBGMessage_Pkg_BaliseSupport.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

