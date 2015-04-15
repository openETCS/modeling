/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-03T13:52:12
*************************************************************$ */
#ifndef _Test_SSP_H_
#define _Test_SSP_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* Test_SSP::Output1 */ Output1;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* Test_SSP::_L5 */ _L5;
  kcg_int /* Test_SSP::_L6 */ _L6;
} outC_Test_SSP;

/* ===========  node initialization and cycle functions  =========== */
/* Test_SSP */
extern void Test_SSP(outC_Test_SSP *outC);

extern void Test_SSP_reset(outC_Test_SSP *outC);

#endif /* _Test_SSP_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Test_SSP.h
** Generation date: 2015-04-03T13:52:12
*************************************************************$ */

