/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_T_TIMEOUTRQST_TM_conversions.h"

/* TM_conversions::CAST_Int_to_T_TIMEOUTRQST */
T_TIMEOUTRQST CAST_Int_to_T_TIMEOUTRQST_TM_conversions(
  /* TM_conversions::CAST_Int_to_T_TIMEOUTRQST::t_timeoutrqst_int */ kcg_int t_timeoutrqst_int)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;
  /* TM_conversions::CAST_Int_to_T_TIMEOUTRQST::_L1 */
  static kcg_int _L1;
  /* TM_conversions::CAST_Int_to_T_TIMEOUTRQST::_L9 */
  static kcg_bool _L9;
  /* TM_conversions::CAST_Int_to_T_TIMEOUTRQST::_L8 */
  static kcg_bool _L8;
  /* TM_conversions::CAST_Int_to_T_TIMEOUTRQST::_L7 */
  static kcg_int _L7;
  /* TM_conversions::CAST_Int_to_T_TIMEOUTRQST::_L6 */
  static kcg_int _L6;
  /* TM_conversions::CAST_Int_to_T_TIMEOUTRQST::t_timeoutrqst */
  static T_TIMEOUTRQST t_timeoutrqst;
  
  _L1 = t_timeoutrqst_int;
  t_timeoutrqst = _L1;
  _L6 = 0;
  _L7 = 1023;
  _L9 = _L1 > _L7;
  noname = _L9;
  _L8 = _L1 < _L6;
  _1_noname = _L8;
  return t_timeoutrqst;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_T_TIMEOUTRQST_TM_conversions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

