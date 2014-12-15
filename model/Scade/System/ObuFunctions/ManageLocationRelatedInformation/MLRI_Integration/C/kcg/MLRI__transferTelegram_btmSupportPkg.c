/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__transferTelegram_btmSupportPkg.h"

/* btmSupportPkg::transferTelegram */
void MLRI__transferTelegram_btmSupportPkg(
  /* btmSupportPkg::transferTelegram::API_balise */MLRI__API_Telegram_T_API_Msg_Pkg *API_balise,
  /* btmSupportPkg::transferTelegram::outDecodedTelegram */MLRI__Telegram_T_BG_Types_Pkg *outDecodedTelegram,
  /* btmSupportPkg::transferTelegram::outCenterOfBalisePosition */MLRI__centerOfBalisePosition_T_BG_Types_Pkg *outCenterOfBalisePosition)
{
  (*outDecodedTelegram).valid = kcg_true;
  (*outDecodedTelegram).checkResult = (*API_balise).checkResult;
  MLRI__kcg_copy_TelegramHeader_T_BG_Types_Pkg(
    &(*outDecodedTelegram).telegramheader,
    &(*API_balise).api_header);
  MLRI__kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    outCenterOfBalisePosition,
    &(*API_balise).centerOfBalisePosition);
  /* 1 */
  MLRI__transferPackets_btmSupportPkg(
    &(*API_balise).api_packets,
    &(*outDecodedTelegram).packets);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__transferTelegram_btmSupportPkg.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

