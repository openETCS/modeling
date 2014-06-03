/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Users/GiovanniTrotta/Desktop/SoftwareBGO/Simulation\kcg_s2c_config.txt
** Generation date: 2014-05-28T10:33:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ArrCheck_DetermineBGOrientation_LRBG.h"

void ArrCheck_reset_DetermineBGOrientation_LRBG(
  outC_ArrCheck_DetermineBGOrientation_LRBG *outC)
{
}

/* DetermineBGOrientation_LRBG::ArrCheck */
void ArrCheck_DetermineBGOrientation_LRBG(
  /* DetermineBGOrientation_LRBG::ArrCheck::N_PIG */N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable N_PIG,
  outC_ArrCheck_DetermineBGOrientation_LRBG *outC)
{
  outC->_L38 = DIR_Reverse_DetermineBGOrientation_LRBG_DataDctionary;
  outC->_L37 = DIR_Nominal_DetermineBGOrientation_LRBG_DataDctionary;
  outC->_L34 = I_am_the_1th_DetermineBGOrientation_LRBG_DataDctionary_Variable;
  outC->_L13 = N_PIG;
  outC->_L20 = outC->_L13 == outC->_L34;
  if (outC->_L20) {
    outC->_L17 = outC->_L37;
  }
  else {
    outC->_L17 = outC->_L38;
  }
  outC->Orientation = outC->_L17;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ArrCheck_DetermineBGOrientation_LRBG.c
** Generation date: 2014-05-28T10:33:10
*************************************************************$ */

