/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSP_Find_First_in_each_t_SSP_cat_TA_MRSP.h"

/* TA_MRSP::MRSP_Find_First_in_each_t_SSP_cat */
void MRSP_Find_First_in_each_t_SSP_cat_TA_MRSP(
  /* TA_MRSP::MRSP_Find_First_in_each_t_SSP_cat::SSP_matrix_in */SSP_t_matrix_t_TA_MRSP *SSP_matrix_in,
  /* TA_MRSP::MRSP_Find_First_in_each_t_SSP_cat::SSP_indexed_targets_per_cat_out */SSP_t_indexed_targets_list_t_TA_MRSP *SSP_indexed_targets_per_cat_out)
{
  kcg_int i;
  
  for (i = 0; i < 11; i++) {
    /* 1 */
    MRSP_Find_First_in_SSP_t_cat_TA_MRSP(
      &(*SSP_matrix_in)[i],
      &(*SSP_indexed_targets_per_cat_out)[i]);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_Find_First_in_each_t_SSP_cat_TA_MRSP.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

