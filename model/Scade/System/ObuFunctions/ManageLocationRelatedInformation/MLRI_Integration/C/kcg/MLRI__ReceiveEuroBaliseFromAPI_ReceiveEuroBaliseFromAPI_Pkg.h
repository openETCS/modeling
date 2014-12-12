/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */
#ifndef _MLRI__ReceiveEuroBaliseFromAPI_ReceiveEuroBaliseFromAPI_Pkg_H_
#define _MLRI__ReceiveEuroBaliseFromAPI_ReceiveEuroBaliseFromAPI_Pkg_H_

#include "kcg_types.h"
#include "MLRI__transferTelegram_btmSupportPkg.h"

/* =====================  no input structure  ====================== */


/* ReceiveEuroBaliseFromAPI_Pkg::ReceiveEuroBaliseFromAPI */
extern void MLRI__ReceiveEuroBaliseFromAPI_ReceiveEuroBaliseFromAPI_Pkg(
  /* ReceiveEuroBaliseFromAPI_Pkg::ReceiveEuroBaliseFromAPI::API_balise */MLRI__API_Telegram_T_API_Msg_Pkg *API_balise,
  /* ReceiveEuroBaliseFromAPI_Pkg::ReceiveEuroBaliseFromAPI::outTelegramPresent */kcg_bool *outTelegramPresent,
  /* ReceiveEuroBaliseFromAPI_Pkg::ReceiveEuroBaliseFromAPI::outDecodedTelegram */MLRI__Telegram_T_BG_Types_Pkg *outDecodedTelegram,
  /* ReceiveEuroBaliseFromAPI_Pkg::ReceiveEuroBaliseFromAPI::outcenterOfBalisePosition */MLRI__centerOfBalisePosition_T_BG_Types_Pkg *outcenterOfBalisePosition);

#endif /* _MLRI__ReceiveEuroBaliseFromAPI_ReceiveEuroBaliseFromAPI_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__ReceiveEuroBaliseFromAPI_ReceiveEuroBaliseFromAPI_Pkg.h
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

