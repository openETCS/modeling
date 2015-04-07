/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-03T18:02:58
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RemoveLargestFromSSP_Matrix.h"

void RemoveLargestFromSSP_Matrix_reset(outC_RemoveLargestFromSSP_Matrix *outC)
{
}

/* RemoveLargestFromSSP_Matrix */
void RemoveLargestFromSSP_Matrix(
  /* RemoveLargestFromSSP_Matrix::Largest_Target */SSP_indexed_matrix_element *Largest_Target,
  /* RemoveLargestFromSSP_Matrix::SSP_matrix_in */SSP_matrix_t *SSP_matrix_in,
  outC_RemoveLargestFromSSP_Matrix *outC)
{
  outC->_L18 = 0;
  kcg_copy_SSP_indexed_matrix_element(&outC->_L2, Largest_Target);
  outC->_L17 = outC->_L2.Pos_Index;
  outC->_L10 = outC->_L2.Category_Index;
  kcg_copy_SSP_matrix_t(&outC->_L1, SSP_matrix_in);
  kcg_copy_SSP_matrix_t(&outC->_L3, &outC->_L1);
  if ((0 <= outC->_L10) & (outC->_L10 < 11) & ((0 <= outC->_L17) & (outC->_L17 <
        3))) {
    outC->_L3[outC->_L10][outC->_L17] = outC->_L18;
  }
  kcg_copy_SSP_matrix_t(&outC->SSP_matrix_out, &outC->_L3);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RemoveLargestFromSSP_Matrix.c
** Generation date: 2015-04-03T18:02:58
*************************************************************$ */

