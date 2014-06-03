/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Users/GiovanniTrotta/Desktop/SoftwareBGO/Simulation\kcg_s2c_config.txt
** Generation date: 2014-05-28T10:33:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckBaliseGroup_DetermineBGOrientation_LRBG.h"

void CheckBaliseGroup_reset_DetermineBGOrientation_LRBG(
  outC_CheckBaliseGroup_DetermineBGOrientation_LRBG *outC)
{
  /* 1 */
  CheckSingleBaliseGroup_reset_DetermineBGOrientation_LRBG(&outC->Context_1);
}

/* DetermineBGOrientation_LRBG::CheckBaliseGroup */
void CheckBaliseGroup_DetermineBGOrientation_LRBG(
  /* DetermineBGOrientation_LRBG::CheckBaliseGroup::CurrentLRBG */CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG *CurrentLRBG,
  /* DetermineBGOrientation_LRBG::CheckBaliseGroup::ListOfBGs */ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs *ListOfBGs,
  /* DetermineBGOrientation_LRBG::CheckBaliseGroup::BGOOrientationAndType */Orientation_DetermineBGOrientation_LRBG_DataDctionary BGOOrientationAndType,
  /* DetermineBGOrientation_LRBG::CheckBaliseGroup::TrainInfo */TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo *TrainInfo,
  outC_CheckBaliseGroup_DetermineBGOrientation_LRBG *outC)
{
  outC->_LBGOOrientationAndType = BGOOrientationAndType;
  outC->_L6 = DIR_Nominal_DetermineBGOrientation_LRBG_DataDctionary;
  outC->_L5 = outC->_LBGOOrientationAndType == outC->_L6;
  outC->_L7 =
    Q_DIRTRAIN__Nominal_DetermineBGOrientation_LRBG_DataDctionary_Variable;
  outC->_L8 =
    Q_DIRTRAIN__Reverse_DetermineBGOrientation_LRBG_DataDctionary_Variable;
  if (outC->_L5) {
    outC->_L4 = outC->_L7;
  }
  else {
    outC->_L4 = outC->_L8;
  }
  outC->_L3 = Single_Balise_Group_DetermineBGOrientation_LRBG_DataDctionary;
  outC->_L2 = outC->_LBGOOrientationAndType == outC->_L3;
  kcg_copy_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG(
    &outC->_LCurrentLRBG,
    CurrentLRBG);
  kcg_copy_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs(
    &outC->_LListOfBGs,
    ListOfBGs);
  kcg_copy_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo(
    &outC->_LTrainInfo,
    TrainInfo);
  /* 1 */
  CheckSingleBaliseGroup_DetermineBGOrientation_LRBG(
    &outC->_LCurrentLRBG,
    &outC->_LListOfBGs,
    &outC->_LTrainInfo,
    &outC->Context_1);
  outC->_Lchecksinglebalisegroup_Orientation = outC->Context_1.Orientation;
  if (outC->_L2) {
    outC->_L1 = outC->_Lchecksinglebalisegroup_Orientation;
  }
  else {
    outC->_L1 = outC->_L4;
  }
  outC->Orientation = outC->_L1;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckBaliseGroup_DetermineBGOrientation_LRBG.c
** Generation date: 2014-05-28T10:33:10
*************************************************************$ */

