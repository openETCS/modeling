/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Users/GiovanniTrotta/Desktop/SoftwareBGO/Simulation\kcg_s2c_config.txt
** Generation date: 2014-05-12T18:26:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DetermineBGOrientation_LRBG_DetermineBGOrientation_LRBG.h"

void DetermineBGOrientation_LRBG_reset_DetermineBGOrientation_LRBG(
  outC_DetermineBGOrientation_LRBG_DetermineBGOrientation_LRBG *outC)
{
  /* 1 */ FinalCheck_reset_DetermineBGOrientation_LRBG(&outC->_2_Context_1);
  /* 1 */
  CheckBaliseGroup_reset_DetermineBGOrientation_LRBG(&outC->_1_Context_1);
  /* 1 */
  GetBGMessageOrientation_reset_DetermineBGOrientation_LRBG(&outC->Context_1);
}

/* DetermineBGOrientation_LRBG::DetermineBGOrientation_LRBG */
void DetermineBGOrientation_LRBG_DetermineBGOrientation_LRBG(
  inC_DetermineBGOrientation_LRBG_DetermineBGOrientation_LRBG *inC,
  outC_DetermineBGOrientation_LRBG_DetermineBGOrientation_LRBG *outC)
{
  kcg_copy_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(
    &outC->_LCheckedBGMessage,
    &inC->CheckedBGMessage);
  kcg_copy_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG(
    &outC->_LCurrentLRBG,
    &inC->CurrentLRBG);
  kcg_copy_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs(
    &outC->_LListOfBGs,
    &inC->ListOfBGs);
  /* 1 */
  GetBGMessageOrientation_DetermineBGOrientation_LRBG(
    &outC->_LCheckedBGMessage,
    &outC->Context_1);
  outC->_Lgetbgmessageorientation_BGOOrientationAndType =
    outC->Context_1.Orientation;
  kcg_copy_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo(
    &outC->_LTrainInfo,
    &inC->TrainInfo);
  /* 1 */
  CheckBaliseGroup_DetermineBGOrientation_LRBG(
    &outC->_LCurrentLRBG,
    &outC->_LListOfBGs,
    outC->_Lgetbgmessageorientation_BGOOrientationAndType,
    &outC->_LTrainInfo,
    &outC->_1_Context_1);
  outC->_Lchecksinglebalisegroup_Orientation = outC->_1_Context_1.Orientation;
  kcg_copy_RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport(
    &outC->_LRBCOrientationReport,
    &inC->RBCOrientationReport);
  /* 1 */
  FinalCheck_DetermineBGOrientation_LRBG(
    &outC->_LCheckedBGMessage,
    outC->_Lchecksinglebalisegroup_Orientation,
    &outC->_LRBCOrientationReport,
    &outC->_LTrainInfo,
    &outC->_2_Context_1);
  kcg_copy_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets(
    &outC->_Lfinalcheck_RBCReport,
    &outC->_2_Context_1.RBCReport);
  kcg_copy_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage(
    &outC->_Lfinalcheck_FilteredBGMessage,
    &outC->_2_Context_1.FilteredBGMessage);
  kcg_copy_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets(
    &outC->RBCReport,
    &outC->_Lfinalcheck_RBCReport);
  kcg_copy_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage(
    &outC->FilterBGMessage,
    &outC->_Lfinalcheck_FilteredBGMessage);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** DetermineBGOrientation_LRBG_DetermineBGOrientation_LRBG.c
** Generation date: 2014-05-12T18:26:15
*************************************************************$ */

