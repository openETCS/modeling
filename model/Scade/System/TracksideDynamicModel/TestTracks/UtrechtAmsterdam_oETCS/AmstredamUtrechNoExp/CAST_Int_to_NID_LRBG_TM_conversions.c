/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/AmstredamUtrechNoExp\kcg_s2c_config.txt
** Generation date: 2015-07-22T11:03:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_NID_LRBG_TM_conversions.h"

/* TM_conversions::CAST_Int_to_NID_LRBG */
NID_LRBG CAST_Int_to_NID_LRBG_TM_conversions(
  /* TM_conversions::CAST_Int_to_NID_LRBG::Int_in */kcg_int Int_in)
{
  /* TM_conversions::CAST_Int_to_NID_LRBG::NID_LRBG_out */
  static NID_LRBG NID_LRBG_out;
  
  NID_LRBG_out = Int_in;
  return NID_LRBG_out;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_NID_LRBG_TM_conversions.c
** Generation date: 2015-07-22T11:03:51
*************************************************************$ */

