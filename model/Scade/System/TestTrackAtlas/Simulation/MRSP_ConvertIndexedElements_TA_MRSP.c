/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSP_ConvertIndexedElements_TA_MRSP.h"

void MRSP_ConvertIndexedElements_reset_TA_MRSP(
  outC_MRSP_ConvertIndexedElements_TA_MRSP *outC)
{
}

/* TA_MRSP::MRSP_ConvertIndexedElements */
void MRSP_ConvertIndexedElements_TA_MRSP(
  /* TA_MRSP::MRSP_ConvertIndexedElements::SSP_indexed_targets_list */SSP_t_indexed_trgt_t_TA_MRSP *SSP_indexed_targets_list,
  outC_MRSP_ConvertIndexedElements_TA_MRSP *outC)
{
  kcg_copy_SSP_t_indexed_trgt_t_TA_MRSP(&outC->_L1, SSP_indexed_targets_list);
  outC->_L4 = outC->_L1.Loc;
  outC->_L8 = 99;
  outC->_L3 = outC->_L1.Index;
  outC->_L7.Category_Index = outC->_L8;
  outC->_L7.Pos_Index = outC->_L3;
  outC->_L7.Loc = outC->_L4;
  kcg_copy_SSP_t_indexed_matrix_element_TA_MRSP(
    &outC->SSP_indexed_matrix_element_list,
    &outC->_L7);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_ConvertIndexedElements_TA_MRSP.c
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

