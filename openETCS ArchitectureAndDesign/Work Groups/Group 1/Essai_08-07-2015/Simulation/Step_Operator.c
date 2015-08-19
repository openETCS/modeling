/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Open_ETCS/Models_CG/Essai/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-24T16:37:32
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Step_Operator.h"

void Step_Operator_reset(outC_Step_Operator *outC)
{
}

/* Step_Operator */
void Step_Operator(
  /* Step_Operator::SizePos */TY_SizePos *SizePos,
  outC_Step_Operator *outC)
{
  outC->_L12 = (*SizePos).Size;
  outC->_L3 = Reason;
  outC->_L1 = outC->_L12 * outC->_L3;
  outC->_L13 = (*SizePos).Pos;
  outC->_L2 = outC->_L1 + outC->_L13;
  outC->_L14.Size = outC->_L1;
  outC->_L14.Pos = outC->_L2;
  kcg_copy_TY_SizePos(&outC->Next_SizePos, &outC->_L14);
  outC->POS = outC->_L2;
  outC->SIZE = outC->_L1;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Step_Operator.c
** Generation date: 2015-06-24T16:37:32
*************************************************************$ */

