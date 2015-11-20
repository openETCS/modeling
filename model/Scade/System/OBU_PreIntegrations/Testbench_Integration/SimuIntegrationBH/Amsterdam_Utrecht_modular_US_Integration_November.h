/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _Amsterdam_Utrecht_modular_US_Integration_November_H_
#define _Amsterdam_Utrecht_modular_US_Integration_November_H_

#include "kcg_types.h"
#include "Sheet14_standalone_AmsterdamUtrechtL2_Sheet14_Maarssen_Standalone.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* US_Integration_November::Amsterdam_Utrecht_modular */
extern void Amsterdam_Utrecht_modular_US_Integration_November(
  /* US_Integration_November::Amsterdam_Utrecht_modular::TrainPos */ kcg_real TrainPos,
  /* US_Integration_November::Amsterdam_Utrecht_modular::Trigger_in */ kcg_int Trigger_in,
  /* US_Integration_November::Amsterdam_Utrecht_modular::SelectTrack */ TrackType_US_Integration_November SelectTrack,
  /* US_Integration_November::Amsterdam_Utrecht_modular::Balise_Packets */ CompressedPackets_T_Common_Types_Pkg *Balise_Packets,
  /* US_Integration_November::Amsterdam_Utrecht_modular::Balise_Header */ TelegramHeader_T_BG_Types_Pkg *Balise_Header,
  /* US_Integration_November::Amsterdam_Utrecht_modular::CompressedBaliseMessage */ CompressedBaliseMessage_TM *CompressedBaliseMessage,
  /* US_Integration_November::Amsterdam_Utrecht_modular::RadioTrackTrainHeader_out */ Radio_TrackTrain_Header_T_Radio_Types_Pkg *RadioTrackTrainHeader_out,
  /* US_Integration_November::Amsterdam_Utrecht_modular::Compressed_Packets_out */ CompressedPackets_T_Common_Types_Pkg *Compressed_Packets_out,
  /* US_Integration_November::Amsterdam_Utrecht_modular::Compressed_Radio_Message_out */ CompressedRadioMessage_TM *Compressed_Radio_Message_out);

#endif /* _Amsterdam_Utrecht_modular_US_Integration_November_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Amsterdam_Utrecht_modular_US_Integration_November.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

