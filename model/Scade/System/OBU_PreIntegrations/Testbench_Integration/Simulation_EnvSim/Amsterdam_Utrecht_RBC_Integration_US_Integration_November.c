/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Amsterdam_Utrecht_RBC_Integration_US_Integration_November.h"

/* US_Integration_November::Amsterdam_Utrecht_RBC_Integration */
void Amsterdam_Utrecht_RBC_Integration_US_Integration_November(
  /* US_Integration_November::Amsterdam_Utrecht_RBC_Integration::Trigger_in */kcg_int Trigger_in,
  /* US_Integration_November::Amsterdam_Utrecht_RBC_Integration::SelectTrack */TrackType_US_Integration_November SelectTrack,
  /* US_Integration_November::Amsterdam_Utrecht_RBC_Integration::RadioTrackTrainHeader_out */Radio_TrackTrain_Header_T_Radio_Types_Pkg *RadioTrackTrainHeader_out,
  /* US_Integration_November::Amsterdam_Utrecht_RBC_Integration::Compressed_Packets_out */CompressedPackets_T_Common_Types_Pkg *Compressed_Packets_out,
  /* US_Integration_November::Amsterdam_Utrecht_RBC_Integration::Compressed_Radio_Message_out */CompressedRadioMessage_TM *Compressed_Radio_Message_out)
{
  static M_TrackTrain_Radio_T_TM_radio_messages tmp;
  /* US_Integration_November::Amsterdam_Utrecht_RBC_Integration::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  
  IfBlock1_clock = SelectTrack == UserStory01to12_US_Integration_November;
  if (IfBlock1_clock) {
    /* 1 */
    Amsterdam_Utrecht_Lijn1_RBC_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1(
      (M_TrackTrain_Radio_T_TM_radio_messages *)
        &no_message_US_Integration_November,
      (CompressedPackets_T_Common_Types_Pkg *)
        &no_packets_US_Integration_November,
      Trigger_in,
      kcg_false,
      &tmp,
      Compressed_Packets_out);
  }
  else {
    /* 1 */
    Amsterdam_Utrecht_Lijn1_RBC_non_nominal_UserStories13_16(
      (M_TrackTrain_Radio_T_TM_radio_messages *)
        &no_message_US_Integration_November,
      (CompressedPackets_T_Common_Types_Pkg *)
        &no_packets_US_Integration_November,
      Trigger_in,
      kcg_false,
      &tmp,
      Compressed_Packets_out);
  }
  /* 1 */
  compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy(
    &tmp,
    RadioTrackTrainHeader_out);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &(*Compressed_Radio_Message_out).Messages,
    Compressed_Packets_out);
  /* 1 */
  C_TrackTrainMessage_to_Int_TM_conversions(
    RadioTrackTrainHeader_out,
    &(*Compressed_Radio_Message_out).Header);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Amsterdam_Utrecht_RBC_Integration_US_Integration_November.c
** Generation date: 2015-11-20T19:47:27
*************************************************************$ */

