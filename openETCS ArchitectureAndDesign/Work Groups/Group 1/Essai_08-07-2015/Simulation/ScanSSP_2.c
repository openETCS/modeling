/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Open_ETCS/Models_CG/Essai/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-24T16:37:31
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ScanSSP_2.h"

void ScanSSP_reset_2(outC_ScanSSP_2 *outC)
{
}

/* ScanSSP */
void ScanSSP_2(
  /* ScanSSP::Index */kcg_int Index,
  /* ScanSSP::InitMRS */kcg_real InitMRS,
  /* ScanSSP::Xdeb */kcg_real Xdeb,
  /* ScanSSP::Xend */kcg_real Xend,
  /* ScanSSP::SpeedElement */TY_DistValue *SpeedElement,
  outC_ScanSSP_2 *outC)
{
  outC->_L15 = InitMRS;
  outC->I2_1 = outC->_L15;
  kcg_copy_TY_DistValue(&outC->_L1, SpeedElement);
  outC->_L8 = outC->_L1.Value;
  outC->I1_1 = outC->_L8;
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
  outC->_L26 = outC->Mi_Output_1;
  outC->_L7 = outC->_L1.Distance;
  outC->_L10 = Xend;
  outC->_L11 = outC->_L7 < outC->_L10;
  if (outC->_L11) {
    outC->_L22 = outC->_L8;
  }
  else {
    outC->_L22 = outC->_L15;
  }
  outC->_L16 = Index;
  outC->_L18 = 2 - 1;
  outC->_L17 = outC->_L16 < outC->_L18;
  outC->_L19 = outC->_L17 & outC->_L11;
  outC->Continue = outC->_L19;
  outC->_L2 = Xdeb;
  outC->_L9 = outC->_L7 >= outC->_L2;
  outC->_L12 = outC->_L9 & outC->_L11;
  if (outC->_L12) {
    outC->_L13 = outC->_L26;
  }
  else {
    outC->_L13 = outC->_L22;
  }
  outC->Updated_MRS = outC->_L13;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ScanSSP_2.c
** Generation date: 2015-06-24T16:37:31
*************************************************************$ */

