/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSP_BuildTargetList_LOOP_TA_MRSP.h"

void MRSP_BuildTargetList_LOOP_reset_TA_MRSP(
  outC_MRSP_BuildTargetList_LOOP_TA_MRSP *outC)
{
  /* 1 */ MRSP_RemoveLargestFromSSP_t_matrix_reset_TA_MRSP(&outC->_2_Context_1);
  /* 1 */ MRSP_FindMax_of_all_t_cats_reset_TA_MRSP(&outC->_1_Context_1);
  /* 1 */ MRSP_Find_First_in_each_t_SSP_cat_reset_TA_MRSP(&outC->Context_1);
}

/* TA_MRSP::MRSP_BuildTargetList_LOOP */
void MRSP_BuildTargetList_LOOP_TA_MRSP(
  /* TA_MRSP::MRSP_BuildTargetList_LOOP::SSP_Matrix_In */SSP_t_matrix_t_TA_MRSP *SSP_Matrix_In,
  /* TA_MRSP::MRSP_BuildTargetList_LOOP::SSP_list_in */SSP_t_indexed_matrix_element_TA_MRSP *SSP_list_in,
  outC_MRSP_BuildTargetList_LOOP_TA_MRSP *outC)
{
  SSP_t_indexed_matrix_element_TA_MRSP noname;
  
  kcg_copy_SSP_t_matrix_t_TA_MRSP(&outC->_L1, SSP_Matrix_In);
  /* 1 */
  MRSP_Find_First_in_each_t_SSP_cat_TA_MRSP(&outC->_L1, &outC->Context_1);
  kcg_copy_SSP_t_indexed_targets_list_t_TA_MRSP(
    &outC->_L3,
    &outC->Context_1.SSP_indexed_targets_per_cat_out);
  /* 1 */ MRSP_FindMax_of_all_t_cats_TA_MRSP(&outC->_L3, &outC->_1_Context_1);
  kcg_copy_SSP_t_indexed_matrix_element_TA_MRSP(
    &outC->_L4,
    &outC->_1_Context_1.SSP_largest_target);
  /* 1 */
  MRSP_RemoveLargestFromSSP_t_matrix_TA_MRSP(
    &outC->_L4,
    &outC->_L1,
    &outC->_2_Context_1);
  kcg_copy_SSP_t_matrix_t_TA_MRSP(
    &outC->_L5,
    &outC->_2_Context_1.SSP_matrix_out);
  kcg_copy_SSP_t_indexed_matrix_element_TA_MRSP(&outC->_L2, SSP_list_in);
  kcg_copy_SSP_t_indexed_matrix_element_TA_MRSP(&noname, &outC->_L2);
  kcg_copy_SSP_t_indexed_matrix_element_TA_MRSP(
    &outC->SSP_list_out,
    &outC->_L4);
  kcg_copy_SSP_t_matrix_t_TA_MRSP(&outC->SSP_Matrix_out, &outC->_L5);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_BuildTargetList_LOOP_TA_MRSP.c
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

