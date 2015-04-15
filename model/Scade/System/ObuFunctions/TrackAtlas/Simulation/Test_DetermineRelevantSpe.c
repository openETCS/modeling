/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-05T21:46:08
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Test_DetermineRelevantSpe.h"

void Test_DetermineRelevantSpe_reset(outC_Test_DetermineRelevantSpe *outC)
{
  /* 1 */ DetermineRelevantSpeedperCat_reset(&outC->Context_1);
}

/* Test_DetermineRelevantSpeedperCat */
void Test_DetermineRelevantSpe(
  inC_Test_DetermineRelevantSpe *inC,
  outC_Test_DetermineRelevantSpe *outC)
{
  kcg_copy_SSP_cat_t(&outC->_L3, (SSP_cat_t *) &TEST_SSP_cat);
  outC->_L2 = inC->CurrentTarget;
  /* 1 */ DetermineRelevantSpeedperCat(&outC->_L3, outC->_L2, &outC->Context_1);
  outC->_L1 = outC->Context_1.ValidSpeed;
  outC->ValidSpeed = outC->_L1;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Test_DetermineRelevantSpe.c
** Generation date: 2015-04-05T21:46:08
*************************************************************$ */

