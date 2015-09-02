/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSP_FindMax_of_all_t_cats_LOOP_TA_MRSP.h"

/* TA_MRSP::MRSP_FindMax_of_all_t_cats_LOOP */
void MRSP_FindMax_of_all_t_cats_LOOP_TA_MRSP(
  /* TA_MRSP::MRSP_FindMax_of_all_t_cats_LOOP::i */kcg_int i,
  /* TA_MRSP::MRSP_FindMax_of_all_t_cats_LOOP::Init_target */SSP_t_indexed_matrix_element_TA_MRSP *Init_target,
  /* TA_MRSP::MRSP_FindMax_of_all_t_cats_LOOP::SSP_indexed_target */SSP_t_indexed_matrix_element_TA_MRSP *SSP_indexed_target,
  /* TA_MRSP::MRSP_FindMax_of_all_t_cats_LOOP::cont */kcg_bool *cont,
  /* TA_MRSP::MRSP_FindMax_of_all_t_cats_LOOP::Max */SSP_t_indexed_matrix_element_TA_MRSP *Max)
{
  *cont = kcg_true;
  if ((0 != (*SSP_indexed_target).Loc) & ((*SSP_indexed_target).Loc >=
      (*Init_target).Loc)) {
    kcg_copy_SSP_t_indexed_matrix_element_TA_MRSP(Max, SSP_indexed_target);
    (*Max).Category_Index = i;
  }
  else {
    kcg_copy_SSP_t_indexed_matrix_element_TA_MRSP(Max, Init_target);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_FindMax_of_all_t_cats_LOOP_TA_MRSP.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

