/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg_H_
#define _manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram */
extern void manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::inDecodedTelegram */ Telegram_T_BG_Types_Pkg *inDecodedTelegram,
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::incenterOfBalisePosition */ centerOfBalisePosition_T_BG_Types_Pkg *incenterOfBalisePosition,
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::inTelegramStore */ TelegramStore_T_Receive_TrackSide_Msg_Pkg *inTelegramStore,
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::inputTelegramPresent */ kcg_bool inputTelegramPresent,
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::outputPresent */ kcg_bool *outputPresent,
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::outDecodedTelegram */ Telegram_T_BG_Types_Pkg *outDecodedTelegram,
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::outcenterOfBalisePosition */ centerOfBalisePosition_T_BG_Types_Pkg *outcenterOfBalisePosition,
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::outNeedStore */ kcg_bool *outNeedStore);

#endif /* _manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

