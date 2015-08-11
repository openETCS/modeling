/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FindFirstRelevantSPForNewLRBG_TA_Lib_internal.h"

/* TA_Lib_internal::FindFirstRelevantSPForNewLRBG */
kcg_int FindFirstRelevantSPForNewLRBG_TA_Lib_internal(
  /* TA_Lib_internal::FindFirstRelevantSPForNewLRBG::Profile_in */SSP_cat_t_TA_MRSP *Profile_in,
  /* TA_Lib_internal::FindFirstRelevantSPForNewLRBG::Distance_2LRBGs */kcg_int Distance_2LRBGs)
{
  kcg_int tmp1;
  kcg_bool tmp;
  kcg_int i;
  /* TA_Lib_internal::FindFirstRelevantSPForNewLRBG::relevant_section */ kcg_int relevant_section;
  
  relevant_section = 0;
  for (i = 0; i < 33; i++) {
    tmp1 = relevant_section;
    /* 3 */
    FindFirstRelevantSPForNewLRBG_Loop_TA_Lib_internal(
      i,
      tmp1,
      Profile_in,
      Distance_2LRBGs,
      &tmp,
      &relevant_section);
    if (!tmp) {
      break;
    }
  }
  return relevant_section;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** FindFirstRelevantSPForNewLRBG_TA_Lib_internal.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

