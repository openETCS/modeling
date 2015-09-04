/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSP_BuildTargetList_TA_MRSP.h"

void MRSP_BuildTargetList_reset_TA_MRSP(outC_MRSP_BuildTargetList_TA_MRSP *outC)
{
  kcg_int i;
  
  for (i = 0; i < 363; i++) {
    /* 1 */ MRSP_BuildTargetList_LOOP_reset_TA_MRSP(&outC->Context_1[i]);
  }
}

/* TA_MRSP::MRSP_BuildTargetList */
void MRSP_BuildTargetList_TA_MRSP(
  /* TA_MRSP::MRSP_BuildTargetList::SSP_Matrix_In */SSP_t_matrix_t_TA_MRSP *SSP_Matrix_In,
  outC_MRSP_BuildTargetList_TA_MRSP *outC)
{
  SSP_t_matrix_t_TA_MRSP tmp;
  kcg_int i;
  SSP_t_matrix_t_TA_MRSP noname;
  
  kcg_copy_SSP_t_list_t_TA_MRSP(
    &outC->_L5,
    (SSP_t_list_t_TA_MRSP *) &DEFAULT_SSP_targets_TA_MRSP);
  kcg_copy_SSP_t_matrix_t_TA_MRSP(&outC->_L3, SSP_Matrix_In);
  kcg_copy_SSP_t_matrix_t_TA_MRSP(&outC->_L4, &outC->_L3);
  for (i = 0; i < 363; i++) {
    kcg_copy_SSP_t_matrix_t_TA_MRSP(&tmp, &outC->_L4);
    /* 1 */
    MRSP_BuildTargetList_LOOP_TA_MRSP(&tmp, &outC->_L5[i], &outC->Context_1[i]);
    kcg_copy_SSP_t_matrix_t_TA_MRSP(
      &outC->_L4,
      &outC->Context_1[i].SSP_Matrix_out);
    kcg_copy_SSP_t_indexed_matrix_element_TA_MRSP(
      &outC->_L1[i],
      &outC->Context_1[i].SSP_list_out);
  }
  kcg_copy_SSP_t_list_t_TA_MRSP(&outC->SSP_list_out, &outC->_L1);
  kcg_copy_SSP_t_matrix_t_TA_MRSP(&noname, &outC->_L4);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_BuildTargetList_TA_MRSP.c
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

