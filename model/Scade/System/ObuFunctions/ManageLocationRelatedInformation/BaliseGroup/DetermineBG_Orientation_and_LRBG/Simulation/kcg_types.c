/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config C:/Users/GiovanniTrotta/Desktop/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/BaliseGroup/DetermineBG_Orientation_and_LRBG/Simulation/config.txt
** Generation date: 2014-06-11T16:39:34
*************************************************************$ */

#include "kcg_types.h"

#ifdef kcg_use_ListOfBGs
kcg_bool kcg_comp_ListOfBGs(ListOfBGs *kcg_c1, ListOfBGs *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 20; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_CurrentLRBG(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_ListOfBGs */

#ifdef kcg_use_HederArray
kcg_bool kcg_comp_HederArray(HederArray *kcg_c1, HederArray *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 8; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_HeaderFlag(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_HederArray */

#ifdef kcg_use_Header
kcg_bool kcg_comp_Header(Header *kcg_c1, Header *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_dup == kcg_c2->m_dup);
  kcg_equ = kcg_equ & (kcg_c1->m_mcount == kcg_c2->m_mcount);
  kcg_equ = kcg_equ & (kcg_c1->nid_c == kcg_c2->nid_c);
  kcg_equ = kcg_equ & (kcg_c1->nid_bg == kcg_c2->nid_bg);
  kcg_equ = kcg_equ & (kcg_c1->q_link == kcg_c2->q_link);
  kcg_equ = kcg_equ & (kcg_c1->q_updown == kcg_c2->q_updown);
  kcg_equ = kcg_equ & (kcg_c1->q_media == kcg_c2->q_media);
  kcg_equ = kcg_equ & (kcg_c1->n_pig == kcg_c2->n_pig);
  kcg_equ = kcg_equ & (kcg_c1->n_total == kcg_c2->n_total);
  kcg_equ = kcg_equ & (kcg_c1->m_version == kcg_c2->m_version);
  return kcg_equ;
}
#endif /* kcg_use_Header */

#ifdef kcg_use_TrainInfo
kcg_bool kcg_comp_TrainInfo(TrainInfo *kcg_c1, TrainInfo *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_mode == kcg_c2->m_mode);
  kcg_equ = kcg_equ & (kcg_c1->m_leveltr == kcg_c2->m_leveltr);
  return kcg_equ;
}
#endif /* kcg_use_TrainInfo */

#ifdef kcg_use_HeaderFlag
kcg_bool kcg_comp_HeaderFlag(HeaderFlag *kcg_c1, HeaderFlag *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_Flag(&kcg_c1->flag, &kcg_c2->flag);
  kcg_equ = kcg_equ & kcg_comp_Header(&kcg_c1->header, &kcg_c2->header);
  return kcg_equ;
}
#endif /* kcg_use_HeaderFlag */

#ifdef kcg_use_Flag
kcg_bool kcg_comp_Flag(Flag *kcg_c1, Flag *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->boolean_ == kcg_c2->boolean_);
  return kcg_equ;
}
#endif /* kcg_use_Flag */

#ifdef kcg_use_FilteredBGMessage
kcg_bool kcg_comp_FilteredBGMessage(
  FilteredBGMessage *kcg_c1,
  FilteredBGMessage *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_CheckedBGMessage(
      &kcg_c1->checkedbgmessage,
      &kcg_c2->checkedbgmessage);
  kcg_equ = kcg_equ & (kcg_c1->q_dirlrbg == kcg_c2->q_dirlrbg);
  return kcg_equ;
}
#endif /* kcg_use_FilteredBGMessage */

#ifdef kcg_use_Train_Position_Report_Radio_TrainToTrack
kcg_bool kcg_comp_Train_Position_Report_Radio_TrainToTrack(
  Train_Position_Report_Radio_TrainToTrack *kcg_c1,
  Train_Position_Report_Radio_TrainToTrack *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Train_Position_Report_OptionalPackets ==
      kcg_c2->Train_Position_Report_OptionalPackets);
  kcg_equ = kcg_equ & (kcg_c1->PADDING3 == kcg_c2->PADDING3);
  kcg_equ = kcg_equ & (kcg_c1->NID_ENGINE == kcg_c2->NID_ENGINE);
  kcg_equ = kcg_equ & (kcg_c1->T_TRAIN == kcg_c2->T_TRAIN);
  kcg_equ = kcg_equ & (kcg_c1->L_MESSAGE == kcg_c2->L_MESSAGE);
  kcg_equ = kcg_equ & (kcg_c1->NID_MESSAGE == kcg_c2->NID_MESSAGE);
  return kcg_equ;
}
#endif /* kcg_use_Train_Position_Report_Radio_TrainToTrack */

#ifdef kcg_use_Assignment_of_coordinate_system_Radio_TrackToTrain
kcg_bool kcg_comp_Assignment_of_coordinate_system_Radio_TrackToTrain(
  Assignment_of_coordinate_system_Radio_TrackToTrain *kcg_c1,
  Assignment_of_coordinate_system_Radio_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Q_ORIENTATION == kcg_c2->Q_ORIENTATION);
  kcg_equ = kcg_equ & (kcg_c1->NID_LRBG == kcg_c2->NID_LRBG);
  kcg_equ = kcg_equ & (kcg_c1->M_ACK == kcg_c2->M_ACK);
  kcg_equ = kcg_equ & (kcg_c1->T_TRAIN == kcg_c2->T_TRAIN);
  kcg_equ = kcg_equ & (kcg_c1->L_MESSAGE == kcg_c2->L_MESSAGE);
  kcg_equ = kcg_equ & (kcg_c1->NID_MESSAGE == kcg_c2->NID_MESSAGE);
  return kcg_equ;
}
#endif /* kcg_use_Assignment_of_coordinate_system_Radio_TrackToTrain */

#ifdef kcg_use_CurrentLRBG
kcg_bool kcg_comp_CurrentLRBG(CurrentLRBG *kcg_c1, CurrentLRBG *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_Position(&kcg_c1->position, &kcg_c2->position);
  kcg_equ = kcg_equ & kcg_comp_FilteredBGMessage(
      &kcg_c1->filteredbgmessage,
      &kcg_c2->filteredbgmessage);
  return kcg_equ;
}
#endif /* kcg_use_CurrentLRBG */

#ifdef kcg_use_CheckedBGMessage
kcg_bool kcg_comp_CheckedBGMessage(
  CheckedBGMessage *kcg_c1,
  CheckedBGMessage *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->additionalinformation ==
      kcg_c2->additionalinformation);
  kcg_equ = kcg_equ & kcg_comp_HederArray(
      &kcg_c1->headerflag,
      &kcg_c2->headerflag);
  return kcg_equ;
}
#endif /* kcg_use_CheckedBGMessage */

#ifdef kcg_use_RBCOrientationReport
kcg_bool kcg_comp_RBCOrientationReport(
  RBCOrientationReport *kcg_c1,
  RBCOrientationReport *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ &
    kcg_comp_Assignment_of_coordinate_system_Radio_TrackToTrain(
      &kcg_c1->assignment_of_coordinate_system,
      &kcg_c2->assignment_of_coordinate_system);
  return kcg_equ;
}
#endif /* kcg_use_RBCOrientationReport */

#ifdef kcg_use_Position
kcg_bool kcg_comp_Position(Position *kcg_c1, Position *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Position_1 == kcg_c2->Position_1);
  return kcg_equ;
}
#endif /* kcg_use_Position */

/* $************* KCG Version 6.4 beta5 (build i13) *************
** kcg_types.c
** Generation date: 2014-06-11T16:39:34
*************************************************************$ */

