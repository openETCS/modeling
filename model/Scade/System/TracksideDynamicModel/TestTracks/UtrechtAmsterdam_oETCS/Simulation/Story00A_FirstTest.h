/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-07T00:28:47
*************************************************************$ */
#ifndef _Story00A_FirstTest_H_
#define _Story00A_FirstTest_H_

#include "kcg_types.h"
#include "Story00A_BTM_FirstTest.h"
#include "Story00A_RBC_FirstTest.h"
#include "CASTLIB_BaliseHeaders_TM_conversions.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_real /* FirstTest::Story00A::TrainPos */ TrainPos;
  kcg_int /* FirstTest::Story00A::Trigger_in */ Trigger_in;
} inC_Story00A_FirstTest;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  CompressedPackets_T_Common_Types_Pkg /* FirstTest::Story00A::Balise_Packets */ Balise_Packets;
  TelegramHeader_T_BG_Types_Pkg /* FirstTest::Story00A::Balise_Header */ Balise_Header;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* FirstTest::Story00A::RadioTrackTrainHeader_out */ RadioTrackTrainHeader_out;
  CompressedPackets_T_Common_Types_Pkg /* FirstTest::Story00A::Compressed_Packets_out */ Compressed_Packets_out;
  CompressedRadioMessage_TM /* FirstTest::Story00A::Compressed_Radio_Message_out */ Compressed_Radio_Message_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_CASTLIB_BaliseHeaders_TM_conversions /* 1 */ _2_Context_1;
  outC_Story00A_RBC_FirstTest /* 1 */ _1_Context_1;
  outC_Story00A_BTM_FirstTest /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  CompressedBaliseMessage_TM /* FirstTest::Story00A::_L1 */ _L1;
  kcg_real /* FirstTest::Story00A::_L2 */ _L2;
  CompressedPackets_T_Common_Types_Pkg /* FirstTest::Story00A::_L6 */ _L6;
  BaliseTelegramHeader_int_T_TM /* FirstTest::Story00A::_L5 */ _L5;
  TelegramHeader_T_BG_Types_Pkg /* FirstTest::Story00A::_L7 */ _L7;
  CompressedRadioMessage_TM /* FirstTest::Story00A::_L10 */ _L10;
  CompressedPackets_T_Common_Types_Pkg /* FirstTest::Story00A::_L9 */ _L9;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* FirstTest::Story00A::_L8 */ _L8;
  kcg_int /* FirstTest::Story00A::_L13 */ _L13;
} outC_Story00A_FirstTest;

/* ===========  node initialization and cycle functions  =========== */
/* FirstTest::Story00A */
extern void Story00A_FirstTest(
  inC_Story00A_FirstTest *inC,
  outC_Story00A_FirstTest *outC);

extern void Story00A_reset_FirstTest(outC_Story00A_FirstTest *outC);

#endif /* _Story00A_FirstTest_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Story00A_FirstTest.h
** Generation date: 2015-07-07T00:28:47
*************************************************************$ */

