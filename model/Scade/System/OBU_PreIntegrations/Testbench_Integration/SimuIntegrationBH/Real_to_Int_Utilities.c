/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Real_to_Int_Utilities.h"

/* Utilities::Real_to_Int */
kcg_int Real_to_Int_Utilities(
  /* Utilities::Real_to_Int::real_in */ kcg_real real_in,
  /* Utilities::Real_to_Int::resolution_factor_in */ kcg_real resolution_factor_in,
  /* Utilities::Real_to_Int::unit_factor_in */ kcg_real unit_factor_in,
  /* Utilities::Real_to_Int::max_value */ kcg_int max_value,
  /* Utilities::Real_to_Int::min_value */ kcg_int min_value)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;
  /* Utilities::Real_to_Int::_L1 */
  static kcg_real _L1;
  /* Utilities::Real_to_Int::_L2 */
  static kcg_real _L2;
  /* Utilities::Real_to_Int::_L3 */
  static kcg_real _L3;
  /* Utilities::Real_to_Int::_L4 */
  static kcg_real _L4;
  /* Utilities::Real_to_Int::_L5 */
  static kcg_real _L5;
  /* Utilities::Real_to_Int::_L6 */
  static kcg_int _L6;
  /* Utilities::Real_to_Int::_L8 */
  static kcg_int _L8;
  /* Utilities::Real_to_Int::_L9 */
  static kcg_bool _L9;
  /* Utilities::Real_to_Int::_L10 */
  static kcg_int _L10;
  /* Utilities::Real_to_Int::_L11 */
  static kcg_bool _L11;
  /* Utilities::Real_to_Int::int_out */
  static kcg_int int_out;
  
  _L1 = real_in;
  _L2 = unit_factor_in;
  _L3 = _L1 * _L2;
  _L5 = resolution_factor_in;
  _L4 = _L3 / _L5;
  _L6 = (kcg_int) _L4;
  int_out = _L6;
  _L8 = max_value;
  _L10 = min_value;
  _L9 = _L6 < _L10;
  noname = _L9;
  _L11 = _L6 > _L8;
  _1_noname = _L11;
  return int_out;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Real_to_Int_Utilities.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

