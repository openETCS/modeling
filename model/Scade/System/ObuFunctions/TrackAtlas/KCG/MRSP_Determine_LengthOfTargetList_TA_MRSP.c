/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSP_Determine_LengthOfTargetList_TA_MRSP.h"

/* TA_MRSP::MRSP_Determine_LengthOfTargetList */
kcg_int MRSP_Determine_LengthOfTargetList_TA_MRSP(
  /* TA_MRSP::MRSP_Determine_LengthOfTargetList::SSP_t_list_in */SSP_t_list_t_TA_MRSP *SSP_t_list_in)
{
  kcg_int tmp1;
  kcg_bool tmp;
  kcg_int i;
  /* TA_MRSP::MRSP_Determine_LengthOfTargetList::length */ kcg_int length;
  
  length = 0;
  for (i = 0; i < 363; i++) {
    tmp1 = length;
    /* 1 */
    MRSP_Determine_LengthOfTargetList_LOOP_TA_MRSP(
      i,
      tmp1,
      &(*SSP_t_list_in)[362 - i],
      &tmp,
      &length);
    if (!tmp) {
      break;
    }
  }
  return length;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_Determine_LengthOfTargetList_TA_MRSP.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

