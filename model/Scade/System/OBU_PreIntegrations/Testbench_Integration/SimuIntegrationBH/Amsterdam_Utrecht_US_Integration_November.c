/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Amsterdam_Utrecht_US_Integration_November.h"

/* US_Integration_November::Amsterdam_Utrecht */
void Amsterdam_Utrecht_US_Integration_November(
  /* US_Integration_November::Amsterdam_Utrecht::TrainPos */ kcg_real TrainPos,
  /* US_Integration_November::Amsterdam_Utrecht::Trigger_in */ kcg_int Trigger_in,
  /* US_Integration_November::Amsterdam_Utrecht::SelectTrack */ TrackType_US_Integration_November SelectTrack,
  /* US_Integration_November::Amsterdam_Utrecht::Balise_Packets */ CompressedPackets_T_Common_Types_Pkg *_21_Balise_Packets,
  /* US_Integration_November::Amsterdam_Utrecht::Balise_Header */ TelegramHeader_T_BG_Types_Pkg *_20_Balise_Header,
  /* US_Integration_November::Amsterdam_Utrecht::CompressedBaliseMessage */ CompressedBaliseMessage_TM *_19_CompressedBaliseMessage,
  /* US_Integration_November::Amsterdam_Utrecht::RadioTrackTrainHeader_out */ Radio_TrackTrain_Header_T_Radio_Types_Pkg *_18_RadioTrackTrainHeader_out,
  /* US_Integration_November::Amsterdam_Utrecht::Compressed_Packets_out */ CompressedPackets_T_Common_Types_Pkg *_17_Compressed_Packets_out,
  /* US_Integration_November::Amsterdam_Utrecht::Compressed_Radio_Message_out */ CompressedRadioMessage_TM *_16_Compressed_Radio_Message_out)
{
  /* US_Integration_November::Amsterdam_Utrecht::Compressed_Radio_Message_out */
  static CompressedRadioMessage_TM _6_Compressed_Radio_Message_out;
  /* US_Integration_November::Amsterdam_Utrecht::Compressed_Packets_out */
  static CompressedPackets_T_Common_Types_Pkg _5_Compressed_Packets_out;
  /* US_Integration_November::Amsterdam_Utrecht::RadioTrackTrainHeader_out */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _4_RadioTrackTrainHeader_out;
  /* US_Integration_November::Amsterdam_Utrecht::CompressedBaliseMessage */
  static CompressedBaliseMessage_TM _3_CompressedBaliseMessage;
  /* US_Integration_November::Amsterdam_Utrecht::Balise_Header */
  static TelegramHeader_T_BG_Types_Pkg _2_Balise_Header;
  /* US_Integration_November::Amsterdam_Utrecht::Balise_Packets */
  static CompressedPackets_T_Common_Types_Pkg _1_Balise_Packets;
  /* US_Integration_November::Amsterdam_Utrecht::IfBlock1::then::_L9 */
  static TrackType_US_Integration_November _L9_IfBlock1;
  /* US_Integration_November::Amsterdam_Utrecht::IfBlock1::then::_L8 */
  static kcg_int _L8_IfBlock1;
  /* US_Integration_November::Amsterdam_Utrecht::IfBlock1::then::_L7 */
  static kcg_real _L7_IfBlock1;
  /* US_Integration_November::Amsterdam_Utrecht::IfBlock1::then::_L1 */
  static CompressedPackets_T_Common_Types_Pkg _L1_IfBlock1;
  /* US_Integration_November::Amsterdam_Utrecht::IfBlock1::then::_L2 */
  static TelegramHeader_T_BG_Types_Pkg _L2_IfBlock1;
  /* US_Integration_November::Amsterdam_Utrecht::IfBlock1::then::_L3 */
  static CompressedBaliseMessage_TM _L3_IfBlock1;
  /* US_Integration_November::Amsterdam_Utrecht::IfBlock1::then::_L4 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L4_IfBlock1;
  /* US_Integration_November::Amsterdam_Utrecht::IfBlock1::then::_L5 */
  static CompressedPackets_T_Common_Types_Pkg _L5_IfBlock1;
  /* US_Integration_November::Amsterdam_Utrecht::IfBlock1::then::_L6 */
  static CompressedRadioMessage_TM _L6_IfBlock1;
  /* US_Integration_November::Amsterdam_Utrecht::Compressed_Radio_Message_out */
  static CompressedRadioMessage_TM Compressed_Radio_Message_out;
  /* US_Integration_November::Amsterdam_Utrecht::Compressed_Packets_out */
  static CompressedPackets_T_Common_Types_Pkg Compressed_Packets_out;
  /* US_Integration_November::Amsterdam_Utrecht::RadioTrackTrainHeader_out */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg RadioTrackTrainHeader_out;
  /* US_Integration_November::Amsterdam_Utrecht::CompressedBaliseMessage */
  static CompressedBaliseMessage_TM CompressedBaliseMessage;
  /* US_Integration_November::Amsterdam_Utrecht::Balise_Header */
  static TelegramHeader_T_BG_Types_Pkg Balise_Header;
  /* US_Integration_November::Amsterdam_Utrecht::Balise_Packets */
  static CompressedPackets_T_Common_Types_Pkg Balise_Packets;
  /* US_Integration_November::Amsterdam_Utrecht::IfBlock1::else::_L9 */
  static TrackType_US_Integration_November _L97_IfBlock1;
  /* US_Integration_November::Amsterdam_Utrecht::IfBlock1::else::_L8 */
  static kcg_int _L88_IfBlock1;
  /* US_Integration_November::Amsterdam_Utrecht::IfBlock1::else::_L7 */
  static kcg_real _L79_IfBlock1;
  /* US_Integration_November::Amsterdam_Utrecht::IfBlock1::else::_L1 */
  static CompressedPackets_T_Common_Types_Pkg _L110_IfBlock1;
  /* US_Integration_November::Amsterdam_Utrecht::IfBlock1::else::_L2 */
  static TelegramHeader_T_BG_Types_Pkg _L211_IfBlock1;
  /* US_Integration_November::Amsterdam_Utrecht::IfBlock1::else::_L3 */
  static CompressedBaliseMessage_TM _L312_IfBlock1;
  /* US_Integration_November::Amsterdam_Utrecht::IfBlock1::else::_L4 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L413_IfBlock1;
  /* US_Integration_November::Amsterdam_Utrecht::IfBlock1::else::_L5 */
  static CompressedPackets_T_Common_Types_Pkg _L514_IfBlock1;
  /* US_Integration_November::Amsterdam_Utrecht::IfBlock1::else::_L6 */
  static CompressedRadioMessage_TM _L615_IfBlock1;
  /* US_Integration_November::Amsterdam_Utrecht::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  
  IfBlock1_clock = (SelectTrack == UserStory01to12_US_Integration_November) |
    (SelectTrack == UserStory13to16_US_Integration_November);
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L7_IfBlock1 = TrainPos;
    _L8_IfBlock1 = Trigger_in;
    _L9_IfBlock1 = SelectTrack;
    /* 1 */
    Amsterdam_Utrecht_US_US_Integration_November(
      _L7_IfBlock1,
      _L8_IfBlock1,
      _L9_IfBlock1,
      &_L1_IfBlock1,
      &_L2_IfBlock1,
      &_L3_IfBlock1,
      &_L4_IfBlock1,
      &_L5_IfBlock1,
      &_L6_IfBlock1);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_1_Balise_Packets,
      &_L1_IfBlock1);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      _21_Balise_Packets,
      &_1_Balise_Packets);
    kcg_copy_TelegramHeader_T_BG_Types_Pkg(&_2_Balise_Header, &_L2_IfBlock1);
    kcg_copy_TelegramHeader_T_BG_Types_Pkg(
      _20_Balise_Header,
      &_2_Balise_Header);
    kcg_copy_CompressedBaliseMessage_TM(
      &_3_CompressedBaliseMessage,
      &_L3_IfBlock1);
    kcg_copy_CompressedBaliseMessage_TM(
      _19_CompressedBaliseMessage,
      &_3_CompressedBaliseMessage);
    kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
      &_4_RadioTrackTrainHeader_out,
      &_L4_IfBlock1);
    kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
      _18_RadioTrackTrainHeader_out,
      &_4_RadioTrackTrainHeader_out);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_5_Compressed_Packets_out,
      &_L5_IfBlock1);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      _17_Compressed_Packets_out,
      &_5_Compressed_Packets_out);
    kcg_copy_CompressedRadioMessage_TM(
      &_6_Compressed_Radio_Message_out,
      &_L6_IfBlock1);
    kcg_copy_CompressedRadioMessage_TM(
      _16_Compressed_Radio_Message_out,
      &_6_Compressed_Radio_Message_out);
  }
  else {
    _L79_IfBlock1 = TrainPos;
    _L88_IfBlock1 = Trigger_in;
    _L97_IfBlock1 = SelectTrack;
    /* 1 */
    Amsterdam_Utrecht_modular_US_Integration_November(
      _L79_IfBlock1,
      _L88_IfBlock1,
      _L97_IfBlock1,
      &_L110_IfBlock1,
      &_L211_IfBlock1,
      &_L312_IfBlock1,
      &_L413_IfBlock1,
      &_L514_IfBlock1,
      &_L615_IfBlock1);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &Balise_Packets,
      &_L110_IfBlock1);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      _21_Balise_Packets,
      &Balise_Packets);
    kcg_copy_TelegramHeader_T_BG_Types_Pkg(&Balise_Header, &_L211_IfBlock1);
    kcg_copy_TelegramHeader_T_BG_Types_Pkg(_20_Balise_Header, &Balise_Header);
    kcg_copy_CompressedBaliseMessage_TM(
      &CompressedBaliseMessage,
      &_L312_IfBlock1);
    kcg_copy_CompressedBaliseMessage_TM(
      _19_CompressedBaliseMessage,
      &CompressedBaliseMessage);
    kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
      &RadioTrackTrainHeader_out,
      &_L413_IfBlock1);
    kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
      _18_RadioTrackTrainHeader_out,
      &RadioTrackTrainHeader_out);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &Compressed_Packets_out,
      &_L514_IfBlock1);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      _17_Compressed_Packets_out,
      &Compressed_Packets_out);
    kcg_copy_CompressedRadioMessage_TM(
      &Compressed_Radio_Message_out,
      &_L615_IfBlock1);
    kcg_copy_CompressedRadioMessage_TM(
      _16_Compressed_Radio_Message_out,
      &Compressed_Radio_Message_out);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Amsterdam_Utrecht_US_Integration_November.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

