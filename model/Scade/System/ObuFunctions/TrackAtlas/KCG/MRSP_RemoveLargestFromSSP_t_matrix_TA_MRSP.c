/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSP_RemoveLargestFromSSP_t_matrix_TA_MRSP.h"

/* TA_MRSP::MRSP_RemoveLargestFromSSP_t_matrix */
void MRSP_RemoveLargestFromSSP_t_matrix_TA_MRSP(
  /* TA_MRSP::MRSP_RemoveLargestFromSSP_t_matrix::Largest_Target */SSP_t_indexed_matrix_element_TA_MRSP *Largest_Target,
  /* TA_MRSP::MRSP_RemoveLargestFromSSP_t_matrix::SSP_matrix_in */SSP_t_matrix_t_TA_MRSP *SSP_matrix_in,
  /* TA_MRSP::MRSP_RemoveLargestFromSSP_t_matrix::SSP_matrix_out */SSP_t_matrix_t_TA_MRSP *SSP_matrix_out)
{
  kcg_copy_SSP_t_matrix_t_TA_MRSP(SSP_matrix_out, SSP_matrix_in);
  if ((0 <= (*Largest_Target).Category_Index) &
    ((*Largest_Target).Category_Index < 11) & ((0 <=
        (*Largest_Target).Pos_Index) & ((*Largest_Target).Pos_Index < 33))) {
    (*SSP_matrix_out)[(*Largest_Target).Category_Index][(*Largest_Target).Pos_Index] =
      0;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_RemoveLargestFromSSP_t_matrix_TA_MRSP.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

