/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/TrackSim_imp_dll\kcg_s2c_config.txt
** Generation date: 2015-08-27T15:14:25
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "UAB_CAST_Int_to_V_RELEASEDP_TM_conversions.h"

/* TM_conversions::CAST_Int_to_V_RELEASEDP */
UAB_V_RELEASEDP UAB_CAST_Int_to_V_RELEASEDP_TM_conversions(
  /* TM_conversions::CAST_Int_to_V_RELEASEDP::v_releasedp_int */kcg_int v_releasedp_int)
{
  /* TM_conversions::CAST_Int_to_V_RELEASEDP::v_releasedp */
  static UAB_V_RELEASEDP v_releasedp;
  
  v_releasedp = v_releasedp_int * 5;
  return v_releasedp;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** UAB_CAST_Int_to_V_RELEASEDP_TM_conversions.c
** Generation date: 2015-08-27T15:14:25
*************************************************************$ */

