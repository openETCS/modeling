/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_L_ENDSECTION_TM_conversions.h"

/* TM_conversions::CAST_Int_to_L_ENDSECTION */
L_ENDSECTION CAST_Int_to_L_ENDSECTION_TM_conversions(
  /* TM_conversions::CAST_Int_to_L_ENDSECTION::l_endsection_int */ kcg_int l_endsection_int)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;
  /* TM_conversions::CAST_Int_to_L_ENDSECTION::_L1 */
  static kcg_int _L1;
  /* TM_conversions::CAST_Int_to_L_ENDSECTION::_L9 */
  static kcg_bool _L9;
  /* TM_conversions::CAST_Int_to_L_ENDSECTION::_L8 */
  static kcg_bool _L8;
  /* TM_conversions::CAST_Int_to_L_ENDSECTION::_L10 */
  static kcg_int _L10;
  /* TM_conversions::CAST_Int_to_L_ENDSECTION::_L11 */
  static kcg_int _L11;
  /* TM_conversions::CAST_Int_to_L_ENDSECTION::l_endsection */
  static L_ENDSECTION l_endsection;
  
  _L1 = l_endsection_int;
  _L10 = DIM_L_max_TM_conversions;
  _L9 = _L1 > _L10;
  noname = _L9;
  _L11 = DIM_L_min_TM_conversions;
  _L8 = _L1 < _L11;
  _1_noname = _L8;
  l_endsection = _L1;
  return l_endsection;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_L_ENDSECTION_TM_conversions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

