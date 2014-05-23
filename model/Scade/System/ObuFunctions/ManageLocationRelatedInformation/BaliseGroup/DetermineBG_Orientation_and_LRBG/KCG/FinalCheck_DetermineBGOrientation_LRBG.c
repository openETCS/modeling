/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Users/GiovanniTrotta/Desktop/SoftwareBGO/KCG\kcg_s2c_config.txt
** Generation date: 2014-05-19T12:09:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FinalCheck_DetermineBGOrientation_LRBG.h"

/* DetermineBGOrientation_LRBG::FinalCheck */
void FinalCheck_DetermineBGOrientation_LRBG(
  /* DetermineBGOrientation_LRBG::FinalCheck::CheckedBGMessage */CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage *CheckedBGMessage,
  /* DetermineBGOrientation_LRBG::FinalCheck::Orientation */Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable Orientation,
  /* DetermineBGOrientation_LRBG::FinalCheck::RBCOrientationReport */RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport *RBCOrientationReport,
  /* DetermineBGOrientation_LRBG::FinalCheck::TrainInfo */TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo *TrainInfo,
  /* DetermineBGOrientation_LRBG::FinalCheck::RBCReport */Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets *RBCReport,
  /* DetermineBGOrientation_LRBG::FinalCheck::FilteredBGMessage */FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage *FilteredBGMessage)
{
  (*RBCReport).NID_MESSAGE =
    (*RBCOrientationReport).assignment_of_coordinate_system.NID_MESSAGE;
  (*RBCReport).L_MESSAGE =
    (*RBCOrientationReport).assignment_of_coordinate_system.L_MESSAGE;
  (*RBCReport).T_TRAIN =
    (*RBCOrientationReport).assignment_of_coordinate_system.T_TRAIN;
  kcg_copy_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage(
    &(*FilteredBGMessage).checkedbgmessage,
    CheckedBGMessage);
  if (((*TrainInfo).m_leveltr !=
      M_LEVELTR__Level_0_DetermineBGOrientation_LRBG_DataDctionary_Variable) |
    ((*TrainInfo).m_leveltr !=
      M_LEVELTR__Level_1_DetermineBGOrientation_LRBG_DataDctionary_Variable)) {
    (*FilteredBGMessage).q_dirlrbg = Orientation;
  }
  else if ((*RBCOrientationReport).assignment_of_coordinate_system.M_ACK ==
    M_ACK__Acknowledgement_required_DetermineBGOrientation_LRBG_DataDctionary_Variable) {
    if ((*RBCOrientationReport).assignment_of_coordinate_system.Q_ORIENTATION ==
      Q_ORIENTATION__The_balise_group_has_been_passed_by_the_train_in_nominal_direction_DetermineBGOrientation_LRBG_DataDctionary_Variable) {
      (*FilteredBGMessage).q_dirlrbg =
        Q_DIRTRAIN__Nominal_DetermineBGOrientation_LRBG_DataDctionary_Variable;
    }
    else {
      (*FilteredBGMessage).q_dirlrbg =
        Q_DIRTRAIN__Reverse_DetermineBGOrientation_LRBG_DataDctionary_Variable;
    }
  }
  else {
    (*FilteredBGMessage).q_dirlrbg = Orientation;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** FinalCheck_DetermineBGOrientation_LRBG.c
** Generation date: 2014-05-19T12:09:24
*************************************************************$ */

