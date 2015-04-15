/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-03T18:02:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Reverse_SSP_matrix.h"

void Reverse_SSP_matrix_reset(outC_Reverse_SSP_matrix *outC)
{
  kcg_int i;
  
  for (i = 0; i < 11; i++) {
    /* 1 */ Reverse_SSP_cat_reset(&outC->Context_1[i]);
  }
}

/* Reverse_SSP_matrix */
void Reverse_SSP_matrix(
  /* Reverse_SSP_matrix::SSP_matrix_in */SSP_matrix_t *SSP_matrix_in,
  outC_Reverse_SSP_matrix *outC)
{
  kcg_int i;
  
  kcg_copy_SSP_matrix_t(&outC->_L1, SSP_matrix_in);
  for (i = 0; i < 11; i++) {
    /* 1 */ Reverse_SSP_cat(&outC->_L1[i], &outC->Context_1[i]);
    kcg_copy_SSP_cat_t(&outC->_L3[i], &outC->Context_1[i].SSP_cat_out);
  }
  kcg_copy_SSP_matrix_t(&outC->Reverse_SSP_matrix_out, &outC->_L3);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Reverse_SSP_matrix.c
** Generation date: 2015-04-03T18:02:58
*************************************************************$ */

