/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BCD_to_Int_Utilities.h"

/* Utilities::BCD_to_Int */
void BCD_to_Int_Utilities(
  /* Utilities::BCD_to_Int::bcd_in */ kcg_int bcd_in,
  /* Utilities::BCD_to_Int::int_out */ kcg_int *int_out,
  /* Utilities::BCD_to_Int::error */ kcg_bool *error)
{
  /* Utilities::BCD_to_Int::_L1 */
  static kcg_int _L1;
  /* Utilities::BCD_to_Int::_L3 */
  static kcg_bool _L3;
  /* Utilities::BCD_to_Int::_L4 */
  static kcg_int _L4;
  /* Utilities::BCD_to_Int::_L5 */
  static kcg_int _L5;
  
  _L1 = bcd_in;
  *int_out = _L1;
  _L4 = 9;
  _L5 = 0;
  _L3 = /* 1 */ Int_Check_Utilities(_L1, _L4, _L5);
  *error = _L3;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** BCD_to_Int_Utilities.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

