/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-22T00:28:15
*************************************************************$ */
#ifndef _DRAFT_test_numeric_H_
#define _DRAFT_test_numeric_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_int /* DRAFT_test_numeric::In */ In;
} inC_DRAFT_test_numeric;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* DRAFT_test_numeric::DIV */ DIV;
  kcg_int /* DRAFT_test_numeric::MOD */ MOD;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* DRAFT_test_numeric::_L1 */ _L1;
  kcg_int /* DRAFT_test_numeric::_L2 */ _L2;
  kcg_int /* DRAFT_test_numeric::_L3 */ _L3;
  kcg_int /* DRAFT_test_numeric::_L4 */ _L4;
  kcg_int /* DRAFT_test_numeric::_L6 */ _L6;
  kcg_int /* DRAFT_test_numeric::_L5 */ _L5;
  kcg_int /* DRAFT_test_numeric::_L7 */ _L7;
} outC_DRAFT_test_numeric;

/* ===========  node initialization and cycle functions  =========== */
/* DRAFT_test_numeric */
extern void DRAFT_test_numeric(
  inC_DRAFT_test_numeric *inC,
  outC_DRAFT_test_numeric *outC);

extern void DRAFT_test_numeric_reset(outC_DRAFT_test_numeric *outC);

#endif /* _DRAFT_test_numeric_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** DRAFT_test_numeric.h
** Generation date: 2015-04-22T00:28:15
*************************************************************$ */

