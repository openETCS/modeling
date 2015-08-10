/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSP_BuildTargetList_TA_MRSP.h"

/* TA_MRSP::MRSP_BuildTargetList */
void MRSP_BuildTargetList_TA_MRSP(
  /* TA_MRSP::MRSP_BuildTargetList::SSP_Matrix_In */SSP_t_matrix_t_TA_MRSP *SSP_Matrix_In,
  /* TA_MRSP::MRSP_BuildTargetList::SSP_list_out */SSP_t_list_t_TA_MRSP *SSP_list_out)
{
  SSP_t_matrix_t_TA_MRSP tmp;
  kcg_int i;
  /* TA_MRSP::MRSP_BuildTargetList::_L4 */ SSP_t_matrix_t_TA_MRSP _L4;
  
  kcg_copy_SSP_t_matrix_t_TA_MRSP(&_L4, SSP_Matrix_In);
  for (i = 0; i < 363; i++) {
    kcg_copy_SSP_t_matrix_t_TA_MRSP(&tmp, &_L4);
    /* 1 */
    MRSP_BuildTargetList_LOOP_TA_MRSP(
      &tmp,
      (SSP_t_indexed_matrix_element_TA_MRSP *) &DEFAULT_SSP_targets_TA_MRSP[i],
      &_L4,
      &(*SSP_list_out)[i]);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_BuildTargetList_TA_MRSP.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

