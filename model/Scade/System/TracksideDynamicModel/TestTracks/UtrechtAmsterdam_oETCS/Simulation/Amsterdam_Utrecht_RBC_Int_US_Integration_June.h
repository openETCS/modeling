/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */
#ifndef _Amsterdam_Utrecht_RBC_Int_US_Integration_June_H_
#define _Amsterdam_Utrecht_RBC_Int_US_Integration_June_H_

#include "kcg_types.h"
#include "Amsterdam_Utrecht_Lijn1_RBC_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1.h"
#include "C_TrackTrainMessage_to_Int_TM_conversions.h"
#include "compressed_to_Radio_Track_TM_RBC_conversions.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* US_Integration_June::Amsterdam_Utrecht_RBC_Integration::RadioTrackTrainHeader_out */ RadioTrackTrainHeader_out;
  CompressedPackets_T_Common_Types_Pkg /* US_Integration_June::Amsterdam_Utrecht_RBC_Integration::Compressed_Packets_out */ Compressed_Packets_out;
  CompressedRadioMessage_TM /* US_Integration_June::Amsterdam_Utrecht_RBC_Integration::Compressed_Radio_Message_out */ Compressed_Radio_Message_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_TrackTrainMessage_to_Int_TM_conversions /* 1 */ _2_Context_1;
  outC_compressed_to_Radio_Track_TM_RBC_conversions /* 1 */ _1_Context_1;
  outC_Amsterdam_Utrecht_Lijn1_RBC_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1 /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  CompressedPackets_T_Common_Types_Pkg /* US_Integration_June::Amsterdam_Utrecht_RBC_Integration::_L2 */ _L2;
  M_TrackTrain_Radio_T_TM_radio_messages /* US_Integration_June::Amsterdam_Utrecht_RBC_Integration::_L1 */ _L1;
  kcg_bool /* US_Integration_June::Amsterdam_Utrecht_RBC_Integration::_L3 */ _L3;
  kcg_int /* US_Integration_June::Amsterdam_Utrecht_RBC_Integration::_L4 */ _L4;
  CompressedPackets_T_Common_Types_Pkg /* US_Integration_June::Amsterdam_Utrecht_RBC_Integration::_L5 */ _L5;
  M_TrackTrain_Radio_T_TM_radio_messages /* US_Integration_June::Amsterdam_Utrecht_RBC_Integration::_L6 */ _L6;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* US_Integration_June::Amsterdam_Utrecht_RBC_Integration::_L7 */ _L7;
  _3_Radio_TrackTrain_Header_T_TM /* US_Integration_June::Amsterdam_Utrecht_RBC_Integration::_L8 */ _L8;
  CompressedRadioMessage_TM /* US_Integration_June::Amsterdam_Utrecht_RBC_Integration::_L9 */ _L9;
} outC_Amsterdam_Utrecht_RBC_Int_US_Integration_June;

/* ===========  node initialization and cycle functions  =========== */
/* US_Integration_June::Amsterdam_Utrecht_RBC_Integration */
extern void Amsterdam_Utrecht_RBC_Int_US_Integration_June(
  /* US_Integration_June::Amsterdam_Utrecht_RBC_Integration::Trigger_in */kcg_int _1_Trigger_in,
  outC_Amsterdam_Utrecht_RBC_Int_US_Integration_June *outC);

extern void Amsterdam_Utrecht_RBC_Int_reset_US_Integration_June(
  outC_Amsterdam_Utrecht_RBC_Int_US_Integration_June *outC);

#endif /* _Amsterdam_Utrecht_RBC_Int_US_Integration_June_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Amsterdam_Utrecht_RBC_Int_US_Integration_June.h
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

