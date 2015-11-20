/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Int_to_Real_Utilities.h"

/* Utilities::Int_to_Real */
kcg_real Int_to_Real_Utilities(
  /* Utilities::Int_to_Real::int_in */ kcg_int int_in,
  /* Utilities::Int_to_Real::resolution_factor_in */ kcg_real resolution_factor_in,
  /* Utilities::Int_to_Real::unit_factor_in */ kcg_real unit_factor_in,
  /* Utilities::Int_to_Real::max_value */ kcg_int max_value,
  /* Utilities::Int_to_Real::min_value */ kcg_int min_value)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;
  /* Utilities::Int_to_Real::_L2 */
  static kcg_real _L2;
  /* Utilities::Int_to_Real::_L3 */
  static kcg_real _L3;
  /* Utilities::Int_to_Real::_L4 */
  static kcg_real _L4;
  /* Utilities::Int_to_Real::_L5 */
  static kcg_real _L5;
  /* Utilities::Int_to_Real::_L8 */
  static kcg_int _L8;
  /* Utilities::Int_to_Real::_L9 */
  static kcg_bool _L9;
  /* Utilities::Int_to_Real::_L10 */
  static kcg_int _L10;
  /* Utilities::Int_to_Real::_L11 */
  static kcg_bool _L11;
  /* Utilities::Int_to_Real::_L13 */
  static kcg_real _L13;
  /* Utilities::Int_to_Real::_L14 */
  static kcg_int _L14;
  /* Utilities::Int_to_Real::real_out */
  static kcg_real real_out;
  
  _L14 = int_in;
  _L13 = (kcg_real) _L14;
  _L2 = unit_factor_in;
  _L3 = _L13 * _L2;
  _L5 = resolution_factor_in;
  _L4 = _L3 * _L5;
  real_out = _L4;
  _L8 = max_value;
  _L10 = min_value;
  _L9 = _L14 < _L10;
  noname = _L9;
  _L11 = _L14 > _L8;
  _1_noname = _L11;
  return real_out;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Int_to_Real_Utilities.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

