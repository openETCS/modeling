/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Open_ETCS/Models_CG/Essai/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-24T16:37:32
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ComputeAcc.h"

void ComputeAcc_reset(outC_ComputeAcc *outC)
{
}

/* ComputeAcc */
void ComputeAcc(/* ComputeAcc::Input1 */kcg_real Input1, outC_ComputeAcc *outC)
{
  outC->_L5 = Alpha;
  outC->_L1 = Input1;
  outC->_L3 = 9.81;
  outC->_L2 = outC->_L1 * outC->_L3;
  outC->_L4 = outC->_L2 / outC->_L5;
  outC->Output1 = outC->_L4;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ComputeAcc.c
** Generation date: 2015-06-24T16:37:32
*************************************************************$ */

