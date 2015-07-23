/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/AmstredamUtrechNoExp\kcg_s2c_config.txt
** Generation date: 2015-07-22T11:03:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_T_TRAIN_to_int_TM_conversions.h"

/* TM_conversions::CAST_T_TRAIN_to_int */
kcg_int CAST_T_TRAIN_to_int_TM_conversions(
  /* TM_conversions::CAST_T_TRAIN_to_int::t_train */T_TRAIN t_train)
{
  /* TM_conversions::CAST_T_TRAIN_to_int::t_train_int */
  static kcg_int t_train_int;
  
  t_train_int = (kcg_int) (t_train * 100.0);
  return t_train_int;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_T_TRAIN_to_int_TM_conversions.c
** Generation date: 2015-07-22T11:03:51
*************************************************************$ */

