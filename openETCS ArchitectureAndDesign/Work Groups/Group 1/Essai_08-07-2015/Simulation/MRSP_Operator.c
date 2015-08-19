/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Open_ETCS/Models_CG/Essai/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-24T16:37:32
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSP_Operator.h"

void MRSP_Operator_reset(outC_MRSP_Operator *outC)
{
  kcg_int i;
  
  for (i = 0; i < 25; i++) {
    /* 1 */ dV_Operator_reset(&outC->_3_Context_1[i]);
  }
  for (i = 0; i < 25; i++) {
    /* 2 */ Min3_reset_math_real(&outC->_2_Context_2[i]);
  }
  /* 4 */ Spreader_Operator_reset_2_2(&outC->Context_4);
  /* 3 */ Spreader_Operator_reset_2_2(&outC->_1_Context_3);
  /* 2 */ Spreader_Operator_reset_2_2(&outC->Context_2);
  for (i = 0; i < 25; i++) {
    /* 3 */ Min3_reset_math_real(&outC->Context_3[i]);
  }
  /* 1 */ Spreader_Operator_reset_8_4(&outC->Context_1);
  /* 5 */ Spreader_Operator_reset_2_2(&outC->Context_5);
}

/* MRSP_Operator */
void MRSP_Operator(
  /* MRSP_Operator::SSP */array__1553 *SSP,
  /* MRSP_Operator::TSR_1 */array__1547 *TSR_1,
  /* MRSP_Operator::TSR_2 */array__1547 *TSR_2,
  /* MRSP_Operator::TSR_3 */array__1547 *TSR_3,
  /* MRSP_Operator::MA_EOA */array__1547 *MA_EOA,
  /* MRSP_Operator::Position */array_real_25 *Position,
  outC_MRSP_Operator *outC)
{
  kcg_int i4;
  kcg_int i3;
  kcg_int i2;
  kcg_int i1;
  kcg_int i;
  
  for (i4 = 0; i4 < 25; i4++) {
    outC->_L19[i4] = Vmax;
  }
  kcg_copy_array__1547(&outC->_L7, MA_EOA);
  kcg_copy_array_real_25(&outC->_L2, Position);
  /* 5 */ Spreader_Operator_2_2(&outC->_L7, &outC->_L2, &outC->Context_5);
  kcg_copy_array_real_25(&outC->_L11, &outC->Context_5.SSP_100);
  kcg_copy_array__1553(&outC->_L1, SSP);
  /* 1 */ Spreader_Operator_8_4(&outC->_L1, &outC->_L2, &outC->Context_1);
  kcg_copy_array_real_25(&outC->_L10, &outC->Context_1.SSP_100);
  for (i3 = 0; i3 < 25; i3++) {
    /* 3 */
    Min3_math_real(
      outC->_L19[i3],
      outC->_L11[i3],
      outC->_L10[i3],
      &outC->Context_3[i3]);
    outC->_L15[i3] = outC->Context_3[i3].Mi3_Output;
  }
  kcg_copy_array__1547(&outC->_L4, TSR_1);
  /* 2 */ Spreader_Operator_2_2(&outC->_L4, &outC->_L2, &outC->Context_2);
  kcg_copy_array_real_25(&outC->_L9, &outC->Context_2.SSP_100);
  kcg_copy_array__1547(&outC->_L5, TSR_2);
  /* 3 */ Spreader_Operator_2_2(&outC->_L5, &outC->_L2, &outC->_1_Context_3);
  kcg_copy_array_real_25(&outC->_L8, &outC->_1_Context_3.SSP_100);
  kcg_copy_array__1547(&outC->_L14, TSR_3);
  /* 4 */ Spreader_Operator_2_2(&outC->_L14, &outC->_L2, &outC->Context_4);
  kcg_copy_array_real_25(&outC->_L13, &outC->Context_4.SSP_100);
  for (i2 = 0; i2 < 25; i2++) {
    /* 2 */
    Min3_math_real(
      outC->_L9[i2],
      outC->_L8[i2],
      outC->_L13[i2],
      &outC->_2_Context_2[i2]);
    outC->_L16[i2] = outC->_2_Context_2[i2].Mi3_Output;
  }
  for (i1 = 0; i1 < 25; i1++) {
    outC->_L21_2[i1] = outC->_L15[i1];
    outC->_L22_2[i1] = outC->_L16[i1];
    outC->_L25_2[i1] = outC->_L21_2[i1] <= outC->_L22_2[i1];
    if (outC->_L25_2[i1]) {
      outC->_L24_2[i1] = outC->_L21_2[i1];
    }
    else {
      outC->_L24_2[i1] = outC->_L22_2[i1];
    }
    outC->_L17[i1] = outC->_L24_2[i1];
  }
  for (i = 0; i < 25; i++) {
    /* 1 */ dV_Operator(outC->_L17[i], &outC->_3_Context_1[i]);
    outC->_L18[i] = outC->_3_Context_1[i].dV;
  }
  kcg_copy_array_real_25(&outC->dV_ebi, &outC->_L18);
  kcg_copy_array_real_25(&outC->MRSP, &outC->_L17);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSP_Operator.c
** Generation date: 2015-06-24T16:37:32
*************************************************************$ */

