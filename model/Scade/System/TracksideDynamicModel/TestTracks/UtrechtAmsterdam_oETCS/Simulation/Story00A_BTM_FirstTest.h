/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-24T10:59:33
*************************************************************$ */
#ifndef _Story00A_BTM_FirstTest_H_
#define _Story00A_BTM_FirstTest_H_

#include "kcg_types.h"
#include "Balise_Group_364_FirstTest_InfraLib.h"
#include "Balise_Group_365_FirstTest_InfraLib.h"
#include "Balise_Group_366_FirstTest_InfraLib.h"
#include "Balise_Group_367_FirstTest_InfraLib.h"
#include "Balise_Group_368_FirstTest_InfraLib.h"
#include "Balise_Group_369_FirstTest_InfraLib.h"
#include "Balise_Group_341_FirstTest_InfraLib.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TM_CompressedBaliseMessage /* FirstTest::Story00A_BTM::BM */ BM;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Balise_Group_341_FirstTest_InfraLib /* 1 */ _6_Context_1;
  outC_Balise_Group_369_FirstTest_InfraLib /* 1 */ _5_Context_1;
  outC_Balise_Group_368_FirstTest_InfraLib /* 1 */ _4_Context_1;
  outC_Balise_Group_367_FirstTest_InfraLib /* 1 */ _3_Context_1;
  outC_Balise_Group_366_FirstTest_InfraLib /* 1 */ _2_Context_1;
  outC_Balise_Group_365_FirstTest_InfraLib /* 1 */ _1_Context_1;
  outC_Balise_Group_364_FirstTest_InfraLib /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  TM_CompressedBaliseMessage /* FirstTest::Story00A_BTM::_L30 */ _L30;
  kcg_real /* FirstTest::Story00A_BTM::_L31 */ _L31;
  TM_CompressedBaliseMessage /* FirstTest::Story00A_BTM::_L32 */ _L32;
  TM_CompressedBaliseMessage /* FirstTest::Story00A_BTM::_L33 */ _L33;
  TM_CompressedBaliseMessage /* FirstTest::Story00A_BTM::_L34 */ _L34;
  TM_CompressedBaliseMessage /* FirstTest::Story00A_BTM::_L35 */ _L35;
  TM_CompressedBaliseMessage /* FirstTest::Story00A_BTM::_L36 */ _L36;
  TM_CompressedBaliseMessage /* FirstTest::Story00A_BTM::_L37 */ _L37;
  TM_CompressedBaliseMessage /* FirstTest::Story00A_BTM::_L38 */ _L38;
} outC_Story00A_BTM_FirstTest;

/* ===========  node initialization and cycle functions  =========== */
/* FirstTest::Story00A_BTM */
extern void Story00A_BTM_FirstTest(
  /* FirstTest::Story00A_BTM::TrainPos */kcg_real TrainPos,
  outC_Story00A_BTM_FirstTest *outC);

extern void Story00A_BTM_reset_FirstTest(outC_Story00A_BTM_FirstTest *outC);

#endif /* _Story00A_BTM_FirstTest_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Story00A_BTM_FirstTest.h
** Generation date: 2015-04-24T10:59:33
*************************************************************$ */

