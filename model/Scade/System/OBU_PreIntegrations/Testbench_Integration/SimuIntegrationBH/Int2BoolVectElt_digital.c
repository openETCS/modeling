/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Int2BoolVectElt_digital.h"

/* digital::Int2BoolVectElt */
void Int2BoolVectElt_digital(
  /* digital::Int2BoolVectElt::Acc */ kcg_int Acc,
  /* digital::Int2BoolVectElt::AccOut */ kcg_int *AccOut,
  /* digital::Int2BoolVectElt::bi */ kcg_bool *bi)
{
  /* digital::Int2BoolVectElt::_L1 */
  static kcg_int _L1;
  /* digital::Int2BoolVectElt::_L9 */
  static kcg_int _L9;
  /* digital::Int2BoolVectElt::_L10 */
  static kcg_int _L10;
  /* digital::Int2BoolVectElt::_L11 */
  static kcg_int _L11;
  /* digital::Int2BoolVectElt::_L12 */
  static kcg_bool _L12;
  /* digital::Int2BoolVectElt::_L13 */
  static kcg_int _L13;
  
  _L1 = Acc;
  _L9 = 2;
  _L10 = _L1 / _L9;
  *AccOut = _L10;
  _L11 = _L1 % _L9;
  _L13 = 1;
  _L12 = _L11 == _L13;
  *bi = _L12;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Int2BoolVectElt_digital.c
** Generation date: 2015-11-20T14:27:51
*************************************************************$ */

