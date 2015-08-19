/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSP_FindLastSSPSection_TA_MRSP.h"

/* TA_MRSP::MRSP_FindLastSSPSection */
void MRSP_FindLastSSPSection_TA_MRSP(
  /* TA_MRSP::MRSP_FindLastSSPSection::SSP_Reverse_In */SSP_cat_t_TA_MRSP *SSP_Reverse_In,
  /* TA_MRSP::MRSP_FindLastSSPSection::Index_Last */SSP_valid_section_t_TA_MRSP *Index_Last)
{
  SSP_Mark_ValidSSPsection_TA_MRSP tmp2;
  kcg_bool tmp1;
  kcg_int i;
  SSP_section_t_TA_MRSP tmp;
  /* TA_MRSP::MRSP_FindLastSSPSection::_L14 */ SSP_Mark_ValidSSPsection_TA_MRSP _L14;
  
  kcg_copy_SSP_Mark_ValidSSPsection_TA_MRSP(
    &_L14,
    (SSP_Mark_ValidSSPsection_TA_MRSP *)
      &DEFAULT_SSP_Init_ValidSSPsection_TA_MRSP);
  for (i = 0; i < 33; i++) {
    kcg_copy_SSP_Mark_ValidSSPsection_TA_MRSP(&tmp2, &_L14);
    /* 1 */
    MRSP_FindLastSSPSection_LOOP_TA_MRSP(
      i,
      &tmp2,
      &(*SSP_Reverse_In)[i],
      &tmp1,
      &_L14);
    if (!tmp1) {
      break;
    }
  }
  (*Index_Last).found = _L14.Found;
  (*Index_Last).index = _L14.Index;
  if ((0 <= _L14.Index) & (_L14.Index < 33)) {
    kcg_copy_SSP_section_t_TA_MRSP(&tmp, &(*SSP_Reverse_In)[_L14.Index]);
  }
  else {
    kcg_copy_SSP_section_t_TA_MRSP(
      &tmp,
      (SSP_section_t_TA_MRSP *) &DEFAULT_SSP_section_TA_MRSP);
  }
  (*Index_Last).target = tmp.target;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_FindLastSSPSection_TA_MRSP.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

