/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/AmstredamUtrechNoExp\kcg_s2c_config.txt
** Generation date: 2015-07-22T11:03:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_D_SR_to_int_TM_conversions.h"

/* TM_conversions::CAST_D_SR_to_int */
kcg_int CAST_D_SR_to_int_TM_conversions(
  /* TM_conversions::CAST_D_SR_to_int::d_sr */D_SR d_sr)
{
  /* TM_conversions::CAST_D_SR_to_int::d_sr_int */
  static kcg_int d_sr_int;
  
  d_sr_int = d_sr;
  return d_sr_int;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_D_SR_to_int_TM_conversions.c
** Generation date: 2015-07-22T11:03:51
*************************************************************$ */

