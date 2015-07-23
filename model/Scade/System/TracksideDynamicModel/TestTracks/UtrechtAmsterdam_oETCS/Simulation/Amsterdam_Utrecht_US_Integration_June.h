/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */
#ifndef _Amsterdam_Utrecht_US_Integration_June_H_
#define _Amsterdam_Utrecht_US_Integration_June_H_

#include "kcg_types.h"
#include "Amsterdam_Utrecht_RBC_Int_US_Integration_June.h"
#include "Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1.h"
#include "CASTLIB_BaliseHeaders_TM_conversions.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CASTLIB_BaliseHeaders_TM_conversions /* 1 */ _2_Context_1;
  outC_Amsterdam_Utrecht_RBC_Int_US_Integration_June /* 1 */ _1_Context_1;
  outC_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1 /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  CompressedBaliseMessage_TM /* US_Integration_June::Amsterdam_Utrecht::_L1 */ _L1;
  kcg_real /* US_Integration_June::Amsterdam_Utrecht::_L2 */ _L2;
  CompressedPackets_T_Common_Types_Pkg /* US_Integration_June::Amsterdam_Utrecht::_L6 */ _L6;
  BaliseTelegramHeader_int_T_TM /* US_Integration_June::Amsterdam_Utrecht::_L5 */ _L5;
  TelegramHeader_T_BG_Types_Pkg /* US_Integration_June::Amsterdam_Utrecht::_L7 */ _L7;
  CompressedPackets_T_Common_Types_Pkg /* US_Integration_June::Amsterdam_Utrecht::_L9 */ _L9;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* US_Integration_June::Amsterdam_Utrecht::_L8 */ _L8;
  kcg_int /* US_Integration_June::Amsterdam_Utrecht::_L13 */ _L13;
  CompressedRadioMessage_TM /* US_Integration_June::Amsterdam_Utrecht::_L10 */ _L10;
} outC_Amsterdam_Utrecht_US_Integration_June;

/* ===========  node initialization and cycle functions  =========== */
/* US_Integration_June::Amsterdam_Utrecht */
extern void Amsterdam_Utrecht_US_Integration_June(void);

extern void Amsterdam_Utrecht_reset_US_Integration_June(void);

extern outC_Amsterdam_Utrecht_US_Integration_June Ctxt_Amsterdam_Utrecht_US_Integration_June;

/* US_Integration_June::Amsterdam_Utrecht::TrainPos */
extern kcg_real TrainPos;
/* US_Integration_June::Amsterdam_Utrecht::Trigger_in */
extern kcg_int Trigger_in;

/* US_Integration_June::Amsterdam_Utrecht::Balise_Packets */
extern CompressedPackets_T_Common_Types_Pkg Balise_Packets;
/* US_Integration_June::Amsterdam_Utrecht::Balise_Header */
extern TelegramHeader_T_BG_Types_Pkg Balise_Header;
/* US_Integration_June::Amsterdam_Utrecht::RadioTrackTrainHeader_out */
extern Radio_TrackTrain_Header_T_Radio_Types_Pkg RadioTrackTrainHeader_out;
/* US_Integration_June::Amsterdam_Utrecht::Compressed_Packets_out */
extern CompressedPackets_T_Common_Types_Pkg Compressed_Packets_out;
/* US_Integration_June::Amsterdam_Utrecht::Compressed_Radio_Message_out */
extern CompressedRadioMessage_TM Compressed_Radio_Message_out;

#endif /* _Amsterdam_Utrecht_US_Integration_June_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Amsterdam_Utrecht_US_Integration_June.h
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

