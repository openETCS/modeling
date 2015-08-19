/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Open_ETCS/Models_CG/Essai/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-24T16:37:32
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ScanAdh_2.h"

void ScanAdh_reset_2(outC_ScanAdh_2 *outC)
{
}

/* ScanAdh */
void ScanAdh_2(
  /* ScanAdh::Index */kcg_int Index,
  /* ScanAdh::InitMRS */kcg_bool InitMRS,
  /* ScanAdh::Xdeb */kcg_real Xdeb,
  /* ScanAdh::Xend */kcg_real Xend,
  /* ScanAdh::SpeedElement */TY_Adh *SpeedElement,
  outC_ScanAdh_2 *outC)
{
  kcg_copy_TY_Adh(&outC->_L1, SpeedElement);
  outC->_L8 = outC->_L1.Adh;
  outC->_L15 = InitMRS;
  outC->_L25 = outC->_L8 & outC->_L15;
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
    outC->_L13 = outC->_L25;
  }
  else {
    outC->_L13 = outC->_L22;
  }
  outC->Updated_MRS = outC->_L13;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ScanAdh_2.c
** Generation date: 2015-06-24T16:37:32
*************************************************************$ */

