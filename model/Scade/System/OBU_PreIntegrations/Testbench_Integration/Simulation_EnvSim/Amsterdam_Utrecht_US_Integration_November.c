/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:27
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Amsterdam_Utrecht_US_Integration_November.h"

/* US_Integration_November::Amsterdam_Utrecht */
void Amsterdam_Utrecht_US_Integration_November(
  /* US_Integration_November::Amsterdam_Utrecht::TrainPos */kcg_real TrainPos,
  /* US_Integration_November::Amsterdam_Utrecht::Trigger_in */kcg_int Trigger_in,
  /* US_Integration_November::Amsterdam_Utrecht::SelectTrack */TrackType_US_Integration_November SelectTrack,
  /* US_Integration_November::Amsterdam_Utrecht::Balise_Packets */CompressedPackets_T_Common_Types_Pkg *Balise_Packets,
  /* US_Integration_November::Amsterdam_Utrecht::Balise_Header */TelegramHeader_T_BG_Types_Pkg *Balise_Header,
  /* US_Integration_November::Amsterdam_Utrecht::CompressedBaliseMessage */CompressedBaliseMessage_TM *CompressedBaliseMessage,
  /* US_Integration_November::Amsterdam_Utrecht::RadioTrackTrainHeader_out */Radio_TrackTrain_Header_T_Radio_Types_Pkg *RadioTrackTrainHeader_out,
  /* US_Integration_November::Amsterdam_Utrecht::Compressed_Packets_out */CompressedPackets_T_Common_Types_Pkg *Compressed_Packets_out,
  /* US_Integration_November::Amsterdam_Utrecht::Compressed_Radio_Message_out */CompressedRadioMessage_TM *Compressed_Radio_Message_out)
{
  /* US_Integration_November::Amsterdam_Utrecht::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  
  IfBlock1_clock = (SelectTrack == UserStory01to12_US_Integration_November) |
    (SelectTrack == UserStory13to16_US_Integration_November);
  if (IfBlock1_clock) {
    /* 1 */
    Amsterdam_Utrecht_US_US_Integration_November(
      TrainPos,
      Trigger_in,
      SelectTrack,
      Balise_Packets,
      Balise_Header,
      CompressedBaliseMessage,
      RadioTrackTrainHeader_out,
      Compressed_Packets_out,
      Compressed_Radio_Message_out);
  }
  else {
    /* 1 */
    Amsterdam_Utrecht_modular_US_Integration_November(
      TrainPos,
      Trigger_in,
      SelectTrack,
      Balise_Packets,
      Balise_Header,
      CompressedBaliseMessage,
      RadioTrackTrainHeader_out,
      Compressed_Packets_out,
      Compressed_Radio_Message_out);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Amsterdam_Utrecht_US_Integration_November.c
** Generation date: 2015-11-20T19:47:27
*************************************************************$ */

