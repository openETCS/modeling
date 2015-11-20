/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BuildBGMessage_Receive_TrackSide_Msg_Pkg.h"

void BuildBGMessage_reset_Receive_TrackSide_Msg_Pkg(
  outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg *outC)
{
  outC->init = kcg_true;
}

/* Receive_TrackSide_Msg_Pkg::BuildBGMessage */
void BuildBGMessage_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::reset */kcg_bool reset,
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::inTelegramPresent */kcg_bool inTelegramPresent,
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::inDecodedTelegram */Telegram_T_BG_Types_Pkg *inDecodedTelegram,
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::incenterOfBalisePosition */centerOfBalisePosition_T_BG_Types_Pkg *incenterOfBalisePosition,
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::inActualOdometry */odometry_T_Obu_BasicTypes_Pkg *inActualOdometry,
  outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg *outC)
{
  static TelegramStore_T_Receive_TrackSide_Msg_Pkg tmp4;
  static Telegram_T_BG_Types_Pkg tmp3;
  static centerOfBalisePosition_T_BG_Types_Pkg tmp2;
  static kcg_bool tmp1;
  static kcg_bool tmp;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock4::else::_L11 */
  static Telegram_T_BG_Types_Pkg _L11_IfBlock4;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock4::else::_L12 */
  static centerOfBalisePosition_T_BG_Types_Pkg _L12_IfBlock4;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock2::then::_L45 */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg _L45_IfBlock2;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock2::else::IfBlock3 */
  static kcg_bool IfBlock3_clock_IfBlock2;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock1::then::_L22 */
  static kcg_bool _L22_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock1::then::_L4 */
  static kcg_bool _L4_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock1::else::IfBlock3 */
  static kcg_bool IfBlock3_clock_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeBGTelegramArray */
  static TelegramArray_T_BG_Types_Pkg last_storeBGTelegramArray;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeCollector */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg last_storeCollector;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::BGisComplete */
  static kcg_bool BGisComplete;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::telegramPresent */
  static kcg_bool telegramPresent;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::tempCollectorStore */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg tempCollectorStore;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::tempBGTelegramArray */
  static TelegramArray_T_BG_Types_Pkg tempBGTelegramArray;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::_L43 */
  static kcg_bool _L43;
  
  if (outC->init) {
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &last_storeBGTelegramArray,
      (TelegramArray_T_BG_Types_Pkg *) &cEmptyTelegramArray_BG_Types_Pkg);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &last_storeCollector,
      (BGCollector_T_Receive_TrackSide_Msg_Pkg *)
        &cEmptyCollector_Receive_TrackSide_Msg_Pkg);
  }
  else {
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &last_storeBGTelegramArray,
      &outC->storeBGTelegramArray);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &last_storeCollector,
      &outC->storeCollector);
  }
  _L43 = !reset;
  if (reset) {
    telegramPresent = kcg_false;
    tmp1 = kcg_false;
  }
  else {
    if (outC->init) {
      kcg_copy_TelegramStore_T_Receive_TrackSide_Msg_Pkg(
        &tmp4,
        (TelegramStore_T_Receive_TrackSide_Msg_Pkg *)
          &cEmptyStore_Receive_TrackSide_Msg_Pkg);
    }
    else {
      kcg_copy_TelegramStore_T_Receive_TrackSide_Msg_Pkg(
        &tmp4,
        &outC->storeAdditionalTelegram);
    }
    /* 3 */
    manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg(
      inDecodedTelegram,
      incenterOfBalisePosition,
      &tmp4,
      inTelegramPresent,
      &telegramPresent,
      &_L11_IfBlock4,
      &_L12_IfBlock4,
      &tmp);
    tmp1 = tmp;
  }
  outC->init = kcg_false;
  if (telegramPresent) {
    if (reset) {
      kcg_copy_Telegram_T_BG_Types_Pkg(
        &tmp3,
        (Telegram_T_BG_Types_Pkg *) &cEmpty_BaliseTlg_BG_Types_Pkg);
      kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
        &tmp2,
        (centerOfBalisePosition_T_BG_Types_Pkg *) &cemptyPosition_BG_Types_Pkg);
    }
    else {
      kcg_copy_Telegram_T_BG_Types_Pkg(&tmp3, &_L11_IfBlock4);
      kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(&tmp2, &_L12_IfBlock4);
    }
    /* 1 */
    manageTelegram_Receive_TrackSide_Msg_Pkg(
      &tmp3,
      &tmp2,
      &last_storeCollector,
      &last_storeBGTelegramArray,
      &_L4_IfBlock1,
      &BGisComplete,
      &tempCollectorStore,
      &tempBGTelegramArray,
      &_L22_IfBlock1);
    tmp = BGisComplete;
    BGisComplete = _L4_IfBlock1;
  }
  else {
    IfBlock3_clock_IfBlock1 = _L43;
    if (IfBlock3_clock_IfBlock1) {
      /* 3 */
      checkOdometry_Receive_TrackSide_Msg_Pkg(
        inActualOdometry,
        &last_storeCollector,
        &BGisComplete,
        &IfBlock3_clock_IfBlock2,
        &tempCollectorStore);
      tmp = IfBlock3_clock_IfBlock2;
      kcg_copy_TelegramArray_T_BG_Types_Pkg(
        &tempBGTelegramArray,
        &last_storeBGTelegramArray);
    }
    else {
      tmp = kcg_false;
      BGisComplete = kcg_false;
      kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
        &tempCollectorStore,
        (BGCollector_T_Receive_TrackSide_Msg_Pkg *)
          &cEmptyCollector_Receive_TrackSide_Msg_Pkg);
      kcg_copy_TelegramArray_T_BG_Types_Pkg(
        &tempBGTelegramArray,
        (TelegramArray_T_BG_Types_Pkg *) &cEmptyTelegramArray_BG_Types_Pkg);
    }
  }
  if (inTelegramPresent & (tmp1 | tmp) & _L43) {
    outC->storeAdditionalTelegram.valid = kcg_true;
    kcg_copy_Telegram_T_BG_Types_Pkg(
      &outC->storeAdditionalTelegram.telegram,
      inDecodedTelegram);
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &outC->storeAdditionalTelegram.position,
      incenterOfBalisePosition);
  }
  else {
    kcg_copy_TelegramStore_T_Receive_TrackSide_Msg_Pkg(
      &outC->storeAdditionalTelegram,
      (TelegramStore_T_Receive_TrackSide_Msg_Pkg *)
        &cEmptyStore_Receive_TrackSide_Msg_Pkg);
  }
  if (BGisComplete) {
    /* 1 */
    updateCollectorSendMessage_Receive_TrackSide_Msg_Pkg_BaliseSupport(
      &tempCollectorStore,
      &_L45_IfBlock2);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->storeCollector,
      &_L45_IfBlock2);
    outC->outBGMessage.present = kcg_true;
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->outBGMessage.Telegrams,
      &tempBGTelegramArray);
    outC->outBGMessage.numberBalises = _L45_IfBlock2.collectedTelegrams;
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &outC->outBGMessage.centerOfBalisePosition,
      &_L45_IfBlock2.balisePosition);
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->storeBGTelegramArray,
      &tempBGTelegramArray);
  }
  else {
    if (telegramPresent) {
      IfBlock3_clock_IfBlock2 = _L22_IfBlock1;
    }
    else if (IfBlock3_clock_IfBlock1) {
      IfBlock3_clock_IfBlock2 = kcg_false;
    }
    else {
      IfBlock3_clock_IfBlock2 = kcg_true;
    }
    outC->outBGMessage.present = kcg_false;
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->outBGMessage.Telegrams,
      (TelegramArray_T_BG_Types_Pkg *) &cEmptyTelegramArray_BG_Types_Pkg);
    outC->outBGMessage.numberBalises = 0;
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &outC->outBGMessage.centerOfBalisePosition,
      (centerOfBalisePosition_T_BG_Types_Pkg *) &cemptyPosition_BG_Types_Pkg);
    if (IfBlock3_clock_IfBlock2) {
      kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
        &outC->storeCollector,
        &tempCollectorStore);
      kcg_copy_TelegramArray_T_BG_Types_Pkg(
        &outC->storeBGTelegramArray,
        &tempBGTelegramArray);
    }
    else {
      kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
        &outC->storeCollector,
        &last_storeCollector);
      kcg_copy_TelegramArray_T_BG_Types_Pkg(
        &outC->storeBGTelegramArray,
        &last_storeBGTelegramArray);
    }
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** BuildBGMessage_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

