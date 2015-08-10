/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FindFirstRelevantGPForNewLRBG_Loop_TA_Lib_internal.h"

/* TA_Lib_internal::FindFirstRelevantGPForNewLRBG_Loop */
void FindFirstRelevantGPForNewLRBG_Loop_TA_Lib_internal(
  /* TA_Lib_internal::FindFirstRelevantGPForNewLRBG_Loop::i */kcg_int i,
  /* TA_Lib_internal::FindFirstRelevantGPForNewLRBG_Loop::Acc */kcg_int Acc,
  /* TA_Lib_internal::FindFirstRelevantGPForNewLRBG_Loop::Profile_in */GradientProfile_t_TrackAtlasTypes *Profile_in,
  /* TA_Lib_internal::FindFirstRelevantGPForNewLRBG_Loop::Distance_2LRBGs */kcg_int Distance_2LRBGs,
  /* TA_Lib_internal::FindFirstRelevantGPForNewLRBG_Loop::cont */kcg_bool *cont,
  /* TA_Lib_internal::FindFirstRelevantGPForNewLRBG_Loop::relevant_section */kcg_int *relevant_section)
{
  /* TA_Lib_internal::FindFirstRelevantGPForNewLRBG_Loop::_L172 */ Gradient_section_t_TrackAtlasTypes _L172;
  
  *relevant_section = i;
  if ((0 <= *relevant_section) & (*relevant_section < 50)) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &_L172,
      &(*Profile_in)[*relevant_section]);
  }
  else {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &_L172,
      (Gradient_section_t_TrackAtlasTypes *)
        &DEFAULT_GradientSection_TrackAtlasTypes);
  }
  *cont = !((*relevant_section > 0) & (0 == _L172.Loc_LRBG)) & (_L172.Loc_LRBG <
      Distance_2LRBGs);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** FindFirstRelevantGPForNewLRBG_Loop_TA_Lib_internal.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

