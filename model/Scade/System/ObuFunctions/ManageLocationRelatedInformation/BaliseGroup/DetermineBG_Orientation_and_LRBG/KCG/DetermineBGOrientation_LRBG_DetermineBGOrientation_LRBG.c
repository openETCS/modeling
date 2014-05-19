/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Users/GiovanniTrotta/Desktop/SoftwareBGO/KCG\kcg_s2c_config.txt
** Generation date: 2014-05-19T12:09:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DetermineBGOrientation_LRBG_DetermineBGOrientation_LRBG.h"

void DetermineBGOrientation_LRBG_reset_DetermineBGOrientation_LRBG(
  outC_DetermineBGOrientation_LRBG_DetermineBGOrientation_LRBG *outC)
{
}

/* DetermineBGOrientation_LRBG::DetermineBGOrientation_LRBG */
void DetermineBGOrientation_LRBG_DetermineBGOrientation_LRBG(
  inC_DetermineBGOrientation_LRBG_DetermineBGOrientation_LRBG *inC,
  outC_DetermineBGOrientation_LRBG_DetermineBGOrientation_LRBG *outC)
{
  Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable tmp1;
  Orientation_DetermineBGOrientation_LRBG_DataDctionary tmp;
  
  tmp = /* 1 */
    GetBGMessageOrientation_DetermineBGOrientation_LRBG(&inC->CheckedBGMessage);
  tmp1 = /* 1 */
    CheckBaliseGroup_DetermineBGOrientation_LRBG(
      &inC->CurrentLRBG,
      &inC->ListOfBGs,
      tmp,
      &inC->TrainInfo);
  /* 1 */
  FinalCheck_DetermineBGOrientation_LRBG(
    &inC->CheckedBGMessage,
    tmp1,
    &inC->RBCOrientationReport,
    &inC->TrainInfo,
    &outC->RBCReport,
    &outC->FilterBGMessage);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** DetermineBGOrientation_LRBG_DetermineBGOrientation_LRBG.c
** Generation date: 2014-05-19T12:09:24
*************************************************************$ */

