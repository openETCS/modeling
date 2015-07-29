/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Open_ETCS/Models_CG/Essai/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-24T16:37:32
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Root_SDM.h"

void Root_SDM_reset(outC_Root_SDM *outC)
{
  kcg_int i;
  
  /* 1 */ SBD_Operator_reset(&outC->_3_Context_1);
  for (i = 0; i < 25; i++) {
    /* 1 */ EBD_Operator_reset(&outC->_2_Context_1[i]);
  }
  /* ACCeler_Operator */
  ACCeler_Operator_reset(&outC->Context_ACCeler_Operator);
  /* 1 */ MRSP_Operator_reset(&outC->_1_Context_1);
  for (i = 0; i < 25; i++) {
    /* 1 */ Step_Operator_reset(&outC->Context_1[i]);
  }
}

/* Root_SDM */
void Root_SDM(
  /* Root_SDM::SSP */array__1553 *SSP,
  /* Root_SDM::TSR_1 */array__1547 *TSR_1,
  /* Root_SDM::TSR_2 */array__1547 *TSR_2,
  /* Root_SDM::TSR_3 */array__1547 *TSR_3,
  /* Root_SDM::MA_EOA */array__1547 *MA_EOA,
  /* Root_SDM::Gradient */array__1553 *Gradient,
  /* Root_SDM::Adh */array__1550 *Adh10,
  outC_Root_SDM *outC)
{
  TY_SizePos tmp8;
  kcg_int i7;
  kcg_int i6;
  kcg_int i5;
  kcg_int i4;
  kcg_int i3;
  kcg_real tmp;
  kcg_int i2;
  kcg_int i1;
  kcg_int i;
  TY_SizePos noname;
  kcg_real _9_noname;
  
  outC->_L16 = 1.0;
  outC->_L17 = 0.0;
  outC->_L14.Size = outC->_L16;
  outC->_L14.Pos = outC->_L17;
  kcg_copy_TY_SizePos(&outC->_L11, &outC->_L14);
  for (i7 = 0; i7 < 25; i7++) {
    kcg_copy_TY_SizePos(&tmp8, &outC->_L11);
    /* 1 */ Step_Operator(&tmp8, &outC->Context_1[i7]);
    kcg_copy_TY_SizePos(&outC->_L11, &outC->Context_1[i7].Next_SizePos);
    outC->_L4[i7] = outC->Context_1[i7].SIZE;
    outC->_L5[i7] = outC->Context_1[i7].POS;
  }
  kcg_copy_array_real_25(&outC->Position, &outC->_L5);
  kcg_copy_array__1553(&outC->_L21, SSP);
  kcg_copy_array__1547(&outC->_L22, TSR_1);
  kcg_copy_array__1547(&outC->_L23, TSR_2);
  kcg_copy_array__1547(&outC->_L24, TSR_3);
  kcg_copy_array__1547(&outC->_L25, MA_EOA);
  /* 1 */
  MRSP_Operator(
    &outC->_L21,
    &outC->_L22,
    &outC->_L23,
    &outC->_L24,
    &outC->_L25,
    &outC->_L5,
    &outC->_1_Context_1);
  kcg_copy_array_real_25(&outC->_L1, &outC->_1_Context_1.MRSP);
  kcg_copy_array_real_25(&outC->_L9, &outC->_1_Context_1.dV_ebi);
  kcg_copy_array_real_25(&outC->MRSP, &outC->_L1);
  outC->_L30 = (*MA_EOA)[0].Value;
  for (i6 = 0; i6 < 25; i6++) {
    outC->_L26[i6] = outC->_L4[24 - i6];
  }
  for (i5 = 0; i5 < 25; i5++) {
    outC->_L27[i5] = outC->_L1[24 - i5];
  }
  for (i4 = 0; i4 < 25; i4++) {
    outC->_L29[i4] = outC->_L9[24 - i4];
  }
  outC->_L35 = 0.0;
  kcg_copy_array_real_25(&outC->_L34, &outC->_L29);
  if ((0 <= 0) & (0 < 25)) {
    outC->_L34[0] = outC->_L35;
  }
  kcg_copy_array__1550(&outC->_L19, Adh10);
  kcg_copy_array__1553(&outC->_L20, Gradient);
  /* ACCeler_Operator */
  ACCeler_Operator(
    &outC->_L1,
    &outC->_L5,
    &outC->_L19,
    &outC->_L20,
    &outC->Context_ACCeler_Operator);
  kcg_copy_array_real_25(&outC->_L2, &outC->Context_ACCeler_Operator.Asafe);
  kcg_copy_array_real_25(&outC->_L3, &outC->Context_ACCeler_Operator.Aservice);
  for (i3 = 0; i3 < 25; i3++) {
    outC->_L28[i3] = outC->_L2[24 - i3];
  }
  outC->_L8 = outC->_L30;
  for (i2 = 0; i2 < 25; i2++) {
    tmp = outC->_L8;
    /* 1 */
    EBD_Operator(
      tmp,
      outC->_L26[i2],
      outC->_L27[i2],
      outC->_L34[i2],
      outC->_L28[i2],
      &outC->_2_Context_1[i2]);
    outC->_L8 = outC->_2_Context_1[i2].Vebd;
    outC->_L32[i2] = outC->_2_Context_1[i2].Vebd_Table;
    outC->_L38[i2] = outC->_2_Context_1[i2].Ceilling_Mode;
  }
  for (i1 = 0; i1 < 25; i1++) {
    outC->_L39[i1] = outC->_L38[24 - i1];
  }
  kcg_copy_array_bool_25(&outC->C_Mode, &outC->_L39);
  _9_noname = outC->_L8;
  for (i = 0; i < 25; i++) {
    outC->_L31[i] = outC->_L32[24 - i];
  }
  kcg_copy_array_real_25(&outC->dV_ebi, &outC->_L9);
  /* 1 */ SBD_Operator(&outC->_L3, &outC->_3_Context_1);
  kcg_copy_array_real_25(&outC->_L10, &outC->_3_Context_1.Vsbd);
  kcg_copy_array_real_25(&outC->Vsbd, &outC->_L10);
  kcg_copy_TY_SizePos(&noname, &outC->_L11);
  kcg_copy_array_real_25(&outC->Vebd, &outC->_L31);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Root_SDM.c
** Generation date: 2015-06-24T16:37:32
*************************************************************$ */

