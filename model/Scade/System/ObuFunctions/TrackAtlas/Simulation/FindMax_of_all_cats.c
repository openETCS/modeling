/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-03T18:02:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FindMax_of_all_cats.h"

void FindMax_of_all_cats_reset(outC_FindMax_of_all_cats *outC)
{
  kcg_int i;
  
  for (i = 0; i < 11; i++) {
    /* 1 */ FindMax_of_all_cats_LOOP_reset(&outC->_1_Context_1[i]);
  }
  for (i = 0; i < 11; i++) {
    /* 1 */ ConvertIndexedElements_reset(&outC->Context_1[i]);
  }
}

/* FindMax_of_all_cats */
void FindMax_of_all_cats(
  /* FindMax_of_all_cats::SSP_indexed_targets_per_cat */SSP_indexed_targets_list_t *SSP_indexed_targets_per_cat,
  outC_FindMax_of_all_cats *outC)
{
  kcg_int i1;
  SSP_indexed_matrix_element tmp;
  kcg_int i;
  kcg_int noname;
  
  kcg_copy_SSP_indexed_targets_list_t(&outC->_L1, SSP_indexed_targets_per_cat);
  for (i1 = 0; i1 < 11; i1++) {
    /* 1 */ ConvertIndexedElements(&outC->_L1[i1], &outC->Context_1[i1]);
    kcg_copy_SSP_indexed_matrix_element(
      &outC->_L61[i1],
      &outC->Context_1[i1].SSP_indexed_matrix_element_list);
  }
  kcg_copy_SSP_indexed_matrix_element(
    &outC->_L27,
    (SSP_indexed_matrix_element *) &DEFAULT_indexed_target);
  outC->_L25 = kcg_true;
  kcg_copy_SSP_indexed_matrix_element(&outC->_L26, &outC->_L27);
  if (outC->_L25) {
    for (i = 0; i < 11; i++) {
      kcg_copy_SSP_indexed_matrix_element(&tmp, &outC->_L26);
      /* 1 */
      FindMax_of_all_cats_LOOP(i, &tmp, &outC->_L61[i], &outC->_1_Context_1[i]);
      kcg_copy_SSP_indexed_matrix_element(
        &outC->_L26,
        &outC->_1_Context_1[i].Max);
      outC->_L24 = i + 1;
      if (!outC->_1_Context_1[i].cont) {
        break;
      }
    }
  }
  else {
    outC->_L24 = 0;
  }
  noname = outC->_L24;
  kcg_copy_SSP_indexed_matrix_element(&outC->SSP_largest_target, &outC->_L26);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** FindMax_of_all_cats.c
** Generation date: 2015-04-03T18:02:58
*************************************************************$ */

