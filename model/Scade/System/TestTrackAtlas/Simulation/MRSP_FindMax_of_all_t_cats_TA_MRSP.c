/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSP_FindMax_of_all_t_cats_TA_MRSP.h"

void MRSP_FindMax_of_all_t_cats_reset_TA_MRSP(
  outC_MRSP_FindMax_of_all_t_cats_TA_MRSP *outC)
{
  kcg_int i;
  
  for (i = 0; i < 11; i++) {
    /* 1 */
    MRSP_FindMax_of_all_t_cats_LOOP_reset_TA_MRSP(&outC->_1_Context_1[i]);
  }
  for (i = 0; i < 11; i++) {
    /* 1 */ MRSP_ConvertIndexedElements_reset_TA_MRSP(&outC->Context_1[i]);
  }
}

/* TA_MRSP::MRSP_FindMax_of_all_t_cats */
void MRSP_FindMax_of_all_t_cats_TA_MRSP(
  /* TA_MRSP::MRSP_FindMax_of_all_t_cats::SSP_indexed_targets_per_cat */SSP_t_indexed_targets_list_t_TA_MRSP *SSP_indexed_targets_per_cat,
  outC_MRSP_FindMax_of_all_t_cats_TA_MRSP *outC)
{
  kcg_int i1;
  SSP_t_indexed_matrix_element_TA_MRSP tmp;
  kcg_int i;
  kcg_int noname;
  
  kcg_copy_SSP_t_indexed_matrix_element_TA_MRSP(
    &outC->_L62,
    (SSP_t_indexed_matrix_element_TA_MRSP *) &DEFAULT_indexed_target_TA_MRSP);
  kcg_copy_SSP_t_indexed_targets_list_t_TA_MRSP(
    &outC->_L1,
    SSP_indexed_targets_per_cat);
  for (i1 = 0; i1 < 11; i1++) {
    /* 1 */
    MRSP_ConvertIndexedElements_TA_MRSP(&outC->_L1[i1], &outC->Context_1[i1]);
    kcg_copy_SSP_t_indexed_matrix_element_TA_MRSP(
      &outC->_L61[i1],
      &outC->Context_1[i1].SSP_indexed_matrix_element_list);
  }
  outC->_L25 = kcg_true;
  kcg_copy_SSP_t_indexed_matrix_element_TA_MRSP(&outC->_L26, &outC->_L62);
  if (outC->_L25) {
    for (i = 0; i < 11; i++) {
      kcg_copy_SSP_t_indexed_matrix_element_TA_MRSP(&tmp, &outC->_L26);
      /* 1 */
      MRSP_FindMax_of_all_t_cats_LOOP_TA_MRSP(
        i,
        &tmp,
        &outC->_L61[i],
        &outC->_1_Context_1[i]);
      kcg_copy_SSP_t_indexed_matrix_element_TA_MRSP(
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
  kcg_copy_SSP_t_indexed_matrix_element_TA_MRSP(
    &outC->SSP_largest_target,
    &outC->_L26);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_FindMax_of_all_t_cats_TA_MRSP.c
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

