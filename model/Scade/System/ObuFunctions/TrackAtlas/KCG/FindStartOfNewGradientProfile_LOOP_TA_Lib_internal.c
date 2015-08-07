/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FindStartOfNewGradientProfile_LOOP_TA_Lib_internal.h"

/* TA_Lib_internal::FindStartOfNewGradientProfile_LOOP */
void FindStartOfNewGradientProfile_LOOP_TA_Lib_internal(
  /* TA_Lib_internal::FindStartOfNewGradientProfile_LOOP::i */kcg_int i,
  /* TA_Lib_internal::FindStartOfNewGradientProfile_LOOP::Acc */kcg_int Acc,
  /* TA_Lib_internal::FindStartOfNewGradientProfile_LOOP::distance_in */L_internal_Type_Obu_BasicTypes_Pkg distance_in,
  /* TA_Lib_internal::FindStartOfNewGradientProfile_LOOP::Profile_in */GradientProfile_t_TrackAtlasTypes *Profile_in,
  /* TA_Lib_internal::FindStartOfNewGradientProfile_LOOP::cont */kcg_bool *cont,
  /* TA_Lib_internal::FindStartOfNewGradientProfile_LOOP::relevant_section */kcg_int *relevant_section)
{
  /* TA_Lib_internal::FindStartOfNewGradientProfile_LOOP::_L4 */ Gradient_section_t_TrackAtlasTypes _L4;
  
  *relevant_section = i;
  if ((0 <= *relevant_section) & (*relevant_section < 50)) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &_L4,
      &(*Profile_in)[*relevant_section]);
  }
  else {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &_L4,
      (Gradient_section_t_TrackAtlasTypes *)
        &DEFAULT_GradientSection_TrackAtlasTypes);
  }
  *cont = !((*relevant_section > 0) & (0 == _L4.Loc_LRBG)) & (_L4.Loc_LRBG <
      distance_in);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** FindStartOfNewGradientProfile_LOOP_TA_Lib_internal.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

