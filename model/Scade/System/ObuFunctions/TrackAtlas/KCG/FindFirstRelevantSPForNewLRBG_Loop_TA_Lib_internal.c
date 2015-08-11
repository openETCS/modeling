/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FindFirstRelevantSPForNewLRBG_Loop_TA_Lib_internal.h"

/* TA_Lib_internal::FindFirstRelevantSPForNewLRBG_Loop */
void FindFirstRelevantSPForNewLRBG_Loop_TA_Lib_internal(
  /* TA_Lib_internal::FindFirstRelevantSPForNewLRBG_Loop::i */kcg_int i,
  /* TA_Lib_internal::FindFirstRelevantSPForNewLRBG_Loop::Acc */kcg_int Acc,
  /* TA_Lib_internal::FindFirstRelevantSPForNewLRBG_Loop::Profile_in */SSP_cat_t_TA_MRSP *Profile_in,
  /* TA_Lib_internal::FindFirstRelevantSPForNewLRBG_Loop::Distance_2LRBGs */kcg_int Distance_2LRBGs,
  /* TA_Lib_internal::FindFirstRelevantSPForNewLRBG_Loop::cont */kcg_bool *cont,
  /* TA_Lib_internal::FindFirstRelevantSPForNewLRBG_Loop::relevant_section */kcg_int *relevant_section)
{
  /* TA_Lib_internal::FindFirstRelevantSPForNewLRBG_Loop::_L172 */ SSP_section_t_TA_MRSP _L172;
  
  *relevant_section = i;
  if ((0 <= *relevant_section) & (*relevant_section < 33)) {
    kcg_copy_SSP_section_t_TA_MRSP(&_L172, &(*Profile_in)[*relevant_section]);
  }
  else {
    kcg_copy_SSP_section_t_TA_MRSP(
      &_L172,
      (SSP_section_t_TA_MRSP *) &DEFAULT_SSP_section_TA_MRSP);
  }
  *cont = !((*relevant_section > 0) & (0 == _L172.target)) & (_L172.target <
      Distance_2LRBGs);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** FindFirstRelevantSPForNewLRBG_Loop_TA_Lib_internal.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

