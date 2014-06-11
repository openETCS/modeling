/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config C:/Users/GiovanniTrotta/Desktop/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/BaliseGroup/DetermineBG_Orientation_and_LRBG/Simulation/config.txt
** Generation date: 2014-06-11T14:34:48
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Operator7_DetermineBGOrientation_LRBG.h"

void Operator7_init_DetermineBGOrientation_LRBG(
  outC_Operator7_DetermineBGOrientation_LRBG *outC)
{
  outC->_L3 = kcg_true;
  outC->_L2 = kcg_true;
  outC->_L1 = kcg_true;
  outC->Output1 = kcg_true;
}


void Operator7_reset_DetermineBGOrientation_LRBG(
  outC_Operator7_DetermineBGOrientation_LRBG *outC)
{
}

/* DetermineBGOrientation_LRBG::Operator7 */
void Operator7_DetermineBGOrientation_LRBG(
  inC_Operator7_DetermineBGOrientation_LRBG *inC,
  outC_Operator7_DetermineBGOrientation_LRBG *outC)
{
  outC->_L3 = kcg_false;
  outC->_L1 = inC->Input1;
  outC->_L2 = outC->_L1 & outC->_L3;
  outC->Output1 = outC->_L2;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** Operator7_DetermineBGOrientation_LRBG.c
** Generation date: 2014-06-11T14:34:48
*************************************************************$ */

