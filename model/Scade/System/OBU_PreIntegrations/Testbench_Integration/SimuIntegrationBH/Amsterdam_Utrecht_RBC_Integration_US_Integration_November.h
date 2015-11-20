/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _Amsterdam_Utrecht_RBC_Integration_US_Integration_November_H_
#define _Amsterdam_Utrecht_RBC_Integration_US_Integration_November_H_

#include "kcg_types.h"
#include "C_TrackTrainMessage_to_Int_TM_conversions.h"
#include "Amsterdam_Utrecht_Lijn1_RBC_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1.h"
#include "compressed_to_Radio_Track_Train_H_TM_RBC_conversions_legacy.h"
#include "Amsterdam_Utrecht_Lijn1_RBC_non_nominal_UserStories13_16.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */


/* US_Integration_November::Amsterdam_Utrecht_RBC_Integration */
extern void Amsterdam_Utrecht_RBC_Integration_US_Integration_November(
  /* US_Integration_November::Amsterdam_Utrecht_RBC_Integration::Trigger_in */ kcg_int Trigger_in,
  /* US_Integration_November::Amsterdam_Utrecht_RBC_Integration::SelectTrack */ TrackType_US_Integration_November SelectTrack,
  /* US_Integration_November::Amsterdam_Utrecht_RBC_Integration::RadioTrackTrainHeader_out */ Radio_TrackTrain_Header_T_Radio_Types_Pkg *RadioTrackTrainHeader_out,
  /* US_Integration_November::Amsterdam_Utrecht_RBC_Integration::Compressed_Packets_out */ CompressedPackets_T_Common_Types_Pkg *Compressed_Packets_out,
  /* US_Integration_November::Amsterdam_Utrecht_RBC_Integration::Compressed_Radio_Message_out */ CompressedRadioMessage_TM *Compressed_Radio_Message_out);

#endif /* _Amsterdam_Utrecht_RBC_Integration_US_Integration_November_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Amsterdam_Utrecht_RBC_Integration_US_Integration_November.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

