/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Open_ETCS/Models_CG/Essai/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-24T16:37:32
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Root.h"

void Root_reset(outC_Root *outC)
{
  /* 1 */ Root_SDM_reset(&outC->Context_1);
}

/* Root */
void Root(outC_Root *outC)
{
  kcg_copy_array__1553(&outC->_L10, (array__1553 *) &SSP_ForTest);
  kcg_copy_array__1547(&outC->_L13, (array__1547 *) &TSR1);
  kcg_copy_array__1547(&outC->_L9, (array__1547 *) &TSR2);
  kcg_copy_array__1547(&outC->_L8, (array__1547 *) &MA);
  kcg_copy_array__1553(&outC->_L11, (array__1553 *) &Grad);
  kcg_copy_array__1550(&outC->_L12, (array__1550 *) &Adh);
  /* 1 */
  Root_SDM(
    &outC->_L10,
    &outC->_L13,
    &outC->_L9,
    &outC->_L9,
    &outC->_L8,
    &outC->_L11,
    &outC->_L12,
    &outC->Context_1);
  kcg_copy_array_real_25(&outC->_L1, &outC->Context_1.dV_ebi);
  kcg_copy_array_real_25(&outC->_L2, &outC->Context_1.Vebd);
  kcg_copy_array_real_25(&outC->_L3, &outC->Context_1.Vsbd);
  kcg_copy_array_bool_25(&outC->_L4, &outC->Context_1.C_Mode);
  kcg_copy_array_real_25(&outC->_L14, &outC->Context_1.MRSP);
  kcg_copy_array_real_25(&outC->_L15, &outC->Context_1.Position);
  kcg_copy_array_real_25(&outC->Position, &outC->_L15);
  kcg_copy_array_real_25(&outC->MRSP, &outC->_L14);
  kcg_copy_array_bool_25(&outC->C_Mode, &outC->_L4);
  kcg_copy_array_real_25(&outC->Vsbd, &outC->_L3);
  kcg_copy_array_real_25(&outC->Vebd, &outC->_L2);
  kcg_copy_array_real_25(&outC->dV_ebi, &outC->_L1);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Root.c
** Generation date: 2015-06-24T16:37:32
*************************************************************$ */

