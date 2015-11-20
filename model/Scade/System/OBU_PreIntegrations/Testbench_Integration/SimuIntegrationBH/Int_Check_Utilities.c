/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Int_Check_Utilities.h"

/* Utilities::Int_Check */
kcg_bool Int_Check_Utilities(
  /* Utilities::Int_Check::int_in */ kcg_int int_in,
  /* Utilities::Int_Check::max_value */ kcg_int max_value,
  /* Utilities::Int_Check::min_value */ kcg_int min_value)
{
  /* Utilities::Int_Check::_L1 */
  static kcg_int _L1;
  /* Utilities::Int_Check::_L2 */
  static kcg_int _L2;
  /* Utilities::Int_Check::_L3 */
  static kcg_int _L3;
  /* Utilities::Int_Check::_L4 */
  static kcg_bool _L4;
  /* Utilities::Int_Check::_L5 */
  static kcg_bool _L5;
  /* Utilities::Int_Check::_L6 */
  static kcg_bool _L6;
  /* Utilities::Int_Check::_L7 */
  static kcg_bool _L7;
  /* Utilities::Int_Check::_L8 */
  static kcg_bool _L8;
  /* Utilities::Int_Check::_L9 */
  static kcg_bool _L9;
  /* Utilities::Int_Check::error */
  static kcg_bool error;
  
  _L1 = int_in;
  _L2 = max_value;
  _L3 = min_value;
  _L4 = _L1 > _L2;
  _L5 = _L3 > _L1;
  _L6 = _L5 | _L4;
  _L8 = kcg_true;
  _L9 = kcg_false;
  /* 1 */ if (_L6) {
    _L7 = _L8;
  }
  else {
    _L7 = _L9;
  }
  error = _L7;
  return error;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Int_Check_Utilities.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

