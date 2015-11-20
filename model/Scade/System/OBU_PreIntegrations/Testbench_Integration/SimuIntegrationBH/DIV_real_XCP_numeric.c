/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DIV_real_XCP_numeric.h"

/* XCP_numeric::DIV_real */
void DIV_real_XCP_numeric(
  /* XCP_numeric::DIV_real::Dividend */ kcg_real Dividend,
  /* XCP_numeric::DIV_real::Divisor */ kcg_real Divisor,
  /* XCP_numeric::DIV_real::Default */ kcg_real Default,
  /* XCP_numeric::DIV_real::Result */ kcg_real *Result,
  /* XCP_numeric::DIV_real::Exception */ kcg_bool *Exception)
{
  /* XCP_numeric::DIV_real */
  static kcg_real op_call;
  /* XCP_numeric::DIV_real */
  static kcg_bool ck_every;
  /* XCP_numeric::DIV_real::_L1 */
  static kcg_real _L1;
  /* XCP_numeric::DIV_real::_L2 */
  static kcg_real _L2;
  /* XCP_numeric::DIV_real::_L3 */
  static kcg_real _L3;
  /* XCP_numeric::DIV_real::_L4 */
  static kcg_real _L4;
  /* XCP_numeric::DIV_real::_L5 */
  static kcg_real _L5;
  /* XCP_numeric::DIV_real::_L6 */
  static kcg_real _L6;
  /* XCP_numeric::DIV_real::_L7 */
  static kcg_bool _L7;
  /* XCP_numeric::DIV_real::_L8 */
  static kcg_bool _L8;
  
  _L5 = Divisor;
  _L6 = ZERO_real_XCP_numeric;
  _L7 = _L5 == _L6;
  _L8 = !_L7;
  ck_every = _L8;
  _L1 = Dividend;
  _L2 = Divisor;
  /* ck_DIV_real */ if (ck_every) {
    op_call = _L1 / _L2;
  }
  _L3 = Default;
  /* ck_DIV_real */ if (ck_every) {
    _L4 = op_call;
  }
  else {
    _L4 = _L3;
  }
  *Result = _L4;
  *Exception = _L7;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** DIV_real_XCP_numeric.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

