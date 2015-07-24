/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/KCG\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:57:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_NID_EM_to_int_TM_conversions.h"

/* TM_conversions::CAST_NID_EM_to_int */
kcg_int CAST_NID_EM_to_int_TM_conversions(
  /* TM_conversions::CAST_NID_EM_to_int::nid_em */NID_EM nid_em)
{
  /* TM_conversions::CAST_NID_EM_to_int::nid_em_int */
  static kcg_int nid_em_int;
  
  nid_em_int = nid_em;
  return nid_em_int;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_NID_EM_to_int_TM_conversions.c
** Generation date: 2015-07-21T17:57:00
*************************************************************$ */

