/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Open_ETCS/Models_CG/Essai/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-24T16:37:32
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ASB_Operator.h"

void ASB_Operator_reset(outC_ASB_Operator *outC)
{
}

/* ASB_Operator */
void ASB_Operator(
  /* ASB_Operator::Input1 */kcg_real Input1,
  /* ASB_Operator::Input2 */kcg_bool Input2,
  outC_ASB_Operator *outC)
{
  kcg_real noname;
  kcg_bool _1_noname;
  
  outC->_L4 = 0.0;
  outC->_L2 = Input2;
  _1_noname = outC->_L2;
  outC->_L1 = Input1;
  noname = outC->_L1;
  outC->Output1 = outC->_L4;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ASB_Operator.c
** Generation date: 2015-06-24T16:37:32
*************************************************************$ */

