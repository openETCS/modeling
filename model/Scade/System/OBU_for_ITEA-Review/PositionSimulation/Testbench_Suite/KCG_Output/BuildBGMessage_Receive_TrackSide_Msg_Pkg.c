/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BuildBGMessage_Receive_TrackSide_Msg_Pkg.h"

void BuildBGMessage_init_Receive_TrackSide_Msg_Pkg(
  outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg *outC)
{
  int i1;
  int i;
  
  outC->init = kcg_true;
  for (i = 0; i < 4; i++) {
    for (i1 = 0; i1 < 500; i1++) {
      outC->storeBGTelegramArray[i].packets.PacketData[i1] = 0;
    }
    for (i1 = 0; i1 < 30; i1++) {
      outC->storeBGTelegramArray[i].packets.PacketHeaders[i1].endAddress = 0;
      outC->storeBGTelegramArray[i].packets.PacketHeaders[i1].startAddress = 0;
      outC->storeBGTelegramArray[i].packets.PacketHeaders[i1].valid = kcg_true;
      outC->storeBGTelegramArray[i].packets.PacketHeaders[i1].q_dir =
        Q_DIR_Reverse;
      outC->storeBGTelegramArray[i].packets.PacketHeaders[i1].nid_packet = 0;
    }
    outC->storeBGTelegramArray[i].telegramheader.q_link = Q_LINK_Unlinked;
    outC->storeBGTelegramArray[i].telegramheader.nid_bg = 0;
    outC->storeBGTelegramArray[i].telegramheader.nid_c = 0;
    outC->storeBGTelegramArray[i].telegramheader.m_mcount = 0;
    outC->storeBGTelegramArray[i].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->storeBGTelegramArray[i].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->storeBGTelegramArray[i].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->storeBGTelegramArray[i].telegramheader.q_media = Q_MEDIA_Balise;
    outC->storeBGTelegramArray[i].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->storeBGTelegramArray[i].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->storeBGTelegramArray[i].checkResult = kcg_true;
    outC->storeBGTelegramArray[i].valid = kcg_true;
  }
  outC->storeCollector.totalTelegrams = 0;
  outC->storeCollector.collectedTelegrams = 0;
  outC->storeCollector.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->storeCollector.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->storeCollector.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->storeCollector.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->storeCollector.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->storeCollector.positionFirstContact.odometerOfBaliseDetection.acceleration =
    0;
  outC->storeCollector.positionFirstContact.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->storeCollector.positionFirstContact.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->storeCollector.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->storeCollector.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->storeCollector.positionFirstContact.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->storeCollector.positionFirstContact.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->storeCollector.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->storeCollector.positionFirstContact.odometerOfBaliseDetection.timestamp =
    0;
  outC->storeCollector.positionFirstContact.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->storeCollector.balisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->storeCollector.balisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->storeCollector.balisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->storeCollector.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->storeCollector.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->storeCollector.balisePosition.odometerOfBaliseDetection.acceleration =
    0;
  outC->storeCollector.balisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->storeCollector.balisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->storeCollector.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->storeCollector.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->storeCollector.balisePosition.odometerOfBaliseDetection.odo.o_max = 0;
  outC->storeCollector.balisePosition.odometerOfBaliseDetection.odo.o_min = 0;
  outC->storeCollector.balisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->storeCollector.balisePosition.odometerOfBaliseDetection.timestamp = 0;
  outC->storeCollector.balisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->storeCollector.BG_ID = 0;
  outC->storeCollector.C_ID = 0;
  outC->storeCollector.BGMessageSent = kcg_true;
  outC->storeCollector.badBaliseFlag = kcg_true;
  outC->storeAdditionalTelegram.position.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->storeAdditionalTelegram.position.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->storeAdditionalTelegram.position.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->storeAdditionalTelegram.position.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->storeAdditionalTelegram.position.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->storeAdditionalTelegram.position.odometerOfBaliseDetection.acceleration =
    0;
  outC->storeAdditionalTelegram.position.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->storeAdditionalTelegram.position.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->storeAdditionalTelegram.position.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->storeAdditionalTelegram.position.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->storeAdditionalTelegram.position.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->storeAdditionalTelegram.position.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->storeAdditionalTelegram.position.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->storeAdditionalTelegram.position.odometerOfBaliseDetection.timestamp =
    0;
  outC->storeAdditionalTelegram.position.odometerOfBaliseDetection.valid =
    kcg_true;
  for (i = 0; i < 500; i++) {
    outC->storeAdditionalTelegram.telegram.packets.PacketData[i] = 0;
  }
  for (i = 0; i < 30; i++) {
    outC->storeAdditionalTelegram.telegram.packets.PacketHeaders[i].endAddress =
      0;
    outC->storeAdditionalTelegram.telegram.packets.PacketHeaders[i].startAddress =
      0;
    outC->storeAdditionalTelegram.telegram.packets.PacketHeaders[i].valid =
      kcg_true;
    outC->storeAdditionalTelegram.telegram.packets.PacketHeaders[i].q_dir =
      Q_DIR_Reverse;
    outC->storeAdditionalTelegram.telegram.packets.PacketHeaders[i].nid_packet =
      0;
  }
  outC->storeAdditionalTelegram.telegram.telegramheader.q_link =
    Q_LINK_Unlinked;
  outC->storeAdditionalTelegram.telegram.telegramheader.nid_bg = 0;
  outC->storeAdditionalTelegram.telegram.telegramheader.nid_c = 0;
  outC->storeAdditionalTelegram.telegram.telegramheader.m_mcount = 0;
  outC->storeAdditionalTelegram.telegram.telegramheader.m_dup =
    M_DUP_No_duplicates;
  outC->storeAdditionalTelegram.telegram.telegramheader.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->storeAdditionalTelegram.telegram.telegramheader.n_pig =
    N_PIG_I_am_the_1st;
  outC->storeAdditionalTelegram.telegram.telegramheader.q_media =
    Q_MEDIA_Balise;
  outC->storeAdditionalTelegram.telegram.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->storeAdditionalTelegram.telegram.telegramheader.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->storeAdditionalTelegram.telegram.checkResult = kcg_true;
  outC->storeAdditionalTelegram.telegram.valid = kcg_true;
  outC->storeAdditionalTelegram.valid = kcg_true;
  outC->outBGMessage.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->outBGMessage.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->outBGMessage.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->outBGMessage.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->outBGMessage.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->outBGMessage.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    0;
  outC->outBGMessage.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->outBGMessage.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->outBGMessage.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->outBGMessage.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->outBGMessage.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->outBGMessage.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->outBGMessage.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->outBGMessage.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    0;
  outC->outBGMessage.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->outBGMessage.numberBalises = 0;
  for (i = 0; i < 4; i++) {
    for (i1 = 0; i1 < 500; i1++) {
      outC->outBGMessage.Telegrams[i].packets.PacketData[i1] = 0;
    }
    for (i1 = 0; i1 < 30; i1++) {
      outC->outBGMessage.Telegrams[i].packets.PacketHeaders[i1].endAddress = 0;
      outC->outBGMessage.Telegrams[i].packets.PacketHeaders[i1].startAddress =
        0;
      outC->outBGMessage.Telegrams[i].packets.PacketHeaders[i1].valid =
        kcg_true;
      outC->outBGMessage.Telegrams[i].packets.PacketHeaders[i1].q_dir =
        Q_DIR_Reverse;
      outC->outBGMessage.Telegrams[i].packets.PacketHeaders[i1].nid_packet = 0;
    }
    outC->outBGMessage.Telegrams[i].telegramheader.q_link = Q_LINK_Unlinked;
    outC->outBGMessage.Telegrams[i].telegramheader.nid_bg = 0;
    outC->outBGMessage.Telegrams[i].telegramheader.nid_c = 0;
    outC->outBGMessage.Telegrams[i].telegramheader.m_mcount = 0;
    outC->outBGMessage.Telegrams[i].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->outBGMessage.Telegrams[i].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->outBGMessage.Telegrams[i].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->outBGMessage.Telegrams[i].telegramheader.q_media = Q_MEDIA_Balise;
    outC->outBGMessage.Telegrams[i].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->outBGMessage.Telegrams[i].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->outBGMessage.Telegrams[i].checkResult = kcg_true;
    outC->outBGMessage.Telegrams[i].valid = kcg_true;
  }
  outC->outBGMessage.present = kcg_true;
}


void BuildBGMessage_reset_Receive_TrackSide_Msg_Pkg(
  outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg *outC)
{
  outC->init = kcg_true;
}

/* Receive_TrackSide_Msg_Pkg::BuildBGMessage */
void BuildBGMessage_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::reset */ kcg_bool reset,
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::inTelegramPresent */ kcg_bool inTelegramPresent,
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::inDecodedTelegram */ Telegram_T_BG_Types_Pkg *inDecodedTelegram,
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::incenterOfBalisePosition */ centerOfBalisePosition_T_BG_Types_Pkg *incenterOfBalisePosition,
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::inActualOdometry */ odometry_T_Obu_BasicTypes_Pkg *inActualOdometry,
  outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg *outC)
{
  TelegramStore_T_Receive_TrackSide_Msg_Pkg tmp3;
  Telegram_T_BG_Types_Pkg tmp2;
  centerOfBalisePosition_T_BG_Types_Pkg tmp1;
  kcg_bool tmp;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock4::else::_L11 */ Telegram_T_BG_Types_Pkg _L11_IfBlock4;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock4::else::_L12 */ centerOfBalisePosition_T_BG_Types_Pkg _L12_IfBlock4;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock2::then::_L45 */ BGCollector_T_Receive_TrackSide_Msg_Pkg _L45_IfBlock2;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock2::else::IfBlock3 */ kcg_bool IfBlock3_clock_IfBlock2;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock1::then::_L22 */ kcg_bool _L22_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock1::else::IfBlock3 */ kcg_bool IfBlock3_clock_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeBGTelegramArray */ TelegramArray_T_BG_Types_Pkg last_storeBGTelegramArray;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg last_storeCollector;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::BGisComplete */ kcg_bool BGisComplete;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::telegramPresent */ kcg_bool telegramPresent;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::tempCollectorStore */ BGCollector_T_Receive_TrackSide_Msg_Pkg tempCollectorStore;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::tempBGTelegramArray */ TelegramArray_T_BG_Types_Pkg tempBGTelegramArray;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::_L43 */ kcg_bool _L43;
  
  if (outC->init) {
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &last_storeBGTelegramArray,
      (TelegramArray_T_BG_Types_Pkg *) &cEmptyHeaderArray_bigConstants_Pkg);
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
    tmp = kcg_false;
  }
  else {
    if (outC->init) {
      kcg_copy_TelegramStore_T_Receive_TrackSide_Msg_Pkg(
        &tmp3,
        (TelegramStore_T_Receive_TrackSide_Msg_Pkg *)
          &cEmptyStore_Receive_TrackSide_Msg_Pkg);
    }
    else {
      kcg_copy_TelegramStore_T_Receive_TrackSide_Msg_Pkg(
        &tmp3,
        &outC->storeAdditionalTelegram);
    }
    /* 3 */
    manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg(
      inDecodedTelegram,
      incenterOfBalisePosition,
      &tmp3,
      inTelegramPresent,
      &telegramPresent,
      &_L11_IfBlock4,
      &_L12_IfBlock4,
      &tmp);
  }
  outC->init = kcg_false;
  if (telegramPresent) {
    if (reset) {
      kcg_copy_Telegram_T_BG_Types_Pkg(
        &tmp2,
        (Telegram_T_BG_Types_Pkg *) &cEmpty_BaliseTlg_BG_Types_Pkg);
      kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
        &tmp1,
        (centerOfBalisePosition_T_BG_Types_Pkg *) &cemptyPosition_BG_Types_Pkg);
    }
    else {
      kcg_copy_Telegram_T_BG_Types_Pkg(&tmp2, &_L11_IfBlock4);
      kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(&tmp1, &_L12_IfBlock4);
    }
    /* 1 */
    manageTelegram_Receive_TrackSide_Msg_Pkg(
      &tmp2,
      &tmp1,
      &last_storeCollector,
      &last_storeBGTelegramArray,
      &BGisComplete,
      &IfBlock3_clock_IfBlock2,
      &tempCollectorStore,
      &tempBGTelegramArray,
      &_L22_IfBlock1);
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
      kcg_copy_TelegramArray_T_BG_Types_Pkg(
        &tempBGTelegramArray,
        &last_storeBGTelegramArray);
    }
    else {
      IfBlock3_clock_IfBlock2 = kcg_false;
      BGisComplete = kcg_false;
      kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
        &tempCollectorStore,
        (BGCollector_T_Receive_TrackSide_Msg_Pkg *)
          &cEmptyCollector_Receive_TrackSide_Msg_Pkg);
      kcg_copy_TelegramArray_T_BG_Types_Pkg(
        &tempBGTelegramArray,
        (TelegramArray_T_BG_Types_Pkg *) &cEmptyHeaderArray_bigConstants_Pkg);
    }
  }
  if (inTelegramPresent & (tmp | IfBlock3_clock_IfBlock2) & _L43) {
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
    outC->outBGMessage.numberBalises = _L45_IfBlock2.totalTelegrams;
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
      (TelegramArray_T_BG_Types_Pkg *) &cEmptyHeaderArray_bigConstants_Pkg);
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

/* $************* KCG Version 6.4 beta5 (build i13) *************
** BuildBGMessage_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

