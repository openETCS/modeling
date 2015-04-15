/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-03T18:02:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Find_First_in_SSP_cat.h"

void Find_First_in_SSP_cat_reset(outC_Find_First_in_SSP_cat *outC)
{
  kcg_int i;
  
  for (i = 0; i < 3; i++) {
    /* 1 */ Find_First_in_SSP_cat_LOOP_reset(&outC->Context_1[i]);
  }
}

/* Find_First_in_SSP_cat */
void Find_First_in_SSP_cat(
  /* Find_First_in_SSP_cat::SSP_cat_in */SSP_cat_t *SSP_cat_in,
  outC_Find_First_in_SSP_cat *outC)
{
  kcg_int tmp;
  kcg_int i;
  
  outC->_L4 = 0;
  kcg_copy_SSP_cat_t(&outC->_L2, SSP_cat_in);
  outC->_L3 = kcg_true;
  outC->_L5 = outC->_L4;
  if (outC->_L3) {
    for (i = 0; i < 3; i++) {
      tmp = outC->_L5;
      /* 1 */
      Find_First_in_SSP_cat_LOOP(i, tmp, outC->_L2[i], &outC->Context_1[i]);
      outC->_L5 = outC->Context_1[i].Last_Loc;
      outC->_L1 = i + 1;
      if (!outC->Context_1[i].cont) {
        break;
      }
    }
  }
  else {
    outC->_L1 = 0;
  }
  outC->_L7 = 1;
  outC->_L8 = outC->_L1 - outC->_L7;
  outC->_L6.Index = outC->_L8;
  outC->_L6.Loc = outC->_L5;
  kcg_copy_SSP_indexed_trgt_t(&outC->SSP_indexed_loc, &outC->_L6);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Find_First_in_SSP_cat.c
** Generation date: 2015-04-03T18:02:58
*************************************************************$ */

