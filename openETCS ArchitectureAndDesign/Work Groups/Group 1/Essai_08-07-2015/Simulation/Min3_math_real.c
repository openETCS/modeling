/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Open_ETCS/Models_CG/Essai/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-24T16:37:31
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Min3_math_real.h"

void Min3_reset_math_real(outC_Min3_math_real *outC)
{
}

/* math::Min3 */
void Min3_math_real(
  /* math::Min3::I1 */kcg_real I1,
  /* math::Min3::I2 */kcg_real I2,
  /* math::Min3::I3 */kcg_real I3,
  outC_Min3_math_real *outC)
{
  outC->_L4 = I1;
  outC->_L5 = I2;
  outC->_L1 = outC->_L4 <= outC->_L5;
  outC->_L6 = I3;
  outC->_L2 = outC->_L4 <= outC->_L6;
  outC->_L7 = outC->_L1 & outC->_L2;
  outC->_L3 = outC->_L5 <= outC->_L6;
  if (outC->_L3) {
    outC->_L9 = outC->_L5;
  }
  else {
    outC->_L9 = outC->_L6;
  }
  if (outC->_L7) {
    outC->_L8 = outC->_L4;
  }
  else {
    outC->_L8 = outC->_L9;
  }
  outC->Mi3_Output = outC->_L8;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Min3_math_real.c
** Generation date: 2015-06-24T16:37:31
*************************************************************$ */

