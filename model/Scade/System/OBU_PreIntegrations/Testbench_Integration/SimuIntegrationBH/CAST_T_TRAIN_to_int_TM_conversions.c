/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_T_TRAIN_to_int_TM_conversions.h"

/* TM_conversions::CAST_T_TRAIN_to_int */
kcg_int CAST_T_TRAIN_to_int_TM_conversions(
  /* TM_conversions::CAST_T_TRAIN_to_int::t_train */ T_TRAIN t_train)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;
  /* TM_conversions::CAST_T_TRAIN_to_int::_L1 */
  static T_TRAIN _L1;
  /* TM_conversions::CAST_T_TRAIN_to_int::_L16 */
  static kcg_bool _L16;
  /* TM_conversions::CAST_T_TRAIN_to_int::_L15 */
  static kcg_int _L15;
  /* TM_conversions::CAST_T_TRAIN_to_int::_L14 */
  static kcg_bool _L14;
  /* TM_conversions::CAST_T_TRAIN_to_int::_L13 */
  static kcg_int _L13;
  /* TM_conversions::CAST_T_TRAIN_to_int::t_train_int */
  static kcg_int t_train_int;
  
  _L1 = t_train;
  t_train_int = _L1;
  _L13 = 5000000;
  _L15 = 0;
  _L14 = _L1 < _L15;
  noname = _L14;
  _L16 = _L1 > _L13;
  _1_noname = _L16;
  return t_train_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_T_TRAIN_to_int_TM_conversions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

