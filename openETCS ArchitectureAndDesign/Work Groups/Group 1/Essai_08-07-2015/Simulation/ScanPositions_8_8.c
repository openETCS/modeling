/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Open_ETCS/Models_CG/Essai/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-24T16:37:32
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ScanPositions_8_8.h"

void ScanPositions_reset_8_8(outC_ScanPositions_8_8 *outC)
{
  kcg_int i;
  
  for (i = 0; i < 8; i++) {
    /* 1 */ ScanSSP_reset_8(&outC->Context_1[i]);
  }
}

/* ScanPositions */
void ScanPositions_8_8(
  /* ScanPositions::Pos_i_moins_1 */kcg_real Pos_i_moins_1,
  /* ScanPositions::Pos_i */kcg_real Pos_i,
  /* ScanPositions::SpeedProfile */array__1553 *SpeedProfile,
  /* ScanPositions::InitMRS */kcg_real InitMRS,
  outC_ScanPositions_8_8 *outC)
{
  kcg_int i2;
  kcg_int i1;
  kcg_real tmp;
  kcg_int i;
  kcg_int noname;
  
  outC->_L22 = InitMRS;
  outC->_L29 = Pos_i_moins_1;
  for (i2 = 0; i2 < 8; i2++) {
    outC->_L31[i2] = outC->_L29;
  }
  outC->_L20 = Pos_i;
  for (i1 = 0; i1 < 8; i1++) {
    outC->_L30[i1] = outC->_L20;
  }
  kcg_copy_array__1553(&outC->_L2, SpeedProfile);
  outC->_L28 = 8 > 0;
  outC->_L32 = outC->_L22;
  if (outC->_L28) {
    for (i = 0; i < 8; i++) {
      tmp = outC->_L32;
      /* 1 */
      ScanSSP_8(
        i,
        tmp,
        outC->_L31[i],
        outC->_L30[i],
        &outC->_L2[i],
        &outC->Context_1[i]);
      outC->_L32 = outC->Context_1[i].Updated_MRS;
      outC->_L27 = i + 1;
      if (!outC->Context_1[i].Continue) {
        break;
      }
    }
  }
  else {
    outC->_L27 = 0;
  }
  outC->MRS = outC->_L32;
  noname = outC->_L27;
  outC->_L26 = Pos_i;
  outC->Pos_i_next = outC->_L26;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ScanPositions_8_8.c
** Generation date: 2015-06-24T16:37:32
*************************************************************$ */

