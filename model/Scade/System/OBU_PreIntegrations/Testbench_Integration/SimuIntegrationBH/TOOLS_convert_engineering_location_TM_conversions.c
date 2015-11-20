/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TOOLS_convert_engineering_location_TM_conversions.h"

/* TM_conversions::TOOLS_convert_engineering_location */
kcg_real TOOLS_convert_engineering_location_TM_conversions(
  /* TM_conversions::TOOLS_convert_engineering_location::Loc_int */ kcg_int Loc_int)
{
  /* TM_conversions::TOOLS_convert_engineering_location::_L1 */
  static kcg_int _L1;
  /* TM_conversions::TOOLS_convert_engineering_location::_L2 */
  static kcg_real _L2;
  /* TM_conversions::TOOLS_convert_engineering_location::_L3 */
  static kcg_real _L3;
  /* TM_conversions::TOOLS_convert_engineering_location::_L4 */
  static kcg_real _L4;
  /* TM_conversions::TOOLS_convert_engineering_location::Loc_real */
  static kcg_real Loc_real;
  
  _L1 = Loc_int;
  _L2 = (kcg_real) _L1;
  _L3 = DIM_scale_eng_location_TM;
  _L4 = _L2 * _L3;
  Loc_real = _L4;
  return Loc_real;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** TOOLS_convert_engineering_location_TM_conversions.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

