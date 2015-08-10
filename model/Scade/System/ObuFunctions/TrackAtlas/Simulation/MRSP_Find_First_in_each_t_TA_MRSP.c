/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSP_Find_First_in_each_t_TA_MRSP.h"

void MRSP_Find_First_in_each_t_reset_TA_MRSP(
  outC_MRSP_Find_First_in_each_t_TA_MRSP *outC)
{
  kcg_int i;
  
  for (i = 0; i < 11; i++) {
    /* 1 */ MRSP_Find_First_in_SSP_t_cat_reset_TA_MRSP(&outC->Context_1[i]);
  }
}

/* TA_MRSP::MRSP_Find_First_in_each_t_SSP_cat */
void MRSP_Find_First_in_each_t_TA_MRSP(
  /* TA_MRSP::MRSP_Find_First_in_each_t_SSP_cat::SSP_matrix_in */SSP_t_matrix_t_TA_MRSP *SSP_matrix_in,
  outC_MRSP_Find_First_in_each_t_TA_MRSP *outC)
{
  kcg_int i;
  
  kcg_copy_SSP_t_matrix_t_TA_MRSP(&outC->_L3, SSP_matrix_in);
  for (i = 0; i < 11; i++) {
    /* 1 */
    MRSP_Find_First_in_SSP_t_cat_TA_MRSP(&outC->_L3[i], &outC->Context_1[i]);
    kcg_copy_SSP_t_indexed_trgt_t_TA_MRSP(
      &outC->_L1[i],
      &outC->Context_1[i].SSP_indexed_loc);
  }
  kcg_copy_SSP_t_indexed_targets_list_t_TA_MRSP(
    &outC->SSP_indexed_targets_per_cat_out,
    &outC->_L1);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_Find_First_in_each_t_TA_MRSP.c
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

