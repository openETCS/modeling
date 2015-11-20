/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BuildBGMessage_Receive_TrackSide_Msg_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void BuildBGMessage_init_Receive_TrackSide_Msg_Pkg(
  outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg *outC)
{
  static kcg_int i7;
  static kcg_int i6;
  static kcg_int i5;
  static kcg_int i4;
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->init = kcg_true;
  for (i2 = 0; i2 < 8; i2++) {
    outC->storeBGTelegramArray[i2].valid = kcg_true;
    outC->storeBGTelegramArray[i2].checkResult = kcg_true;
    outC->storeBGTelegramArray[i2].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->storeBGTelegramArray[i2].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->storeBGTelegramArray[i2].telegramheader.q_media = Q_MEDIA_Balise;
    outC->storeBGTelegramArray[i2].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->storeBGTelegramArray[i2].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->storeBGTelegramArray[i2].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->storeBGTelegramArray[i2].telegramheader.m_mcount = 0;
    outC->storeBGTelegramArray[i2].telegramheader.nid_c = 0;
    outC->storeBGTelegramArray[i2].telegramheader.nid_bg = 0;
    outC->storeBGTelegramArray[i2].telegramheader.q_link = Q_LINK_Unlinked;
    for (i = 0; i < 30; i++) {
      outC->storeBGTelegramArray[i2].packets.PacketHeaders[i].nid_packet = 0;
      outC->storeBGTelegramArray[i2].packets.PacketHeaders[i].q_dir =
        Q_DIR_Reverse;
      outC->storeBGTelegramArray[i2].packets.PacketHeaders[i].valid = kcg_true;
      outC->storeBGTelegramArray[i2].packets.PacketHeaders[i].startAddress = 0;
      outC->storeBGTelegramArray[i2].packets.PacketHeaders[i].endAddress = 0;
    }
    for (i1 = 0; i1 < 500; i1++) {
      outC->storeBGTelegramArray[i2].packets.PacketData[i1] = 0;
    }
  }
  outC->storeCollector.badBaliseFlag = kcg_true;
  outC->storeCollector.BGMessageSent = kcg_true;
  outC->storeCollector.C_ID = 0;
  outC->storeCollector.BG_ID = 0;
  outC->storeCollector.balisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->storeCollector.balisePosition.odometerOfBaliseDetection.timestamp = 0;
  outC->storeCollector.balisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->storeCollector.balisePosition.odometerOfBaliseDetection.odo.o_min = 0;
  outC->storeCollector.balisePosition.odometerOfBaliseDetection.odo.o_max = 0;
  outC->storeCollector.balisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->storeCollector.balisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->storeCollector.balisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->storeCollector.balisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->storeCollector.balisePosition.odometerOfBaliseDetection.acceleration =
    0;
  outC->storeCollector.balisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->storeCollector.balisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->storeCollector.balisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->storeCollector.balisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->storeCollector.balisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->storeCollector.positionFirstContact.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->storeCollector.positionFirstContact.odometerOfBaliseDetection.timestamp =
    0;
  outC->storeCollector.positionFirstContact.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->storeCollector.positionFirstContact.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->storeCollector.positionFirstContact.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->storeCollector.positionFirstContact.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->storeCollector.positionFirstContact.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->storeCollector.positionFirstContact.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->storeCollector.positionFirstContact.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->storeCollector.positionFirstContact.odometerOfBaliseDetection.acceleration =
    0;
  outC->storeCollector.positionFirstContact.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->storeCollector.positionFirstContact.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->storeCollector.positionFirstContact.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->storeCollector.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->storeCollector.positionFirstContact.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->storeCollector.collectedTelegrams = 0;
  outC->storeCollector.totalTelegrams = 0;
  outC->storeAdditionalTelegram.valid = kcg_true;
  outC->storeAdditionalTelegram.telegram.valid = kcg_true;
  outC->storeAdditionalTelegram.telegram.checkResult = kcg_true;
  outC->storeAdditionalTelegram.telegram.telegramheader.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->storeAdditionalTelegram.telegram.telegramheader.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->storeAdditionalTelegram.telegram.telegramheader.q_media =
    Q_MEDIA_Balise;
  outC->storeAdditionalTelegram.telegram.telegramheader.n_pig =
    N_PIG_I_am_the_1st;
  outC->storeAdditionalTelegram.telegram.telegramheader.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->storeAdditionalTelegram.telegram.telegramheader.m_dup =
    M_DUP_No_duplicates;
  outC->storeAdditionalTelegram.telegram.telegramheader.m_mcount = 0;
  outC->storeAdditionalTelegram.telegram.telegramheader.nid_c = 0;
  outC->storeAdditionalTelegram.telegram.telegramheader.nid_bg = 0;
  outC->storeAdditionalTelegram.telegram.telegramheader.q_link =
    Q_LINK_Unlinked;
  for (i3 = 0; i3 < 30; i3++) {
    outC->storeAdditionalTelegram.telegram.packets.PacketHeaders[i3].nid_packet =
      0;
    outC->storeAdditionalTelegram.telegram.packets.PacketHeaders[i3].q_dir =
      Q_DIR_Reverse;
    outC->storeAdditionalTelegram.telegram.packets.PacketHeaders[i3].valid =
      kcg_true;
    outC->storeAdditionalTelegram.telegram.packets.PacketHeaders[i3].startAddress =
      0;
    outC->storeAdditionalTelegram.telegram.packets.PacketHeaders[i3].endAddress =
      0;
  }
  for (i4 = 0; i4 < 500; i4++) {
    outC->storeAdditionalTelegram.telegram.packets.PacketData[i4] = 0;
  }
  outC->storeAdditionalTelegram.position.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->storeAdditionalTelegram.position.odometerOfBaliseDetection.timestamp =
    0;
  outC->storeAdditionalTelegram.position.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->storeAdditionalTelegram.position.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->storeAdditionalTelegram.position.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->storeAdditionalTelegram.position.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->storeAdditionalTelegram.position.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->storeAdditionalTelegram.position.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->storeAdditionalTelegram.position.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->storeAdditionalTelegram.position.odometerOfBaliseDetection.acceleration =
    0;
  outC->storeAdditionalTelegram.position.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->storeAdditionalTelegram.position.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->storeAdditionalTelegram.position.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->storeAdditionalTelegram.position.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->storeAdditionalTelegram.position.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->outBGMessage.present = kcg_true;
  for (i7 = 0; i7 < 8; i7++) {
    outC->outBGMessage.Telegrams[i7].valid = kcg_true;
    outC->outBGMessage.Telegrams[i7].checkResult = kcg_true;
    outC->outBGMessage.Telegrams[i7].telegramheader.q_updown =
      Q_UPDOWN_Down_link_telegram;
    outC->outBGMessage.Telegrams[i7].telegramheader.m_version =
      M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
    outC->outBGMessage.Telegrams[i7].telegramheader.q_media = Q_MEDIA_Balise;
    outC->outBGMessage.Telegrams[i7].telegramheader.n_pig = N_PIG_I_am_the_1st;
    outC->outBGMessage.Telegrams[i7].telegramheader.n_total =
      N_TOTAL_1_balise_in_the_group;
    outC->outBGMessage.Telegrams[i7].telegramheader.m_dup = M_DUP_No_duplicates;
    outC->outBGMessage.Telegrams[i7].telegramheader.m_mcount = 0;
    outC->outBGMessage.Telegrams[i7].telegramheader.nid_c = 0;
    outC->outBGMessage.Telegrams[i7].telegramheader.nid_bg = 0;
    outC->outBGMessage.Telegrams[i7].telegramheader.q_link = Q_LINK_Unlinked;
    for (i5 = 0; i5 < 30; i5++) {
      outC->outBGMessage.Telegrams[i7].packets.PacketHeaders[i5].nid_packet = 0;
      outC->outBGMessage.Telegrams[i7].packets.PacketHeaders[i5].q_dir =
        Q_DIR_Reverse;
      outC->outBGMessage.Telegrams[i7].packets.PacketHeaders[i5].valid =
        kcg_true;
      outC->outBGMessage.Telegrams[i7].packets.PacketHeaders[i5].startAddress =
        0;
      outC->outBGMessage.Telegrams[i7].packets.PacketHeaders[i5].endAddress = 0;
    }
    for (i6 = 0; i6 < 500; i6++) {
      outC->outBGMessage.Telegrams[i7].packets.PacketData[i6] = 0;
    }
  }
  outC->outBGMessage.numberBalises = 0;
  outC->outBGMessage.centerOfBalisePosition.odometerOfBaliseDetection.valid =
    kcg_true;
  outC->outBGMessage.centerOfBalisePosition.odometerOfBaliseDetection.timestamp =
    0;
  outC->outBGMessage.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_nominal =
    0;
  outC->outBGMessage.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_min =
    0;
  outC->outBGMessage.centerOfBalisePosition.odometerOfBaliseDetection.odo.o_max =
    0;
  outC->outBGMessage.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_safeNominal =
    0;
  outC->outBGMessage.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_rawNominal =
    0;
  outC->outBGMessage.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_lower =
    0;
  outC->outBGMessage.centerOfBalisePosition.odometerOfBaliseDetection.speed.v_upper =
    0;
  outC->outBGMessage.centerOfBalisePosition.odometerOfBaliseDetection.acceleration =
    0;
  outC->outBGMessage.centerOfBalisePosition.odometerOfBaliseDetection.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->outBGMessage.centerOfBalisePosition.odometerOfBaliseDetection.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->outBGMessage.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->outBGMessage.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->outBGMessage.centerOfBalisePosition.BG_centerDetectionInaccuraccuracies.d_max =
    0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void BuildBGMessage_reset_Receive_TrackSide_Msg_Pkg(
  outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Receive_TrackSide_Msg_Pkg::BuildBGMessage */
void BuildBGMessage_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::reset */ kcg_bool reset,
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::inTelegramPresent */ kcg_bool inTelegramPresent,
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::inDecodedTelegram */ Telegram_T_BG_Types_Pkg *inDecodedTelegram,
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::incenterOfBalisePosition */ centerOfBalisePosition_T_BG_Types_Pkg *incenterOfBalisePosition,
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::inActualOdometry */ odometry_T_Obu_BasicTypes_Pkg *inActualOdometry,
  outC_BuildBGMessage_Receive_TrackSide_Msg_Pkg *outC)
{
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::needTelegramStore */
  static kcg_bool _4_needTelegramStore;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::positionToUse */
  static centerOfBalisePosition_T_BG_Types_Pkg _3_positionToUse;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::telegramPresent */
  static kcg_bool _2_telegramPresent;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::telegramToUse */
  static Telegram_T_BG_Types_Pkg _1_telegramToUse;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock4::then::_L1 */
  static kcg_bool _L1_IfBlock4;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::needTelegramStore */
  static kcg_bool needTelegramStore;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::positionToUse */
  static centerOfBalisePosition_T_BG_Types_Pkg positionToUse;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::telegramPresent */
  static kcg_bool telegramPresent;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::telegramToUse */
  static Telegram_T_BG_Types_Pkg telegramToUse;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock4::else::_L10 */
  static kcg_bool _L10_IfBlock4;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock4::else::_L11 */
  static Telegram_T_BG_Types_Pkg _L11_IfBlock4;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock4::else::_L12 */
  static centerOfBalisePosition_T_BG_Types_Pkg _L12_IfBlock4;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock4::else::_L13 */
  static kcg_bool _L13_IfBlock4;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock4::else::_L9 */
  static kcg_bool _L9_IfBlock4;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock4::else::_L5 */
  static TelegramStore_T_Receive_TrackSide_Msg_Pkg _L5_IfBlock4;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock4::else::_L6 */
  static Telegram_T_BG_Types_Pkg _L6_IfBlock4;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock4::else::_L7 */
  static centerOfBalisePosition_T_BG_Types_Pkg _L7_IfBlock4;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::testBG */
  static BG_Message_T_BG_Types_Pkg _7_testBG;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeBGTelegramArray */
  static TelegramArray_T_BG_Types_Pkg _6_storeBGTelegramArray;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeCollector */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg _5_storeCollector;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock2::then::_L48 */
  static centerOfBalisePosition_T_BG_Types_Pkg _L48_IfBlock2;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock2::then::_L46 */
  static kcg_int _L46_IfBlock2;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock2::then::_L45 */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg _L45_IfBlock2;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock2::then::_L41 */
  static TelegramArray_T_BG_Types_Pkg _L41_IfBlock2;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock2::then::_L29 */
  static TelegramArray_T_BG_Types_Pkg _L29_IfBlock2;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock2::then::_L23 */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg _L23_IfBlock2;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock2::then::_L14 */
  static kcg_bool _L14_IfBlock2;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock2::then::_L7 */
  static BG_Message_T_BG_Types_Pkg _L7_IfBlock2;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::testBG */
  static BG_Message_T_BG_Types_Pkg testBG;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeBGTelegramArray */
  static TelegramArray_T_BG_Types_Pkg storeBGTelegramArray;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeCollector */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg storeCollector;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock2::else::_L12 */
  static TelegramArray_T_BG_Types_Pkg _L12_IfBlock2;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock2::else::_L11 */
  static centerOfBalisePosition_T_BG_Types_Pkg _L11_IfBlock2;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock2::else::_L6 */
  static kcg_int _L6_IfBlock2;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock2::else::_L3 */
  static BG_Message_T_BG_Types_Pkg _L3_IfBlock2;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock2::else::_L1 */
  static kcg_bool _L1_IfBlock2;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock2::else::IfBlock3 */
  static kcg_bool IfBlock3_clock_IfBlock2;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock2::else::IfBlock3::else::_L1 */
  static TelegramArray_T_BG_Types_Pkg _L128_IfBlock2_IfBlock3;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock2::else::IfBlock3::else::_L2 */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg _L227_IfBlock2_IfBlock3;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeCollector */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg _8_storeCollector;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeBGTelegramArray */
  static TelegramArray_T_BG_Types_Pkg _9_storeBGTelegramArray;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock2::else::IfBlock3::then::_L1 */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg _L1_IfBlock2_IfBlock3;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock2::else::IfBlock3::then::_L2 */
  static TelegramArray_T_BG_Types_Pkg _L2_IfBlock2_IfBlock3;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeCollector */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg _10_storeCollector;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeBGTelegramArray */
  static TelegramArray_T_BG_Types_Pkg _11_storeBGTelegramArray;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeIsChanged */
  static kcg_bool _16_storeIsChanged;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::tempBGTelegramArray */
  static TelegramArray_T_BG_Types_Pkg _15_tempBGTelegramArray;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::tempCollectorStore */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg _14_tempCollectorStore;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::BGisChangedEarly */
  static kcg_bool _13_BGisChangedEarly;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::BGisComplete */
  static kcg_bool _12_BGisComplete;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock1::then::_L22 */
  static kcg_bool _L22_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock1::then::_L20 */
  static TelegramArray_T_BG_Types_Pkg _L20_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock1::then::_L18 */
  static TelegramArray_T_BG_Types_Pkg _L18_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock1::then::_L14 */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg _L14_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock1::then::_L12 */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg _L12_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock1::then::_L11 */
  static centerOfBalisePosition_T_BG_Types_Pkg _L11_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock1::then::_L10 */
  static Telegram_T_BG_Types_Pkg _L10_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock1::then::_L4 */
  static kcg_bool _L4_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock1::then::_L5 */
  static kcg_bool _L5_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeIsChanged */
  static kcg_bool storeIsChanged;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::tempBGTelegramArray */
  static TelegramArray_T_BG_Types_Pkg tempBGTelegramArray;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::tempCollectorStore */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg tempCollectorStore;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::BGisChangedEarly */
  static kcg_bool BGisChangedEarly;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::BGisComplete */
  static kcg_bool BGisComplete;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock1::else::IfBlock3 */
  static kcg_bool IfBlock3_clock_IfBlock1;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock1::else::IfBlock3::else::_L1 */
  static kcg_bool _L1_IfBlock1_IfBlock3;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock1::else::IfBlock3::else::_L2 */
  static kcg_bool _L2_IfBlock1_IfBlock3;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::BGisComplete */
  static kcg_bool _17_BGisComplete;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::BGisChangedEarly */
  static kcg_bool _18_BGisChangedEarly;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::tempCollectorStore */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg _19_tempCollectorStore;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::tempBGTelegramArray */
  static TelegramArray_T_BG_Types_Pkg _20_tempBGTelegramArray;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeIsChanged */
  static kcg_bool _21_storeIsChanged;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock1::else::IfBlock3::then::_L6 */
  static kcg_bool _L6_IfBlock1_IfBlock3;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock1::else::IfBlock3::then::_L5 */
  static odometry_T_Obu_BasicTypes_Pkg _L5_IfBlock1_IfBlock3;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock1::else::IfBlock3::then::_L4 */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg _L4_IfBlock1_IfBlock3;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock1::else::IfBlock3::then::_L7 */
  static kcg_bool _L7_IfBlock1_IfBlock3;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock1::else::IfBlock3::then::_L9 */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg _L9_IfBlock1_IfBlock3;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock1::else::IfBlock3::then::_L11 */
  static TelegramArray_T_BG_Types_Pkg _L11_IfBlock1_IfBlock3;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::BGisComplete */
  static kcg_bool _22_BGisComplete;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::BGisChangedEarly */
  static kcg_bool _23_BGisChangedEarly;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::tempCollectorStore */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg _24_tempCollectorStore;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::tempBGTelegramArray */
  static TelegramArray_T_BG_Types_Pkg _25_tempBGTelegramArray;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeIsChanged */
  static kcg_bool _26_storeIsChanged;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeBGTelegramArray */
  static TelegramArray_T_BG_Types_Pkg last_storeBGTelegramArray;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeCollector */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg last_storeCollector;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeAdditionalTelegram */
  static TelegramStore_T_Receive_TrackSide_Msg_Pkg last_storeAdditionalTelegram;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock4 */
  static kcg_bool IfBlock4_clock;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock2 */
  static kcg_bool IfBlock2_clock;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::BGisComplete */
  static kcg_bool _38_BGisComplete;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::BGisChangedEarly */
  static kcg_bool _37_BGisChangedEarly;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::telegramToUse */
  static Telegram_T_BG_Types_Pkg _36_telegramToUse;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::telegramPresent */
  static kcg_bool _35_telegramPresent;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::positionToUse */
  static centerOfBalisePosition_T_BG_Types_Pkg _34_positionToUse;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::needTelegramStore */
  static kcg_bool _33_needTelegramStore;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::tempCollectorStore */
  static BGCollector_T_Receive_TrackSide_Msg_Pkg _32_tempCollectorStore;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::tempBGTelegramArray */
  static TelegramArray_T_BG_Types_Pkg _31_tempBGTelegramArray;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::storeIsChanged */
  static kcg_bool _30_storeIsChanged;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::testBG */
  static BG_Message_T_BG_Types_Pkg _29_testBG;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::_L30 */
  static TelegramStore_T_Receive_TrackSide_Msg_Pkg _L30;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::_L27 */
  static Telegram_T_BG_Types_Pkg _L27;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::_L26 */
  static TelegramStore_T_Receive_TrackSide_Msg_Pkg _L26;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::_L25 */
  static kcg_bool _L25;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::_L23 */
  static centerOfBalisePosition_T_BG_Types_Pkg _L23;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::_L31 */
  static kcg_bool _L31;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::_L34 */
  static kcg_bool _L34;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::_L42 */
  static kcg_bool _L42;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::_L43 */
  static kcg_bool _L43;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::_L44 */
  static kcg_bool _L44;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::_L45 */
  static kcg_bool _L45;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::_L46 */
  static kcg_bool _L46;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::_L47 */
  static TelegramStore_T_Receive_TrackSide_Msg_Pkg _L47;
  /* Receive_TrackSide_Msg_Pkg::BuildBGMessage::_L48 */
  static BG_Message_T_BG_Types_Pkg _L48;
  
  IfBlock4_clock = reset;
  /* ck_IfBlock4 */ if (IfBlock4_clock) {
  }
  else {
    kcg_copy_Telegram_T_BG_Types_Pkg(&_L6_IfBlock4, inDecodedTelegram);
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &_L7_IfBlock4,
      incenterOfBalisePosition);
  }
  /* last_init_ck_storeAdditionalTelegram */ if (outC->init) {
    kcg_copy_TelegramStore_T_Receive_TrackSide_Msg_Pkg(
      &last_storeAdditionalTelegram,
      (TelegramStore_T_Receive_TrackSide_Msg_Pkg *)
        &cEmptyStore_Receive_TrackSide_Msg_Pkg);
  }
  else {
    kcg_copy_TelegramStore_T_Receive_TrackSide_Msg_Pkg(
      &last_storeAdditionalTelegram,
      &outC->storeAdditionalTelegram);
  }
  /* ck_IfBlock4 */ if (IfBlock4_clock) {
    _L1_IfBlock4 = kcg_false;
    _2_telegramPresent = _L1_IfBlock4;
    _35_telegramPresent = _2_telegramPresent;
  }
  else {
    kcg_copy_TelegramStore_T_Receive_TrackSide_Msg_Pkg(
      &_L5_IfBlock4,
      &last_storeAdditionalTelegram);
    _L9_IfBlock4 = inTelegramPresent;
    /* 3 */
    manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg(
      &_L6_IfBlock4,
      &_L7_IfBlock4,
      &_L5_IfBlock4,
      _L9_IfBlock4,
      &_L10_IfBlock4,
      &_L11_IfBlock4,
      &_L12_IfBlock4,
      &_L13_IfBlock4);
    telegramPresent = _L10_IfBlock4;
    _35_telegramPresent = telegramPresent;
  }
  IfBlock1_clock = _35_telegramPresent;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
  }
  else {
    IfBlock3_clock_IfBlock1 = !reset;
    /* ck_IfBlock3 */ if (IfBlock3_clock_IfBlock1) {
      kcg_copy_odometry_T_Obu_BasicTypes_Pkg(
        &_L5_IfBlock1_IfBlock3,
        inActualOdometry);
    }
    else {
      _L2_IfBlock1_IfBlock3 = kcg_false;
      _17_BGisComplete = _L2_IfBlock1_IfBlock3;
    }
  }
  /* last_init_ck_storeCollector */ if (outC->init) {
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &last_storeCollector,
      (BGCollector_T_Receive_TrackSide_Msg_Pkg *)
        &cEmptyCollector_Receive_TrackSide_Msg_Pkg);
  }
  else {
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &last_storeCollector,
      &outC->storeCollector);
  }
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
  }
  else /* ck_IfBlock3 */ if (IfBlock3_clock_IfBlock1) {
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &_L4_IfBlock1_IfBlock3,
      &last_storeCollector);
    /* 3 */
    checkOdometry_Receive_TrackSide_Msg_Pkg(
      &_L5_IfBlock1_IfBlock3,
      &_L4_IfBlock1_IfBlock3,
      &_L6_IfBlock1_IfBlock3,
      &_L7_IfBlock1_IfBlock3,
      &_L9_IfBlock1_IfBlock3);
    _22_BGisComplete = _L6_IfBlock1_IfBlock3;
    BGisComplete = _22_BGisComplete;
  }
  else {
    BGisComplete = _17_BGisComplete;
  }
  /* ck_IfBlock4 */ if (IfBlock4_clock) {
    kcg_copy_Telegram_T_BG_Types_Pkg(
      &_1_telegramToUse,
      (Telegram_T_BG_Types_Pkg *) &cEmpty_BaliseTlg_BG_Types_Pkg);
    kcg_copy_Telegram_T_BG_Types_Pkg(&_36_telegramToUse, &_1_telegramToUse);
  }
  else {
    kcg_copy_Telegram_T_BG_Types_Pkg(&telegramToUse, &_L11_IfBlock4);
    kcg_copy_Telegram_T_BG_Types_Pkg(&_36_telegramToUse, &telegramToUse);
  }
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_Telegram_T_BG_Types_Pkg(&_L10_IfBlock1, &_36_telegramToUse);
  }
  /* ck_IfBlock4 */ if (IfBlock4_clock) {
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &_3_positionToUse,
      (centerOfBalisePosition_T_BG_Types_Pkg *) &cemptyPosition_BG_Types_Pkg);
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &_34_positionToUse,
      &_3_positionToUse);
  }
  else {
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &positionToUse,
      &_L12_IfBlock4);
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &_34_positionToUse,
      &positionToUse);
  }
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &_L11_IfBlock1,
      &_34_positionToUse);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &_L14_IfBlock1,
      &last_storeCollector);
  }
  /* last_init_ck_storeBGTelegramArray */ if (outC->init) {
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &last_storeBGTelegramArray,
      (TelegramArray_T_BG_Types_Pkg *) &cEmptyTelegramArray_BG_Types_Pkg);
  }
  else {
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &last_storeBGTelegramArray,
      &outC->storeBGTelegramArray);
  }
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &_L20_IfBlock1,
      &last_storeBGTelegramArray);
    /* 1 */
    manageTelegram_Receive_TrackSide_Msg_Pkg(
      &_L10_IfBlock1,
      &_L11_IfBlock1,
      &_L14_IfBlock1,
      &_L20_IfBlock1,
      &_L4_IfBlock1,
      &_L5_IfBlock1,
      &_L12_IfBlock1,
      &_L18_IfBlock1,
      &_L22_IfBlock1);
    _12_BGisComplete = _L4_IfBlock1;
    _38_BGisComplete = _12_BGisComplete;
    _13_BGisChangedEarly = _L5_IfBlock1;
    _37_BGisChangedEarly = _13_BGisChangedEarly;
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &_14_tempCollectorStore,
      &_L12_IfBlock1);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &_32_tempCollectorStore,
      &_14_tempCollectorStore);
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &_15_tempBGTelegramArray,
      &_L18_IfBlock1);
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &_31_tempBGTelegramArray,
      &_15_tempBGTelegramArray);
    _16_storeIsChanged = _L22_IfBlock1;
    _30_storeIsChanged = _16_storeIsChanged;
  }
  else {
    _38_BGisComplete = BGisComplete;
    /* ck_IfBlock3 */ if (IfBlock3_clock_IfBlock1) {
      _23_BGisChangedEarly = _L7_IfBlock1_IfBlock3;
      BGisChangedEarly = _23_BGisChangedEarly;
    }
    else {
      _18_BGisChangedEarly = kcg_false;
      BGisChangedEarly = _18_BGisChangedEarly;
    }
    _37_BGisChangedEarly = BGisChangedEarly;
    /* ck_IfBlock3 */ if (IfBlock3_clock_IfBlock1) {
      kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
        &_24_tempCollectorStore,
        &_L9_IfBlock1_IfBlock3);
      kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
        &tempCollectorStore,
        &_24_tempCollectorStore);
    }
    else {
      kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
        &_19_tempCollectorStore,
        (BGCollector_T_Receive_TrackSide_Msg_Pkg *)
          &cEmptyCollector_Receive_TrackSide_Msg_Pkg);
      kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
        &tempCollectorStore,
        &_19_tempCollectorStore);
    }
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &_32_tempCollectorStore,
      &tempCollectorStore);
    /* ck_IfBlock3 */ if (IfBlock3_clock_IfBlock1) {
      kcg_copy_TelegramArray_T_BG_Types_Pkg(
        &_L11_IfBlock1_IfBlock3,
        &last_storeBGTelegramArray);
      kcg_copy_TelegramArray_T_BG_Types_Pkg(
        &_25_tempBGTelegramArray,
        &_L11_IfBlock1_IfBlock3);
      kcg_copy_TelegramArray_T_BG_Types_Pkg(
        &tempBGTelegramArray,
        &_25_tempBGTelegramArray);
    }
    else {
      kcg_copy_TelegramArray_T_BG_Types_Pkg(
        &_20_tempBGTelegramArray,
        (TelegramArray_T_BG_Types_Pkg *) &cEmptyTelegramArray_BG_Types_Pkg);
      kcg_copy_TelegramArray_T_BG_Types_Pkg(
        &tempBGTelegramArray,
        &_20_tempBGTelegramArray);
    }
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &_31_tempBGTelegramArray,
      &tempBGTelegramArray);
    /* ck_IfBlock3 */ if (IfBlock3_clock_IfBlock1) {
      _26_storeIsChanged = kcg_false;
      storeIsChanged = _26_storeIsChanged;
    }
    else {
      _L1_IfBlock1_IfBlock3 = kcg_true;
      _21_storeIsChanged = _L1_IfBlock1_IfBlock3;
      storeIsChanged = _21_storeIsChanged;
    }
    _30_storeIsChanged = storeIsChanged;
  }
  IfBlock2_clock = _38_BGisComplete;
  /* ck_IfBlock2 */ if (IfBlock2_clock) {
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &_L23_IfBlock2,
      &_32_tempCollectorStore);
    /* 1 */
    updateCollectorSendMessage_Receive_TrackSide_Msg_Pkg_BaliseSupport(
      &_L23_IfBlock2,
      &_L45_IfBlock2);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &_5_storeCollector,
      &_L45_IfBlock2);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->storeCollector,
      &_5_storeCollector);
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &_L41_IfBlock2,
      &_31_tempBGTelegramArray);
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &_6_storeBGTelegramArray,
      &_L41_IfBlock2);
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->storeBGTelegramArray,
      &_6_storeBGTelegramArray);
    _L14_IfBlock2 = kcg_true;
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &_L29_IfBlock2,
      &_31_tempBGTelegramArray);
    _L46_IfBlock2 = _L45_IfBlock2.collectedTelegrams;
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &_L48_IfBlock2,
      &_L45_IfBlock2.balisePosition);
    _L7_IfBlock2.present = _L14_IfBlock2;
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &_L7_IfBlock2.Telegrams,
      &_L29_IfBlock2);
    _L7_IfBlock2.numberBalises = _L46_IfBlock2;
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &_L7_IfBlock2.centerOfBalisePosition,
      &_L48_IfBlock2);
    kcg_copy_BG_Message_T_BG_Types_Pkg(&_7_testBG, &_L7_IfBlock2);
    kcg_copy_BG_Message_T_BG_Types_Pkg(&_29_testBG, &_7_testBG);
  }
  else {
    IfBlock3_clock_IfBlock2 = _30_storeIsChanged;
    /* ck_IfBlock3 */ if (IfBlock3_clock_IfBlock2) {
      kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
        &_L1_IfBlock2_IfBlock3,
        &_32_tempCollectorStore);
      kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
        &_10_storeCollector,
        &_L1_IfBlock2_IfBlock3);
      kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
        &storeCollector,
        &_10_storeCollector);
    }
    else {
      kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
        &_L227_IfBlock2_IfBlock3,
        &last_storeCollector);
      kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
        &_8_storeCollector,
        &_L227_IfBlock2_IfBlock3);
      kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
        &storeCollector,
        &_8_storeCollector);
    }
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->storeCollector,
      &storeCollector);
    /* ck_IfBlock3 */ if (IfBlock3_clock_IfBlock2) {
      kcg_copy_TelegramArray_T_BG_Types_Pkg(
        &_L2_IfBlock2_IfBlock3,
        &_31_tempBGTelegramArray);
      kcg_copy_TelegramArray_T_BG_Types_Pkg(
        &_11_storeBGTelegramArray,
        &_L2_IfBlock2_IfBlock3);
      kcg_copy_TelegramArray_T_BG_Types_Pkg(
        &storeBGTelegramArray,
        &_11_storeBGTelegramArray);
    }
    else {
      kcg_copy_TelegramArray_T_BG_Types_Pkg(
        &_L128_IfBlock2_IfBlock3,
        &last_storeBGTelegramArray);
      kcg_copy_TelegramArray_T_BG_Types_Pkg(
        &_9_storeBGTelegramArray,
        &_L128_IfBlock2_IfBlock3);
      kcg_copy_TelegramArray_T_BG_Types_Pkg(
        &storeBGTelegramArray,
        &_9_storeBGTelegramArray);
    }
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->storeBGTelegramArray,
      &storeBGTelegramArray);
    _L1_IfBlock2 = kcg_false;
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &_L12_IfBlock2,
      (TelegramArray_T_BG_Types_Pkg *) &cEmptyTelegramArray_BG_Types_Pkg);
    _L6_IfBlock2 = 0;
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &_L11_IfBlock2,
      (centerOfBalisePosition_T_BG_Types_Pkg *) &cemptyPosition_BG_Types_Pkg);
    _L3_IfBlock2.present = _L1_IfBlock2;
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &_L3_IfBlock2.Telegrams,
      &_L12_IfBlock2);
    _L3_IfBlock2.numberBalises = _L6_IfBlock2;
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &_L3_IfBlock2.centerOfBalisePosition,
      &_L11_IfBlock2);
    kcg_copy_BG_Message_T_BG_Types_Pkg(&testBG, &_L3_IfBlock2);
    kcg_copy_BG_Message_T_BG_Types_Pkg(&_29_testBG, &testBG);
  }
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &_L23,
    incenterOfBalisePosition);
  _L25 = kcg_true;
  _L46 = inTelegramPresent;
  /* ck_IfBlock4 */ if (IfBlock4_clock) {
    _4_needTelegramStore = kcg_false;
    _33_needTelegramStore = _4_needTelegramStore;
  }
  else {
    needTelegramStore = _L13_IfBlock4;
    _33_needTelegramStore = needTelegramStore;
  }
  _L31 = _33_needTelegramStore;
  _L44 = _37_BGisChangedEarly;
  _L45 = _L31 | _L44;
  _L42 = reset;
  _L43 = !_L42;
  _L34 = _L46 & _L45 & _L43;
  kcg_copy_Telegram_T_BG_Types_Pkg(&_L27, inDecodedTelegram);
  _L30.valid = _L25;
  kcg_copy_Telegram_T_BG_Types_Pkg(&_L30.telegram, &_L27);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(&_L30.position, &_L23);
  kcg_copy_TelegramStore_T_Receive_TrackSide_Msg_Pkg(
    &_L47,
    (TelegramStore_T_Receive_TrackSide_Msg_Pkg *)
      &cEmptyStore_Receive_TrackSide_Msg_Pkg);
  /* 3 */ if (_L34) {
    kcg_copy_TelegramStore_T_Receive_TrackSide_Msg_Pkg(&_L26, &_L30);
  }
  else {
    kcg_copy_TelegramStore_T_Receive_TrackSide_Msg_Pkg(&_L26, &_L47);
  }
  kcg_copy_TelegramStore_T_Receive_TrackSide_Msg_Pkg(
    &outC->storeAdditionalTelegram,
    &_L26);
  kcg_copy_BG_Message_T_BG_Types_Pkg(&_L48, &_29_testBG);
  kcg_copy_BG_Message_T_BG_Types_Pkg(&outC->outBGMessage, &_L48);
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** BuildBGMessage_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

