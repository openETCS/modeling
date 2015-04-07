/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-06T21:03:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SplitAndReverseSSP_LOOP1.h"

void SplitAndReverseSSP_LOOP1_reset(outC_SplitAndReverseSSP_LOOP1 *outC)
{
  kcg_int i;
  
  for (i = 0; i < 8; i++) {
    /* 1 */ SplitAndReverseSSP_LOOP2_reset(&outC->Context_1[i]);
  }
}

/* SplitAndReverseSSP_LOOP1 */
void SplitAndReverseSSP_LOOP1(
  /* SplitAndReverseSSP_LOOP1::SSP_cat_in */SSP_cat_t *SSP_cat_in,
  outC_SplitAndReverseSSP_LOOP1 *outC)
{
  kcg_int i1;
  kcg_int i;
  
  kcg_copy_SSP_cat_t(&outC->_L1, SSP_cat_in);
  for (i1 = 0; i1 < 8; i1++) {
    kcg_copy_SSP_section_t(&outC->_L18[i1], &outC->_L1[7 - i1]);
  }
  for (i = 0; i < 8; i++) {
    /* 1 */ SplitAndReverseSSP_LOOP2(&outC->_L18[i], &outC->Context_1[i]);
    outC->_L35[i] = outC->Context_1[i].SSP_t_section_out;
  }
  kcg_copy_SSP_cat_t(&outC->SSP_reverse_cat_out, &outC->_L18);
  kcg_copy_SSP_t_cat_t(&outC->SSP_reverse_t_cat_out, &outC->_L35);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SplitAndReverseSSP_LOOP1.c
** Generation date: 2015-04-06T21:03:30
*************************************************************$ */

