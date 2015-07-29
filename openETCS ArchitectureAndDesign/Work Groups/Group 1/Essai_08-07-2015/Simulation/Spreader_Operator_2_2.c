/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Open_ETCS/Models_CG/Essai/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-24T16:37:31
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Spreader_Operator_2_2.h"

void Spreader_Operator_reset_2_2(outC_Spreader_Operator_2_2 *outC)
{
  kcg_int i;
  
  for (i = 0; i < 25; i++) {
    /* 1 */ ScanPositions_reset_2_2(&outC->Context_1[i]);
  }
}

/* Spreader_Operator */
void Spreader_Operator_2_2(
  /* Spreader_Operator::SSP_n */array__1547 *SSP_n,
  /* Spreader_Operator::Position */array_real_25 *Position,
  outC_Spreader_Operator_2_2 *outC)
{
  kcg_int i3;
  kcg_int i2;
  kcg_real tmp;
  kcg_int i1;
  kcg_int i;
  kcg_real noname;
  
  outC->_L7 = 0.0;
  kcg_copy_array_real_25(&outC->_L12, Position);
  kcg_copy_array__1547(&outC->_L11, SSP_n);
  for (i3 = 0; i3 < 25; i3++) {
    kcg_copy_array__1547(&outC->_L2[i3], &outC->_L11);
  }
  outC->_L10 = Vmax;
  for (i2 = 0; i2 < 25; i2++) {
    outC->_L9[i2] = outC->_L10;
  }
  outC->_L4 = outC->_L7;
  for (i1 = 0; i1 < 25; i1++) {
    tmp = outC->_L4;
    /* 1 */
    ScanPositions_2_2(
      tmp,
      outC->_L12[i1],
      &outC->_L2[i1],
      outC->_L9[i1],
      &outC->Context_1[i1]);
    outC->_L4 = outC->Context_1[i1].Pos_i_next;
    outC->_L5[i1] = outC->Context_1[i1].MRS;
  }
  outC->_L16 = outC->_L5[24];
  for (i = 0; i < 1; i++) {
    outC->_L15[i] = outC->_L16;
  }
  kcg_copy_array_real_24(&outC->_L13, (array_real_24 *) &outC->_L5[1]);
  kcg_copy_array_real_24(&outC->_L14[0], &outC->_L13);
  kcg_copy_array_real_1(&outC->_L14[24], &outC->_L15);
  kcg_copy_array_real_25(&outC->SSP_100, &outC->_L14);
  noname = outC->_L4;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Spreader_Operator_2_2.c
** Generation date: 2015-06-24T16:37:31
*************************************************************$ */

