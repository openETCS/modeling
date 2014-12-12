/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MLRI__BuildBGMessage_BuildBGMessage_Pkg.h"

void MLRI__BuildBGMessage_reset_BuildBGMessage_Pkg(
  MLRI__outC_BuildBGMessage_BuildBGMessage_Pkg *outC)
{
  outC->init = kcg_true;
}

/* BuildBGMessage_Pkg::BuildBGMessage */
void MLRI__BuildBGMessage_BuildBGMessage_Pkg(
  /* BuildBGMessage_Pkg::BuildBGMessage::reset */kcg_bool reset,
  /* BuildBGMessage_Pkg::BuildBGMessage::inTelegramPresent */kcg_bool inTelegramPresent,
  /* BuildBGMessage_Pkg::BuildBGMessage::inDecodedTelegram */MLRI__Telegram_T_BG_Types_Pkg *inDecodedTelegram,
  /* BuildBGMessage_Pkg::BuildBGMessage::incenterOfBalisePosition */MLRI__centerOfBalisePosition_T_BG_Types_Pkg *incenterOfBalisePosition,
  /* BuildBGMessage_Pkg::BuildBGMessage::inActualOdometry */MLRI__odometry_T_Obu_BasicTypes_Pkg *inActualOdometry,
  MLRI__outC_BuildBGMessage_BuildBGMessage_Pkg *outC)
{
  MLRI__TelegramStore_T_BuildBGMessage_Pkg tmp4;
  MLRI__Telegram_T_BG_Types_Pkg tmp3;
  MLRI__centerOfBalisePosition_T_BG_Types_Pkg tmp2;
  kcg_bool tmp1;
  kcg_bool tmp;
  /* BuildBGMessage_Pkg::BuildBGMessage::IfBlock4::else::_L3 */ MLRI__centerOfBalisePosition_T_BG_Types_Pkg _L3_IfBlock4;
  /* BuildBGMessage_Pkg::BuildBGMessage::IfBlock4::else::_L2 */ MLRI__Telegram_T_BG_Types_Pkg _L2_IfBlock4;
  /* BuildBGMessage_Pkg::BuildBGMessage::IfBlock2::then::_L45 */ MLRI__BGCollector_T_BuildBGMessage_Pkg _L45_IfBlock2;
  /* BuildBGMessage_Pkg::BuildBGMessage::IfBlock2::else::IfBlock3 */ kcg_bool IfBlock3_clock_IfBlock2;
  /* BuildBGMessage_Pkg::BuildBGMessage::IfBlock1::then::_L22 */ kcg_bool _L22_IfBlock1;
  /* BuildBGMessage_Pkg::BuildBGMessage::IfBlock1::then::_L18 */ MLRI__TelegramArray_T_BG_Types_Pkg _L18_IfBlock1;
  /* BuildBGMessage_Pkg::BuildBGMessage::IfBlock1::then::_L4 */ kcg_bool _L4_IfBlock1;
  /* BuildBGMessage_Pkg::BuildBGMessage::IfBlock1::else::IfBlock3 */ kcg_bool IfBlock3_clock_IfBlock1;
  /* BuildBGMessage_Pkg::BuildBGMessage::IfBlock1::else::IfBlock3::then::_L6 */ kcg_bool _L6_IfBlock1_IfBlock3;
  /* BuildBGMessage_Pkg::BuildBGMessage::IfBlock1::else::IfBlock3::then::_L9 */ MLRI__BGCollector_T_BuildBGMessage_Pkg _L9_IfBlock1_IfBlock3;
  /* BuildBGMessage_Pkg::BuildBGMessage::storeBGTelegramArray */ MLRI__TelegramArray_T_BG_Types_Pkg last_storeBGTelegramArray;
  /* BuildBGMessage_Pkg::BuildBGMessage::storeCollector */ MLRI__BGCollector_T_BuildBGMessage_Pkg last_storeCollector;
  /* BuildBGMessage_Pkg::BuildBGMessage::BGisComplete */ kcg_bool BGisComplete;
  /* BuildBGMessage_Pkg::BuildBGMessage::telegramPresent */ kcg_bool telegramPresent;
  /* BuildBGMessage_Pkg::BuildBGMessage::tempCollectorStore */ MLRI__BGCollector_T_BuildBGMessage_Pkg tempCollectorStore;
  /* BuildBGMessage_Pkg::BuildBGMessage::tempBGTelegramArray */ MLRI__TelegramArray_T_BG_Types_Pkg tempBGTelegramArray;
  /* BuildBGMessage_Pkg::BuildBGMessage::_L43 */ kcg_bool _L43;
  
  if (outC->init) {
    MLRI__kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &last_storeBGTelegramArray,
      (MLRI__TelegramArray_T_BG_Types_Pkg *)
        &MLRI__cemptyHeaderArray_BG_Types_Pkg);
    MLRI__kcg_copy_BGCollector_T_BuildBGMessage_Pkg(
      &last_storeCollector,
      (MLRI__BGCollector_T_BuildBGMessage_Pkg *)
        &MLRI__cCollectorInit_BuildBGMessage_Pkg);
  }
  else {
    MLRI__kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &last_storeBGTelegramArray,
      &outC->storeBGTelegramArray);
    MLRI__kcg_copy_BGCollector_T_BuildBGMessage_Pkg(
      &last_storeCollector,
      &outC->storeCollector);
  }
  _L43 = !reset;
  if (reset) {
    telegramPresent = kcg_false;
  }
  else {
    if (outC->init) {
      MLRI__kcg_copy_TelegramStore_T_BuildBGMessage_Pkg(
        &tmp4,
        (MLRI__TelegramStore_T_BuildBGMessage_Pkg *)
          &MLRI__cemptyStore_BuildBGMessage_Pkg);
    }
    else {
      MLRI__kcg_copy_TelegramStore_T_BuildBGMessage_Pkg(
        &tmp4,
        &outC->storeAdditionalTelegram);
    }
    /* 2 */
    MLRI__manageAdditionalTelegram_BuildBGMessage_Pkg(
      inDecodedTelegram,
      incenterOfBalisePosition,
      &tmp4,
      inTelegramPresent,
      &telegramPresent,
      &_L2_IfBlock4,
      &_L3_IfBlock4,
      &tmp);
  }
  if (telegramPresent) {
    if (reset) {
      MLRI__kcg_copy_Telegram_T_BG_Types_Pkg(
        &tmp3,
        (MLRI__Telegram_T_BG_Types_Pkg *) &MLRI__cEmpty_BaliseTlg_BG_Types_Pkg);
      MLRI__kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
        &tmp2,
        (MLRI__centerOfBalisePosition_T_BG_Types_Pkg *)
          &MLRI__cemptyPosition_BG_Types_Pkg);
    }
    else {
      MLRI__kcg_copy_Telegram_T_BG_Types_Pkg(&tmp3, &_L2_IfBlock4);
      MLRI__kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
        &tmp2,
        &_L3_IfBlock4);
    }
    /* 1 */
    MLRI__manageTelegram_BuildBGMessage_Pkg(
      &tmp3,
      &tmp2,
      &last_storeCollector,
      &last_storeBGTelegramArray,
      &_L4_IfBlock1,
      &BGisComplete,
      &_L45_IfBlock2,
      &_L18_IfBlock1,
      &_L22_IfBlock1);
  }
  else {
    IfBlock3_clock_IfBlock1 = _L43;
    if (IfBlock3_clock_IfBlock1) {
      /* 3 */
      MLRI__checkOdometry_BuildBGMessage_Pkg(
        inActualOdometry,
        &last_storeCollector,
        &_L6_IfBlock1_IfBlock3,
        &IfBlock3_clock_IfBlock2,
        &_L9_IfBlock1_IfBlock3);
    }
  }
  if (reset) {
    tmp1 = kcg_false;
  }
  else {
    tmp1 = tmp;
  }
  if (telegramPresent) {
    tmp = BGisComplete;
  }
  else if (IfBlock3_clock_IfBlock1) {
    tmp = IfBlock3_clock_IfBlock2;
  }
  else {
    tmp = kcg_false;
  }
  if (inTelegramPresent & (tmp1 | tmp) & _L43) {
    outC->storeAdditionalTelegram.valid = kcg_true;
    MLRI__kcg_copy_Telegram_T_BG_Types_Pkg(
      &outC->storeAdditionalTelegram.telegram,
      inDecodedTelegram);
    MLRI__kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &outC->storeAdditionalTelegram.position,
      incenterOfBalisePosition);
  }
  else {
    MLRI__kcg_copy_TelegramStore_T_BuildBGMessage_Pkg(
      &outC->storeAdditionalTelegram,
      (MLRI__TelegramStore_T_BuildBGMessage_Pkg *)
        &MLRI__cemptyStore_BuildBGMessage_Pkg);
  }
  if (telegramPresent) {
    BGisComplete = _L4_IfBlock1;
    MLRI__kcg_copy_BGCollector_T_BuildBGMessage_Pkg(
      &tempCollectorStore,
      &_L45_IfBlock2);
  }
  else if (IfBlock3_clock_IfBlock1) {
    BGisComplete = _L6_IfBlock1_IfBlock3;
    MLRI__kcg_copy_BGCollector_T_BuildBGMessage_Pkg(
      &tempCollectorStore,
      &_L9_IfBlock1_IfBlock3);
  }
  else {
    BGisComplete = kcg_false;
    MLRI__kcg_copy_BGCollector_T_BuildBGMessage_Pkg(
      &tempCollectorStore,
      (MLRI__BGCollector_T_BuildBGMessage_Pkg *)
        &MLRI__cCollectorInit_BuildBGMessage_Pkg);
  }
  if (BGisComplete) {
    /* 1 */
    MLRI__updateCollectorSendMessage_BuildBGMessage_Pkg_BaliseSupport(
      &tempCollectorStore,
      &_L45_IfBlock2);
  }
  else if (telegramPresent) {
    IfBlock3_clock_IfBlock2 = _L22_IfBlock1;
  }
  else if (IfBlock3_clock_IfBlock1) {
    IfBlock3_clock_IfBlock2 = kcg_false;
  }
  else {
    IfBlock3_clock_IfBlock2 = kcg_true;
  }
  if (telegramPresent) {
    MLRI__kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &tempBGTelegramArray,
      &_L18_IfBlock1);
  }
  else {
    MLRI__kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &tempBGTelegramArray,
      (MLRI__TelegramArray_T_BG_Types_Pkg *)
        &MLRI__cemptyHeaderArray_BG_Types_Pkg);
  }
  if (BGisComplete) {
    outC->outBGMessage.present = kcg_true;
    MLRI__kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->outBGMessage.Telegrams,
      &tempBGTelegramArray);
    outC->outBGMessage.numberBalises = _L45_IfBlock2.totalTelegrams;
    MLRI__kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &outC->outBGMessage.centerOfBalisePosition,
      &_L45_IfBlock2.balisePosition);
    MLRI__kcg_copy_BGCollector_T_BuildBGMessage_Pkg(
      &outC->storeCollector,
      &_L45_IfBlock2);
    MLRI__kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->storeBGTelegramArray,
      &tempBGTelegramArray);
  }
  else {
    outC->outBGMessage.present = kcg_false;
    MLRI__kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->outBGMessage.Telegrams,
      (MLRI__TelegramArray_T_BG_Types_Pkg *)
        &MLRI__cemptyHeaderArray_BG_Types_Pkg);
    outC->outBGMessage.numberBalises = 0;
    MLRI__kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &outC->outBGMessage.centerOfBalisePosition,
      (MLRI__centerOfBalisePosition_T_BG_Types_Pkg *)
        &MLRI__cemptyPosition_BG_Types_Pkg);
    if (IfBlock3_clock_IfBlock2) {
      MLRI__kcg_copy_BGCollector_T_BuildBGMessage_Pkg(
        &outC->storeCollector,
        &tempCollectorStore);
      MLRI__kcg_copy_TelegramArray_T_BG_Types_Pkg(
        &outC->storeBGTelegramArray,
        &tempBGTelegramArray);
    }
    else {
      MLRI__kcg_copy_BGCollector_T_BuildBGMessage_Pkg(
        &outC->storeCollector,
        &last_storeCollector);
      MLRI__kcg_copy_TelegramArray_T_BG_Types_Pkg(
        &outC->storeBGTelegramArray,
        &last_storeBGTelegramArray);
    }
  }
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MLRI__BuildBGMessage_BuildBGMessage_Pkg.c
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */

