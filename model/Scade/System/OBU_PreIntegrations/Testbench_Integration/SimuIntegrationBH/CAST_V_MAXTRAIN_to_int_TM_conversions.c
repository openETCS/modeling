/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_V_MAXTRAIN_to_int_TM_conversions.h"

/* TM_conversions::CAST_V_MAXTRAIN_to_int */
kcg_int CAST_V_MAXTRAIN_to_int_TM_conversions(
  /* TM_conversions::CAST_V_MAXTRAIN_to_int::v_maxtrain */ V_MAXTRAIN v_maxtrain)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;
  /* TM_conversions::CAST_V_MAXTRAIN_to_int::_L1 */
  static V_MAXTRAIN _L1;
  /* TM_conversions::CAST_V_MAXTRAIN_to_int::_L11 */
  static kcg_int _L11;
  /* TM_conversions::CAST_V_MAXTRAIN_to_int::_L12 */
  static kcg_int _L12;
  /* TM_conversions::CAST_V_MAXTRAIN_to_int::_L16 */
  static kcg_int _L16;
  /* TM_conversions::CAST_V_MAXTRAIN_to_int::_L15 */
  static kcg_int _L15;
  /* TM_conversions::CAST_V_MAXTRAIN_to_int::_L14 */
  static kcg_bool _L14;
  /* TM_conversions::CAST_V_MAXTRAIN_to_int::_L13 */
  static kcg_bool _L13;
  /* TM_conversions::CAST_V_MAXTRAIN_to_int::v_maxtrain_int */
  static kcg_int v_maxtrain_int;
  
  _L1 = v_maxtrain;
  _L12 = 5;
  _L11 = _L1 / _L12;
  v_maxtrain_int = _L11;
  _L15 = 0;
  _L13 = _L11 < _L15;
  _L16 = 120;
  _L14 = _L11 > _L16;
  noname = _L14;
  _1_noname = _L13;
  return v_maxtrain_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_V_MAXTRAIN_to_int_TM_conversions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

