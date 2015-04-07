/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-06T19:13:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BuildTargetList_LOOP.h"

void BuildTargetList_LOOP_reset(outC_BuildTargetList_LOOP *outC)
{
  /* 1 */ RemoveLargestFromSSP_t_matrix_reset(&outC->_2_Context_1);
  /* 1 */ FindMax_of_all_t_cats_reset(&outC->_1_Context_1);
  /* 1 */ Find_First_in_each_t_SSP_cat_reset(&outC->Context_1);
}

/* BuildTargetList_LOOP */
void BuildTargetList_LOOP(
  /* BuildTargetList_LOOP::SSP_Matrix_In */SSP_t_matrix_t *SSP_Matrix_In,
  /* BuildTargetList_LOOP::SSP_list_in */SSP_t_indexed_matrix_element *SSP_list_in,
  outC_BuildTargetList_LOOP *outC)
{
  SSP_t_indexed_matrix_element noname;
  
  kcg_copy_SSP_t_matrix_t(&outC->_L1, SSP_Matrix_In);
  /* 1 */ Find_First_in_each_t_SSP_cat(&outC->_L1, &outC->Context_1);
  kcg_copy_SSP_t_indexed_targets_list_t(
    &outC->_L3,
    &outC->Context_1.SSP_indexed_targets_per_cat_out);
  /* 1 */ FindMax_of_all_t_cats(&outC->_L3, &outC->_1_Context_1);
  kcg_copy_SSP_t_indexed_matrix_element(
    &outC->_L4,
    &outC->_1_Context_1.SSP_largest_target);
  /* 1 */
  RemoveLargestFromSSP_t_matrix(&outC->_L4, &outC->_L1, &outC->_2_Context_1);
  kcg_copy_SSP_t_matrix_t(&outC->_L5, &outC->_2_Context_1.SSP_matrix_out);
  kcg_copy_SSP_t_indexed_matrix_element(&outC->_L2, SSP_list_in);
  kcg_copy_SSP_t_indexed_matrix_element(&noname, &outC->_L2);
  kcg_copy_SSP_t_indexed_matrix_element(&outC->SSP_list_out, &outC->_L4);
  kcg_copy_SSP_t_matrix_t(&outC->SSP_Matrix_out, &outC->_L5);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** BuildTargetList_LOOP.c
** Generation date: 2015-04-06T19:13:00
*************************************************************$ */

