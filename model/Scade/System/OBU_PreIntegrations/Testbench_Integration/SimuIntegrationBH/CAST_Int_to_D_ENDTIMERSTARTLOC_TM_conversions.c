/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_D_ENDTIMERSTARTLOC_TM_conversions.h"

/* TM_conversions::CAST_Int_to_D_ENDTIMERSTARTLOC */
D_ENDTIMERSTARTLOC CAST_Int_to_D_ENDTIMERSTARTLOC_TM_conversions(
  /* TM_conversions::CAST_Int_to_D_ENDTIMERSTARTLOC::d_endtimerstartloc_int */ kcg_int d_endtimerstartloc_int)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;
  /* TM_conversions::CAST_Int_to_D_ENDTIMERSTARTLOC::_L1 */
  static kcg_int _L1;
  /* TM_conversions::CAST_Int_to_D_ENDTIMERSTARTLOC::_L11 */
  static kcg_bool _L11;
  /* TM_conversions::CAST_Int_to_D_ENDTIMERSTARTLOC::_L10 */
  static kcg_int _L10;
  /* TM_conversions::CAST_Int_to_D_ENDTIMERSTARTLOC::_L9 */
  static kcg_bool _L9;
  /* TM_conversions::CAST_Int_to_D_ENDTIMERSTARTLOC::_L8 */
  static kcg_int _L8;
  /* TM_conversions::CAST_Int_to_D_ENDTIMERSTARTLOC::d_endtimerstartloc */
  static D_ENDTIMERSTARTLOC d_endtimerstartloc;
  
  _L1 = d_endtimerstartloc_int;
  d_endtimerstartloc = _L1;
  _L8 = DIM_D_min_TM_conversions;
  _L10 = DIM_D_max_TM_conversions;
  _L9 = _L1 > _L10;
  noname = _L9;
  _L11 = _L1 < _L8;
  _1_noname = _L11;
  return d_endtimerstartloc;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_D_ENDTIMERSTARTLOC_TM_conversions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

