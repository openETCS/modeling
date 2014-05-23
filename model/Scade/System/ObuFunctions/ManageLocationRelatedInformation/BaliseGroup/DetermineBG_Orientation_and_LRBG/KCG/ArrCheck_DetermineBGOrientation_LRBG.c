/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Users/GiovanniTrotta/Desktop/SoftwareBGO/KCG\kcg_s2c_config.txt
** Generation date: 2014-05-19T12:09:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ArrCheck_DetermineBGOrientation_LRBG.h"

/* DetermineBGOrientation_LRBG::ArrCheck */
Orientation_DetermineBGOrientation_LRBG_DataDctionary ArrCheck_DetermineBGOrientation_LRBG(
  /* DetermineBGOrientation_LRBG::ArrCheck::N_PIG */N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable N_PIG)
{
  /* DetermineBGOrientation_LRBG::ArrCheck::Orientation */ Orientation_DetermineBGOrientation_LRBG_DataDctionary Orientation;
  
  if (N_PIG ==
    I_am_the_1th_DetermineBGOrientation_LRBG_DataDctionary_Variable) {
    Orientation = DIR_Nominal_DetermineBGOrientation_LRBG_DataDctionary;
  }
  else {
    Orientation = DIR_Reverse_DetermineBGOrientation_LRBG_DataDctionary;
  }
  return Orientation;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ArrCheck_DetermineBGOrientation_LRBG.c
** Generation date: 2014-05-19T12:09:24
*************************************************************$ */

