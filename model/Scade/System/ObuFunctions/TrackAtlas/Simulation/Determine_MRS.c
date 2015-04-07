/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-06T18:53:56
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Determine_MRS.h"

void Determine_MRS_reset(outC_Determine_MRS *outC)
{
  kcg_int i;
  
  for (i = 0; i < 11; i++) {
    /* 1 */ Determine_Lowest_Speed_reset(&outC->_1_Context_1[i]);
  }
  for (i = 0; i < 11; i++) {
    /* 1 */ DetermineRelevantSpeedperCat_reset(&outC->Context_1[i]);
  }
}

/* Determine_MRS */
void Determine_MRS(inC_Determine_MRS *inC, outC_Determine_MRS *outC)
{
  kcg_int i2;
  kcg_int i1;
  kcg_int tmp;
  kcg_int i;
  
  outC->_L10 = 0;
  outC->_L3 = inC->CurrentTarget;
  for (i2 = 0; i2 < 11; i2++) {
    outC->_L9[i2] = outC->_L3;
  }
  kcg_copy_SSP_matrix_t(&outC->_L4, &inC->SSP_matrix);
  for (i1 = 0; i1 < 11; i1++) {
    /* 1 */
    DetermineRelevantSpeedperCat(
      outC->_L9[i1],
      &outC->_L4[i1],
      &outC->Context_1[i1]);
    outC->_L5[i1] = outC->Context_1[i1].ValidSpeed;
  }
  outC->_L8 = outC->_L10;
  for (i = 0; i < 11; i++) {
    tmp = outC->_L8;
    /* 1 */
    Determine_Lowest_Speed(i, tmp, outC->_L5[i], &outC->_1_Context_1[i]);
    outC->_L8 = outC->_1_Context_1[i].MRSpeed;
  }
  outC->MRS = outC->_L8;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Determine_MRS.c
** Generation date: 2015-04-06T18:53:56
*************************************************************$ */

