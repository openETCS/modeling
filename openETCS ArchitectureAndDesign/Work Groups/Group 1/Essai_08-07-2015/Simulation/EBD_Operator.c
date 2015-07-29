/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Open_ETCS/Models_CG/Essai/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-24T16:37:32
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "EBD_Operator.h"

void EBD_Operator_reset(outC_EBD_Operator *outC)
{
}

/* EBD_Operator */
void EBD_Operator(
  /* EBD_Operator::Next_Vebd */kcg_real Next_Vebd,
  /* EBD_Operator::SIZE */kcg_real SIZE,
  /* EBD_Operator::MRSP */kcg_real MRSP,
  /* EBD_Operator::dV_ebi */kcg_real dV_ebi,
  /* EBD_Operator::Asafe */kcg_real Asafe,
  outC_EBD_Operator *outC)
{
  outC->_L9 = MRSP;
  outC->_L10 = dV_ebi;
  outC->_L11 = outC->_L9 + outC->_L10;
  outC->I2_1 = outC->_L11;
  outC->_L13 = Next_Vebd;
  outC->_L14 = outC->_L13 * outC->_L13;
  outC->_L1 = SIZE;
  outC->_L2 = Asafe;
  outC->_L3 = outC->_L1 * outC->_L2;
  outC->_L5 = 2.00;
  outC->_L8 = outC->_L3 * outC->_L5;
  outC->_L16 = outC->_L14 + outC->_L8;
  outC->_L6 = /* 1 */ SqrtR_mathext(outC->_L16);
  outC->I1_1 = outC->_L6;
  outC->_L21_1 = outC->I1_1;
  outC->_L22_1 = outC->I2_1;
  outC->_L25_1 = outC->_L21_1 <= outC->_L22_1;
  if (outC->_L25_1) {
    outC->_L24_1 = outC->_L21_1;
  }
  else {
    outC->_L24_1 = outC->_L22_1;
  }
  outC->Mi_Output_1 = outC->_L24_1;
  outC->_L12 = outC->Mi_Output_1;
  outC->_L17 = outC->_L12 == outC->_L11;
  outC->Ceilling_Mode = outC->_L17;
  outC->Vebd_Table = outC->_L12;
  outC->Vebd = outC->_L12;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** EBD_Operator.c
** Generation date: 2015-06-24T16:37:32
*************************************************************$ */

