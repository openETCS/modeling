/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_NID_MESSAGE_TM_conversions.h"

/* TM_conversions::CAST_Int_to_NID_MESSAGE */
NID_MESSAGE CAST_Int_to_NID_MESSAGE_TM_conversions(
  /* TM_conversions::CAST_Int_to_NID_MESSAGE::nid_message_int */ kcg_int nid_message_int)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;
  /* TM_conversions::CAST_Int_to_NID_MESSAGE::_L1 */
  static kcg_int _L1;
  /* TM_conversions::CAST_Int_to_NID_MESSAGE::_L5 */
  static kcg_int _L5;
  /* TM_conversions::CAST_Int_to_NID_MESSAGE::_L4 */
  static kcg_bool _L4;
  /* TM_conversions::CAST_Int_to_NID_MESSAGE::_L3 */
  static kcg_int _L3;
  /* TM_conversions::CAST_Int_to_NID_MESSAGE::_L2 */
  static kcg_bool _L2;
  /* TM_conversions::CAST_Int_to_NID_MESSAGE::nid_message */
  static NID_MESSAGE nid_message;
  
  _L1 = nid_message_int;
  nid_message = _L1;
  _L5 = 0;
  _L4 = _L1 < _L5;
  noname = _L4;
  _L3 = 256;
  _L2 = _L1 > _L3;
  _1_noname = _L2;
  return nid_message;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_NID_MESSAGE_TM_conversions.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

