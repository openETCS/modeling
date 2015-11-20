/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_NID_C_to_int_TM_conversions.h"

/* TM_conversions::CAST_NID_C_to_int */
kcg_int CAST_NID_C_to_int_TM_conversions(
  /* TM_conversions::CAST_NID_C_to_int::nid_c */ NID_C nid_c)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;
  /* TM_conversions::CAST_NID_C_to_int::_L1 */
  static NID_C _L1;
  /* TM_conversions::CAST_NID_C_to_int::_L9 */
  static kcg_bool _L9;
  /* TM_conversions::CAST_NID_C_to_int::_L8 */
  static kcg_bool _L8;
  /* TM_conversions::CAST_NID_C_to_int::_L10 */
  static kcg_int _L10;
  /* TM_conversions::CAST_NID_C_to_int::_L11 */
  static kcg_int _L11;
  /* TM_conversions::CAST_NID_C_to_int::nid_c_int */
  static kcg_int nid_c_int;
  
  _L1 = nid_c;
  nid_c_int = _L1;
  _L10 = 1023;
  _L9 = _L1 > _L10;
  noname = _L9;
  _L11 = 0;
  _L8 = _L1 < _L11;
  _1_noname = _L8;
  return nid_c_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_NID_C_to_int_TM_conversions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

