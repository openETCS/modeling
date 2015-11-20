/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_Int_to_L_TRAININT_TM_conversions.h"

/* TM_conversions::CAST_Int_to_L_TRAININT */
L_TRAININT CAST_Int_to_L_TRAININT_TM_conversions(
  /* TM_conversions::CAST_Int_to_L_TRAININT::l_trainint_int */ kcg_int l_trainint_int)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;
  /* TM_conversions::CAST_Int_to_L_TRAININT::_L1 */
  static kcg_int _L1;
  /* TM_conversions::CAST_Int_to_L_TRAININT::_L9 */
  static kcg_bool _L9;
  /* TM_conversions::CAST_Int_to_L_TRAININT::_L8 */
  static kcg_bool _L8;
  /* TM_conversions::CAST_Int_to_L_TRAININT::_L14 */
  static kcg_int _L14;
  /* TM_conversions::CAST_Int_to_L_TRAININT::_L15 */
  static kcg_int _L15;
  /* TM_conversions::CAST_Int_to_L_TRAININT::l_trainint */
  static L_TRAININT l_trainint;
  
  _L1 = l_trainint_int;
  _L15 = DIM_L_TRAININT_max_TM_conversions;
  _L9 = _L1 > _L15;
  noname = _L9;
  _L14 = DIM_L_TRAININT_min_TM_conversions;
  _L8 = _L1 < _L14;
  _1_noname = _L8;
  l_trainint = _L1;
  return l_trainint;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_Int_to_L_TRAININT_TM_conversions.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

