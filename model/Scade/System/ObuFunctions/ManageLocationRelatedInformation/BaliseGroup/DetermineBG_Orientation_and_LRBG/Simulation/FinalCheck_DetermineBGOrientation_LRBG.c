/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Users/GiovanniTrotta/Desktop/SoftwareBGO/Simulation\kcg_s2c_config.txt
** Generation date: 2014-05-12T18:26:15
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FinalCheck_DetermineBGOrientation_LRBG.h"

void FinalCheck_reset_DetermineBGOrientation_LRBG(
  outC_FinalCheck_DetermineBGOrientation_LRBG *outC)
{
}

/* DetermineBGOrientation_LRBG::FinalCheck */
void FinalCheck_DetermineBGOrientation_LRBG(
  /* DetermineBGOrientation_LRBG::FinalCheck::CheckedBGMessage */CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage *CheckedBGMessage,
  /* DetermineBGOrientation_LRBG::FinalCheck::Orientation */Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable Orientation,
  /* DetermineBGOrientation_LRBG::FinalCheck::RBCOrientationReport */RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport *RBCOrientationReport,
  /* DetermineBGOrientation_LRBG::FinalCheck::TrainInfo */TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo *TrainInfo,
  outC_FinalCheck_DetermineBGOrientation_LRBG *outC)
{
  kcg_copy_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo(
    &outC->_L54,
    TrainInfo);
  outC->_L58 = outC->_L54.m_mode;
  kcg_copy_RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport(
    &outC->_L3,
    RBCOrientationReport);
  kcg_copy_Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets(
    &outC->_L66,
    &outC->_L3.assignment_of_coordinate_system);
  outC->_L90 = outC->_L66.Q_ORIENTATION;
  outC->_L89 = outC->_L66.NID_LRBG;
  outC->_L88 = outC->_L66.M_ACK;
  outC->_L87 = outC->_L66.T_TRAIN;
  outC->_L86 = outC->_L66.L_MESSAGE;
  outC->_L57 = outC->_L54.m_leveltr;
  outC->_L63 =
    M_LEVELTR__Level_0_DetermineBGOrientation_LRBG_DataDctionary_Variable;
  outC->_L60 = outC->_L57 != outC->_L63;
  outC->_L64 =
    M_LEVELTR__Level_1_DetermineBGOrientation_LRBG_DataDctionary_Variable;
  outC->_L62 = outC->_L57 != outC->_L64;
  outC->_L61 = outC->_L60 | outC->_L62;
  outC->_L2 = Orientation;
  outC->_L93 =
    M_ACK__Acknowledgement_required_DetermineBGOrientation_LRBG_DataDctionary_Variable;
  outC->_L92 = outC->_L88 == outC->_L93;
  outC->_L97 =
    Q_ORIENTATION__The_balise_group_has_been_passed_by_the_train_in_nominal_direction_DetermineBGOrientation_LRBG_DataDctionary_Variable;
  outC->_L96 = outC->_L90 == outC->_L97;
  outC->_L98 =
    Q_DIRTRAIN__Nominal_DetermineBGOrientation_LRBG_DataDctionary_Variable;
  outC->_L99 =
    Q_DIRTRAIN__Reverse_DetermineBGOrientation_LRBG_DataDctionary_Variable;
  if (outC->_L96) {
    outC->_L95 = outC->_L98;
  }
  else {
    outC->_L95 = outC->_L99;
  }
  if (outC->_L92) {
    outC->_L91 = outC->_L95;
  }
  else {
    outC->_L91 = outC->_L2;
  }
  if (outC->_L61) {
    outC->_L29 = outC->_L2;
  }
  else {
    outC->_L29 = outC->_L91;
  }
  kcg_copy_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(
    &outC->_L1,
    CheckedBGMessage);
  outC->_L28.q_dirlrbg = outC->_L29;
  kcg_copy_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(
    &outC->_L28.checkedbgmessage,
    &outC->_L1);
  kcg_copy_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage(
    &outC->FilteredBGMessage,
    &outC->_L28);
  outC->_L85 = outC->_L66.NID_MESSAGE;
  outC->_L27.NID_MESSAGE = outC->_L85;
  outC->_L27.L_MESSAGE = outC->_L86;
  outC->_L27.T_TRAIN = outC->_L87;
  kcg_copy_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets(
    &outC->RBCReport,
    &outC->_L27);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** FinalCheck_DetermineBGOrientation_LRBG.c
** Generation date: 2014-05-12T18:26:15
*************************************************************$ */

