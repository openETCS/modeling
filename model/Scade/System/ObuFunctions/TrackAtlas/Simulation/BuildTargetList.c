/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-06T19:13:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BuildTargetList.h"

void BuildTargetList_reset(outC_BuildTargetList *outC)
{
  kcg_int i;
  
  for (i = 0; i < 33; i++) {
    /* 1 */ BuildTargetList_LOOP_reset(&outC->_1_Context_1[i]);
  }
  /* 1 */ Reverse_SSP_t_matrix_reset(&outC->Context_1);
}

/* BuildTargetList */
void BuildTargetList(inC_BuildTargetList *inC, outC_BuildTargetList *outC)
{
  SSP_t_matrix_t tmp;
  kcg_int i;
  SSP_t_matrix_t noname;
  
  kcg_copy_SSP_t_matrix_t(&outC->_L3, &inC->SSP_Matrix_In);
  /* 1 */ Reverse_SSP_t_matrix(&outC->_L3, &outC->Context_1);
  kcg_copy_SSP_t_matrix_t(&outC->_L5, &outC->Context_1.Reverse_SSP_matrix_out);
  kcg_copy_SSP_t_list_t(&outC->_L2, (SSP_t_list_t *) &DEFAULT_SSP_targets);
  kcg_copy_SSP_t_matrix_t(&outC->_L4, &outC->_L5);
  for (i = 0; i < 33; i++) {
    kcg_copy_SSP_t_matrix_t(&tmp, &outC->_L4);
    /* 1 */ BuildTargetList_LOOP(&tmp, &outC->_L2[i], &outC->_1_Context_1[i]);
    kcg_copy_SSP_t_matrix_t(&outC->_L4, &outC->_1_Context_1[i].SSP_Matrix_out);
    kcg_copy_SSP_t_indexed_matrix_element(
      &outC->_L1[i],
      &outC->_1_Context_1[i].SSP_list_out);
  }
  kcg_copy_SSP_t_list_t(&outC->SSP_list_out, &outC->_L1);
  kcg_copy_SSP_t_matrix_t(&noname, &outC->_L4);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** BuildTargetList.c
** Generation date: 2015-04-06T19:13:00
*************************************************************$ */

