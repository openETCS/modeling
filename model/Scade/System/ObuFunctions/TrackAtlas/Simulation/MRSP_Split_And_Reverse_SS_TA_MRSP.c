/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSP_Split_And_Reverse_SS_TA_MRSP.h"

void MRSP_Split_And_Reverse_SS_reset_TA_MRSP(
  outC_MRSP_Split_And_Reverse_SS_TA_MRSP *outC)
{
  kcg_int i;
  
  for (i = 0; i < 11; i++) {
    /* 1 */ _19_MRSP_SplitAndReverseSSP_L_reset_TA_MRSP(&outC->Context_1[i]);
  }
}

/* TA_MRSP::MRSP_Split_And_Reverse_SSP_matrix */
void MRSP_Split_And_Reverse_SS_TA_MRSP(
  /* TA_MRSP::MRSP_Split_And_Reverse_SSP_matrix::SSP_matrix_in */SSP_matrix_t_TA_MRSP *SSP_matrix_in,
  outC_MRSP_Split_And_Reverse_SS_TA_MRSP *outC)
{
  kcg_int i;
  
  kcg_copy_SSP_matrix_t_TA_MRSP(&outC->_L1, SSP_matrix_in);
  for (i = 0; i < 11; i++) {
    /* 1 */
    _19_MRSP_SplitAndReverseSSP_L_TA_MRSP(&outC->_L1[i], &outC->Context_1[i]);
    kcg_copy_SSP_t_cat_t_TA_MRSP(
      &outC->_L27[i],
      &outC->Context_1[i].SSP_reverse_t_cat_out);
    kcg_copy_SSP_cat_t_TA_MRSP(
      &outC->_L51[i],
      &outC->Context_1[i].SSP_reverse_cat_out);
  }
  kcg_copy_SSP_matrix_t_TA_MRSP(&outC->SSP_reverse_matrix_out, &outC->_L51);
  kcg_copy_SSP_t_matrix_t_TA_MRSP(&outC->SSP_reverse_t_matrix_out, &outC->_L27);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_Split_And_Reverse_SS_TA_MRSP.c
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

