/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSP_Build_MRSP_LOOP_TA_MRSP.h"

/* TA_MRSP::MRSP_Build_MRSP_LOOP */
void MRSP_Build_MRSP_LOOP_TA_MRSP(
  /* TA_MRSP::MRSP_Build_MRSP_LOOP::i */kcg_int i,
  /* TA_MRSP::MRSP_Build_MRSP_LOOP::LengthOfTargetList */kcg_int LengthOfTargetList,
  /* TA_MRSP::MRSP_Build_MRSP_LOOP::TargetList */SSP_t_list_t_TA_MRSP *TargetList,
  /* TA_MRSP::MRSP_Build_MRSP_LOOP::SSP_matrix */SSP_matrix_t_TA_MRSP *SSP_matrix,
  /* TA_MRSP::MRSP_Build_MRSP_LOOP::cont */kcg_bool *cont,
  /* TA_MRSP::MRSP_Build_MRSP_LOOP::MRSP_section_out */MRSP_section_t_TrackAtlasTypes *MRSP_section_out)
{
  /* TA_MRSP::MRSP_Build_MRSP_LOOP::_L213 */ SSP_t_indexed_matrix_element_TA_MRSP _L213;
  
  *cont = i <= LengthOfTargetList;
  if ((0 <= i) & (i < 363)) {
    kcg_copy_SSP_t_indexed_matrix_element_TA_MRSP(&_L213, &(*TargetList)[i]);
  }
  else {
    kcg_copy_SSP_t_indexed_matrix_element_TA_MRSP(
      &_L213,
      (SSP_t_indexed_matrix_element_TA_MRSP *) &DEFAULT_indexed_target_TA_MRSP);
  }
  (*MRSP_section_out).Loc_Abs = _L213.Loc;
  (*MRSP_section_out).Loc_LRBG = (*MRSP_section_out).Loc_Abs;
  (*MRSP_section_out).valid = *cont;
  (*MRSP_section_out).MRS = /* 1 */
    MRSP_Determine_MRS_TA_MRSP(_L213.Loc, SSP_matrix);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_Build_MRSP_LOOP_TA_MRSP.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

