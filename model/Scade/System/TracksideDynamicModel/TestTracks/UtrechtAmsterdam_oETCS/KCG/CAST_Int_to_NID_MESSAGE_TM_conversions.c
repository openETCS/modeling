/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/KCG\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:59:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_NID_MESSAGE_TM_conversions.h"

/* TM_conversions::CAST_Int_to_NID_MESSAGE */
NID_MESSAGE CAST_Int_to_NID_MESSAGE_TM_conversions(
  /* TM_conversions::CAST_Int_to_NID_MESSAGE::nid_message_int */kcg_int nid_message_int)
{
  /* TM_conversions::CAST_Int_to_NID_MESSAGE::nid_message */
  static NID_MESSAGE nid_message;
  
  nid_message = nid_message_int;
  return nid_message;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_Int_to_NID_MESSAGE_TM_conversions.c
** Generation date: 2015-07-21T17:59:24
*************************************************************$ */

