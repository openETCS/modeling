/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FindStartOfNewSpeedProfile_LOOP_TA_Lib_internal.h"

/* TA_Lib_internal::FindStartOfNewSpeedProfile_LOOP */
void FindStartOfNewSpeedProfile_LOOP_TA_Lib_internal(
  /* TA_Lib_internal::FindStartOfNewSpeedProfile_LOOP::i */kcg_int i,
  /* TA_Lib_internal::FindStartOfNewSpeedProfile_LOOP::Acc */kcg_int Acc,
  /* TA_Lib_internal::FindStartOfNewSpeedProfile_LOOP::distance_in */D_STATIC distance_in,
  /* TA_Lib_internal::FindStartOfNewSpeedProfile_LOOP::Profile_in */SSP_cat_t_TA_MRSP *Profile_in,
  /* TA_Lib_internal::FindStartOfNewSpeedProfile_LOOP::cont */kcg_bool *cont,
  /* TA_Lib_internal::FindStartOfNewSpeedProfile_LOOP::relevant_section */kcg_int *relevant_section)
{
  /* TA_Lib_internal::FindStartOfNewSpeedProfile_LOOP::_L4 */ SSP_section_t_TA_MRSP _L4;
  
  *relevant_section = i;
  if ((0 <= *relevant_section) & (*relevant_section < 33)) {
    kcg_copy_SSP_section_t_TA_MRSP(&_L4, &(*Profile_in)[*relevant_section]);
  }
  else {
    kcg_copy_SSP_section_t_TA_MRSP(
      &_L4,
      (SSP_section_t_TA_MRSP *) &DEFAULT_SSP_section_TA_MRSP);
  }
  *cont = !((*relevant_section > 0) & (0 == _L4.target)) & (_L4.target <
      distance_in);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** FindStartOfNewSpeedProfile_LOOP_TA_Lib_internal.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

