/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Open_ETCS/Models_CG/Essai/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-24T16:37:32
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "AEB_Operator.h"

void AEB_Operator_reset(outC_AEB_Operator *outC)
{
}

/* AEB_Operator */
void AEB_Operator(
  /* AEB_Operator::Adh */kcg_bool Adh6,
  /* AEB_Operator::EB_Type */TY_EB_Type *EB_Type,
  /* AEB_Operator::MRSP */kcg_real MRSP,
  outC_AEB_Operator *outC)
{
  /* AEB_Operator::EB */ kcg_real EB1;
  /* AEB_Operator::EB */ kcg_real EB;
  /* AEB_Operator::EB */ kcg_real EB5;
  /* AEB_Operator::EB */ kcg_real EB4;
  /* AEB_Operator::EB */ kcg_real EB2;
  /* AEB_Operator::EB */ kcg_real EB3;
  
  outC->IfBlock1_clock = MRSP < V0;
  outC->_L1 = Adh6;
  outC->_L3 = (*EB_Type).EB;
  outC->_L4 = (*EB_Type).EB_reduit;
  if (outC->_L1) {
    outC->_L2 = outC->_L3;
  }
  else {
    outC->_L2 = outC->_L4;
  }
  outC->L_EB = outC->_L2;
  if (outC->IfBlock1_clock) {
    EB1 = outC->L_EB * kp0;
    outC->EB = EB1;
  }
  else {
    outC->_1_else_clock_IfBlock1 = MRSP < V1;
    if (outC->_1_else_clock_IfBlock1) {
      EB3 = outC->L_EB * kp1;
      EB = EB3;
    }
    else {
      outC->else_clock_IfBlock1 = MRSP < V2;
      if (outC->else_clock_IfBlock1) {
        EB5 = outC->L_EB * kp2;
        EB2 = EB5;
      }
      else {
        EB4 = outC->L_EB * kp3;
        EB2 = EB4;
      }
      EB = EB2;
    }
    outC->EB = EB;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** AEB_Operator.c
** Generation date: 2015-06-24T16:37:32
*************************************************************$ */

