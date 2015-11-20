/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_D_SECTIONTIMERSTOPLOC_TM_conversions.h"

/* TM_conversions::CAST_Int_to_D_SECTIONTIMERSTOPLOC */
D_SECTIONTIMERSTOPLOC CAST_Int_to_D_SECTIONTIMERSTOPLOC_TM_conversions(
  /* TM_conversions::CAST_Int_to_D_SECTIONTIMERSTOPLOC::d_sectiontimerstoploc_int */ kcg_int d_sectiontimerstoploc_int)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;
  /* TM_conversions::CAST_Int_to_D_SECTIONTIMERSTOPLOC::_L1 */
  static kcg_int _L1;
  /* TM_conversions::CAST_Int_to_D_SECTIONTIMERSTOPLOC::_L9 */
  static kcg_bool _L9;
  /* TM_conversions::CAST_Int_to_D_SECTIONTIMERSTOPLOC::_L8 */
  static kcg_bool _L8;
  /* TM_conversions::CAST_Int_to_D_SECTIONTIMERSTOPLOC::_L7 */
  static kcg_int _L7;
  /* TM_conversions::CAST_Int_to_D_SECTIONTIMERSTOPLOC::_L6 */
  static kcg_int _L6;
  /* TM_conversions::CAST_Int_to_D_SECTIONTIMERSTOPLOC::d_sectiontimerstoploc */
  static D_SECTIONTIMERSTOPLOC d_sectiontimerstoploc;
  
  _L1 = d_sectiontimerstoploc_int;
  d_sectiontimerstoploc = _L1;
  _L6 = DIM_D_min_TM_conversions;
  _L7 = DIM_D_max_TM_conversions;
  _L9 = _L1 > _L7;
  noname = _L9;
  _L8 = _L1 < _L6;
  _1_noname = _L8;
  return d_sectiontimerstoploc;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_D_SECTIONTIMERSTOPLOC_TM_conversions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

