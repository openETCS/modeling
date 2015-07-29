/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Open_ETCS/Models_CG/Essai/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-24T16:37:32
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ACCeler_Operator.h"

void ACCeler_Operator_reset(outC_ACCeler_Operator *outC)
{
  kcg_int i;
  
  for (i = 0; i < 25; i++) {
    /* 1 */ AEB_Operator_reset(&outC->_2_Context_1[i]);
  }
  /* 1 */ Bool_Spreader_Operator_reset_2(&outC->_1_Context_1);
  for (i = 0; i < 25; i++) {
    /* 1 */ ASB_Operator_reset(&outC->Context_1[i]);
  }
  for (i = 0; i < 25; i++) {
    /* ComputeAcc */ ComputeAcc_reset(&outC->Context_ComputeAcc[i]);
  }
  /* 2 */ Spreader_Operator_reset_8_8(&outC->Context_2);
}

/* ACCeler_Operator */
void ACCeler_Operator(
  /* ACCeler_Operator::MRSP */array_real_25 *MRSP,
  /* ACCeler_Operator::Position */array_real_25 *Position,
  /* ACCeler_Operator::Adh */array__1550 *Adh7,
  /* ACCeler_Operator::Gradient */array__1553 *Gradient,
  outC_ACCeler_Operator *outC)
{
  kcg_int i6;
  kcg_int i5;
  kcg_int i4;
  kcg_int i3;
  kcg_int i2;
  kcg_int i1;
  kcg_int i;
  
  kcg_copy_array__1553(&outC->_L3, Gradient);
  kcg_copy_array_real_25(&outC->_L1, Position);
  /* 2 */ Spreader_Operator_8_8(&outC->_L3, &outC->_L1, &outC->Context_2);
  kcg_copy_array_real_25(&outC->_L5, &outC->Context_2.SSP_100);
  for (i6 = 0; i6 < 25; i6++) {
    /* ComputeAcc */ ComputeAcc(outC->_L5[i6], &outC->Context_ComputeAcc[i6]);
    outC->_L24[i6] = outC->Context_ComputeAcc[i6].Output1;
  }
  kcg_copy_array_real_25(&outC->_L14, MRSP);
  for (i5 = 0; i5 < 25; i5++) {
    outC->_L19[i5] = SB_Type;
  }
  for (i4 = 0; i4 < 25; i4++) {
    /* 1 */ ASB_Operator(outC->_L14[i4], outC->_L19[i4], &outC->Context_1[i4]);
    outC->_L21[i4] = outC->Context_1[i4].Output1;
  }
  for (i3 = 0; i3 < 25; i3++) {
    outC->_L25[i3] = outC->_L24[i3] + outC->_L21[i3];
  }
  kcg_copy_array_real_25(&outC->Aservice, &outC->_L25);
  kcg_copy_array__1550(&outC->_L2, Adh7);
  /* 1 */ Bool_Spreader_Operator_2(&outC->_L2, &outC->_L1, &outC->_1_Context_1);
  kcg_copy_array_bool_25(&outC->_L4, &outC->_1_Context_1.Values_100);
  for (i2 = 0; i2 < 25; i2++) {
    kcg_copy_TY_EB_Type(&outC->_L16[i2], (TY_EB_Type *) &Train1);
  }
  for (i1 = 0; i1 < 25; i1++) {
    /* 1 */
    AEB_Operator(
      outC->_L4[i1],
      &outC->_L16[i1],
      outC->_L14[i1],
      &outC->_2_Context_1[i1]);
    outC->_L17[i1] = outC->_2_Context_1[i1].EB;
  }
  for (i = 0; i < 25; i++) {
    outC->_L13[i] = outC->_L17[i] + outC->_L24[i];
  }
  kcg_copy_array_real_25(&outC->Asafe, &outC->_L13);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ACCeler_Operator.c
** Generation date: 2015-06-24T16:37:32
*************************************************************$ */

