/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-25T17:50:04
*************************************************************$ */
#ifndef _Story00A_FirstTest_H_
#define _Story00A_FirstTest_H_

#include "kcg_types.h"
#include "RECV_ConvertBaliseHeader_CT.h"
#include "Story00A_BTM_FirstTest.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_real /* FirstTest::Story00A::Loc */ Loc;
} inC_Story00A_FirstTest;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  CompressedPackets_T_Common_Types_Pkg /* FirstTest::Story00A::Packets_Out */ Packets_Out;
  TelegramHeader_T_BG_Types_Pkg /* FirstTest::Story00A::TelegramHeader */ TelegramHeader;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RECV_ConvertBaliseHeader_CT /* 1 */ _1_Context_1;
  outC_Story00A_BTM_FirstTest /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_real /* FirstTest::Story00A::_L8 */ _L8;
  TelegramHeader_T_BG_Types_Pkg /* FirstTest::Story00A::_L7 */ _L7;
  TM_CompressedBaliseMessage /* FirstTest::Story00A::_L4 */ _L4;
  TM_BaliseTelegramHeader_int_T /* FirstTest::Story00A::_L1 */ _L1;
  CompressedPackets_T_Common_Types_Pkg /* FirstTest::Story00A::_L2 */ _L2;
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
** Generation date: 2015-04-25T17:50:04
*************************************************************$ */

