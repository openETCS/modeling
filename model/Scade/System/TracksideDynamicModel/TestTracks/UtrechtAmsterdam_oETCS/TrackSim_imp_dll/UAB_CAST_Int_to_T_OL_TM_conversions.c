/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/TrackSim_imp_dll\kcg_s2c_config.txt
** Generation date: 2015-08-27T15:14:25
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "UAB_CAST_Int_to_T_OL_TM_conversions.h"

/* TM_conversions::CAST_Int_to_T_OL */
UAB_T_OL UAB_CAST_Int_to_T_OL_TM_conversions(
  /* TM_conversions::CAST_Int_to_T_OL::t_ol_int */kcg_int t_ol_int)
{
  /* TM_conversions::CAST_Int_to_T_OL::t_ol */
  static UAB_T_OL t_ol;
  
  t_ol = t_ol_int;
  return t_ol;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** UAB_CAST_Int_to_T_OL_TM_conversions.c
** Generation date: 2015-08-27T15:14:25
*************************************************************$ */

