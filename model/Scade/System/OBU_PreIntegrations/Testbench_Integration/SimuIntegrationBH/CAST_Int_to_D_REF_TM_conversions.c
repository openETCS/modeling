/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_D_REF_TM_conversions.h"

/* TM_conversions::CAST_Int_to_D_REF */
D_REF CAST_Int_to_D_REF_TM_conversions(
  /* TM_conversions::CAST_Int_to_D_REF::d_ref_int */ kcg_int d_ref_int)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;
  /* TM_conversions::CAST_Int_to_D_REF::_L1 */
  static kcg_int _L1;
  /* TM_conversions::CAST_Int_to_D_REF::_L9 */
  static kcg_bool _L9;
  /* TM_conversions::CAST_Int_to_D_REF::_L8 */
  static kcg_bool _L8;
  /* TM_conversions::CAST_Int_to_D_REF::_L7 */
  static kcg_int _L7;
  /* TM_conversions::CAST_Int_to_D_REF::_L10 */
  static kcg_int _L10;
  /* TM_conversions::CAST_Int_to_D_REF::d_ref */
  static D_REF d_ref;
  
  _L1 = d_ref_int;
  d_ref = _L1;
  _L7 = DIM_D_max_TM_conversions;
  _L9 = _L1 > _L7;
  noname = _L9;
  _L10 = DIM_D_max_neg_TM_conversions;
  _L8 = _L1 < _L10;
  _1_noname = _L8;
  return d_ref;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_D_REF_TM_conversions.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

