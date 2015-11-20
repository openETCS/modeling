/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_V_NVUNFIT_TM_conversions.h"

/* TM_conversions::CAST_Int_to_V_NVUNFIT */
V_NVUNFIT CAST_Int_to_V_NVUNFIT_TM_conversions(
  /* TM_conversions::CAST_Int_to_V_NVUNFIT::v_nvunfit_int */ kcg_int v_nvunfit_int)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;
  /* TM_conversions::CAST_Int_to_V_NVUNFIT::_L1 */
  static kcg_int _L1;
  /* TM_conversions::CAST_Int_to_V_NVUNFIT::_L9 */
  static kcg_bool _L9;
  /* TM_conversions::CAST_Int_to_V_NVUNFIT::_L8 */
  static kcg_bool _L8;
  /* TM_conversions::CAST_Int_to_V_NVUNFIT::_L7 */
  static kcg_int _L7;
  /* TM_conversions::CAST_Int_to_V_NVUNFIT::_L6 */
  static kcg_int _L6;
  /* TM_conversions::CAST_Int_to_V_NVUNFIT::_L11 */
  static kcg_int _L11;
  /* TM_conversions::CAST_Int_to_V_NVUNFIT::_L12 */
  static kcg_int _L12;
  /* TM_conversions::CAST_Int_to_V_NVUNFIT::v_nvunfit */
  static V_NVUNFIT v_nvunfit;
  
  _L1 = v_nvunfit_int;
  _L12 = 5;
  _L11 = _L1 * _L12;
  v_nvunfit = _L11;
  _L6 = 0;
  _L7 = 120;
  _L9 = _L1 > _L7;
  noname = _L9;
  _L8 = _L1 < _L6;
  _1_noname = _L8;
  return v_nvunfit;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_V_NVUNFIT_TM_conversions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

