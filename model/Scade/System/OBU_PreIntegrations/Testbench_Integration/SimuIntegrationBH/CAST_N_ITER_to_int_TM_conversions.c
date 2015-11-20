/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_N_ITER_to_int_TM_conversions.h"

/* TM_conversions::CAST_N_ITER_to_int */
kcg_int CAST_N_ITER_to_int_TM_conversions(
  /* TM_conversions::CAST_N_ITER_to_int::n_iter */ N_ITER n_iter)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;
  /* TM_conversions::CAST_N_ITER_to_int::_L1 */
  static N_ITER _L1;
  /* TM_conversions::CAST_N_ITER_to_int::_L12 */
  static kcg_bool _L12;
  /* TM_conversions::CAST_N_ITER_to_int::_L11 */
  static kcg_int _L11;
  /* TM_conversions::CAST_N_ITER_to_int::_L10 */
  static kcg_bool _L10;
  /* TM_conversions::CAST_N_ITER_to_int::_L9 */
  static kcg_int _L9;
  /* TM_conversions::CAST_N_ITER_to_int::n_iter_int */
  static kcg_int n_iter_int;
  
  _L1 = n_iter;
  n_iter_int = _L1;
  _L9 = 31;
  _L11 = 0;
  _L10 = _L1 < _L11;
  _L12 = _L1 > _L9;
  noname = _L12;
  _1_noname = _L10;
  return n_iter_int;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CAST_N_ITER_to_int_TM_conversions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

