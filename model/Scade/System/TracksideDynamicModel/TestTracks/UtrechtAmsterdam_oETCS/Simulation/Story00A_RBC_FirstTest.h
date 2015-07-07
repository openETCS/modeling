/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-07T00:28:47
*************************************************************$ */
#ifndef _Story00A_RBC_FirstTest_H_
#define _Story00A_RBC_FirstTest_H_

#include "kcg_types.h"
#include "C_TrackTrainMessage_to_Int_TM_conversions.h"
#include "compressed_to_Radio_Track_TM_RBC_conversions.h"
#include "DIRTY_m_version_filter_fo_TM_specific.h"
#include "Amsterdam_Utrecht_Sheet06_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* FirstTest::Story00A_RBC::RadioTrackTrainHeader_out */ RadioTrackTrainHeader_out;
  CompressedPackets_T_Common_Types_Pkg /* FirstTest::Story00A_RBC::Compressed_Packets_out */ Compressed_Packets_out;
  CompressedRadioMessage_TM /* FirstTest::Story00A_RBC::Compressed_Radio_Message_out */ Compressed_Radio_Message_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_DIRTY_m_version_filter_fo_TM_specific /* 1 */ _3_Context_1;
  outC_C_TrackTrainMessage_to_Int_TM_conversions /* 1 */ _2_Context_1;
  outC_compressed_to_Radio_Track_TM_RBC_conversions /* 1 */ _1_Context_1;
  outC_Amsterdam_Utrecht_Sheet06_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* FirstTest::Story00A_RBC::_L3 */ _L3;
  kcg_int /* FirstTest::Story00A_RBC::_L4 */ _L4;
  CompressedPackets_T_Common_Types_Pkg /* FirstTest::Story00A_RBC::_L5 */ _L5;
  M_TrackTrain_Radio_T_TM_radio_messages /* FirstTest::Story00A_RBC::_L6 */ _L6;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* FirstTest::Story00A_RBC::_L7 */ _L7;
  _3_Radio_TrackTrain_Header_T_TM /* FirstTest::Story00A_RBC::_L8 */ _L8;
  CompressedRadioMessage_TM /* FirstTest::Story00A_RBC::_L9 */ _L9;
  CompressedRadioMessage_TM /* FirstTest::Story00A_RBC::_L10 */ _L10;
  CompressedPackets_T_Common_Types_Pkg /* FirstTest::Story00A_RBC::_L14 */ _L14;
  M_TrackTrain_Radio_T_TM_radio_messages /* FirstTest::Story00A_RBC::_L13 */ _L13;
} outC_Story00A_RBC_FirstTest;

/* ===========  node initialization and cycle functions  =========== */
/* FirstTest::Story00A_RBC */
extern void Story00A_RBC_FirstTest(
  /* FirstTest::Story00A_RBC::Trigger_in */kcg_int Trigger_in,
  outC_Story00A_RBC_FirstTest *outC);

extern void Story00A_RBC_reset_FirstTest(outC_Story00A_RBC_FirstTest *outC);

#endif /* _Story00A_RBC_FirstTest_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Story00A_RBC_FirstTest.h
** Generation date: 2015-07-07T00:28:47
*************************************************************$ */

