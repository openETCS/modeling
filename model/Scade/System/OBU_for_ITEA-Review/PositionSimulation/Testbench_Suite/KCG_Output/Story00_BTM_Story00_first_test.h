/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _Story00_BTM_Story00_first_test_H_
#define _Story00_BTM_Story00_first_test_H_

#include "kcg_types.h"
#include "INFRA_BG_generic_2.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  TM_CompressedBaliseMessage /* Story00_first_test::Story00_BTM::BM */ BM;
  kcg_bool /* Story00_first_test::Story00_BTM::BG_passed */ BG_passed;
  kcg_int /* Story00_first_test::Story00_BTM::LRBG */ LRBG;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_INFRA_BG_generic_2 /* 5 */ Context_5;
  outC_INFRA_BG_generic_2 /* 4 */ Context_4;
  outC_INFRA_BG_generic_2 /* 3 */ Context_3;
  outC_INFRA_BG_generic_2 /* 2 */ Context_2;
  outC_INFRA_BG_generic_2 /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Story00_BTM_Story00_first_test;

/* ===========  node initialization and cycle functions  =========== */
/* Story00_first_test::Story00_BTM */
extern void Story00_BTM_Story00_first_test(
  /* Story00_first_test::Story00_BTM::TrainPos */ kcg_real TrainPos,
  /* Story00_first_test::Story00_BTM::Dir */ kcg_int Dir,
  outC_Story00_BTM_Story00_first_test *outC);

extern void Story00_BTM_reset_Story00_first_test(
  outC_Story00_BTM_Story00_first_test *outC);
extern void Story00_BTM_init_Story00_first_test(
  outC_Story00_BTM_Story00_first_test *outC);

#endif /* _Story00_BTM_Story00_first_test_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** Story00_BTM_Story00_first_test.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

