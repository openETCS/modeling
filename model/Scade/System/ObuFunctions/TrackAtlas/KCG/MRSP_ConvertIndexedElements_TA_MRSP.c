/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSP_ConvertIndexedElements_TA_MRSP.h"

/* TA_MRSP::MRSP_ConvertIndexedElements */
void MRSP_ConvertIndexedElements_TA_MRSP(
  /* TA_MRSP::MRSP_ConvertIndexedElements::SSP_indexed_targets_list */SSP_t_indexed_trgt_t_TA_MRSP *SSP_indexed_targets_list,
  /* TA_MRSP::MRSP_ConvertIndexedElements::SSP_indexed_matrix_element_list */SSP_t_indexed_matrix_element_TA_MRSP *SSP_indexed_matrix_element_list)
{
  (*SSP_indexed_matrix_element_list).Category_Index = 99;
  (*SSP_indexed_matrix_element_list).Pos_Index =
    (*SSP_indexed_targets_list).Index;
  (*SSP_indexed_matrix_element_list).Loc = (*SSP_indexed_targets_list).Loc;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_ConvertIndexedElements_TA_MRSP.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

