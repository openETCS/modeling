/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-05T21:46:08
*************************************************************$ */
#ifndef _Test_DetermineRelevantSpe_H_
#define _Test_DetermineRelevantSpe_H_

#include "kcg_types.h"
#include "DetermineRelevantSpeedperCat.h"

/* ========================  input structure  ====================== */
typedef struct {
  SSP_t_section_t /* Test_DetermineRelevantSpeedperCat::CurrentTarget */ CurrentTarget;
} inC_Test_DetermineRelevantSpe;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* Test_DetermineRelevantSpeedperCat::ValidSpeed */ ValidSpeed;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_DetermineRelevantSpeedperCat /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* Test_DetermineRelevantSpeedperCat::_L1 */ _L1;
  SSP_t_section_t /* Test_DetermineRelevantSpeedperCat::_L2 */ _L2;
  SSP_cat_t /* Test_DetermineRelevantSpeedperCat::_L3 */ _L3;
} outC_Test_DetermineRelevantSpe;

/* ===========  node initialization and cycle functions  =========== */
/* Test_DetermineRelevantSpeedperCat */
extern void Test_DetermineRelevantSpe(
  inC_Test_DetermineRelevantSpe *inC,
  outC_Test_DetermineRelevantSpe *outC);

extern void Test_DetermineRelevantSpe_reset(
  outC_Test_DetermineRelevantSpe *outC);

#endif /* _Test_DetermineRelevantSpe_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Test_DetermineRelevantSpe.h
** Generation date: 2015-04-05T21:46:08
*************************************************************$ */

