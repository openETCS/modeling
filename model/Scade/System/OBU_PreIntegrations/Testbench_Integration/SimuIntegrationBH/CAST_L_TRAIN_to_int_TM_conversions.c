/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_L_TRAIN_to_int_TM_conversions.h"

/* TM_conversions::CAST_L_TRAIN_to_int */
kcg_int CAST_L_TRAIN_to_int_TM_conversions(
  /* TM_conversions::CAST_L_TRAIN_to_int::l_train */ L_TRAIN l_train)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;
  /* TM_conversions::CAST_L_TRAIN_to_int::_L1 */
  static L_TRAIN _L1;
  /* TM_conversions::CAST_L_TRAIN_to_int::_L9 */
  static kcg_bool _L9;
  /* TM_conversions::CAST_L_TRAIN_to_int::_L8 */
  static kcg_bool _L8;
  /* TM_conversions::CAST_L_TRAIN_to_int::_L12 */
  static kcg_int _L12;
  /* TM_conversions::CAST_L_TRAIN_to_int::_L13 */
  static kcg_int _L13;
  /* TM_conversions::CAST_L_TRAIN_to_int::l_train_int */
  static kcg_int l_train_int;
  
  _L1 = l_train;
  _L12 = DIM_L_TRAIN_max_TM_conversions;
  _L9 = _L1 > _L12;
  noname = _L9;
  _L13 = DIM_L_TRAIN_min_TM_conversions;
  _L8 = _L1 < _L13;
  _1_noname = _L8;
  l_train_int = _L1;
  return l_train_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_L_TRAIN_to_int_TM_conversions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

