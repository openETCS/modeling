/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Open_ETCS/Models_CG/Essai/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-24T16:37:32
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Bool_Spreader_Operator_2.h"

void Bool_Spreader_Operator_reset_2(outC_Bool_Spreader_Operator_2 *outC)
{
  kcg_int i;
  
  for (i = 0; i < 25; i++) {
    /* 1 */ BooleanScanPositions_reset_2(&outC->Context_1[i]);
  }
}

/* Bool_Spreader_Operator */
void Bool_Spreader_Operator_2(
  /* Bool_Spreader_Operator::Values_n */array__1550 *Values_n,
  /* Bool_Spreader_Operator::Position */array_real_25 *Position,
  outC_Bool_Spreader_Operator_2 *outC)
{
  kcg_int i3;
  kcg_int i2;
  kcg_real tmp;
  kcg_int i1;
  kcg_int i;
  kcg_real noname;
  
  outC->_L7 = 0.0;
  kcg_copy_array_real_25(&outC->_L12, Position);
  kcg_copy_array__1550(&outC->_L11, Values_n);
  for (i3 = 0; i3 < 25; i3++) {
    kcg_copy_array__1550(&outC->_L2[i3], &outC->_L11);
  }
  outC->_L10 = kcg_true;
  for (i2 = 0; i2 < 25; i2++) {
    outC->_L9[i2] = outC->_L10;
  }
  outC->_L4 = outC->_L7;
  for (i1 = 0; i1 < 25; i1++) {
    tmp = outC->_L4;
    /* 1 */
    BooleanScanPositions_2(
      tmp,
      outC->_L12[i1],
      &outC->_L2[i1],
      outC->_L9[i1],
      &outC->Context_1[i1]);
    outC->_L4 = outC->Context_1[i1].Pos_i_next;
    outC->_L5[i1] = outC->Context_1[i1].MRS;
  }
  kcg_copy_array_bool_24(&outC->_L3, (array_bool_24 *) &outC->_L5[1]);
  outC->_L1 = outC->_L5[24];
  for (i = 0; i < 1; i++) {
    outC->_L6[i] = outC->_L1;
  }
  kcg_copy_array_bool_24(&outC->_L8[0], &outC->_L3);
  kcg_copy_array_bool_1(&outC->_L8[24], &outC->_L6);
  kcg_copy_array_bool_25(&outC->Values_100, &outC->_L8);
  noname = outC->_L4;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Bool_Spreader_Operator_2.c
** Generation date: 2015-06-24T16:37:32
*************************************************************$ */

