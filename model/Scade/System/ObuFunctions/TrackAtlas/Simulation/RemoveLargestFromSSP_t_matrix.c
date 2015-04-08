/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-06T19:13:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RemoveLargestFromSSP_t_matrix.h"

void RemoveLargestFromSSP_t_matrix_reset(
  outC_RemoveLargestFromSSP_t_matrix *outC)
{
}

/* RemoveLargestFromSSP_t_matrix */
void RemoveLargestFromSSP_t_matrix(
  /* RemoveLargestFromSSP_t_matrix::Largest_Target */SSP_t_indexed_matrix_element *Largest_Target,
  /* RemoveLargestFromSSP_t_matrix::SSP_matrix_in */SSP_t_matrix_t *SSP_matrix_in,
  outC_RemoveLargestFromSSP_t_matrix *outC)
{
  outC->_L18 = 0;
  kcg_copy_SSP_t_indexed_matrix_element(&outC->_L2, Largest_Target);
  outC->_L17 = outC->_L2.Pos_Index;
  outC->_L10 = outC->_L2.Category_Index;
  kcg_copy_SSP_t_matrix_t(&outC->_L1, SSP_matrix_in);
  kcg_copy_SSP_t_matrix_t(&outC->_L3, &outC->_L1);
  if ((0 <= outC->_L10) & (outC->_L10 < 11) & ((0 <= outC->_L17) & (outC->_L17 <
        8))) {
    outC->_L3[outC->_L10][outC->_L17] = outC->_L18;
  }
  kcg_copy_SSP_t_matrix_t(&outC->SSP_matrix_out, &outC->_L3);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RemoveLargestFromSSP_t_matrix.c
** Generation date: 2015-04-06T19:13:00
*************************************************************$ */

