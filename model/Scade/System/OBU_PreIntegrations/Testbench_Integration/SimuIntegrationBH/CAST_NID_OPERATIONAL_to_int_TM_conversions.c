/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_NID_OPERATIONAL_to_int_TM_conversions.h"

/* TM_conversions::CAST_NID_OPERATIONAL_to_int */
kcg_int CAST_NID_OPERATIONAL_to_int_TM_conversions(
  /* TM_conversions::CAST_NID_OPERATIONAL_to_int::nid_operational */ NID_OPERATIONAL nid_operational)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;
  /* TM_conversions::CAST_NID_OPERATIONAL_to_int::_L1 */
  static NID_OPERATIONAL _L1;
  /* TM_conversions::CAST_NID_OPERATIONAL_to_int::_L5 */
  static kcg_int _L5;
  /* TM_conversions::CAST_NID_OPERATIONAL_to_int::_L4 */
  static kcg_bool _L4;
  /* TM_conversions::CAST_NID_OPERATIONAL_to_int::_L3 */
  static kcg_int _L3;
  /* TM_conversions::CAST_NID_OPERATIONAL_to_int::_L2 */
  static kcg_bool _L2;
  /* TM_conversions::CAST_NID_OPERATIONAL_to_int::nid_operational_int */
  static kcg_int nid_operational_int;
  
  _L1 = nid_operational;
  nid_operational_int = _L1;
  _L5 = 0;
  _L4 = _L1 < _L5;
  noname = _L4;
  _L3 = 99999999;
  _L2 = _L1 > _L3;
  _1_noname = _L2;
  return nid_operational_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_NID_OPERATIONAL_to_int_TM_conversions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

