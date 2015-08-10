/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSP_Split_And_Reverse_SSP_matrix_TA_MRSP.h"

/* TA_MRSP::MRSP_Split_And_Reverse_SSP_matrix */
void MRSP_Split_And_Reverse_SSP_matrix_TA_MRSP(
  /* TA_MRSP::MRSP_Split_And_Reverse_SSP_matrix::SSP_matrix_in */SSP_matrix_t_TA_MRSP *SSP_matrix_in,
  /* TA_MRSP::MRSP_Split_And_Reverse_SSP_matrix::SSP_reverse_t_matrix_out */SSP_t_matrix_t_TA_MRSP *SSP_reverse_t_matrix_out,
  /* TA_MRSP::MRSP_Split_And_Reverse_SSP_matrix::SSP_reverse_matrix_out */SSP_matrix_t_TA_MRSP *SSP_reverse_matrix_out)
{
  kcg_int i;
  
  for (i = 0; i < 11; i++) {
    /* 1 */
    MRSP_SplitAndReverseSSP_LOOP1_TA_MRSP(
      &(*SSP_matrix_in)[i],
      &(*SSP_reverse_t_matrix_out)[i],
      &(*SSP_reverse_matrix_out)[i]);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_Split_And_Reverse_SSP_matrix_TA_MRSP.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

