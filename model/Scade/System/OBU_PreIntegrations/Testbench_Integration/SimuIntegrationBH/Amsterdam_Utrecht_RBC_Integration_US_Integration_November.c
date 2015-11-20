/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Amsterdam_Utrecht_RBC_Integration_US_Integration_November.h"

/* US_Integration_November::Amsterdam_Utrecht_RBC_Integration */
void Amsterdam_Utrecht_RBC_Integration_US_Integration_November(
  /* US_Integration_November::Amsterdam_Utrecht_RBC_Integration::Trigger_in */ kcg_int Trigger_in,
  /* US_Integration_November::Amsterdam_Utrecht_RBC_Integration::SelectTrack */ TrackType_US_Integration_November SelectTrack,
  /* US_Integration_November::Amsterdam_Utrecht_RBC_Integration::RadioTrackTrainHeader_out */ Radio_TrackTrain_Header_T_Radio_Types_Pkg *RadioTrackTrainHeader_out,
  /* US_Integration_November::Amsterdam_Utrecht_RBC_Integration::Compressed_Packets_out */ CompressedPackets_T_Common_Types_Pkg *Compressed_Packets_out,
  /* US_Integration_November::Amsterdam_Utrecht_RBC_Integration::Compressed_Radio_Message_out */ CompressedRadioMessage_TM *Compressed_Radio_Message_out)
{
  /* US_Integration_November::Amsterdam_Utrecht_RBC_Integration::Packets */
  static CompressedPackets_T_Common_Types_Pkg _2_Packets;
  /* US_Integration_November::Amsterdam_Utrecht_RBC_Integration::Header */
  static M_TrackTrain_Radio_T_TM_radio_messages _1_Header;
  /* US_Integration_November::Amsterdam_Utrecht_RBC_Integration::IfBlock1::then::_L8 */
  static kcg_int _L8_IfBlock1;
  /* US_Integration_November::Amsterdam_Utrecht_RBC_Integration::IfBlock1::then::_L5 */
  static kcg_bool _L5_IfBlock1;
  /* US_Integration_November::Amsterdam_Utrecht_RBC_Integration::IfBlock1::then::_L4 */
  static CompressedPackets_T_Common_Types_Pkg _L4_IfBlock1;
  /* US_Integration_November::Amsterdam_Utrecht_RBC_Integration::IfBlock1::then::_L3 */
  static M_TrackTrain_Radio_T_TM_radio_messages _L3_IfBlock1;
  /* US_Integration_November::Amsterdam_Utrecht_RBC_Integration::IfBlock1::then::_L1 */
  static M_TrackTrain_Radio_T_TM_radio_messages _L1_IfBlock1;
  /* US_Integration_November::Amsterdam_Utrecht_RBC_Integration::IfBlock1::then::_L2 */
  static CompressedPackets_T_Common_Types_Pkg _L2_IfBlock1;
  /* US_Integration_November::Amsterdam_Utrecht_RBC_Integration::Packets */
  static CompressedPackets_T_Common_Types_Pkg Packets;
  /* US_Integration_November::Amsterdam_Utrecht_RBC_Integration::Header */
  static M_TrackTrain_Radio_T_TM_radio_messages Header;
  /* US_Integration_November::Amsterdam_Utrecht_RBC_Integration::IfBlock1::else::_L6 */
  static kcg_int _L6_IfBlock1;
  /* US_Integration_November::Amsterdam_Utrecht_RBC_Integration::IfBlock1::else::_L4 */
  static CompressedPackets_T_Common_Types_Pkg _L43_IfBlock1;
  /* US_Integration_November::Amsterdam_Utrecht_RBC_Integration::IfBlock1::else::_L5 */
  static M_TrackTrain_Radio_T_TM_radio_messages _L54_IfBlock1;
  /* US_Integration_November::Amsterdam_Utrecht_RBC_Integration::IfBlock1::else::_L3 */
  static kcg_bool _L35_IfBlock1;
  /* US_Integration_November::Amsterdam_Utrecht_RBC_Integration::IfBlock1::else::_L1 */
  static M_TrackTrain_Radio_T_TM_radio_messages _L16_IfBlock1;
  /* US_Integration_November::Amsterdam_Utrecht_RBC_Integration::IfBlock1::else::_L2 */
  static CompressedPackets_T_Common_Types_Pkg _L27_IfBlock1;
  /* US_Integration_November::Amsterdam_Utrecht_RBC_Integration::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* US_Integration_November::Amsterdam_Utrecht_RBC_Integration::Header */
  static M_TrackTrain_Radio_T_TM_radio_messages _9_Header;
  /* US_Integration_November::Amsterdam_Utrecht_RBC_Integration::Packets */
  static CompressedPackets_T_Common_Types_Pkg _8_Packets;
  /* US_Integration_November::Amsterdam_Utrecht_RBC_Integration::_L16 */
  static M_TrackTrain_Radio_T_TM_radio_messages _L16;
  /* US_Integration_November::Amsterdam_Utrecht_RBC_Integration::_L15 */
  static Radio_TrackTrain_Header_T_TM _L15;
  /* US_Integration_November::Amsterdam_Utrecht_RBC_Integration::_L14 */
  static CompressedPackets_T_Common_Types_Pkg _L14;
  /* US_Integration_November::Amsterdam_Utrecht_RBC_Integration::_L13 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L13;
  /* US_Integration_November::Amsterdam_Utrecht_RBC_Integration::_L12 */
  static CompressedRadioMessage_TM _L12;
  
  IfBlock1_clock = SelectTrack == UserStory01to12_US_Integration_November;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
      &_L3_IfBlock1,
      (M_TrackTrain_Radio_T_TM_radio_messages *)
        &no_message_US_Integration_November);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L4_IfBlock1,
      (CompressedPackets_T_Common_Types_Pkg *)
        &no_packets_US_Integration_November);
    _L8_IfBlock1 = Trigger_in;
    _L5_IfBlock1 = kcg_false;
    /* 1 */
    Amsterdam_Utrecht_Lijn1_RBC_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1(
      &_L3_IfBlock1,
      &_L4_IfBlock1,
      _L8_IfBlock1,
      _L5_IfBlock1,
      &_L1_IfBlock1,
      &_L2_IfBlock1);
    kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(&_1_Header, &_L1_IfBlock1);
    kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(&_9_Header, &_1_Header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_2_Packets, &_L2_IfBlock1);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_8_Packets, &_2_Packets);
  }
  else {
    kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(
      &_L54_IfBlock1,
      (M_TrackTrain_Radio_T_TM_radio_messages *)
        &no_message_US_Integration_November);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &_L43_IfBlock1,
      (CompressedPackets_T_Common_Types_Pkg *)
        &no_packets_US_Integration_November);
    _L6_IfBlock1 = Trigger_in;
    _L35_IfBlock1 = kcg_false;
    /* 1 */
    Amsterdam_Utrecht_Lijn1_RBC_non_nominal_UserStories13_16(
      &_L54_IfBlock1,
      &_L43_IfBlock1,
      _L6_IfBlock1,
      _L35_IfBlock1,
      &_L16_IfBlock1,
      &_L27_IfBlock1);
    kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(&Header, &_L16_IfBlock1);
    kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(&_9_Header, &Header);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&Packets, &_L27_IfBlock1);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_8_Packets, &Packets);
  }
  kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(&_L16, &_9_Header);
  /* 1 */
  compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(&_L16, &_L13);
  /* 1 */ C_TrackTrainMessage_to_Int_TM_conversions(&_L13, &_L15);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L14, &_8_Packets);
  kcg_copy_Radio_TrackTrain_Header_T_TM(&_L12.Header, &_L15);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L12.Messages, &_L14);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    RadioTrackTrainHeader_out,
    &_L13);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(Compressed_Packets_out, &_L14);
  kcg_copy_CompressedRadioMessage_TM(Compressed_Radio_Message_out, &_L12);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Amsterdam_Utrecht_RBC_Integration_US_Integration_November.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

