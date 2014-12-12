/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__ReceiveEuroBaliseFromAPI_ReceiveEuroBaliseFromAPI_Pkg.h"

/* ReceiveEuroBaliseFromAPI_Pkg::ReceiveEuroBaliseFromAPI */
void MLRI__ReceiveEuroBaliseFromAPI_ReceiveEuroBaliseFromAPI_Pkg(
  /* ReceiveEuroBaliseFromAPI_Pkg::ReceiveEuroBaliseFromAPI::API_balise */MLRI__API_Telegram_T_API_Msg_Pkg *API_balise,
  /* ReceiveEuroBaliseFromAPI_Pkg::ReceiveEuroBaliseFromAPI::outTelegramPresent */kcg_bool *outTelegramPresent,
  /* ReceiveEuroBaliseFromAPI_Pkg::ReceiveEuroBaliseFromAPI::outDecodedTelegram */MLRI__Telegram_T_BG_Types_Pkg *outDecodedTelegram,
  /* ReceiveEuroBaliseFromAPI_Pkg::ReceiveEuroBaliseFromAPI::outcenterOfBalisePosition */MLRI__centerOfBalisePosition_T_BG_Types_Pkg *outcenterOfBalisePosition)
{
  *outTelegramPresent = (*API_balise).present;
  if (*outTelegramPresent) {
    if ((*API_balise).api_bad_balise_received) {
      MLRI__kcg_copy_Telegram_T_BG_Types_Pkg(
        outDecodedTelegram,
        (MLRI__Telegram_T_BG_Types_Pkg *) &MLRI__cEmpty_BaliseTlg_BG_Types_Pkg);
      MLRI__kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
        outcenterOfBalisePosition,
        (MLRI__centerOfBalisePosition_T_BG_Types_Pkg *)
          &MLRI__cemptyPosition_BG_Types_Pkg);
    }
    else {
      /* 1 */
      MLRI__transferTelegram_btmSupportPkg(
        API_balise,
        outDecodedTelegram,
        outcenterOfBalisePosition);
    }
  }
  else {
    MLRI__kcg_copy_Telegram_T_BG_Types_Pkg(
      outDecodedTelegram,
      (MLRI__Telegram_T_BG_Types_Pkg *) &MLRI__cEmpty_BaliseTlg_BG_Types_Pkg);
    MLRI__kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      outcenterOfBalisePosition,
      (MLRI__centerOfBalisePosition_T_BG_Types_Pkg *)
        &MLRI__cemptyPosition_BG_Types_Pkg);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__ReceiveEuroBaliseFromAPI_ReceiveEuroBaliseFromAPI_Pkg.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

