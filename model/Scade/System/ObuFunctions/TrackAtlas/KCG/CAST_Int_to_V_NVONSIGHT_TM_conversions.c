/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_V_NVONSIGHT_TM_conversions.h"

/* TM_conversions::CAST_Int_to_V_NVONSIGHT */
V_NVONSIGHT CAST_Int_to_V_NVONSIGHT_TM_conversions(
  /* TM_conversions::CAST_Int_to_V_NVONSIGHT::v_nvonsight_int */kcg_int v_nvonsight_int)
{
  /* TM_conversions::CAST_Int_to_V_NVONSIGHT::v_nvonsight */ V_NVONSIGHT v_nvonsight;
  
  v_nvonsight = v_nvonsight_int * 5;
  return v_nvonsight;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_V_NVONSIGHT_TM_conversions.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

