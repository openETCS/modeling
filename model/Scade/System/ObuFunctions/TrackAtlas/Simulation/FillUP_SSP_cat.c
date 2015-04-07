/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-03T23:27:48
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FillUP_SSP_cat.h"

void FillUP_SSP_cat_reset(outC_FillUP_SSP_cat *outC)
{
  kcg_int i;
  
  for (i = 0; i < 3; i++) {
    /* 1 */ FillUP_SSP_cat_LOOP_reset(&outC->Context_1[i]);
  }
}

/* FillUP_SSP_cat */
void FillUP_SSP_cat(
  /* FillUP_SSP_cat::SSP_cat_in */SSP_cat_t *SSP_cat_in,
  outC_FillUP_SSP_cat *outC)
{
  SSP_cat_t tmp;
  kcg_int i;
  kcg_int noname;
  
  kcg_copy_SSP_cat_t(&outC->_L4, (SSP_cat_t *) &DEFAULT_SSP_cat);
  kcg_copy_SSP_cat_t(&outC->_L1, SSP_cat_in);
  outC->_L10 = kcg_true;
  kcg_copy_SSP_cat_t(&outC->_L11, &outC->_L4);
  if (outC->_L10) {
    for (i = 0; i < 3; i++) {
      kcg_copy_SSP_cat_t(&tmp, &outC->_L11);
      /* 1 */ FillUP_SSP_cat_LOOP(i, &tmp, &outC->_L1[i], &outC->Context_1[i]);
      kcg_copy_SSP_cat_t(&outC->_L11, &outC->Context_1[i].SSP_cat_out);
      outC->_L9 = i + 1;
      if (!outC->Context_1[i].cont) {
        break;
      }
    }
  }
  else {
    outC->_L9 = 0;
  }
  noname = outC->_L9;
  kcg_copy_SSP_cat_t(&outC->SSP_cat_out, &outC->_L11);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** FillUP_SSP_cat.c
** Generation date: 2015-04-03T23:27:48
*************************************************************$ */

