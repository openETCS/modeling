/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-06T21:03:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Split_And_Reverse_SSP_matrix.h"

void Split_And_Reverse_SSP_matrix_reset(outC_Split_And_Reverse_SSP_matrix *outC)
{
  kcg_int i;
  
  for (i = 0; i < 11; i++) {
    /* 1 */ SplitAndReverseSSP_LOOP1_reset(&outC->Context_1[i]);
  }
}

/* Split_And_Reverse_SSP_matrix */
void Split_And_Reverse_SSP_matrix(
  inC_Split_And_Reverse_SSP_matrix *inC,
  outC_Split_And_Reverse_SSP_matrix *outC)
{
  kcg_int i;
  
  kcg_copy_SSP_matrix_t(&outC->_L1, &inC->SSP_matrix_in);
  for (i = 0; i < 11; i++) {
    /* 1 */ SplitAndReverseSSP_LOOP1(&outC->_L1[i], &outC->Context_1[i]);
    kcg_copy_SSP_t_cat_t(
      &outC->_L27[i],
      &outC->Context_1[i].SSP_reverse_t_cat_out);
    kcg_copy_SSP_cat_t(&outC->_L51[i], &outC->Context_1[i].SSP_reverse_cat_out);
  }
  kcg_copy_SSP_matrix_t(&outC->SSP_reverse_matrix_out, &outC->_L51);
  kcg_copy_SSP_t_matrix_t(&outC->SSP_reverse_t_matrix_out, &outC->_L27);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Split_And_Reverse_SSP_matrix.c
** Generation date: 2015-04-06T21:03:30
*************************************************************$ */

