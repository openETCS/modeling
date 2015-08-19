/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/KCG\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:57:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_T_TRAIN_TM_conversions.h"

/* TM_conversions::CAST_Int_to_T_TRAIN */
T_TRAIN CAST_Int_to_T_TRAIN_TM_conversions(
  /* TM_conversions::CAST_Int_to_T_TRAIN::t_train_int */kcg_int t_train_int)
{
  /* TM_conversions::CAST_Int_to_T_TRAIN::t_train */
  static T_TRAIN t_train;
  
  t_train = (kcg_real) t_train_int / 100.0;
  return t_train;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_T_TRAIN_TM_conversions.c
** Generation date: 2015-07-21T17:57:00
*************************************************************$ */

