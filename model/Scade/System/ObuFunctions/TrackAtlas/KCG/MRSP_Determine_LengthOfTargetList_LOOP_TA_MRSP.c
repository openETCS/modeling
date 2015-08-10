/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSP_Determine_LengthOfTargetList_LOOP_TA_MRSP.h"

/* TA_MRSP::MRSP_Determine_LengthOfTargetList_LOOP */
void MRSP_Determine_LengthOfTargetList_LOOP_TA_MRSP(
  /* TA_MRSP::MRSP_Determine_LengthOfTargetList_LOOP::i */kcg_int i,
  /* TA_MRSP::MRSP_Determine_LengthOfTargetList_LOOP::Acc */kcg_int Acc,
  /* TA_MRSP::MRSP_Determine_LengthOfTargetList_LOOP::SSP_target_in */SSP_t_indexed_matrix_element_TA_MRSP *SSP_target_in,
  /* TA_MRSP::MRSP_Determine_LengthOfTargetList_LOOP::cont */kcg_bool *cont,
  /* TA_MRSP::MRSP_Determine_LengthOfTargetList_LOOP::length */kcg_int *length)
{
  *length = DIM_SSP_TA_MRSP - i;
  *cont = (*SSP_target_in).Loc == int_ZERO_TA_MRSP;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_Determine_LengthOfTargetList_LOOP_TA_MRSP.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

