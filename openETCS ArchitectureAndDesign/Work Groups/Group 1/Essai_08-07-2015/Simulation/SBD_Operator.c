/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Open_ETCS/Models_CG/Essai/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-24T16:37:32
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SBD_Operator.h"

void SBD_Operator_reset(outC_SBD_Operator *outC)
{
}

/* SBD_Operator */
void SBD_Operator(
  /* SBD_Operator::Aservice */array_real_25 *Aservice,
  outC_SBD_Operator *outC)
{
  kcg_int i;
  array_real_25 noname;
  
  for (i = 0; i < 25; i++) {
    outC->_L2[i] = 0.0;
  }
  kcg_copy_array_real_25(&outC->_L1, Aservice);
  kcg_copy_array_real_25(&noname, &outC->_L1);
  kcg_copy_array_real_25(&outC->Vsbd, &outC->_L2);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SBD_Operator.c
** Generation date: 2015-06-24T16:37:32
*************************************************************$ */

