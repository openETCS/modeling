/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg.h"

/* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram */
void manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::inDecodedTelegram */ Telegram_T_BG_Types_Pkg *inDecodedTelegram,
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::incenterOfBalisePosition */ centerOfBalisePosition_T_BG_Types_Pkg *incenterOfBalisePosition,
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::inTelegramStore */ TelegramStore_T_Receive_TrackSide_Msg_Pkg *inTelegramStore,
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::inputTelegramPresent */ kcg_bool inputTelegramPresent,
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::outputPresent */ kcg_bool *outputPresent,
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::outDecodedTelegram */ Telegram_T_BG_Types_Pkg *outDecodedTelegram,
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::outcenterOfBalisePosition */ centerOfBalisePosition_T_BG_Types_Pkg *outcenterOfBalisePosition,
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::outNeedStore */ kcg_bool *outNeedStore)
{
  *outputPresent = inputTelegramPresent | (*inTelegramStore).valid;
  if ((*inTelegramStore).valid) {
    kcg_copy_Telegram_T_BG_Types_Pkg(
      outDecodedTelegram,
      &(*inTelegramStore).telegram);
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      outcenterOfBalisePosition,
      &(*inTelegramStore).position);
  }
  else {
    kcg_copy_Telegram_T_BG_Types_Pkg(outDecodedTelegram, inDecodedTelegram);
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      outcenterOfBalisePosition,
      incenterOfBalisePosition);
  }
  *outNeedStore = (*inTelegramStore).valid & inputTelegramPresent;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

