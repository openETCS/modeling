/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSP_RemoveLargestFromSSP_t_matrix_TA_MRSP.h"

void MRSP_RemoveLargestFromSSP_t_matrix_reset_TA_MRSP(
  outC_MRSP_RemoveLargestFromSSP_t_matrix_TA_MRSP *outC)
{
}

/* TA_MRSP::MRSP_RemoveLargestFromSSP_t_matrix */
void MRSP_RemoveLargestFromSSP_t_matrix_TA_MRSP(
  /* TA_MRSP::MRSP_RemoveLargestFromSSP_t_matrix::Largest_Target */SSP_t_indexed_matrix_element_TA_MRSP *Largest_Target,
  /* TA_MRSP::MRSP_RemoveLargestFromSSP_t_matrix::SSP_matrix_in */SSP_t_matrix_t_TA_MRSP *SSP_matrix_in,
  outC_MRSP_RemoveLargestFromSSP_t_matrix_TA_MRSP *outC)
{
  outC->_L18 = 0;
  kcg_copy_SSP_t_indexed_matrix_element_TA_MRSP(&outC->_L2, Largest_Target);
  outC->_L17 = outC->_L2.Pos_Index;
  outC->_L10 = outC->_L2.Category_Index;
  kcg_copy_SSP_t_matrix_t_TA_MRSP(&outC->_L1, SSP_matrix_in);
  kcg_copy_SSP_t_matrix_t_TA_MRSP(&outC->_L3, &outC->_L1);
  if ((0 <= outC->_L10) & (outC->_L10 < 11) & ((0 <= outC->_L17) & (outC->_L17 <
        33))) {
    outC->_L3[outC->_L10][outC->_L17] = outC->_L18;
  }
  kcg_copy_SSP_t_matrix_t_TA_MRSP(&outC->SSP_matrix_out, &outC->_L3);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_RemoveLargestFromSSP_t_matrix_TA_MRSP.c
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

