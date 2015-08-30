/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSP_BuildTargetList_LOOP_TA_MRSP.h"

/* TA_MRSP::MRSP_BuildTargetList_LOOP */
void MRSP_BuildTargetList_LOOP_TA_MRSP(
  /* TA_MRSP::MRSP_BuildTargetList_LOOP::SSP_Matrix_In */SSP_t_matrix_t_TA_MRSP *SSP_Matrix_In,
  /* TA_MRSP::MRSP_BuildTargetList_LOOP::SSP_list_in */SSP_t_indexed_matrix_element_TA_MRSP *SSP_list_in,
  /* TA_MRSP::MRSP_BuildTargetList_LOOP::SSP_Matrix_out */SSP_t_matrix_t_TA_MRSP *SSP_Matrix_out,
  /* TA_MRSP::MRSP_BuildTargetList_LOOP::SSP_list_out */SSP_t_indexed_matrix_element_TA_MRSP *SSP_list_out)
{
  SSP_t_indexed_targets_list_t_TA_MRSP tmp;
  
  /* 1 */ MRSP_Find_First_in_each_t_SSP_cat_TA_MRSP(SSP_Matrix_In, &tmp);
  /* 1 */ MRSP_FindMax_of_all_t_cats_TA_MRSP(&tmp, SSP_list_out);
  /* 1 */
  MRSP_RemoveLargestFromSSP_t_matrix_TA_MRSP(
    SSP_list_out,
    SSP_Matrix_In,
    SSP_Matrix_out);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_BuildTargetList_LOOP_TA_MRSP.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

