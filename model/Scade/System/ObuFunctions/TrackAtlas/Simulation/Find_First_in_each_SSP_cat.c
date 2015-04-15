/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-03T18:02:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Find_First_in_each_SSP_cat.h"

void Find_First_in_each_SSP_cat_reset(outC_Find_First_in_each_SSP_cat *outC)
{
  kcg_int i;
  
  for (i = 0; i < 11; i++) {
    /* 1 */ Find_First_in_SSP_cat_reset(&outC->Context_1[i]);
  }
}

/* Find_First_in_each_SSP_cat */
void Find_First_in_each_SSP_cat(
  /* Find_First_in_each_SSP_cat::SSP_matrix_in */SSP_matrix_t *SSP_matrix_in,
  outC_Find_First_in_each_SSP_cat *outC)
{
  kcg_int i;
  
  kcg_copy_SSP_matrix_t(&outC->_L3, SSP_matrix_in);
  for (i = 0; i < 11; i++) {
    /* 1 */ Find_First_in_SSP_cat(&outC->_L3[i], &outC->Context_1[i]);
    kcg_copy_SSP_indexed_trgt_t(
      &outC->_L1[i],
      &outC->Context_1[i].SSP_indexed_loc);
  }
  kcg_copy_SSP_indexed_targets_list_t(
    &outC->SSP_indexed_targets_per_cat_out,
    &outC->_L1);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Find_First_in_each_SSP_cat.c
** Generation date: 2015-04-03T18:02:58
*************************************************************$ */

