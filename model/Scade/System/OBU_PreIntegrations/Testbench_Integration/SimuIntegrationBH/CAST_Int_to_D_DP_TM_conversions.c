/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_D_DP_TM_conversions.h"

/* TM_conversions::CAST_Int_to_D_DP */
D_DP CAST_Int_to_D_DP_TM_conversions(
  /* TM_conversions::CAST_Int_to_D_DP::d_dp_int */ kcg_int d_dp_int)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;
  /* TM_conversions::CAST_Int_to_D_DP::_L1 */
  static kcg_int _L1;
  /* TM_conversions::CAST_Int_to_D_DP::_L9 */
  static kcg_int _L9;
  /* TM_conversions::CAST_Int_to_D_DP::_L8 */
  static kcg_bool _L8;
  /* TM_conversions::CAST_Int_to_D_DP::_L7 */
  static kcg_bool _L7;
  /* TM_conversions::CAST_Int_to_D_DP::_L6 */
  static kcg_int _L6;
  /* TM_conversions::CAST_Int_to_D_DP::d_dp */
  static D_DP d_dp;
  
  _L1 = d_dp_int;
  d_dp = _L1;
  _L6 = DIM_D_min_TM_conversions;
  _L7 = _L1 < _L6;
  noname = _L7;
  _L9 = DIM_D_max_TM_conversions;
  _L8 = _L1 > _L9;
  _1_noname = _L8;
  return d_dp;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_D_DP_TM_conversions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

