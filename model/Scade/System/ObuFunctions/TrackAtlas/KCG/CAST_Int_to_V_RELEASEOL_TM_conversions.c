/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_V_RELEASEOL_TM_conversions.h"

/* TM_conversions::CAST_Int_to_V_RELEASEOL */
V_RELEASEOL CAST_Int_to_V_RELEASEOL_TM_conversions(
  /* TM_conversions::CAST_Int_to_V_RELEASEOL::v_releaseol_int */kcg_int v_releaseol_int)
{
  /* TM_conversions::CAST_Int_to_V_RELEASEOL::v_releaseol */ V_RELEASEOL v_releaseol;
  
  v_releaseol = v_releaseol_int * 5;
  return v_releaseol;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_V_RELEASEOL_TM_conversions.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

