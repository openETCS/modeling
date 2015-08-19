/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Open_ETCS/Models_CG/Essai/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-24T14:59:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Spreader_Operator_1_1.h"

void Spreader_Operator_reset_1_1(outC_Spreader_Operator_1_1 *outC)
{
  kcg_int i;
  
  for (i = 0; i < 25; i++) {
    /* 1 */ ScanPositions_reset_1_1(&outC->Context_1[i]);
  }
}

/* Spreader_Operator */
void Spreader_Operator_1_1(
  /* Spreader_Operator::SSP_n */array__1666 *SSP_n,
  /* Spreader_Operator::Position */array_real_25 *Position,
  outC_Spreader_Operator_1_1 *outC)
{
  kcg_int i2;
  kcg_int i1;
  kcg_real tmp;
  kcg_int i;
  kcg_real noname;
  
  outC->_L7 = 0.0;
  kcg_copy_array_real_25(&outC->_L12, Position);
  kcg_copy_array__1666(&outC->_L11, SSP_n);
  for (i2 = 0; i2 < 25; i2++) {
    kcg_copy_array__1666(&outC->_L2[i2], &outC->_L11);
  }
  outC->_L10 = Vmax;
  for (i1 = 0; i1 < 25; i1++) {
    outC->_L9[i1] = outC->_L10;
  }
  outC->_L4 = outC->_L7;
  for (i = 0; i < 25; i++) {
    tmp = outC->_L4;
    /* 1 */
    ScanPositions_1_1(
      tmp,
      outC->_L12[i],
      &outC->_L2[i],
      outC->_L9[i],
      &outC->Context_1[i]);
    outC->_L4 = outC->Context_1[i].Pos_i_next;
    outC->_L5[i] = outC->Context_1[i].MRS;
  }
  kcg_copy_array_real_25(&outC->SSP_100, &outC->_L5);
  noname = outC->_L4;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Spreader_Operator_1_1.c
** Generation date: 2015-06-24T14:59:23
*************************************************************$ */

