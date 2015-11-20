/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _Amsterdam_Utrecht_US_US_Integration_November_H_
#define _Amsterdam_Utrecht_US_US_Integration_November_H_

#include "kcg_types.h"
#include "CASTLIB_BaliseHeaders_TM_conversions.h"
#include "Amsterdam_Utrecht_RBC_Integration_US_Integration_November.h"
#include "Amsterdam_Utrecht_Lijn1_balises_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* US_Integration_November::Amsterdam_Utrecht_US */
extern void Amsterdam_Utrecht_US_US_Integration_November(
  /* US_Integration_November::Amsterdam_Utrecht_US::TrainPos */ kcg_real TrainPos,
  /* US_Integration_November::Amsterdam_Utrecht_US::Trigger_in */ kcg_int Trigger_in,
  /* US_Integration_November::Amsterdam_Utrecht_US::SelectTrack */ TrackType_US_Integration_November SelectTrack,
  /* US_Integration_November::Amsterdam_Utrecht_US::Balise_Packets */ CompressedPackets_T_Common_Types_Pkg *Balise_Packets,
  /* US_Integration_November::Amsterdam_Utrecht_US::Balise_Header */ TelegramHeader_T_BG_Types_Pkg *Balise_Header,
  /* US_Integration_November::Amsterdam_Utrecht_US::CompressedBaliseMessage */ CompressedBaliseMessage_TM *CompressedBaliseMessage,
  /* US_Integration_November::Amsterdam_Utrecht_US::RadioTrackTrainHeader_out */ Radio_TrackTrain_Header_T_Radio_Types_Pkg *RadioTrackTrainHeader_out,
  /* US_Integration_November::Amsterdam_Utrecht_US::Compressed_Packets_out */ CompressedPackets_T_Common_Types_Pkg *Compressed_Packets_out,
  /* US_Integration_November::Amsterdam_Utrecht_US::Compressed_Radio_Message_out */ CompressedRadioMessage_TM *Compressed_Radio_Message_out);

#endif /* _Amsterdam_Utrecht_US_US_Integration_November_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Amsterdam_Utrecht_US_US_Integration_November.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

