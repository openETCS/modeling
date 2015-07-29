/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Open_ETCS/Models_CG/Essai/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-24T16:37:31
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "dV_Operator.h"

void dV_Operator_reset(outC_dV_Operator *outC)
{
}

/* dV_Operator */
void dV_Operator(/* dV_Operator::MRSP */kcg_real MRSP, outC_dV_Operator *outC)
{
  /* dV_Operator::dV */ kcg_real dV1;
  /* dV_Operator::dV */ kcg_real dV;
  /* dV_Operator::dV */ kcg_real dV2;
  /* dV_Operator::dV */ kcg_real dV3;
  
  outC->IfBlock1_clock = MRSP > V_ebi_max;
  if (outC->IfBlock1_clock) {
    dV1 = dV_ebi_max;
    outC->dV = dV1;
  }
  else {
    outC->else_clock_IfBlock1 = MRSP < V_ebi_min;
    if (outC->else_clock_IfBlock1) {
      dV3 = dV_ebi_min;
      dV = dV3;
    }
    else {
      dV2 = dV_ebi_min + dV_Slope * MRSP;
      dV = dV2;
    }
    outC->dV = dV;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** dV_Operator.c
** Generation date: 2015-06-24T16:37:31
*************************************************************$ */

