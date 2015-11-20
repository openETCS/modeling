/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:47
*************************************************************$ */

#include "kcg_types.h"

#ifdef kcg_use_array_bool_4
kcg_bool kcg_comp_array_bool_4(array_bool_4 *kcg_c1, array_bool_4 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 4; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_bool_4 */

#ifdef kcg_use_array_int_4
kcg_bool kcg_comp_array_int_4(array_int_4 *kcg_c1, array_int_4 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 4; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_4 */

#ifdef kcg_use_linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg
kcg_bool kcg_comp_linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *kcg_c1,
  linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 41; kcg_ci++) {
    kcg_equ = kcg_equ &
      kcg_comp_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg */

#ifdef kcg_use_array_int_289
kcg_bool kcg_comp_array_int_289(array_int_289 *kcg_c1, array_int_289 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 289; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_289 */

#ifdef kcg_use_array_real_4
kcg_bool kcg_comp_array_real_4(array_real_4 *kcg_c1, array_real_4 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 4; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_real_4 */

#ifdef kcg_use_RadioTrackTrainMessageQueueEntries_T
kcg_bool kcg_comp_RadioTrackTrainMessageQueueEntries_T(
  RadioTrackTrainMessageQueueEntries_T *kcg_c1,
  RadioTrackTrainMessageQueueEntries_T *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 8; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_RadioTrackTrainMessageQueueEntry_T(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_RadioTrackTrainMessageQueueEntries_T */

#ifdef kcg_use_array_int_2_4_8
kcg_bool kcg_comp_array_int_2_4_8(
  array_int_2_4_8 *kcg_c1,
  array_int_2_4_8 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 8; kcg_ci++) {
    kcg_equ = kcg_equ &
      kcg_comp_P011_voltage_sectionlist_array_T_TM_TrainToTrack(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_2_4_8 */

#ifdef kcg_use_array_int_492
kcg_bool kcg_comp_array_int_492(array_int_492 *kcg_c1, array_int_492 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 492; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_492 */

#ifdef kcg_use_array_168400
kcg_bool kcg_comp_array_168400(array_168400 *kcg_c1, array_168400 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 10; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_MovementAuthoritySectionlist_t_TrackAtlasTypes(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_168400 */

#ifdef kcg_use_array_168410
kcg_bool kcg_comp_array_168410(array_168410 *kcg_c1, array_168410 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 10; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P015_OBU_sectionlist_enum_T_TM(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_168410 */

#ifdef kcg_use_StaticSpeedProfile_t_TrackAtlasTypes
kcg_bool kcg_comp_StaticSpeedProfile_t_TrackAtlasTypes(
  StaticSpeedProfile_t_TrackAtlasTypes *kcg_c1,
  StaticSpeedProfile_t_TrackAtlasTypes *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 50; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_StaticSpeedSection_t_TrackAtlasTypes(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_StaticSpeedProfile_t_TrackAtlasTypes */

#ifdef kcg_use_GradientProfile_t_TrackAtlasTypes
kcg_bool kcg_comp_GradientProfile_t_TrackAtlasTypes(
  GradientProfile_t_TrackAtlasTypes *kcg_c1,
  GradientProfile_t_TrackAtlasTypes *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 50; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_Gradient_section_t_TrackAtlasTypes(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_GradientProfile_t_TrackAtlasTypes */

#ifdef kcg_use_array_int_285
kcg_bool kcg_comp_array_int_285(array_int_285 *kcg_c1, array_int_285 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 285; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_285 */

#ifdef kcg_use_array_168486
kcg_bool kcg_comp_array_168486(array_168486 *kcg_c1, array_168486 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 29; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_MetadataElement_T_Common_Types_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_168486 */

#ifdef kcg_use_array_168496
kcg_bool kcg_comp_array_168496(array_168496 *kcg_c1, array_168496 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 1; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_MsgStructure(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_168496 */

#ifdef kcg_use_array_168500
kcg_bool kcg_comp_array_168500(array_168500 *kcg_c1, array_168500 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 1; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_RadioTrackTrainMessageQueueEntry_T(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_168500 */

#ifdef kcg_use_GradientProfile_for_DMI_t_TrackAtlasTypes
kcg_bool kcg_comp_GradientProfile_for_DMI_t_TrackAtlasTypes(
  GradientProfile_for_DMI_t_TrackAtlasTypes *kcg_c1,
  GradientProfile_for_DMI_t_TrackAtlasTypes *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 50; kcg_ci++) {
    kcg_equ = kcg_equ &
      kcg_comp_GradientProfile_for_DMI_section_t_TrackAtlasTypes(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_GradientProfile_for_DMI_t_TrackAtlasTypes */

#ifdef kcg_use_array_168524
kcg_bool kcg_comp_array_168524(array_168524 *kcg_c1, array_168524 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 2; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_M_TrainTrack_Message_T_TM_radio_messages(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_168524 */

#ifdef kcg_use_TelegramArray_T_BG_Types_Pkg
kcg_bool kcg_comp_TelegramArray_T_BG_Types_Pkg(
  TelegramArray_T_BG_Types_Pkg *kcg_c1,
  TelegramArray_T_BG_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 8; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_Telegram_T_BG_Types_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_TelegramArray_T_BG_Types_Pkg */

#ifdef kcg_use_array_168531
kcg_bool kcg_comp_array_168531(array_168531 *kcg_c1, array_168531 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 8; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_168531 */

#ifdef kcg_use_array_168535
kcg_bool kcg_comp_array_168535(array_168535 *kcg_c1, array_168535 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 1; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_Target_real_T_TargetManagement_types(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_168535 */

#ifdef kcg_use_array_int_894
kcg_bool kcg_comp_array_int_894(array_int_894 *kcg_c1, array_int_894 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 894; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_894 */

#ifdef kcg_use_P41_LevelTransistionOrders_T_Packet_Types_Pkg
kcg_bool kcg_comp_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
  P41_LevelTransistionOrders_T_Packet_Types_Pkg *kcg_c1,
  P41_LevelTransistionOrders_T_Packet_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 7; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P41_LevelTransitionOrder_T_Packet_Types_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_P41_LevelTransistionOrders_T_Packet_Types_Pkg */

#ifdef kcg_use_array_168567
kcg_bool kcg_comp_array_168567(array_168567 *kcg_c1, array_168567 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_trainProperties_T_TrainPosition_Types_Pck(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_168567 */

#ifdef kcg_use_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck
kcg_bool kcg_comp_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck(
  linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck *kcg_c1,
  linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_positionedBG_T_TrainPosition_Types_Pck(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck */

#ifdef kcg_use_P005_OBU_sectionlist_enum_T_TM
kcg_bool kcg_comp_P005_OBU_sectionlist_enum_T_TM(
  P005_OBU_sectionlist_enum_T_TM *kcg_c1,
  P005_OBU_sectionlist_enum_T_TM *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P005_section_enum_T_TM(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_P005_OBU_sectionlist_enum_T_TM */

#ifdef kcg_use_LinkedBGs_T_BG_Types_Pkg
kcg_bool kcg_comp_LinkedBGs_T_BG_Types_Pkg(
  LinkedBGs_T_BG_Types_Pkg *kcg_c1,
  LinkedBGs_T_BG_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_LinkedBG_T_BG_Types_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_LinkedBGs_T_BG_Types_Pkg */

#ifdef kcg_use_P005_OBU_sectionlist_int_T_TM
kcg_bool kcg_comp_P005_OBU_sectionlist_int_T_TM(
  P005_OBU_sectionlist_int_T_TM *kcg_c1,
  P005_OBU_sectionlist_int_T_TM *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P005_section_int_T_TM(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_P005_OBU_sectionlist_int_T_TM */

#ifdef kcg_use_array_168602
kcg_bool kcg_comp_array_168602(array_168602 *kcg_c1, array_168602 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 98; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_M_TrainTrack_Message_T_TM_radio_messages(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_168602 */

#ifdef kcg_use_array_168614
kcg_bool kcg_comp_array_168614(array_168614 *kcg_c1, array_168614 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 1; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P027V1_section_int_T_TM_baseline2(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_168614 */

#ifdef kcg_use_array_real_10_10
kcg_bool kcg_comp_array_real_10_10(
  array_real_10_10 *kcg_c1,
  array_real_10_10 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 10; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_array_real_10(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_real_10_10 */

#ifdef kcg_use_array_168647
kcg_bool kcg_comp_array_168647(array_168647 *kcg_c1, array_168647 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct_170172(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_168647 */

#ifdef kcg_use_array_bool_113
kcg_bool kcg_comp_array_bool_113(array_bool_113 *kcg_c1, array_bool_113 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 113; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_bool_113 */

#ifdef kcg_use_Target_list_MRSP_real_T_TargetManagement_types
kcg_bool kcg_comp_Target_list_MRSP_real_T_TargetManagement_types(
  Target_list_MRSP_real_T_TargetManagement_types *kcg_c1,
  Target_list_MRSP_real_T_TargetManagement_types *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 110; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_Target_real_T_TargetManagement_types(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_Target_list_MRSP_real_T_TargetManagement_types */

#ifdef kcg_use_array_168667
kcg_bool kcg_comp_array_168667(array_168667 *kcg_c1, array_168667 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 2; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P058_OBU_sectionlist_enum_T_TM(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_168667 */

#ifdef kcg_use_array_real_113
kcg_bool kcg_comp_array_real_113(array_real_113 *kcg_c1, array_real_113 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 113; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_real_113 */

#ifdef kcg_use_array_int_31
kcg_bool kcg_comp_array_int_31(array_int_31 *kcg_c1, array_int_31 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 31; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_31 */

#ifdef kcg_use_DMI_level_array_T_DMI_Types_Pkg
kcg_bool kcg_comp_DMI_level_array_T_DMI_Types_Pkg(
  DMI_level_array_T_DMI_Types_Pkg *kcg_c1,
  DMI_level_array_T_DMI_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_DMI_level_T_DMI_Types_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_DMI_level_array_T_DMI_Types_Pkg */

#ifdef kcg_use_array_int_70
kcg_bool kcg_comp_array_int_70(array_int_70 *kcg_c1, array_int_70 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 70; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_70 */

#ifdef kcg_use_array_168713
kcg_bool kcg_comp_array_168713(array_168713 *kcg_c1, array_168713 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 8; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_OdometryLocations_T_Obu_BasicTypes_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_168713 */

#ifdef kcg_use_array_int_964
kcg_bool kcg_comp_array_int_964(array_int_964 *kcg_c1, array_int_964 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 964; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_964 */

#ifdef kcg_use_P046_sections_array_flat_T_TM
kcg_bool kcg_comp_P046_sections_array_flat_T_TM(
  P046_sections_array_flat_T_TM *kcg_c1,
  P046_sections_array_flat_T_TM *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 66; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_P046_sections_array_flat_T_TM */

#ifdef kcg_use_array_int_269
kcg_bool kcg_comp_array_int_269(array_int_269 *kcg_c1, array_int_269 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 269; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_269 */

#ifdef kcg_use_array_int_105
kcg_bool kcg_comp_array_int_105(array_int_105 *kcg_c1, array_int_105 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 105; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_105 */

#ifdef kcg_use_array_int_2_32
kcg_bool kcg_comp_array_int_2_32(array_int_2_32 *kcg_c1, array_int_2_32 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_array_int_2(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_2_32 */

#ifdef kcg_use_array_168759
kcg_bool kcg_comp_array_168759(array_168759 *kcg_c1, array_168759 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 1; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P041_section_int_T_TM(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_168759 */

#ifdef kcg_use_array_int_8_4
kcg_bool kcg_comp_array_int_8_4(array_int_8_4 *kcg_c1, array_int_8_4 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 4; kcg_ci++) {
    kcg_equ = kcg_equ &
      kcg_comp_P011_voltage_sections_array_flat_t_TM_TrainToTrack(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_8_4 */

#ifdef kcg_use_array_int_23
kcg_bool kcg_comp_array_int_23(array_int_23 *kcg_c1, array_int_23 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 23; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_23 */

#ifdef kcg_use_LevelDecisionTableType_DataDictionary_Pkg
kcg_bool kcg_comp_LevelDecisionTableType_DataDictionary_Pkg(
  LevelDecisionTableType_DataDictionary_Pkg *kcg_c1,
  LevelDecisionTableType_DataDictionary_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 256; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_array_172689(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_LevelDecisionTableType_DataDictionary_Pkg */

#ifdef kcg_use_array_int_66_33
kcg_bool kcg_comp_array_int_66_33(
  array_int_66_33 *kcg_c1,
  array_int_66_33 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P046_sections_array_flat_T_TM(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_66_33 */

#ifdef kcg_use_array_168778
kcg_bool kcg_comp_array_168778(array_168778 *kcg_c1, array_168778 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 30; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_Metadata_T_Common_Types_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_168778 */

#ifdef kcg_use_ReportedBGList_T_ProvidePositionReport_Pkg
kcg_bool kcg_comp_ReportedBGList_T_ProvidePositionReport_Pkg(
  ReportedBGList_T_ProvidePositionReport_Pkg *kcg_c1,
  ReportedBGList_T_ProvidePositionReport_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 8; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_ReportedBG_T_ProvidePositionReport_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_ReportedBGList_T_ProvidePositionReport_Pkg */

#ifdef kcg_use_array_168785
kcg_bool kcg_comp_array_168785(array_168785 *kcg_c1, array_168785 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P058_section_int_T_TM(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_168785 */

#ifdef kcg_use_array_168789
kcg_bool kcg_comp_array_168789(array_168789 *kcg_c1, array_168789 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 9; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_MsgStructure(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_168789 */

#ifdef kcg_use_array_168822
kcg_bool kcg_comp_array_168822(array_168822 *kcg_c1, array_168822 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 113; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_ASafe_T_CalcBrakingCurves_types(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_168822 */

#ifdef kcg_use_EVC_to_DMI_Message_int_T_API_DMI_Pkg
kcg_bool kcg_comp_EVC_to_DMI_Message_int_T_API_DMI_Pkg(
  EVC_to_DMI_Message_int_T_API_DMI_Pkg *kcg_c1,
  EVC_to_DMI_Message_int_T_API_DMI_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 999; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_EVC_to_DMI_Message_int_T_API_DMI_Pkg */

#ifdef kcg_use_array_168941
kcg_bool kcg_comp_array_168941(array_168941 *kcg_c1, array_168941 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 110; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_MRSP_internal_T_TargetManagement_types(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_168941 */

#ifdef kcg_use_P046_trackide_sectionlist_T_TM
kcg_bool kcg_comp_P046_trackide_sectionlist_T_TM(
  P046_trackide_sectionlist_T_TM *kcg_c1,
  P046_trackide_sectionlist_T_TM *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P046_section_int_T_TM(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_P046_trackide_sectionlist_T_TM */

#ifdef kcg_use_array_int_304
kcg_bool kcg_comp_array_int_304(array_int_304 *kcg_c1, array_int_304 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 304; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_304 */

#ifdef kcg_use_array_168969
kcg_bool kcg_comp_array_168969(array_168969 *kcg_c1, array_168969 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 10; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_array_169451(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_168969 */

#ifdef kcg_use_array_168973
kcg_bool kcg_comp_array_168973(array_168973 *kcg_c1, array_168973 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 41; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_trainProperties_T_TrainPosition_Types_Pck(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_168973 */

#ifdef kcg_use_positionedBGs_T_TrainPosition_Types_Pck
kcg_bool kcg_comp_positionedBGs_T_TrainPosition_Types_Pck(
  positionedBGs_T_TrainPosition_Types_Pck *kcg_c1,
  positionedBGs_T_TrainPosition_Types_Pck *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 41; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_positionedBG_T_TrainPosition_Types_Pck(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_positionedBGs_T_TrainPosition_Types_Pck */

#ifdef kcg_use_array_168986
kcg_bool kcg_comp_array_168986(array_168986 *kcg_c1, array_168986 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P021_OBU_sectionlist_enum_T_TM(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_168986 */

#ifdef kcg_use_array_168990
kcg_bool kcg_comp_array_168990(array_168990 *kcg_c1, array_168990 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 9; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_ErrorMessage_T_ProvidePositionReport_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_168990 */

#ifdef kcg_use_Metadata_T_Common_Types_Pkg
kcg_bool kcg_comp_Metadata_T_Common_Types_Pkg(
  Metadata_T_Common_Types_Pkg *kcg_c1,
  Metadata_T_Common_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 30; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_MetadataElement_T_Common_Types_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_Metadata_T_Common_Types_Pkg */

#ifdef kcg_use_MRSP_Profile_t_TrackAtlasTypes
kcg_bool kcg_comp_MRSP_Profile_t_TrackAtlasTypes(
  MRSP_Profile_t_TrackAtlasTypes *kcg_c1,
  MRSP_Profile_t_TrackAtlasTypes *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 110; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_MRSP_section_t_TrackAtlasTypes(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_MRSP_Profile_t_TrackAtlasTypes */

#ifdef kcg_use_array_169000
kcg_bool kcg_comp_array_169000(array_169000 *kcg_c1, array_169000 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 3; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_M_TrainTrack_Message_T_TM_radio_messages(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_169000 */

#ifdef kcg_use_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg
kcg_bool kcg_comp_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg(
  T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg *kcg_c1,
  T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 7; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_T_LevelTransition_Level_And_Mode_Types_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_array_int_261
kcg_bool kcg_comp_array_int_261(array_int_261 *kcg_c1, array_int_261 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 261; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_261 */

#ifdef kcg_use_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg
kcg_bool kcg_comp_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg(
  P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg *kcg_c1,
  P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 7; kcg_ci++) {
    kcg_equ = kcg_equ &
      kcg_comp_P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg */

#ifdef kcg_use_array_169014
kcg_bool kcg_comp_array_169014(array_169014 *kcg_c1, array_169014 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 7; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_169014 */

#ifdef kcg_use_nvkvintArray_T_Packet_Types_Pkg
kcg_bool kcg_comp_nvkvintArray_T_Packet_Types_Pkg(
  nvkvintArray_T_Packet_Types_Pkg *kcg_c1,
  nvkvintArray_T_Packet_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 7; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_nvkvint_T_Packet_Types_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_nvkvintArray_T_Packet_Types_Pkg */

#ifdef kcg_use_array_int_97
kcg_bool kcg_comp_array_int_97(array_int_97 *kcg_c1, array_int_97 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 97; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_97 */

#ifdef kcg_use_array_bool_15
kcg_bool kcg_comp_array_bool_15(array_bool_15 *kcg_c1, array_bool_15 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 15; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_bool_15 */

#ifdef kcg_use_array_int_15
kcg_bool kcg_comp_array_int_15(array_int_15 *kcg_c1, array_int_15 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 15; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_15 */

#ifdef kcg_use_array_169066
kcg_bool kcg_comp_array_169066(array_169066 *kcg_c1, array_169066 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct_172264(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_169066 */

#ifdef kcg_use_P005_trackide_sectionlist_T_TM
kcg_bool kcg_comp_P005_trackide_sectionlist_T_TM(
  P005_trackide_sectionlist_T_TM *kcg_c1,
  P005_trackide_sectionlist_T_TM *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P005_section_int_T_TM(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_P005_trackide_sectionlist_T_TM */

#ifdef kcg_use_Array_DMI_Q_Text
kcg_bool kcg_comp_Array_DMI_Q_Text(
  Array_DMI_Q_Text *kcg_c1,
  Array_DMI_Q_Text *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 27; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_Array_DMI_Q_Text */

#ifdef kcg_use_array_169076
kcg_bool kcg_comp_array_169076(array_169076 *kcg_c1, array_169076 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 31; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P003V1_section_enum_T_TM_baseline2(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_169076 */

#ifdef kcg_use_array_169086
kcg_bool kcg_comp_array_169086(array_169086 *kcg_c1, array_169086 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 41; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_positionedBGs_T_TrainPosition_Types_Pck(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_169086 */

#ifdef kcg_use_array_169095
kcg_bool kcg_comp_array_169095(array_169095 *kcg_c1, array_169095 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 110; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_odometry_T_Obu_BasicTypes_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_169095 */

#ifdef kcg_use_array_169099
kcg_bool kcg_comp_array_169099(array_169099 *kcg_c1, array_169099 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 110; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_T_trac_t_TargetLimits_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_169099 */

#ifdef kcg_use_array_169103
kcg_bool kcg_comp_array_169103(array_169103 *kcg_c1, array_169103 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 16; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_DiagMsg_T_RBC_Diagnostic_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_169103 */

#ifdef kcg_use_array_169119
kcg_bool kcg_comp_array_169119(array_169119 *kcg_c1, array_169119 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 99; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_M_TrainTrack_Message_T_TM_radio_messages(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_169119 */

#ifdef kcg_use_array_169123
kcg_bool kcg_comp_array_169123(array_169123 *kcg_c1, array_169123 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 109; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_Target_real_T_TargetManagement_types(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_169123 */

#ifdef kcg_use_array_169127
kcg_bool kcg_comp_array_169127(array_169127 *kcg_c1, array_169127 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 30; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_169127 */

#ifdef kcg_use_array_169131
kcg_bool kcg_comp_array_169131(array_169131 *kcg_c1, array_169131 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 7; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P046_OBU_sectionlist_enum_T_TM(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_169131 */

#ifdef kcg_use_array_int_11
kcg_bool kcg_comp_array_int_11(array_int_11 *kcg_c1, array_int_11 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 11; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_11 */

#ifdef kcg_use_array_169171
kcg_bool kcg_comp_array_169171(array_169171 *kcg_c1, array_169171 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 1; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P003V1_section_enum_T_TM_baseline2(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_169171 */

#ifdef kcg_use_array_int_499
kcg_bool kcg_comp_array_int_499(array_int_499 *kcg_c1, array_int_499 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 499; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_499 */

#ifdef kcg_use_array_bool_50
kcg_bool kcg_comp_array_bool_50(array_bool_50 *kcg_c1, array_bool_50 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 50; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_bool_50 */

#ifdef kcg_use_array_real_100_8
kcg_bool kcg_comp_array_real_100_8(
  array_real_100_8 *kcg_c1,
  array_real_100_8 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 8; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_array_real_100(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_real_100_8 */

#ifdef kcg_use_M_TrainTrack_compressed_packets_T_TM_radio_messages
kcg_bool kcg_comp_M_TrainTrack_compressed_packets_T_TM_radio_messages(
  M_TrainTrack_compressed_packets_T_TM_radio_messages *kcg_c1,
  M_TrainTrack_compressed_packets_T_TM_radio_messages *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 50; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_M_TrainTrack_compressed_packets_T_TM_radio_messages */

#ifdef kcg_use_array_real_50
kcg_bool kcg_comp_array_real_50(array_real_50 *kcg_c1, array_real_50 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 50; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_real_50 */

#ifdef kcg_use_array_int_987
kcg_bool kcg_comp_array_int_987(array_int_987 *kcg_c1, array_int_987 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 987; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_987 */

#ifdef kcg_use_array_bool_7
kcg_bool kcg_comp_array_bool_7(array_bool_7 *kcg_c1, array_bool_7 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 7; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_bool_7 */

#ifdef kcg_use_array_169242
kcg_bool kcg_comp_array_169242(array_169242 *kcg_c1, array_169242 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 5; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_169242 */

#ifdef kcg_use_array_169246
kcg_bool kcg_comp_array_169246(array_169246 *kcg_c1, array_169246 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 7; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_169246 */

#ifdef kcg_use_array_int_7
kcg_bool kcg_comp_array_int_7(array_int_7 *kcg_c1, array_int_7 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 7; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_7 */

#ifdef kcg_use_array_int_292
kcg_bool kcg_comp_array_int_292(array_int_292 *kcg_c1, array_int_292 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 292; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_292 */

#ifdef kcg_use_array_int_4_32_128
kcg_bool kcg_comp_array_int_4_32_128(
  array_int_4_32_128 *kcg_c1,
  array_int_4_32_128 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 128; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P015_OBU_sectionlist_array_T_TM(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_4_32_128 */

#ifdef kcg_use_array_int_128
kcg_bool kcg_comp_array_int_128(array_int_128 *kcg_c1, array_int_128 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 128; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_128 */

#ifdef kcg_use_array_169285
kcg_bool kcg_comp_array_169285(array_169285 *kcg_c1, array_169285 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 7; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_169285 */

#ifdef kcg_use_array_169300
kcg_bool kcg_comp_array_169300(array_169300 *kcg_c1, array_169300 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 30; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_169300 */

#ifdef kcg_use_array_int_64_32
kcg_bool kcg_comp_array_int_64_32(
  array_int_64_32 *kcg_c1,
  array_int_64_32 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_array_int_64(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_64_32 */

#ifdef kcg_use_P005_OBU_sectionlist_array_T_TM
kcg_bool kcg_comp_P005_OBU_sectionlist_array_T_TM(
  P005_OBU_sectionlist_array_T_TM *kcg_c1,
  P005_OBU_sectionlist_array_T_TM *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P005_section_array_T_TM(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_P005_OBU_sectionlist_array_T_TM */

#ifdef kcg_use_array_int_3
kcg_bool kcg_comp_array_int_3(array_int_3 *kcg_c1, array_int_3 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 3; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_3 */

#ifdef kcg_use_array_real_100_13
kcg_bool kcg_comp_array_real_100_13(
  array_real_100_13 *kcg_c1,
  array_real_100_13 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 13; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_ASafeRow_T_CalcBrakingCurves_types(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_real_100_13 */

#ifdef kcg_use_array_real_3
kcg_bool kcg_comp_array_real_3(array_real_3 *kcg_c1, array_real_3 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 3; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_real_3 */

#ifdef kcg_use_array_169371
kcg_bool kcg_comp_array_169371(array_169371 *kcg_c1, array_169371 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 50; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_GradientProfile_t_TrackAtlasTypes(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_169371 */

#ifdef kcg_use_array_169375
kcg_bool kcg_comp_array_169375(array_169375 *kcg_c1, array_169375 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 50; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_StaticSpeedProfile_t_TrackAtlasTypes(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_169375 */

#ifdef kcg_use_array_int_491
kcg_bool kcg_comp_array_int_491(array_int_491 *kcg_c1, array_int_491 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 491; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_491 */

#ifdef kcg_use_array_int_42
kcg_bool kcg_comp_array_int_42(array_int_42 *kcg_c1, array_int_42 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 42; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_42 */

#ifdef kcg_use_array_int_3_33
kcg_bool kcg_comp_array_int_3_33(array_int_3_33 *kcg_c1, array_int_3_33 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_array_int_3(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_3_33 */

#ifdef kcg_use_array_169420
kcg_bool kcg_comp_array_169420(array_169420 *kcg_c1, array_169420 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 40; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_positionedBG_T_TrainPosition_Types_Pck(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_169420 */

#ifdef kcg_use_array_int_500_500
kcg_bool kcg_comp_array_int_500_500(
  array_int_500_500 *kcg_c1,
  array_int_500_500 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 500; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_CompressedPacketData_T_Common_Types_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_500_500 */

#ifdef kcg_use_array_169437
kcg_bool kcg_comp_array_169437(array_169437 *kcg_c1, array_169437 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 5; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_169437 */

#ifdef kcg_use_array_169441
kcg_bool kcg_comp_array_169441(array_169441 *kcg_c1, array_169441 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 5; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P015_OBU_T_TM(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_169441 */

#ifdef kcg_use_P15_Level23MovementAuthorities_T_Packet_Types_Pkg
kcg_bool kcg_comp_P15_Level23MovementAuthorities_T_Packet_Types_Pkg(
  P15_Level23MovementAuthorities_T_Packet_Types_Pkg *kcg_c1,
  P15_Level23MovementAuthorities_T_Packet_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 5; kcg_ci++) {
    kcg_equ = kcg_equ &
      kcg_comp_P15_Level23MovementAuthority_T_Packet_Types_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_P15_Level23MovementAuthorities_T_Packet_Types_Pkg */

#ifdef kcg_use_P12_Level1MovementAuthorities_T_Packet_Types_Pkg
kcg_bool kcg_comp_P12_Level1MovementAuthorities_T_Packet_Types_Pkg(
  P12_Level1MovementAuthorities_T_Packet_Types_Pkg *kcg_c1,
  P12_Level1MovementAuthorities_T_Packet_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 5; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P12_Level1MovementAuthority_T_Packet_Types_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_P12_Level1MovementAuthorities_T_Packet_Types_Pkg */

#ifdef kcg_use_array_169451
kcg_bool kcg_comp_array_169451(array_169451 *kcg_c1, array_169451 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 10; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_MsgStructure(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_169451 */

#ifdef kcg_use_array_169464
kcg_bool kcg_comp_array_169464(array_169464 *kcg_c1, array_169464 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 5; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P015_OBU_sectionlist_enum_T_TM(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_169464 */

#ifdef kcg_use_array_int_975
kcg_bool kcg_comp_array_int_975(array_int_975 *kcg_c1, array_int_975 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 975; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_975 */

#ifdef kcg_use_array_int_444
kcg_bool kcg_comp_array_int_444(array_int_444 *kcg_c1, array_int_444 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 444; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_444 */

#ifdef kcg_use_array_real_5_5
kcg_bool kcg_comp_array_real_5_5(array_real_5_5 *kcg_c1, array_real_5_5 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 5; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_array_real_5(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_real_5_5 */

#ifdef kcg_use_DMI_TXT_MSGList_status_T_DMI_Types_Pkg
kcg_bool kcg_comp_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg *kcg_c1,
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 31; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_DMI_TXT_MSG_status_T_DMI_Types_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_DMI_TXT_MSGList_status_T_DMI_Types_Pkg */

#ifdef kcg_use_array_int_280
kcg_bool kcg_comp_array_int_280(array_int_280 *kcg_c1, array_int_280 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 280; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_280 */

#ifdef kcg_use_array_169506
kcg_bool kcg_comp_array_169506(array_169506 *kcg_c1, array_169506 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 4; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_M_TrainTrack_Message_T_TM_radio_messages(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_169506 */

#ifdef kcg_use_MovementAuthoritySectionlist_t_TrackAtlasTypes
kcg_bool kcg_comp_MovementAuthoritySectionlist_t_TrackAtlasTypes(
  MovementAuthoritySectionlist_t_TrackAtlasTypes *kcg_c1,
  MovementAuthoritySectionlist_t_TrackAtlasTypes *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 10; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_MovementAuthoritySection_t_TrackAtlasTypes(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_MovementAuthoritySectionlist_t_TrackAtlasTypes */

#ifdef kcg_use_array_real_100_1
kcg_bool kcg_comp_array_real_100_1(
  array_real_100_1 *kcg_c1,
  array_real_100_1 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 1; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_array_real_100(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_real_100_1 */

#ifdef kcg_use_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal
kcg_bool kcg_comp_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
  M_TrainTrackRadioOutputBuffer_t_TM_lib_internal *kcg_c1,
  M_TrainTrackRadioOutputBuffer_t_TM_lib_internal *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 100; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_M_TrainTrack_Message_T_TM_radio_messages(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal */

#ifdef kcg_use_array_169580
kcg_bool kcg_comp_array_169580(array_169580 *kcg_c1, array_169580 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 10; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_ParabolaCurve_T_CalcBrakingCurves_types(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_169580 */

#ifdef kcg_use_array_169593
kcg_bool kcg_comp_array_169593(array_169593 *kcg_c1, array_169593 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 100; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_trainData_T_TIU_Types_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_169593 */

#ifdef kcg_use_DMI_Available_Menu_int_T_DATA
kcg_bool kcg_comp_DMI_Available_Menu_int_T_DATA(
  DMI_Available_Menu_int_T_DATA *kcg_c1,
  DMI_Available_Menu_int_T_DATA *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 30; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_DMI_Available_Menu_int_T_DATA */

#ifdef kcg_use_array_int_30
kcg_bool kcg_comp_array_int_30(array_int_30 *kcg_c1, array_int_30 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 30; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_30 */

#ifdef kcg_use_array_char_30
kcg_bool kcg_comp_array_char_30(array_char_30 *kcg_c1, array_char_30 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 30; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_char_30 */

#ifdef kcg_use_T_Mode_Profile_Table_Level_And_Mode_Types_Pkg
kcg_bool kcg_comp_T_Mode_Profile_Table_Level_And_Mode_Types_Pkg(
  T_Mode_Profile_Table_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Mode_Profile_Table_Level_And_Mode_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 3; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_T_Mode_Profile_Level_And_Mode_Types_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_T_Mode_Profile_Table_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_P046_OBU_sectionlist_enum_T_TM
kcg_bool kcg_comp_P046_OBU_sectionlist_enum_T_TM(
  P046_OBU_sectionlist_enum_T_TM *kcg_c1,
  P046_OBU_sectionlist_enum_T_TM *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P046_section_enum_T_TM(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_P046_OBU_sectionlist_enum_T_TM */

#ifdef kcg_use_array_169645
kcg_bool kcg_comp_array_169645(array_169645 *kcg_c1, array_169645 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct_169021(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_169645 */

#ifdef kcg_use_DMI_to_EVC_Message_int_T_API_DMI_Pkg
kcg_bool kcg_comp_DMI_to_EVC_Message_int_T_API_DMI_Pkg(
  DMI_to_EVC_Message_int_T_API_DMI_Pkg *kcg_c1,
  DMI_to_EVC_Message_int_T_API_DMI_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 311; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_DMI_to_EVC_Message_int_T_API_DMI_Pkg */

#ifdef kcg_use_P041_trackide_sectionlist_T_TM
kcg_bool kcg_comp_P041_trackide_sectionlist_T_TM(
  P041_trackide_sectionlist_T_TM *kcg_c1,
  P041_trackide_sectionlist_T_TM *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P041_section_int_T_TM(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_P041_trackide_sectionlist_T_TM */

#ifdef kcg_use_array_real_100_6
kcg_bool kcg_comp_array_real_100_6(
  array_real_100_6 *kcg_c1,
  array_real_100_6 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 6; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_ASafeRow_T_CalcBrakingCurves_types(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_real_100_6 */

#ifdef kcg_use_array_int_432
kcg_bool kcg_comp_array_int_432(array_int_432 *kcg_c1, array_int_432 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 432; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_432 */

#ifdef kcg_use_array_int_65
kcg_bool kcg_comp_array_int_65(array_int_65 *kcg_c1, array_int_65 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 65; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_65 */

#ifdef kcg_use_array_int_350
kcg_bool kcg_comp_array_int_350(array_int_350 *kcg_c1, array_int_350 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 350; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_350 */

#ifdef kcg_use_array_int_104
kcg_bool kcg_comp_array_int_104(array_int_104 *kcg_c1, array_int_104 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 104; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_104 */

#ifdef kcg_use_array_int_22
kcg_bool kcg_comp_array_int_22(array_int_22 *kcg_c1, array_int_22 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 22; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_22 */

#ifdef kcg_use_array_169698
kcg_bool kcg_comp_array_169698(array_169698 *kcg_c1, array_169698 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 13; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_av_Map_t_SDMConversionModelPkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_169698 */

#ifdef kcg_use_array_int_307
kcg_bool kcg_comp_array_int_307(array_int_307 *kcg_c1, array_int_307 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 307; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_307 */

#ifdef kcg_use_array_169712
kcg_bool kcg_comp_array_169712(array_169712 *kcg_c1, array_169712 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 13; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_mv_Map_t_SDMConversionModelPkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_169712 */

#ifdef kcg_use_array_int_428
kcg_bool kcg_comp_array_int_428(array_int_428 *kcg_c1, array_int_428 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 428; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_428 */

#ifdef kcg_use_MRSP_internal_T_TargetManagement_types
kcg_bool kcg_comp_MRSP_internal_T_TargetManagement_types(
  MRSP_internal_T_TargetManagement_types *kcg_c1,
  MRSP_internal_T_TargetManagement_types *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 110; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_MRSP_internal_section_T_TargetManagement_types(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_MRSP_internal_T_TargetManagement_types */

#ifdef kcg_use_array_int_264
kcg_bool kcg_comp_array_int_264(array_int_264 *kcg_c1, array_int_264 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 264; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_264 */

#ifdef kcg_use_array_169735
kcg_bool kcg_comp_array_169735(array_169735 *kcg_c1, array_169735 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 4; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct_169965(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_169735 */

#ifdef kcg_use_array_169739
kcg_bool kcg_comp_array_169739(array_169739 *kcg_c1, array_169739 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_IterPacket58_T_Packet_Types_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_169739 */

#ifdef kcg_use_array_int_18
kcg_bool kcg_comp_array_int_18(array_int_18 *kcg_c1, array_int_18 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 18; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_18 */

#ifdef kcg_use_array_169747
kcg_bool kcg_comp_array_169747(array_169747 *kcg_c1, array_169747 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 30; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_169747 */

#ifdef kcg_use_array_real_100
kcg_bool kcg_comp_array_real_100(array_real_100 *kcg_c1, array_real_100 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 100; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_real_100 */

#ifdef kcg_use_array_int_221
kcg_bool kcg_comp_array_int_221(array_int_221 *kcg_c1, array_int_221 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 221; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_221 */

#ifdef kcg_use_A_gradient_t_SDM_GradientAcceleration_types
kcg_bool kcg_comp_A_gradient_t_SDM_GradientAcceleration_types(
  A_gradient_t_SDM_GradientAcceleration_types *kcg_c1,
  A_gradient_t_SDM_GradientAcceleration_types *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 100; kcg_ci++) {
    kcg_equ = kcg_equ &
      kcg_comp_A_gradient_element_t_SDM_GradientAcceleration_types(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_A_gradient_t_SDM_GradientAcceleration_types */

#ifdef kcg_use_GradientProfile_real_compensated_t_SDM_GradientAcceleration_types
kcg_bool kcg_comp_GradientProfile_real_compensated_t_SDM_GradientAcceleration_types(
  GradientProfile_real_compensated_t_SDM_GradientAcceleration_types *kcg_c1,
  GradientProfile_real_compensated_t_SDM_GradientAcceleration_types *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 100; kcg_ci++) {
    kcg_equ = kcg_equ &
      kcg_comp_Gradient_section_real_t_SDM_GradientAcceleration_types(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_GradientProfile_real_compensated_t_SDM_GradientAcceleration_types */

#ifdef kcg_use_array_169776
kcg_bool kcg_comp_array_169776(array_169776 *kcg_c1, array_169776 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 30; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_trainPosition_T_TrainPosition_Types_Pck(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_169776 */

#ifdef kcg_use_array_int_627
kcg_bool kcg_comp_array_int_627(array_int_627 *kcg_c1, array_int_627 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 627; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_627 */

#ifdef kcg_use_array_int_260
kcg_bool kcg_comp_array_int_260(array_int_260 *kcg_c1, array_int_260 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 260; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_260 */

#ifdef kcg_use_MyArray_SDM_Commands_Pkg
kcg_bool kcg_comp_MyArray_SDM_Commands_Pkg(
  MyArray_SDM_Commands_Pkg *kcg_c1,
  MyArray_SDM_Commands_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 14; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_MyArray_SDM_Commands_Pkg */

#ifdef kcg_use_array_int_14
kcg_bool kcg_comp_array_int_14(array_int_14 *kcg_c1, array_int_14 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 14; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_14 */

#ifdef kcg_use_ASafeSpeedDefinition_T_CalcBrakingCurves_types
kcg_bool kcg_comp_ASafeSpeedDefinition_T_CalcBrakingCurves_types(
  ASafeSpeedDefinition_T_CalcBrakingCurves_types *kcg_c1,
  ASafeSpeedDefinition_T_CalcBrakingCurves_types *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 14; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_ASafeSpeedDefinition_T_CalcBrakingCurves_types */

#ifdef kcg_use_P041_OBU_sectionlist_int_T_TM
kcg_bool kcg_comp_P041_OBU_sectionlist_int_T_TM(
  P041_OBU_sectionlist_int_T_TM *kcg_c1,
  P041_OBU_sectionlist_int_T_TM *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P041_section_int_T_TM(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_P041_OBU_sectionlist_int_T_TM */

#ifdef kcg_use_array_169813
kcg_bool kcg_comp_array_169813(array_169813 *kcg_c1, array_169813 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 5; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_M_TrainTrack_Message_T_TM_radio_messages(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_169813 */

#ifdef kcg_use_array_int_32_32
kcg_bool kcg_comp_array_int_32_32(
  array_int_32_32 *kcg_c1,
  array_int_32_32 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P003V1_OBU_sectionlist_int_T_TM_baseline2(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_32_32 */

#ifdef kcg_use_array_169831
kcg_bool kcg_comp_array_169831(array_169831 *kcg_c1, array_169831 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 7; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P021_OBU_sectionlist_enum_T_TM(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_169831 */

#ifdef kcg_use_array_169835
kcg_bool kcg_comp_array_169835(array_169835 *kcg_c1, array_169835 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 7; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P041_OBU_sectionlist_enum_T_TM(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_169835 */

#ifdef kcg_use_GradientProfile_real_t_SDM_GradientAcceleration_types
kcg_bool kcg_comp_GradientProfile_real_t_SDM_GradientAcceleration_types(
  GradientProfile_real_t_SDM_GradientAcceleration_types *kcg_c1,
  GradientProfile_real_t_SDM_GradientAcceleration_types *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 50; kcg_ci++) {
    kcg_equ = kcg_equ &
      kcg_comp_Gradient_section_real_t_SDM_GradientAcceleration_types(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_GradientProfile_real_t_SDM_GradientAcceleration_types */

#ifdef kcg_use_array_bool_256
kcg_bool kcg_comp_array_bool_256(array_bool_256 *kcg_c1, array_bool_256 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 256; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_bool_256 */

#ifdef kcg_use_array_int_990
kcg_bool kcg_comp_array_int_990(array_int_990 *kcg_c1, array_int_990 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 990; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_990 */

#ifdef kcg_use_array_bool_10
kcg_bool kcg_comp_array_bool_10(array_bool_10 *kcg_c1, array_bool_10 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 10; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_bool_10 */

#ifdef kcg_use_P015_OBU_sectionlist_enum_T_TM
kcg_bool kcg_comp_P015_OBU_sectionlist_enum_T_TM(
  P015_OBU_sectionlist_enum_T_TM *kcg_c1,
  P015_OBU_sectionlist_enum_T_TM *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P015_section_enum_T_TM(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_P015_OBU_sectionlist_enum_T_TM */

#ifdef kcg_use_P027V1_trackside_sectionlist_T_TM_baseline2
kcg_bool kcg_comp_P027V1_trackside_sectionlist_T_TM_baseline2(
  P027V1_trackside_sectionlist_T_TM_baseline2 *kcg_c1,
  P027V1_trackside_sectionlist_T_TM_baseline2 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P027V1_section_int_T_TM_baseline2(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_P027V1_trackside_sectionlist_T_TM_baseline2 */

#ifdef kcg_use_array_int_10
kcg_bool kcg_comp_array_int_10(array_int_10 *kcg_c1, array_int_10 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 10; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_10 */

#ifdef kcg_use_array_169894
kcg_bool kcg_comp_array_169894(array_169894 *kcg_c1, array_169894 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 4; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_MsgStructure(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_169894 */

#ifdef kcg_use_array_169898
kcg_bool kcg_comp_array_169898(array_169898 *kcg_c1, array_169898 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 7; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_169898 */

#ifdef kcg_use_array_real_10
kcg_bool kcg_comp_array_real_10(array_real_10 *kcg_c1, array_real_10 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 10; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_real_10 */

#ifdef kcg_use_array_int_131
kcg_bool kcg_comp_array_int_131(array_int_131 *kcg_c1, array_int_131 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 131; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_131 */

#ifdef kcg_use_array_169945
kcg_bool kcg_comp_array_169945(array_169945 *kcg_c1, array_169945 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_CompressedPackets_T_Common_Types_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_169945 */

#ifdef kcg_use_array_int_6
kcg_bool kcg_comp_array_int_6(array_int_6 *kcg_c1, array_int_6 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 6; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_6 */

#ifdef kcg_use_array_real_6
kcg_bool kcg_comp_array_real_6(array_real_6 *kcg_c1, array_real_6 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 6; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_real_6 */

#ifdef kcg_use_array_char_30_5_5
kcg_bool kcg_comp_array_char_30_5_5(
  array_char_30_5_5 *kcg_c1,
  array_char_30_5_5 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 5; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_array_char_30_5(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_char_30_5_5 */

#ifdef kcg_use_array_int_494
kcg_bool kcg_comp_array_int_494(array_int_494 *kcg_c1, array_int_494 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 494; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_494 */

#ifdef kcg_use_array_int_2
kcg_bool kcg_comp_array_int_2(array_int_2 *kcg_c1, array_int_2 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 2; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_2 */

#ifdef kcg_use_t_BrakeVt_t_SDMModelPkg
kcg_bool kcg_comp_t_BrakeVt_t_SDMModelPkg(
  t_BrakeVt_t_SDMModelPkg *kcg_c1,
  t_BrakeVt_t_SDMModelPkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 2; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_t_BrakeVt_t_SDMModelPkg */

#ifdef kcg_use_Array_DMI_List_Entry_Request
kcg_bool kcg_comp_Array_DMI_List_Entry_Request(
  Array_DMI_List_Entry_Request *kcg_c1,
  Array_DMI_List_Entry_Request *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 15; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_Array_DMI_List_Entry_Request */

#ifdef kcg_use_array_bool_41
kcg_bool kcg_comp_array_bool_41(array_bool_41 *kcg_c1, array_bool_41 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 41; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_bool_41 */

#ifdef kcg_use_array_int_41
kcg_bool kcg_comp_array_int_41(array_int_41 *kcg_c1, array_int_41 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 41; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_41 */

#ifdef kcg_use_array_int_6_221
kcg_bool kcg_comp_array_int_6_221(
  array_int_6_221 *kcg_c1,
  array_int_6_221 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 221; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_array_int_6(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_6_221 */

#ifdef kcg_use_array_int_978
kcg_bool kcg_comp_array_int_978(array_int_978 *kcg_c1, array_int_978 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 978; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_978 */

#ifdef kcg_use_P046_OBU_sectionlist_array_T_TM
kcg_bool kcg_comp_P046_OBU_sectionlist_array_T_TM(
  P046_OBU_sectionlist_array_T_TM *kcg_c1,
  P046_OBU_sectionlist_array_T_TM *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P046_section_array_T_TM(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_P046_OBU_sectionlist_array_T_TM */

#ifdef kcg_use_TransitionBuffer_T_InformationFilter_Pkg
kcg_bool kcg_comp_TransitionBuffer_T_InformationFilter_Pkg(
  TransitionBuffer_T_InformationFilter_Pkg *kcg_c1,
  TransitionBuffer_T_InformationFilter_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 3; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_ReceivedMessage_T_Common_Types_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_TransitionBuffer_T_InformationFilter_Pkg */

#ifdef kcg_use_P80_ModeProfiles_T_Packet_Types_Pkg
kcg_bool kcg_comp_P80_ModeProfiles_T_Packet_Types_Pkg(
  P80_ModeProfiles_T_Packet_Types_Pkg *kcg_c1,
  P80_ModeProfiles_T_Packet_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 3; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P80_ModeProfile_T_Packet_Types_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_P80_ModeProfiles_T_Packet_Types_Pkg */

#ifdef kcg_use_array_int_283
kcg_bool kcg_comp_array_int_283(array_int_283 *kcg_c1, array_int_283 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 283; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_283 */

#ifdef kcg_use_array_int_2_32_32
kcg_bool kcg_comp_array_int_2_32_32(
  array_int_2_32_32 *kcg_c1,
  array_int_2_32_32 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_array_int_2_32(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_2_32_32 */

#ifdef kcg_use_DMI_trackConditionArray_T_DMI_Types_Pkg
kcg_bool kcg_comp_DMI_trackConditionArray_T_DMI_Types_Pkg(
  DMI_trackConditionArray_T_DMI_Types_Pkg *kcg_c1,
  DMI_trackConditionArray_T_DMI_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_DMI_trackConditionElement_T_DMI_Types_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_DMI_trackConditionArray_T_DMI_Types_Pkg */

#ifdef kcg_use_array_170141
kcg_bool kcg_comp_array_170141(array_170141 *kcg_c1, array_170141 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 1; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P021_section_int_T_TM(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_170141 */

#ifdef kcg_use_array_170158
kcg_bool kcg_comp_array_170158(array_170158 *kcg_c1, array_170158 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P015_section_int_T_TM(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_170158 */

#ifdef kcg_use_DMI_gradientProfileArray_T_DMI_Types_Pkg
kcg_bool kcg_comp_DMI_gradientProfileArray_T_DMI_Types_Pkg(
  DMI_gradientProfileArray_T_DMI_Types_Pkg *kcg_c1,
  DMI_gradientProfileArray_T_DMI_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_DMI_gradientProfileElement_T_DMI_Types_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_DMI_gradientProfileArray_T_DMI_Types_Pkg */

#ifdef kcg_use_DMI_SpeedProfileArray_T_DMI_Types_Pkg
kcg_bool kcg_comp_DMI_SpeedProfileArray_T_DMI_Types_Pkg(
  DMI_SpeedProfileArray_T_DMI_Types_Pkg *kcg_c1,
  DMI_SpeedProfileArray_T_DMI_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_DMI_speedProfileElement_T_DMI_Types_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_DMI_SpeedProfileArray_T_DMI_Types_Pkg */

#ifdef kcg_use_array_170168
kcg_bool kcg_comp_array_170168(array_170168 *kcg_c1, array_170168 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 100; kcg_ci++) {
    kcg_equ = kcg_equ &
      kcg_comp_GradientProfile_real_t_SDM_GradientAcceleration_types(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_170168 */

#ifdef kcg_use_array_170178
kcg_bool kcg_comp_array_170178(array_170178 *kcg_c1, array_170178 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct_170221(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_170178 */

#ifdef kcg_use_array_170182
kcg_bool kcg_comp_array_170182(array_170182 *kcg_c1, array_170182 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct_169865(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_170182 */

#ifdef kcg_use_array_170186
kcg_bool kcg_comp_array_170186(array_170186 *kcg_c1, array_170186 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 110; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_trainData_internal_t_SDM_Types_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_170186 */

#ifdef kcg_use_array_170198
kcg_bool kcg_comp_array_170198(array_170198 *kcg_c1, array_170198 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 14; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_A_gradient_t_SDM_GradientAcceleration_types(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_170198 */

#ifdef kcg_use_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types
kcg_bool kcg_comp_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types(
  ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types *kcg_c1,
  ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 110; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_ParabolaCurve_T_CalcBrakingCurves_types(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types */

#ifdef kcg_use_array_170229
kcg_bool kcg_comp_array_170229(array_170229 *kcg_c1, array_170229 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 5; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_MsgStructure(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_170229 */

#ifdef kcg_use_array_int_33
kcg_bool kcg_comp_array_int_33(array_int_33 *kcg_c1, array_int_33 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_33 */

#ifdef kcg_use_array_170237
kcg_bool kcg_comp_array_170237(array_170237 *kcg_c1, array_170237 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 110; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_t_Brake_t_SDMModelPkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_170237 */

#ifdef kcg_use_array_int_236
kcg_bool kcg_comp_array_int_236(array_int_236 *kcg_c1, array_int_236 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 236; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_236 */

#ifdef kcg_use_array_170250
kcg_bool kcg_comp_array_170250(array_170250 *kcg_c1, array_170250 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 50; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P027V1_OBU_sectionlist_enum_T_TM_baseline2(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_170250 */

#ifdef kcg_use_array_int_888
kcg_bool kcg_comp_array_int_888(array_int_888 *kcg_c1, array_int_888 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 888; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_888 */

#ifdef kcg_use_array_170263
kcg_bool kcg_comp_array_170263(array_170263 *kcg_c1, array_170263 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 17; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_170263 */

#ifdef kcg_use_array_int_72
kcg_bool kcg_comp_array_int_72(array_int_72 *kcg_c1, array_int_72 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 72; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_72 */

#ifdef kcg_use_array_int_396
kcg_bool kcg_comp_array_int_396(array_int_396 *kcg_c1, array_int_396 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 396; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_396 */

#ifdef kcg_use_P058_OBU_sectionlist_enum_T_TM
kcg_bool kcg_comp_P058_OBU_sectionlist_enum_T_TM(
  P058_OBU_sectionlist_enum_T_TM *kcg_c1,
  P058_OBU_sectionlist_enum_T_TM *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P058_section_enum_T_TM(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_P058_OBU_sectionlist_enum_T_TM */

#ifdef kcg_use_array_170320
kcg_bool kcg_comp_array_170320(array_170320 *kcg_c1, array_170320 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 5; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_API_TrackSideInput_T_API_Msg_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_170320 */

#ifdef kcg_use_array_int_150
kcg_bool kcg_comp_array_int_150(array_int_150 *kcg_c1, array_int_150 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 150; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_150 */

#ifdef kcg_use_P027V1_OBU_sectionlist_enum_T_TM_baseline2
kcg_bool kcg_comp_P027V1_OBU_sectionlist_enum_T_TM_baseline2(
  P027V1_OBU_sectionlist_enum_T_TM_baseline2 *kcg_c1,
  P027V1_OBU_sectionlist_enum_T_TM_baseline2 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P027V1_section_enum_T_TM_baseline2(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_P027V1_OBU_sectionlist_enum_T_TM_baseline2 */

#ifdef kcg_use_P027V1_OBU_sectionlist_int_T_TM_baseline2
kcg_bool kcg_comp_P027V1_OBU_sectionlist_int_T_TM_baseline2(
  P027V1_OBU_sectionlist_int_T_TM_baseline2 *kcg_c1,
  P027V1_OBU_sectionlist_int_T_TM_baseline2 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P027V1_section_int_T_TM_baseline2(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_P027V1_OBU_sectionlist_int_T_TM_baseline2 */

#ifdef kcg_use_nidCArray_T_Packet_Types_Pkg
kcg_bool kcg_comp_nidCArray_T_Packet_Types_Pkg(
  nidCArray_T_Packet_Types_Pkg *kcg_c1,
  nidCArray_T_Packet_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 7; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_nidC_T_Packet_Types_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_nidCArray_T_Packet_Types_Pkg */

#ifdef kcg_use_array_int_68
kcg_bool kcg_comp_array_int_68(array_int_68 *kcg_c1, array_int_68 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 68; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_68 */

#ifdef kcg_use_array_170353
kcg_bool kcg_comp_array_170353(array_170353 *kcg_c1, array_170353 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 8; kcg_ci++) {
    kcg_equ = kcg_equ &
      kcg_comp_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_170353 */

#ifdef kcg_use_array_int_3_33_99
kcg_bool kcg_comp_array_int_3_33_99(
  array_int_3_33_99 *kcg_c1,
  array_int_3_33_99 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 99; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_array_int_3_33(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_3_33_99 */

#ifdef kcg_use_array_int_2_32_64
kcg_bool kcg_comp_array_int_2_32_64(
  array_int_2_32_64 *kcg_c1,
  array_int_2_32_64 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 64; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_array_int_2_32(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_2_32_64 */

#ifdef kcg_use_P021_trackide_sectionlist_T_TM
kcg_bool kcg_comp_P021_trackide_sectionlist_T_TM(
  P021_trackide_sectionlist_T_TM *kcg_c1,
  P021_trackide_sectionlist_T_TM *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P021_section_int_T_TM(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_P021_trackide_sectionlist_T_TM */

#ifdef kcg_use_P015_OBU_sectionlist_array_T_TM
kcg_bool kcg_comp_P015_OBU_sectionlist_array_T_TM(
  P015_OBU_sectionlist_array_T_TM *kcg_c1,
  P015_OBU_sectionlist_array_T_TM *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P015_section_array_T_TM(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_P015_OBU_sectionlist_array_T_TM */

#ifdef kcg_use_array_int_25
kcg_bool kcg_comp_array_int_25(array_int_25 *kcg_c1, array_int_25 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 25; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_25 */

#ifdef kcg_use_array_170382
kcg_bool kcg_comp_array_170382(array_170382 *kcg_c1, array_170382 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 110; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_MRSP_Profile_t_TrackAtlasTypes(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_170382 */

#ifdef kcg_use_array_int_64
kcg_bool kcg_comp_array_int_64(array_int_64 *kcg_c1, array_int_64 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 64; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_64 */

#ifdef kcg_use_array_170418
kcg_bool kcg_comp_array_170418(array_170418 *kcg_c1, array_170418 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 10; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_170418 */

#ifdef kcg_use_array_int_21
kcg_bool kcg_comp_array_int_21(array_int_21 *kcg_c1, array_int_21 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 21; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_21 */

#ifdef kcg_use_SSP_cat_t_TA_MRSP
kcg_bool kcg_comp_SSP_cat_t_TA_MRSP(
  SSP_cat_t_TA_MRSP *kcg_c1,
  SSP_cat_t_TA_MRSP *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_SSP_section_t_TA_MRSP(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_SSP_cat_t_TA_MRSP */

#ifdef kcg_use_nvkrintArray_T_Packet_Types_Pkg
kcg_bool kcg_comp_nvkrintArray_T_Packet_Types_Pkg(
  nvkrintArray_T_Packet_Types_Pkg *kcg_c1,
  nvkrintArray_T_Packet_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 7; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_nvkrint_T_Packet_Types_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_nvkrintArray_T_Packet_Types_Pkg */

#ifdef kcg_use_array_170437
kcg_bool kcg_comp_array_170437(array_170437 *kcg_c1, array_170437 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 2; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_ReceivedMessage_T_Common_Types_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_170437 */

#ifdef kcg_use_ASafe_Data_T_CalcBrakingCurves_types
kcg_bool kcg_comp_ASafe_Data_T_CalcBrakingCurves_types(
  ASafe_Data_T_CalcBrakingCurves_types *kcg_c1,
  ASafe_Data_T_CalcBrakingCurves_types *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 14; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_ASafeRow_T_CalcBrakingCurves_types(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_ASafe_Data_T_CalcBrakingCurves_types */

#ifdef kcg_use_array_170449
kcg_bool kcg_comp_array_170449(array_170449 *kcg_c1, array_170449 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 95; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_M_TrainTrack_Message_T_TM_radio_messages(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_170449 */

#ifdef kcg_use_array_int_99
kcg_bool kcg_comp_array_int_99(array_int_99 *kcg_c1, array_int_99 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 99; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_99 */

#ifdef kcg_use_P011_voltage_sectionlist_array_T_TM_TrainToTrack
kcg_bool kcg_comp_P011_voltage_sectionlist_array_T_TM_TrainToTrack(
  P011_voltage_sectionlist_array_T_TM_TrainToTrack *kcg_c1,
  P011_voltage_sectionlist_array_T_TM_TrainToTrack *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 4; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P011_voltage_section_array_T_TM_TrainToTrack(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_P011_voltage_sectionlist_array_T_TM_TrainToTrack */

#ifdef kcg_use_array_int_17
kcg_bool kcg_comp_array_int_17(array_int_17 *kcg_c1, array_int_17 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 17; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_17 */

#ifdef kcg_use_array_int_302
kcg_bool kcg_comp_array_int_302(array_int_302 *kcg_c1, array_int_302 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 302; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_302 */

#ifdef kcg_use_array_int_56
kcg_bool kcg_comp_array_int_56(array_int_56 *kcg_c1, array_int_56 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 56; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_56 */

#ifdef kcg_use_array_real_9_6
kcg_bool kcg_comp_array_real_9_6(array_real_9_6 *kcg_c1, array_real_9_6 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 6; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_tScale(&(*kcg_c1)[kcg_ci], &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_real_9_6 */

#ifdef kcg_use_array_int_99_33
kcg_bool kcg_comp_array_int_99_33(
  array_int_99_33 *kcg_c1,
  array_int_99_33 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_array_int_99(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_99_33 */

#ifdef kcg_use_array_int_13
kcg_bool kcg_comp_array_int_13(array_int_13 *kcg_c1, array_int_13 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 13; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_13 */

#ifdef kcg_use_array_real_13
kcg_bool kcg_comp_array_real_13(array_real_13 *kcg_c1, array_real_13 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 13; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_real_13 */

#ifdef kcg_use_array_170535
kcg_bool kcg_comp_array_170535(array_170535 *kcg_c1, array_170535 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 41; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_170535 */

#ifdef kcg_use_array_bool_256_46_30
kcg_bool kcg_comp_array_bool_256_46_30(
  array_bool_256_46_30 *kcg_c1,
  array_bool_256_46_30 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 30; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_MetadataTruthtable_T1_CheckEuroradioMessage(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_bool_256_46_30 */

#ifdef kcg_use_array_170543
kcg_bool kcg_comp_array_170543(array_170543 *kcg_c1, array_170543 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_170543 */

#ifdef kcg_use_P021_OBU_sectionlist_int_T_TM
kcg_bool kcg_comp_P021_OBU_sectionlist_int_T_TM(
  P021_OBU_sectionlist_int_T_TM *kcg_c1,
  P021_OBU_sectionlist_int_T_TM *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P021_section_int_T_TM(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_P021_OBU_sectionlist_int_T_TM */

#ifdef kcg_use_DMI_TEXT_INT_Array_T_DATA
kcg_bool kcg_comp_DMI_TEXT_INT_Array_T_DATA(
  DMI_TEXT_INT_Array_T_DATA *kcg_c1,
  DMI_TEXT_INT_Array_T_DATA *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 255; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_DMI_TEXT_INT_Array_T_DATA */

#ifdef kcg_use_array_170575
kcg_bool kcg_comp_array_170575(array_170575 *kcg_c1, array_170575 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_170575 */

#ifdef kcg_use_array_170597
kcg_bool kcg_comp_array_170597(array_170597 *kcg_c1, array_170597 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 10; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_170597 */

#ifdef kcg_use_array_170601
kcg_bool kcg_comp_array_170601(array_170601 *kcg_c1, array_170601 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 10; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_T_trac_t_TargetLimits_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_170601 */

#ifdef kcg_use_array_170605
kcg_bool kcg_comp_array_170605(array_170605 *kcg_c1, array_170605 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 110; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_ASafe_T_CalcBrakingCurves_types(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_170605 */

#ifdef kcg_use_DMI_TEXT_DMI_Types_Pkg
kcg_bool kcg_comp_DMI_TEXT_DMI_Types_Pkg(
  DMI_TEXT_DMI_Types_Pkg *kcg_c1,
  DMI_TEXT_DMI_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 255; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_DMI_TEXT_DMI_Types_Pkg */

#ifdef kcg_use_array_int_9
kcg_bool kcg_comp_array_int_9(array_int_9 *kcg_c1, array_int_9 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 9; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_9 */

#ifdef kcg_use_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2
kcg_bool kcg_comp_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2(
  P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 *kcg_c1,
  P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P027V1_section_enum_qdiff_T_TM_baseline2(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 */

#ifdef kcg_use_tScale
kcg_bool kcg_comp_tScale(tScale *kcg_c1, tScale *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 9; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_tScale */

#ifdef kcg_use_driverIdentifier_T_DMI_Messages_Bothways_Pkg
kcg_bool kcg_comp_driverIdentifier_T_DMI_Messages_Bothways_Pkg(
  driverIdentifier_T_DMI_Messages_Bothways_Pkg *kcg_c1,
  driverIdentifier_T_DMI_Messages_Bothways_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 9; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_driverIdentifier_T_DMI_Messages_Bothways_Pkg */

#ifdef kcg_use_P041_OBU_sectionlist_enum_T_TM
kcg_bool kcg_comp_P041_OBU_sectionlist_enum_T_TM(
  P041_OBU_sectionlist_enum_T_TM *kcg_c1,
  P041_OBU_sectionlist_enum_T_TM *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P041_section_enum_T_TM(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_P041_OBU_sectionlist_enum_T_TM */

#ifdef kcg_use_P021_OBU_sectionlist_enum_T_TM
kcg_bool kcg_comp_P021_OBU_sectionlist_enum_T_TM(
  P021_OBU_sectionlist_enum_T_TM *kcg_c1,
  P021_OBU_sectionlist_enum_T_TM *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P021_section_enum_T_TM(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_P021_OBU_sectionlist_enum_T_TM */

#ifdef kcg_use_array_int_48
kcg_bool kcg_comp_array_int_48(array_int_48 *kcg_c1, array_int_48 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 48; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_48 */

#ifdef kcg_use_array_170644
kcg_bool kcg_comp_array_170644(array_170644 *kcg_c1, array_170644 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 1; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P005_section_int_T_TM(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_170644 */

#ifdef kcg_use_array_170648
kcg_bool kcg_comp_array_170648(array_170648 *kcg_c1, array_170648 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 1; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_positionedBG_T_TrainPosition_Types_Pck(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_170648 */

#ifdef kcg_use_array_170652
kcg_bool kcg_comp_array_170652(array_170652 *kcg_c1, array_170652 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 1; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_ReceivedMessage_T_Common_Types_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_170652 */

#ifdef kcg_use_SSP_matrix_t_TA_MRSP
kcg_bool kcg_comp_SSP_matrix_t_TA_MRSP(
  SSP_matrix_t_TA_MRSP *kcg_c1,
  SSP_matrix_t_TA_MRSP *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 11; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_SSP_cat_t_TA_MRSP(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_SSP_matrix_t_TA_MRSP */

#ifdef kcg_use_array_bool_5
kcg_bool kcg_comp_array_bool_5(array_bool_5 *kcg_c1, array_bool_5 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 5; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_bool_5 */

#ifdef kcg_use_array_int_5
kcg_bool kcg_comp_array_int_5(array_int_5 *kcg_c1, array_int_5 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 5; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_5 */

#ifdef kcg_use_array_real_5
kcg_bool kcg_comp_array_real_5(array_real_5 *kcg_c1, array_real_5 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 5; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_real_5 */

#ifdef kcg_use_array_170701
kcg_bool kcg_comp_array_170701(array_170701 *kcg_c1, array_170701 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 50; kcg_ci++) {
    kcg_equ = kcg_equ &
      kcg_comp_GradientProfile_real_t_SDM_GradientAcceleration_types(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_170701 */

#ifdef kcg_use_array_bool_1
kcg_bool kcg_comp_array_bool_1(array_bool_1 *kcg_c1, array_bool_1 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 1; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_bool_1 */

#ifdef kcg_use_P044_other_data_TM_TrainToTrack
kcg_bool kcg_comp_P044_other_data_TM_TrainToTrack(
  P044_other_data_TM_TrainToTrack *kcg_c1,
  P044_other_data_TM_TrainToTrack *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 1; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_P044_other_data_TM_TrainToTrack */

#ifdef kcg_use_array_real_1
kcg_bool kcg_comp_array_real_1(array_real_1 *kcg_c1, array_real_1 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 1; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_real_1 */

#ifdef kcg_use_array_int_40
kcg_bool kcg_comp_array_int_40(array_int_40 *kcg_c1, array_int_40 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 40; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_40 */

#ifdef kcg_use_DMI_Track_Description_int_array_T
kcg_bool kcg_comp_DMI_Track_Description_int_array_T(
  DMI_Track_Description_int_array_T *kcg_c1,
  DMI_Track_Description_int_array_T *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 325; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_DMI_Track_Description_int_array_T */

#ifdef kcg_use_tSpeedPoints
kcg_bool kcg_comp_tSpeedPoints(tSpeedPoints *kcg_c1, tSpeedPoints *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 2; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_array_real_10(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_tSpeedPoints */

#ifdef kcg_use_array_char_243
kcg_bool kcg_comp_array_char_243(array_char_243 *kcg_c1, array_char_243 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 243; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_char_243 */

#ifdef kcg_use_array_170759
kcg_bool kcg_comp_array_170759(array_170759 *kcg_c1, array_170759 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 96; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_M_TrainTrack_Message_T_TM_radio_messages(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_170759 */

#ifdef kcg_use_ModeDecisionTableType_DataDictionary_Pkg
kcg_bool kcg_comp_ModeDecisionTableType_DataDictionary_Pkg(
  ModeDecisionTableType_DataDictionary_Pkg *kcg_c1,
  ModeDecisionTableType_DataDictionary_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 256; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_array_170263(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_ModeDecisionTableType_DataDictionary_Pkg */

#ifdef kcg_use_MetadataTruthtable_T1_CheckEuroradioMessage
kcg_bool kcg_comp_MetadataTruthtable_T1_CheckEuroradioMessage(
  MetadataTruthtable_T1_CheckEuroradioMessage *kcg_c1,
  MetadataTruthtable_T1_CheckEuroradioMessage *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 46; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_array_bool_256(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_MetadataTruthtable_T1_CheckEuroradioMessage */

#ifdef kcg_use_array_170789
kcg_bool kcg_comp_array_170789(array_170789 *kcg_c1, array_170789 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 110; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_StaticSpeedProfile_t_TrackAtlasTypes(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_170789 */

#ifdef kcg_use_array_int_891
kcg_bool kcg_comp_array_int_891(array_int_891 *kcg_c1, array_int_891 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 891; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_891 */

#ifdef kcg_use_aNID_RADIO_T_Packet_TrainTypes_Pkg
kcg_bool kcg_comp_aNID_RADIO_T_Packet_TrainTypes_Pkg(
  aNID_RADIO_T_Packet_TrainTypes_Pkg *kcg_c1,
  aNID_RADIO_T_Packet_TrainTypes_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 1; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_sNID_RADIO_T_Packet_TrainTypes_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_aNID_RADIO_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_array_170826
kcg_bool kcg_comp_array_170826(array_170826 *kcg_c1, array_170826 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P027V1_section_int_qdiff_T_TM_baseline2(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_170826 */

#ifdef kcg_use_ParabolaCurveValid_T_CalcBrakingCurves_types
kcg_bool kcg_comp_ParabolaCurveValid_T_CalcBrakingCurves_types(
  ParabolaCurveValid_T_CalcBrakingCurves_types *kcg_c1,
  ParabolaCurveValid_T_CalcBrakingCurves_types *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 114; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_ParabolaCurveValid_T_CalcBrakingCurves_types */

#ifdef kcg_use_array_bool_32
kcg_bool kcg_comp_array_bool_32(array_bool_32 *kcg_c1, array_bool_32 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_bool_32 */

#ifdef kcg_use_array_real_114
kcg_bool kcg_comp_array_real_114(array_real_114 *kcg_c1, array_real_114 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 114; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_real_114 */

#ifdef kcg_use_array_int_32
kcg_bool kcg_comp_array_int_32(array_int_32 *kcg_c1, array_int_32 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_32 */

#ifdef kcg_use_array_real_32
kcg_bool kcg_comp_array_real_32(array_real_32 *kcg_c1, array_real_32 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_real_32 */

#ifdef kcg_use_array_int_7_33_231
kcg_bool kcg_comp_array_int_7_33_231(
  array_int_7_33_231 *kcg_c1,
  array_int_7_33_231 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 231; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P005_OBU_sectionlist_array_T_TM(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_7_33_231 */

#ifdef kcg_use_array_bool_110
kcg_bool kcg_comp_array_bool_110(array_bool_110 *kcg_c1, array_bool_110 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 110; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_bool_110 */

#ifdef kcg_use_array_int_110
kcg_bool kcg_comp_array_int_110(array_int_110 *kcg_c1, array_int_110 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 110; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_110 */

#ifdef kcg_use_array_int_395
kcg_bool kcg_comp_array_int_395(array_int_395 *kcg_c1, array_int_395 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 395; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_395 */

#ifdef kcg_use_array_real_110
kcg_bool kcg_comp_array_real_110(array_real_110 *kcg_c1, array_real_110 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 110; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_real_110 */

#ifdef kcg_use_array_int_28
kcg_bool kcg_comp_array_int_28(array_int_28 *kcg_c1, array_int_28 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 28; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_28 */

#ifdef kcg_use_array_170971
kcg_bool kcg_comp_array_170971(array_170971 *kcg_c1, array_170971 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 1; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P046_section_int_T_TM(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_170971 */

#ifdef kcg_use_array_170975
kcg_bool kcg_comp_array_170975(array_170975 *kcg_c1, array_170975 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 7; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_RadioTrackTrainMessageQueueEntry_T(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_170975 */

#ifdef kcg_use_array_int_128_32
kcg_bool kcg_comp_array_int_128_32(
  array_int_128_32 *kcg_c1,
  array_int_128_32 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_array_int_128(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_128_32 */

#ifdef kcg_use_P005_sections_array_flat_T_TM
kcg_bool kcg_comp_P005_sections_array_flat_T_TM(
  P005_sections_array_flat_T_TM *kcg_c1,
  P005_sections_array_flat_T_TM *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 231; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_P005_sections_array_flat_T_TM */

#ifdef kcg_use_DMI_EVC_Level_Data_int_array_T_DATA
kcg_bool kcg_comp_DMI_EVC_Level_Data_int_array_T_DATA(
  DMI_EVC_Level_Data_int_array_T_DATA *kcg_c1,
  DMI_EVC_Level_Data_int_array_T_DATA *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 67; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_DMI_EVC_Level_Data_int_array_T_DATA */

#ifdef kcg_use_array_int_2_33_99
kcg_bool kcg_comp_array_int_2_33_99(
  array_int_2_33_99 *kcg_c1,
  array_int_2_33_99 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 99; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P046_OBU_sectionlist_array_T_TM(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_2_33_99 */

#ifdef kcg_use_P046_OBU_sectionlist_int_T_TM
kcg_bool kcg_comp_P046_OBU_sectionlist_int_T_TM(
  P046_OBU_sectionlist_int_T_TM *kcg_c1,
  P046_OBU_sectionlist_int_T_TM *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P046_section_int_T_TM(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_P046_OBU_sectionlist_int_T_TM */

#ifdef kcg_use_IterPacket58List_T_Packet_Types_Pkg
kcg_bool kcg_comp_IterPacket58List_T_Packet_Types_Pkg(
  IterPacket58List_T_Packet_Types_Pkg *kcg_c1,
  IterPacket58List_T_Packet_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 2; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_IterPacket58_T_Packet_Types_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_IterPacket58List_T_Packet_Types_Pkg */

#ifdef kcg_use_array_int_3_33_231
kcg_bool kcg_comp_array_int_3_33_231(
  array_int_3_33_231 *kcg_c1,
  array_int_3_33_231 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 231; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_array_int_3_33(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_3_33_231 */

#ifdef kcg_use_array_int_231_33
kcg_bool kcg_comp_array_int_231_33(
  array_int_231_33 *kcg_c1,
  array_int_231_33 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P005_sections_array_flat_T_TM(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_231_33 */

#ifdef kcg_use_array_int_24
kcg_bool kcg_comp_array_int_24(array_int_24 *kcg_c1, array_int_24 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 24; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_24 */

#ifdef kcg_use_array_int_961
kcg_bool kcg_comp_array_int_961(array_int_961 *kcg_c1, array_int_961 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 961; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_961 */

#ifdef kcg_use_array_int_430
kcg_bool kcg_comp_array_int_430(array_int_430 *kcg_c1, array_int_430 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 430; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_430 */

#ifdef kcg_use_array_172617
kcg_bool kcg_comp_array_172617(array_172617 *kcg_c1, array_172617 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 7; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_172617 */

#ifdef kcg_use_array_172621
kcg_bool kcg_comp_array_172621(array_172621 *kcg_c1, array_172621 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 7; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P021_OBU_T_TM(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_172621 */

#ifdef kcg_use_SSPArray_T_Packet_Types_Pkg
kcg_bool kcg_comp_SSPArray_T_Packet_Types_Pkg(
  SSPArray_T_Packet_Types_Pkg *kcg_c1,
  SSPArray_T_Packet_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 7; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_SSP_T_Packet_Types_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_SSPArray_T_Packet_Types_Pkg */

#ifdef kcg_use_DiffArray_T_Packet_Types_Pkg
kcg_bool kcg_comp_DiffArray_T_Packet_Types_Pkg(
  DiffArray_T_Packet_Types_Pkg *kcg_c1,
  DiffArray_T_Packet_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 7; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_Diff_T_Packet_Types_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_DiffArray_T_Packet_Types_Pkg */

#ifdef kcg_use_P21_GradientProfiles_T_Packet_Types_Pkg
kcg_bool kcg_comp_P21_GradientProfiles_T_Packet_Types_Pkg(
  P21_GradientProfiles_T_Packet_Types_Pkg *kcg_c1,
  P21_GradientProfiles_T_Packet_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 7; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P21_GradientProfile_T_Packet_Types_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_P21_GradientProfiles_T_Packet_Types_Pkg */

#ifdef kcg_use_P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg
kcg_bool kcg_comp_P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg(
  P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg *kcg_c1,
  P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 7; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_P63_BaliseInSRAuthority_T_Packet_Types_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg */

#ifdef kcg_use_nvkvintsetArray_T_Packet_Types_Pkg
kcg_bool kcg_comp_nvkvintsetArray_T_Packet_Types_Pkg(
  nvkvintsetArray_T_Packet_Types_Pkg *kcg_c1,
  nvkvintsetArray_T_Packet_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 7; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_nvkvintset_T_Packet_Types_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_nvkvintsetArray_T_Packet_Types_Pkg */

#ifdef kcg_use_array_int_266
kcg_bool kcg_comp_array_int_266(array_int_266 *kcg_c1, array_int_266 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 266; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_266 */

#ifdef kcg_use_array_172650
kcg_bool kcg_comp_array_172650(array_172650 *kcg_c1, array_172650 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 7; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_Telegram_T_BG_Types_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_172650 */

#ifdef kcg_use_array_int_20
kcg_bool kcg_comp_array_int_20(array_int_20 *kcg_c1, array_int_20 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 20; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_20 */

#ifdef kcg_use_array_char_30_5
kcg_bool kcg_comp_array_char_30_5(
  array_char_30_5 *kcg_c1,
  array_char_30_5 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 5; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_array_char_30(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_char_30_5 */

#ifdef kcg_use_array_172678
kcg_bool kcg_comp_array_172678(array_172678 *kcg_c1, array_172678 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 1; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_M_TrainTrack_Message_T_TM_radio_messages(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_172678 */

#ifdef kcg_use_array_172689
kcg_bool kcg_comp_array_172689(array_172689 *kcg_c1, array_172689 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 5; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_172689 */

#ifdef kcg_use_DMI_Text_Message_int_array_T_DATA
kcg_bool kcg_comp_DMI_Text_Message_int_array_T_DATA(
  DMI_Text_Message_int_array_T_DATA *kcg_c1,
  DMI_Text_Message_int_array_T_DATA *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 262; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_DMI_Text_Message_int_array_T_DATA */

#ifdef kcg_use_array_int_301
kcg_bool kcg_comp_array_int_301(array_int_301 *kcg_c1, array_int_301 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 301; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_301 */

#ifdef kcg_use_array_172706
kcg_bool kcg_comp_array_172706(array_172706 *kcg_c1, array_172706 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 97; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_M_TrainTrack_Message_T_TM_radio_messages(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_172706 */

#ifdef kcg_use_array_172744
kcg_bool kcg_comp_array_172744(array_172744 *kcg_c1, array_172744 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 30; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_172744 */

#ifdef kcg_use_array_bool_12
kcg_bool kcg_comp_array_bool_12(array_bool_12 *kcg_c1, array_bool_12 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 12; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_bool_12 */

#ifdef kcg_use_array_int_12
kcg_bool kcg_comp_array_int_12(array_int_12 *kcg_c1, array_int_12 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 12; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_12 */

#ifdef kcg_use_array_real_12
kcg_bool kcg_comp_array_real_12(array_real_12 *kcg_c1, array_real_12 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 12; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_real_12 */

#ifdef kcg_use_array_char_12
kcg_bool kcg_comp_array_char_12(array_char_12 *kcg_c1, array_char_12 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 12; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_char_12 */

#ifdef kcg_use_CompressedPacketData_T_Common_Types_Pkg
kcg_bool kcg_comp_CompressedPacketData_T_Common_Types_Pkg(
  CompressedPacketData_T_Common_Types_Pkg *kcg_c1,
  CompressedPacketData_T_Common_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 500; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_CompressedPacketData_T_Common_Types_Pkg */

#ifdef kcg_use_array_172785
kcg_bool kcg_comp_array_172785(array_172785 *kcg_c1, array_172785 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 8; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_positionedBG_T_TrainPosition_Types_Pck(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_172785 */

#ifdef kcg_use_array_bool_8
kcg_bool kcg_comp_array_bool_8(array_bool_8 *kcg_c1, array_bool_8 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 8; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_bool_8 */

#ifdef kcg_use_array_int_8
kcg_bool kcg_comp_array_int_8(array_int_8 *kcg_c1, array_int_8 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 8; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_8 */

#ifdef kcg_use_array_real_8
kcg_bool kcg_comp_array_real_8(array_real_8 *kcg_c1, array_real_8 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 8; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_real_8 */

#ifdef kcg_use_array_int_496
kcg_bool kcg_comp_array_int_496(array_int_496 *kcg_c1, array_int_496 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 496; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_496 */

#ifdef kcg_use_array_172875
kcg_bool kcg_comp_array_172875(array_172875 *kcg_c1, array_172875 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 50; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_172875 */

#ifdef kcg_use_array_int_129
kcg_bool kcg_comp_array_int_129(array_int_129 *kcg_c1, array_int_129 *kcg_c2)
{
  static kcg_bool kcg_equ;
  static kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 129; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_129 */

#ifdef kcg_use_P21_GradientProfile_T_Packet_Types_Pkg
kcg_bool kcg_comp_P21_GradientProfile_T_Packet_Types_Pkg(
  P21_GradientProfile_T_Packet_Types_Pkg *kcg_c1,
  P21_GradientProfile_T_Packet_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->g_a == kcg_c2->g_a);
  kcg_equ = kcg_equ & (kcg_c1->q_gdir == kcg_c2->q_gdir);
  kcg_equ = kcg_equ & (kcg_c1->d_gradient == kcg_c2->d_gradient);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P21_GradientProfile_T_Packet_Types_Pkg */

#ifdef kcg_use_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg
kcg_bool kcg_comp_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
  DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg *kcg_c1,
  DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_driverIdentifier_T_DMI_Messages_Bothways_Pkg(
      &kcg_c1->driverIdentifier,
      &kcg_c2->driverIdentifier);
  kcg_equ = kcg_equ & (kcg_c1->systemTime == kcg_c2->systemTime);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg */

#ifdef kcg_use_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg
kcg_bool kcg_comp_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
  DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c1,
  DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->acknowledged == kcg_c2->acknowledged);
  kcg_equ = kcg_equ & (kcg_c1->systemTime == kcg_c2->systemTime);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg */

#ifdef kcg_use_DMI_DriverAck_T_DMI_Types_Pkg
kcg_bool kcg_comp_DMI_DriverAck_T_DMI_Types_Pkg(
  DMI_DriverAck_T_DMI_Types_Pkg *kcg_c1,
  DMI_DriverAck_T_DMI_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->acknowledgement == kcg_c2->acknowledgement);
  kcg_equ = kcg_equ & (kcg_c1->whichMode == kcg_c2->whichMode);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_DMI_DriverAck_T_DMI_Types_Pkg */

#ifdef kcg_use_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg
kcg_bool kcg_comp_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
  DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c1,
  DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_mn == kcg_c2->nid_mn);
  kcg_equ = kcg_equ & (kcg_c1->system_clock == kcg_c2->system_clock);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifdef kcg_use_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg
kcg_bool kcg_comp_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg(
  T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->P27_received == kcg_c2->P27_received);
  kcg_equ = kcg_equ & (kcg_c1->P21_received == kcg_c2->P21_received);
  kcg_equ = kcg_equ & (kcg_c1->P15_received == kcg_c2->P15_received);
  kcg_equ = kcg_equ & (kcg_c1->P12_received == kcg_c2->P12_received);
  return kcg_equ;
}
#endif /* kcg_use_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg
kcg_bool kcg_comp_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg(
  PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg *kcg_c1,
  PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->transitionInformation ==
      kcg_c2->transitionInformation);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_DataForSupervision_nextGen_t_TrackAtlasTypes
kcg_bool kcg_comp_DataForSupervision_nextGen_t_TrackAtlasTypes(
  DataForSupervision_nextGen_t_TrackAtlasTypes *kcg_c1,
  DataForSupervision_nextGen_t_TrackAtlasTypes *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_MRSP_Profile_t_TrackAtlasTypes(
      &kcg_c1->MRSP,
      &kcg_c2->MRSP);
  kcg_equ = kcg_equ & (kcg_c1->freshMRSP == kcg_c2->freshMRSP);
  kcg_equ = kcg_equ & kcg_comp_GradientProfile_t_TrackAtlasTypes(
      &kcg_c1->GradientProfile,
      &kcg_c2->GradientProfile);
  kcg_equ = kcg_equ & (kcg_c1->freshGradientProfile ==
      kcg_c2->freshGradientProfile);
  kcg_equ = kcg_equ & kcg_comp_MovementAuthority_t_TrackAtlasTypes(
      &kcg_c1->MA,
      &kcg_c2->MA);
  kcg_equ = kcg_equ & (kcg_c1->freshMA == kcg_c2->freshMA);
  return kcg_equ;
}
#endif /* kcg_use_DataForSupervision_nextGen_t_TrackAtlasTypes */

#ifdef kcg_use_P041_OBU_T_TM
kcg_bool kcg_comp_P041_OBU_T_TM(P041_OBU_T_TM *kcg_c1, P041_OBU_T_TM *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_P041_OBU_sectionlist_enum_T_TM(
      &kcg_c1->sections,
      &kcg_c2->sections);
  kcg_equ = kcg_equ & (kcg_c1->n_iter == kcg_c2->n_iter);
  kcg_equ = kcg_equ & (kcg_c1->d_leveltr == kcg_c2->d_leveltr);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P041_OBU_T_TM */

#ifdef kcg_use_P027V1_section_enum_T_TM_baseline2
kcg_bool kcg_comp_P027V1_section_enum_T_TM_baseline2(
  P027V1_section_enum_T_TM_baseline2 *kcg_c1,
  P027V1_section_enum_T_TM_baseline2 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2(
      &kcg_c1->SECTIONS_q_diff,
      &kcg_c2->SECTIONS_q_diff);
  kcg_equ = kcg_equ & (kcg_c1->n_iter == kcg_c2->n_iter);
  kcg_equ = kcg_equ & (kcg_c1->q_front == kcg_c2->q_front);
  kcg_equ = kcg_equ & (kcg_c1->v_static == kcg_c2->v_static);
  kcg_equ = kcg_equ & (kcg_c1->d_static == kcg_c2->d_static);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P027V1_section_enum_T_TM_baseline2 */

#ifdef kcg_use_P005_OBU_T_TM
kcg_bool kcg_comp_P005_OBU_T_TM(P005_OBU_T_TM *kcg_c1, P005_OBU_T_TM *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_P005_OBU_sectionlist_enum_T_TM(
      &kcg_c1->sections,
      &kcg_c2->sections);
  kcg_equ = kcg_equ & (kcg_c1->n_iter == kcg_c2->n_iter);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->l_packet == kcg_c2->l_packet);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P005_OBU_T_TM */

#ifdef kcg_use_nothing_to_resume_profile_follow_T_TIU_Types_Pkg
kcg_bool kcg_comp_nothing_to_resume_profile_follow_T_TIU_Types_Pkg(
  nothing_to_resume_profile_follow_T_TIU_Types_Pkg *kcg_c1,
  nothing_to_resume_profile_follow_T_TIU_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_trackcond == kcg_c2->m_trackcond);
  kcg_equ = kcg_equ & kcg_comp_L_test_trackcond_T_TIU_Types_Pkg(
      &kcg_c1->l_test_trackcond,
      &kcg_c2->l_test_trackcond);
  kcg_equ = kcg_equ & kcg_comp_D_test_trackcond_T_TIU_Types_Pkg(
      &kcg_c1->d_test_trackcond,
      &kcg_c2->d_test_trackcond);
  return kcg_equ;
}
#endif /* kcg_use_nothing_to_resume_profile_follow_T_TIU_Types_Pkg */

#ifdef kcg_use_P045_trackside_int_T_TM
kcg_bool kcg_comp_P045_trackside_int_T_TM(
  P045_trackside_int_T_TM *kcg_c1,
  P045_trackside_int_T_TM *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->NID_MN == kcg_c2->NID_MN);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P045_trackside_int_T_TM */

#ifdef kcg_use_P027V1_section_enum_qdiff_T_TM_baseline2
kcg_bool kcg_comp_P027V1_section_enum_qdiff_T_TM_baseline2(
  P027V1_section_enum_qdiff_T_TM_baseline2 *kcg_c1,
  P027V1_section_enum_qdiff_T_TM_baseline2 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->v_diff == kcg_c2->v_diff);
  kcg_equ = kcg_equ & (kcg_c1->nc_diff == kcg_c2->nc_diff);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P027V1_section_enum_qdiff_T_TM_baseline2 */

#ifdef kcg_use_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg
kcg_bool kcg_comp_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg *kcg_c1,
  BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->BGFound == kcg_c2->BGFound);
  kcg_equ = kcg_equ & (kcg_c1->noOfFoundBGs == kcg_c2->noOfFoundBGs);
  kcg_equ = kcg_equ & (kcg_c1->index == kcg_c2->index);
  return kcg_equ;
}
#endif /* kcg_use_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg */

#ifdef kcg_use_Endtimer_t_TrackAtlasTypes
kcg_bool kcg_comp_Endtimer_t_TrackAtlasTypes(
  Endtimer_t_TrackAtlasTypes *kcg_c1,
  Endtimer_t_TrackAtlasTypes *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->d_endtimerstoploc == kcg_c2->d_endtimerstoploc);
  kcg_equ = kcg_equ & (kcg_c1->t_endtimer == kcg_c2->t_endtimer);
  return kcg_equ;
}
#endif /* kcg_use_Endtimer_t_TrackAtlasTypes */

#ifdef kcg_use_A_gradient_element_t_SDM_GradientAcceleration_types
kcg_bool kcg_comp_A_gradient_element_t_SDM_GradientAcceleration_types(
  A_gradient_element_t_SDM_GradientAcceleration_types *kcg_c1,
  A_gradient_element_t_SDM_GradientAcceleration_types *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  kcg_equ = kcg_equ & (kcg_c1->gradient_acceleration ==
      kcg_c2->gradient_acceleration);
  kcg_equ = kcg_equ & (kcg_c1->position == kcg_c2->position);
  return kcg_equ;
}
#endif /* kcg_use_A_gradient_element_t_SDM_GradientAcceleration_types */

#ifdef kcg_use_struct_168546
kcg_bool kcg_comp_struct_168546(struct_168546 *kcg_c1, struct_168546 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->driverSelectsStart ==
      kcg_c2->driverSelectsStart);
  kcg_equ = kcg_equ & (kcg_c1->trackAheadFree == kcg_c2->trackAheadFree);
  return kcg_equ;
}
#endif /* kcg_use_struct_168546 */

#ifdef kcg_use_centerOfBalisePosition_T_BG_Types_Pkg
kcg_bool kcg_comp_centerOfBalisePosition_T_BG_Types_Pkg(
  centerOfBalisePosition_T_BG_Types_Pkg *kcg_c1,
  centerOfBalisePosition_T_BG_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &kcg_c1->BG_centerDetectionInaccuraccuracies,
      &kcg_c2->BG_centerDetectionInaccuraccuracies);
  kcg_equ = kcg_equ & kcg_comp_odometry_T_Obu_BasicTypes_Pkg(
      &kcg_c1->odometerOfBaliseDetection,
      &kcg_c2->odometerOfBaliseDetection);
  return kcg_equ;
}
#endif /* kcg_use_centerOfBalisePosition_T_BG_Types_Pkg */

#ifdef kcg_use_RadioTrackTrainMessageQueueEntry_T
kcg_bool kcg_comp_RadioTrackTrainMessageQueueEntry_T(
  RadioTrackTrainMessageQueueEntry_T *kcg_c1,
  RadioTrackTrainMessageQueueEntry_T *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_CompressedRadioMessage_TM(
      &kcg_c1->m_Entry,
      &kcg_c2->m_Entry);
  kcg_equ = kcg_equ & (kcg_c1->m_IsValid == kcg_c2->m_IsValid);
  return kcg_equ;
}
#endif /* kcg_use_RadioTrackTrainMessageQueueEntry_T */

#ifdef kcg_use_TrackSectionData_T_InfraLib
kcg_bool kcg_comp_TrackSectionData_T_InfraLib(
  TrackSectionData_T_InfraLib *kcg_c1,
  TrackSectionData_T_InfraLib *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_CompressedBaliseMessage_TM(
      &kcg_c1->BG_Message,
      &kcg_c2->BG_Message);
  kcg_equ = kcg_equ & kcg_comp_TrainPosRaw_T_InfraLib(
      &kcg_c1->TrainPosRaw,
      &kcg_c2->TrainPosRaw);
  return kcg_equ;
}
#endif /* kcg_use_TrackSectionData_T_InfraLib */

#ifdef kcg_use_a_Brake_t_SDMConversionModelPkg
kcg_bool kcg_comp_a_Brake_t_SDMConversionModelPkg(
  a_Brake_t_SDMConversionModelPkg *kcg_c1,
  a_Brake_t_SDMConversionModelPkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_av_Map_t_SDMConversionModelPkg(
      &kcg_c1->service,
      &kcg_c2->service);
  kcg_equ = kcg_equ & kcg_comp_av_Map_t_SDMConversionModelPkg(
      &kcg_c1->emergency,
      &kcg_c2->emergency);
  return kcg_equ;
}
#endif /* kcg_use_a_Brake_t_SDMConversionModelPkg */

#ifdef kcg_use_RadioTrackTrainMessageQueue_T
kcg_bool kcg_comp_RadioTrackTrainMessageQueue_T(
  RadioTrackTrainMessageQueue_T *kcg_c1,
  RadioTrackTrainMessageQueue_T *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_RadioTrackTrainMessageQueueEntries_T(
      &kcg_c1->m_Entries,
      &kcg_c2->m_Entries);
  return kcg_equ;
}
#endif /* kcg_use_RadioTrackTrainMessageQueue_T */

#ifdef kcg_use_CompressedRadioMessage_TM
kcg_bool kcg_comp_CompressedRadioMessage_TM(
  CompressedRadioMessage_TM *kcg_c1,
  CompressedRadioMessage_TM *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_CompressedPackets_T_Common_Types_Pkg(
      &kcg_c1->Messages,
      &kcg_c2->Messages);
  kcg_equ = kcg_equ & kcg_comp_Radio_TrackTrain_Header_T_TM(
      &kcg_c1->Header,
      &kcg_c2->Header);
  return kcg_equ;
}
#endif /* kcg_use_CompressedRadioMessage_TM */

#ifdef kcg_use_CompressedBaliseMessage_TM
kcg_bool kcg_comp_CompressedBaliseMessage_TM(
  CompressedBaliseMessage_TM *kcg_c1,
  CompressedBaliseMessage_TM *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_CompressedPackets_T_Common_Types_Pkg(
      &kcg_c1->Messages,
      &kcg_c2->Messages);
  kcg_equ = kcg_equ & kcg_comp_BaliseTelegramHeader_int_T_TM(
      &kcg_c1->Header,
      &kcg_c2->Header);
  return kcg_equ;
}
#endif /* kcg_use_CompressedBaliseMessage_TM */

#ifdef kcg_use_mobileRegistrationContext_T_RCM_Types_Pkg
kcg_bool kcg_comp_mobileRegistrationContext_T_RCM_Types_Pkg(
  mobileRegistrationContext_T_RCM_Types_Pkg *kcg_c1,
  mobileRegistrationContext_T_RCM_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_mn == kcg_c2->nid_mn);
  kcg_equ = kcg_equ & (kcg_c1->status == kcg_c2->status);
  kcg_equ = kcg_equ & (kcg_c1->healthStatus == kcg_c2->healthStatus);
  kcg_equ = kcg_equ & (kcg_c1->mobileDeviceNo == kcg_c2->mobileDeviceNo);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_mobileRegistrationContext_T_RCM_Types_Pkg */

#ifdef kcg_use_morcStatus_T_RCM_Session_Types_Pkg
kcg_bool kcg_comp_morcStatus_T_RCM_Session_Types_Pkg(
  morcStatus_T_RCM_Session_Types_Pkg *kcg_c1,
  morcStatus_T_RCM_Session_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_sessionStatus_T_RCM_Session_Types_Pkg(
      &kcg_c1->session,
      &kcg_c2->session);
  kcg_equ = kcg_equ & kcg_comp_mobileConnectionContext_T_RCM_Types_Pkg(
      &kcg_c1->connection,
      &kcg_c2->connection);
  kcg_equ = kcg_equ & kcg_comp_mobileRegistrationContext_T_RCM_Types_Pkg(
      &kcg_c1->registration,
      &kcg_c2->registration);
  return kcg_equ;
}
#endif /* kcg_use_morcStatus_T_RCM_Session_Types_Pkg */

#ifdef kcg_use_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg
kcg_bool kcg_comp_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg(
  m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg *kcg_c1,
  m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_RBC_Id_T_Common_Types_Pkg(
      &kcg_c1->origin,
      &kcg_c2->origin);
  kcg_equ = kcg_equ & (kcg_c1->msgSrc == kcg_c2->msgSrc);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg */

#ifdef kcg_use_struct_168630
kcg_bool kcg_comp_struct_168630(struct_168630 *kcg_c1, struct_168630 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_outPackets_T_Common_Types_Pkg(
      &kcg_c1->packets,
      &kcg_c2->packets);
  kcg_equ = kcg_equ & kcg_comp_struct_172356(&kcg_c1->header, &kcg_c2->header);
  kcg_equ = kcg_equ & (kcg_c1->present == kcg_c2->present);
  return kcg_equ;
}
#endif /* kcg_use_struct_168630 */

#ifdef kcg_use_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg
kcg_bool kcg_comp_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
  DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c1,
  DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_DMI_Available_Menu_T_DMI_Types_Pkg(
      &kcg_c1->available_menu,
      &kcg_c2->available_menu);
  kcg_equ = kcg_equ & (kcg_c1->system_clock == kcg_c2->system_clock);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifdef kcg_use_TrainLocations_real_T_SDM_Types_Pkg
kcg_bool kcg_comp_TrainLocations_real_T_SDM_Types_Pkg(
  TrainLocations_real_T_SDM_Types_Pkg *kcg_c1,
  TrainLocations_real_T_SDM_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->d_accLRBG == kcg_c2->d_accLRBG);
  kcg_equ = kcg_equ & (kcg_c1->d_LRBG == kcg_c2->d_LRBG);
  kcg_equ = kcg_equ & (kcg_c1->d_maxSafeFrontEndPos ==
      kcg_c2->d_maxSafeFrontEndPos);
  kcg_equ = kcg_equ & (kcg_c1->d_minSafeFrontEndPos ==
      kcg_c2->d_minSafeFrontEndPos);
  kcg_equ = kcg_equ & (kcg_c1->d_est_frontendPos == kcg_c2->d_est_frontendPos);
  kcg_equ = kcg_equ & (kcg_c1->trainPositionIsValid ==
      kcg_c2->trainPositionIsValid);
  return kcg_equ;
}
#endif /* kcg_use_TrainLocations_real_T_SDM_Types_Pkg */

#ifdef kcg_use_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg
kcg_bool kcg_comp_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
  DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg *kcg_c1,
  DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->trainRunningNumber ==
      kcg_c2->trainRunningNumber);
  kcg_equ = kcg_equ & (kcg_c1->systemTime == kcg_c2->systemTime);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg */

#ifdef kcg_use_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg
kcg_bool kcg_comp_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg(
  P137_StopIfInStaffResponsible_T_Packet_Types_Pkg *kcg_c1,
  P137_StopIfInStaffResponsible_T_Packet_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->q_srstop == kcg_c2->q_srstop);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg */

#ifdef kcg_use_mv_Map_t_SDMConversionModelPkg
kcg_bool kcg_comp_mv_Map_t_SDMConversionModelPkg(
  mv_Map_t_SDMConversionModelPkg *kcg_c1,
  mv_Map_t_SDMConversionModelPkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_v_KvSteps_t_SDMConversionModelPkg(
      &kcg_c1->v,
      &kcg_c2->v);
  kcg_equ = kcg_equ & kcg_comp_m_KvSteps_t_SDMConversionModelPkg(
      &kcg_c1->m,
      &kcg_c2->m);
  return kcg_equ;
}
#endif /* kcg_use_mv_Map_t_SDMConversionModelPkg */

#ifdef kcg_use_DMI_level_T_DMI_Types_Pkg
kcg_bool kcg_comp_DMI_level_T_DMI_Types_Pkg(
  DMI_level_T_DMI_Types_Pkg *kcg_c1,
  DMI_level_T_DMI_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_stm == kcg_c2->nid_stm);
  kcg_equ = kcg_equ & (kcg_c1->level == kcg_c2->level);
  return kcg_equ;
}
#endif /* kcg_use_DMI_level_T_DMI_Types_Pkg */

#ifdef kcg_use_sNID_RADIO_T_Packet_TrainTypes_Pkg
kcg_bool kcg_comp_sNID_RADIO_T_Packet_TrainTypes_Pkg(
  sNID_RADIO_T_Packet_TrainTypes_Pkg *kcg_c1,
  sNID_RADIO_T_Packet_TrainTypes_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_telephoneNumber_T_Packet_TrainTypes_Pkg(
      &kcg_c1->telephoneNumber,
      &kcg_c2->telephoneNumber);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_sNID_RADIO_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_MetadataElement_T_Common_Types_Pkg
kcg_bool kcg_comp_MetadataElement_T_Common_Types_Pkg(
  MetadataElement_T_Common_Types_Pkg *kcg_c1,
  MetadataElement_T_Common_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->endAddress == kcg_c2->endAddress);
  kcg_equ = kcg_equ & (kcg_c1->startAddress == kcg_c2->startAddress);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->nid_packet == kcg_c2->nid_packet);
  return kcg_equ;
}
#endif /* kcg_use_MetadataElement_T_Common_Types_Pkg */

#ifdef kcg_use_DiagMsg_T_RBC_Diagnostic_Pkg
kcg_bool kcg_comp_DiagMsg_T_RBC_Diagnostic_Pkg(
  DiagMsg_T_RBC_Diagnostic_Pkg *kcg_c1,
  DiagMsg_T_RBC_Diagnostic_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->diagText == kcg_c2->diagText);
  kcg_equ = kcg_equ & (kcg_c1->diagSrc == kcg_c2->diagSrc);
  kcg_equ = kcg_equ & (kcg_c1->diagType == kcg_c2->diagType);
  kcg_equ = kcg_equ & (kcg_c1->timestamp == kcg_c2->timestamp);
  kcg_equ = kcg_equ & (kcg_c1->count == kcg_c2->count);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_DiagMsg_T_RBC_Diagnostic_Pkg */

#ifdef kcg_use_P027V1_OBU_body_enum_T_TM_baseline2
kcg_bool kcg_comp_P027V1_OBU_body_enum_T_TM_baseline2(
  P027V1_OBU_body_enum_T_TM_baseline2 *kcg_c1,
  P027V1_OBU_body_enum_T_TM_baseline2 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P027V1_OBU_body_enum_T_TM_baseline2 */

#ifdef kcg_use_T_Data_From_Localisation_Level_And_Mode_Types_Pkg
kcg_bool kcg_comp_T_Data_From_Localisation_Level_And_Mode_Types_Pkg(
  T_Data_From_Localisation_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Data_From_Localisation_Level_And_Mode_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Train_Standstill == kcg_c2->Train_Standstill);
  kcg_equ = kcg_equ & (kcg_c1->Train_Speed == kcg_c2->Train_Speed);
  kcg_equ = kcg_equ & kcg_comp_trainPosition_T_TrainPosition_Types_Pck(
      &kcg_c1->Train_Position,
      &kcg_c2->Train_Position);
  kcg_equ = kcg_equ & kcg_comp_positionErrors_T_TrainPosition_Types_Pck(
      &kcg_c1->PositionErrors,
      &kcg_c2->PositionErrors);
  kcg_equ = kcg_equ & (kcg_c1->BG_In_List_Expected_BG_In_SH ==
      kcg_c2->BG_In_List_Expected_BG_In_SH);
  kcg_equ = kcg_equ & (kcg_c1->BG_In_List_Expected_BG_In_SR ==
      kcg_c2->BG_In_List_Expected_BG_In_SR);
  return kcg_equ;
}
#endif /* kcg_use_T_Data_From_Localisation_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_DMI_DriverRequest_T_DMI_Types_Pkg
kcg_bool kcg_comp_DMI_DriverRequest_T_DMI_Types_Pkg(
  DMI_DriverRequest_T_DMI_Types_Pkg *kcg_c1,
  DMI_DriverRequest_T_DMI_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->ETCS_Isolated == kcg_c2->ETCS_Isolated);
  kcg_equ = kcg_equ & (kcg_c1->Req_Start == kcg_c2->Req_Start);
  kcg_equ = kcg_equ & (kcg_c1->Req_SH == kcg_c2->Req_SH);
  kcg_equ = kcg_equ & (kcg_c1->Req_Override == kcg_c2->Req_Override);
  kcg_equ = kcg_equ & (kcg_c1->Req_NL == kcg_c2->Req_NL);
  kcg_equ = kcg_equ & (kcg_c1->Req_Exit_SH == kcg_c2->Req_Exit_SH);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_DMI_DriverRequest_T_DMI_Types_Pkg */

#ifdef kcg_use_mobileConnectionContext_T_RCM_Types_Pkg
kcg_bool kcg_comp_mobileConnectionContext_T_RCM_Types_Pkg(
  mobileConnectionContext_T_RCM_Types_Pkg *kcg_c1,
  mobileConnectionContext_T_RCM_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->isInRadioHole == kcg_c2->isInRadioHole);
  kcg_equ = kcg_equ & (kcg_c1->connectionLost == kcg_c2->connectionLost);
  kcg_equ = kcg_equ & (kcg_c1->settingUpConnectionHasFailed ==
      kcg_c2->settingUpConnectionHasFailed);
  kcg_equ = kcg_equ & (kcg_c1->nid_radio == kcg_c2->nid_radio);
  kcg_equ = kcg_equ & (kcg_c1->status == kcg_c2->status);
  kcg_equ = kcg_equ & (kcg_c1->mobileDeviceNo == kcg_c2->mobileDeviceNo);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_mobileConnectionContext_T_RCM_Types_Pkg */

#ifdef kcg_use_trainDataStatus_T_trainData_Types_pkg
kcg_bool kcg_comp_trainDataStatus_T_trainData_Types_pkg(
  trainDataStatus_T_trainData_Types_pkg *kcg_c1,
  trainDataStatus_T_trainData_Types_pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->timeStampValidateToRBC ==
      kcg_c2->timeStampValidateToRBC);
  kcg_equ = kcg_equ & (kcg_c1->driverIsModificationTrainData ==
      kcg_c2->driverIsModificationTrainData);
  kcg_equ = kcg_equ & (kcg_c1->waitingForRBCResponse ==
      kcg_c2->waitingForRBCResponse);
  kcg_equ = kcg_equ & (kcg_c1->validatedbyRBC == kcg_c2->validatedbyRBC);
  kcg_equ = kcg_equ & (kcg_c1->RBCsystemVersionOnboard ==
      kcg_c2->RBCsystemVersionOnboard);
  kcg_equ = kcg_equ & (kcg_c1->validatedByDriver == kcg_c2->validatedByDriver);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_trainDataStatus_T_trainData_Types_pkg */

#ifdef kcg_use_P41_LevelTransitionOrder_T_Packet_Types_Pkg
kcg_bool kcg_comp_P41_LevelTransitionOrder_T_Packet_Types_Pkg(
  P41_LevelTransitionOrder_T_Packet_Types_Pkg *kcg_c1,
  P41_LevelTransitionOrder_T_Packet_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->l_ackleveltr == kcg_c2->l_ackleveltr);
  kcg_equ = kcg_equ & (kcg_c1->nid_ntc == kcg_c2->nid_ntc);
  kcg_equ = kcg_equ & (kcg_c1->m_leveltr == kcg_c2->m_leveltr);
  kcg_equ = kcg_equ & (kcg_c1->d_leveltr == kcg_c2->d_leveltr);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P41_LevelTransitionOrder_T_Packet_Types_Pkg */

#ifdef kcg_use_NationalParams_T
kcg_bool kcg_comp_NationalParams_T(
  NationalParams_T *kcg_c1,
  NationalParams_T *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->t_nvcontact == kcg_c2->t_nvcontact);
  kcg_equ = kcg_equ & (kcg_c1->v_nvrel == kcg_c2->v_nvrel);
  kcg_equ = kcg_equ & (kcg_c1->v_nvunfit == kcg_c2->v_nvunfit);
  kcg_equ = kcg_equ & (kcg_c1->v_nvonsight == kcg_c2->v_nvonsight);
  kcg_equ = kcg_equ & (kcg_c1->v_nvstff == kcg_c2->v_nvstff);
  kcg_equ = kcg_equ & (kcg_c1->v_nvshunt == kcg_c2->v_nvshunt);
  kcg_equ = kcg_equ & (kcg_c1->nid_c == kcg_c2->nid_c);
  return kcg_equ;
}
#endif /* kcg_use_NationalParams_T */

#ifdef kcg_use_struct_168859
kcg_bool kcg_comp_struct_168859(struct_168859 *kcg_c1, struct_168859 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_em == kcg_c2->nid_em);
  kcg_equ = kcg_equ & (kcg_c1->nid_lrbg == kcg_c2->nid_lrbg);
  kcg_equ = kcg_equ & (kcg_c1->m_ack == kcg_c2->m_ack);
  kcg_equ = kcg_equ & (kcg_c1->t_train == kcg_c2->t_train);
  kcg_equ = kcg_equ & (kcg_c1->l_message == kcg_c2->l_message);
  kcg_equ = kcg_equ & (kcg_c1->nid_message == kcg_c2->nid_message);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_struct_168859 */

#ifdef kcg_use_M_008_T_TM_radio_messages
kcg_bool kcg_comp_M_008_T_TM_radio_messages(
  M_008_T_TM_radio_messages *kcg_c1,
  M_008_T_TM_radio_messages *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->t_train_received == kcg_c2->t_train_received);
  kcg_equ = kcg_equ & (kcg_c1->nid_lrbg == kcg_c2->nid_lrbg);
  kcg_equ = kcg_equ & (kcg_c1->m_ack == kcg_c2->m_ack);
  kcg_equ = kcg_equ & (kcg_c1->t_train == kcg_c2->t_train);
  kcg_equ = kcg_equ & (kcg_c1->l_message == kcg_c2->l_message);
  kcg_equ = kcg_equ & (kcg_c1->nid_message == kcg_c2->nid_message);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_M_008_T_TM_radio_messages */

#ifdef kcg_use_struct_168880
kcg_bool kcg_comp_struct_168880(struct_168880 *kcg_c1, struct_168880 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->t_train_SH_request ==
      kcg_c2->t_train_SH_request);
  kcg_equ = kcg_equ & (kcg_c1->nid_lrbg == kcg_c2->nid_lrbg);
  kcg_equ = kcg_equ & (kcg_c1->m_ack == kcg_c2->m_ack);
  kcg_equ = kcg_equ & (kcg_c1->t_train == kcg_c2->t_train);
  kcg_equ = kcg_equ & (kcg_c1->l_message == kcg_c2->l_message);
  kcg_equ = kcg_equ & (kcg_c1->nid_message == kcg_c2->nid_message);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_struct_168880 */

#ifdef kcg_use_M_032_int_T_TM_radio_messages
kcg_bool kcg_comp_M_032_int_T_TM_radio_messages(
  M_032_int_T_TM_radio_messages *kcg_c1,
  M_032_int_T_TM_radio_messages *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_version == kcg_c2->m_version);
  kcg_equ = kcg_equ & (kcg_c1->nid_lrbg == kcg_c2->nid_lrbg);
  kcg_equ = kcg_equ & (kcg_c1->m_ack == kcg_c2->m_ack);
  kcg_equ = kcg_equ & (kcg_c1->t_train == kcg_c2->t_train);
  kcg_equ = kcg_equ & (kcg_c1->l_message == kcg_c2->l_message);
  kcg_equ = kcg_equ & (kcg_c1->nid_message == kcg_c2->nid_message);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_M_032_int_T_TM_radio_messages */

#ifdef kcg_use_M_008_int_T_TM_radio_messages
kcg_bool kcg_comp_M_008_int_T_TM_radio_messages(
  M_008_int_T_TM_radio_messages *kcg_c1,
  M_008_int_T_TM_radio_messages *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->t_train_received == kcg_c2->t_train_received);
  kcg_equ = kcg_equ & (kcg_c1->nid_lrbg == kcg_c2->nid_lrbg);
  kcg_equ = kcg_equ & (kcg_c1->m_ack == kcg_c2->m_ack);
  kcg_equ = kcg_equ & (kcg_c1->t_train == kcg_c2->t_train);
  kcg_equ = kcg_equ & (kcg_c1->l_message == kcg_c2->l_message);
  kcg_equ = kcg_equ & (kcg_c1->nid_message == kcg_c2->nid_message);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_M_008_int_T_TM_radio_messages */

#ifdef kcg_use_P057_trackside_int_T_TM
kcg_bool kcg_comp_P057_trackside_int_T_TM(
  P057_trackside_int_T_TM *kcg_c1,
  P057_trackside_int_T_TM *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->T_CYCRQST == kcg_c2->T_CYCRQST);
  kcg_equ = kcg_equ & (kcg_c1->T_TIMEOUTRQST == kcg_c2->T_TIMEOUTRQST);
  kcg_equ = kcg_equ & (kcg_c1->T_MAR == kcg_c2->T_MAR);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P057_trackside_int_T_TM */

#ifdef kcg_use_P005_section_int_T_TM
kcg_bool kcg_comp_P005_section_int_T_TM(
  P005_section_int_T_TM *kcg_c1,
  P005_section_int_T_TM *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Q_LOCACC == kcg_c2->Q_LOCACC);
  kcg_equ = kcg_equ & (kcg_c1->Q_LINKREACTION == kcg_c2->Q_LINKREACTION);
  kcg_equ = kcg_equ & (kcg_c1->Q_LINKORIENTATION == kcg_c2->Q_LINKORIENTATION);
  kcg_equ = kcg_equ & (kcg_c1->NID_BG == kcg_c2->NID_BG);
  kcg_equ = kcg_equ & (kcg_c1->NID_C == kcg_c2->NID_C);
  kcg_equ = kcg_equ & (kcg_c1->Q_NEWCOUNTRY == kcg_c2->Q_NEWCOUNTRY);
  kcg_equ = kcg_equ & (kcg_c1->D_LINK == kcg_c2->D_LINK);
  return kcg_equ;
}
#endif /* kcg_use_P005_section_int_T_TM */

#ifdef kcg_use_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg
kcg_bool kcg_comp_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
  DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c1,
  DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->l_extra == kcg_c2->l_extra);
  kcg_equ = kcg_equ & kcg_comp_DMI_TEXT_DMI_Types_Pkg(
      &kcg_c1->x_name,
      &kcg_c2->x_name);
  kcg_equ = kcg_equ & (kcg_c1->l_name == kcg_c2->l_name);
  kcg_equ = kcg_equ & (kcg_c1->EVC_Version == kcg_c2->EVC_Version);
  kcg_equ = kcg_equ & (kcg_c1->ERTMS_Version == kcg_c2->ERTMS_Version);
  kcg_equ = kcg_equ & (kcg_c1->system_clock == kcg_c2->system_clock);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifdef kcg_use_T_trac_t_TargetLimits_Pkg
kcg_bool kcg_comp_T_trac_t_TargetLimits_Pkg(
  T_trac_t_TargetLimits_Pkg *kcg_c1,
  T_trac_t_TargetLimits_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->indication == kcg_c2->indication);
  kcg_equ = kcg_equ & (kcg_c1->inhComp == kcg_c2->inhComp);
  kcg_equ = kcg_equ & (kcg_c1->bs2 == kcg_c2->bs2);
  kcg_equ = kcg_equ & (kcg_c1->bs1 == kcg_c2->bs1);
  kcg_equ = kcg_equ & (kcg_c1->bs == kcg_c2->bs);
  kcg_equ = kcg_equ & (kcg_c1->berem == kcg_c2->berem);
  kcg_equ = kcg_equ & (kcg_c1->Traction == kcg_c2->Traction);
  return kcg_equ;
}
#endif /* kcg_use_T_trac_t_TargetLimits_Pkg */

#ifdef kcg_use_MAReqParams_T
kcg_bool kcg_comp_MAReqParams_T(MAReqParams_T *kcg_c1, MAReqParams_T *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->t_cycrqst == kcg_c2->t_cycrqst);
  kcg_equ = kcg_equ & (kcg_c1->t_timeoutrqst == kcg_c2->t_timeoutrqst);
  kcg_equ = kcg_equ & (kcg_c1->t_mar == kcg_c2->t_mar);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  return kcg_equ;
}
#endif /* kcg_use_MAReqParams_T */

#ifdef kcg_use_TIU_commandStatus_T_TIU_Types_Pkg
kcg_bool kcg_comp_TIU_commandStatus_T_TIU_Types_Pkg(
  TIU_commandStatus_T_TIU_Types_Pkg *kcg_c1,
  TIU_commandStatus_T_TIU_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->isolationStatus == kcg_c2->isolationStatus);
  kcg_equ = kcg_equ & (kcg_c1->emergencyBrakeActive ==
      kcg_c2->emergencyBrakeActive);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_TIU_commandStatus_T_TIU_Types_Pkg */

#ifdef kcg_use_struct_169021
kcg_bool kcg_comp_struct_169021(struct_169021 *kcg_c1, struct_169021 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_nvkrint_l == kcg_c2->m_nvkrint_l);
  kcg_equ = kcg_equ & (kcg_c1->l_nvkrint_l == kcg_c2->l_nvkrint_l);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_struct_169021 */

#ifdef kcg_use_DMI_To_Modes_T_DMI_Types_Pkg
kcg_bool kcg_comp_DMI_To_Modes_T_DMI_Types_Pkg(
  DMI_To_Modes_T_DMI_Types_Pkg *kcg_c1,
  DMI_To_Modes_T_DMI_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->LevelAck == kcg_c2->LevelAck);
  kcg_equ = kcg_equ & kcg_comp_DMI_DriverRequest_T_DMI_Types_Pkg(
      &kcg_c1->DriverRequest,
      &kcg_c2->DriverRequest);
  kcg_equ = kcg_equ & kcg_comp_DMI_DriverAck_T_DMI_Types_Pkg(
      &kcg_c1->DriverAck,
      &kcg_c2->DriverAck);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_DMI_To_Modes_T_DMI_Types_Pkg */

#ifdef kcg_use_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store
kcg_bool kcg_comp_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store(
  NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store *kcg_c1,
  NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  kcg_equ = kcg_equ & (kcg_c1->nid_em == kcg_c2->nid_em);
  return kcg_equ;
}
#endif /* kcg_use_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store */

#ifdef kcg_use_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg
kcg_bool kcg_comp_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg(
  positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg *kcg_c1,
  positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->overrun == kcg_c2->overrun);
  kcg_equ = kcg_equ & kcg_comp_positionedBGs_T_TrainPosition_Types_Pck(
      &kcg_c1->BGs,
      &kcg_c2->BGs);
  return kcg_equ;
}
#endif /* kcg_use_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg */

#ifdef kcg_use_T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg
kcg_bool kcg_comp_T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg(
  T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Train_Speed_Under_Overide_Limit ==
      kcg_c2->Train_Speed_Under_Overide_Limit);
  kcg_equ = kcg_equ & (kcg_c1->EOA_Front_End == kcg_c2->EOA_Front_End);
  kcg_equ = kcg_equ & (kcg_c1->EOA_Antenna_Overpass ==
      kcg_c2->EOA_Antenna_Overpass);
  kcg_equ = kcg_equ & (kcg_c1->Override_Function_Active ==
      kcg_c2->Override_Function_Active);
  kcg_equ = kcg_equ & (kcg_c1->Estim_Front_End_Rear_SSP ==
      kcg_c2->Estim_Front_End_Rear_SSP);
  kcg_equ = kcg_equ & (kcg_c1->Estim_front_End_overpass_SR_Dist ==
      kcg_c2->Estim_front_End_overpass_SR_Dist);
  return kcg_equ;
}
#endif /* kcg_use_T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_Target_real_T_TargetManagement_types
kcg_bool kcg_comp_Target_real_T_TargetManagement_types(
  Target_real_T_TargetManagement_types *kcg_c1,
  Target_real_T_TargetManagement_types *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->speed == kcg_c2->speed);
  kcg_equ = kcg_equ & (kcg_c1->distance == kcg_c2->distance);
  kcg_equ = kcg_equ & (kcg_c1->targetType == kcg_c2->targetType);
  return kcg_equ;
}
#endif /* kcg_use_Target_real_T_TargetManagement_types */

#ifdef kcg_use_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg
kcg_bool kcg_comp_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg(
  safeRadioConnectionIndication_T_RCM_Session_Types_Pkg *kcg_c1,
  safeRadioConnectionIndication_T_RCM_Session_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->indicator == kcg_c2->indicator);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg */

#ifdef kcg_use_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg
kcg_bool kcg_comp_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
  DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c1,
  DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->DMI_nid_icon_identifier ==
      kcg_c2->DMI_nid_icon_identifier);
  kcg_equ = kcg_equ & (kcg_c1->systemTime == kcg_c2->systemTime);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg */

#ifdef kcg_use_P041_section_int_T_TM
kcg_bool kcg_comp_P041_section_int_T_TM(
  P041_section_int_T_TM *kcg_c1,
  P041_section_int_T_TM *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->L_ACKLEVELTR == kcg_c2->L_ACKLEVELTR);
  kcg_equ = kcg_equ & (kcg_c1->NID_NTC == kcg_c2->NID_NTC);
  kcg_equ = kcg_equ & (kcg_c1->M_LEVELTR == kcg_c2->M_LEVELTR);
  return kcg_equ;
}
#endif /* kcg_use_P041_section_int_T_TM */

#ifdef kcg_use_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg
kcg_bool kcg_comp_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg(
  T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Mess_6 == kcg_c2->Mess_6);
  kcg_equ = kcg_equ & (kcg_c1->Mess_28 == kcg_c2->Mess_28);
  kcg_equ = kcg_equ & (kcg_c1->Mess_27 == kcg_c2->Mess_27);
  kcg_equ = kcg_equ & (kcg_c1->Mess_2 == kcg_c2->Mess_2);
  kcg_equ = kcg_equ & (kcg_c1->Mess_16 == kcg_c2->Mess_16);
  kcg_equ = kcg_equ & (kcg_c1->Mess_15 == kcg_c2->Mess_15);
  return kcg_equ;
}
#endif /* kcg_use_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_M_132_T_TM_radio_messages
kcg_bool kcg_comp_M_132_T_TM_radio_messages(
  M_132_T_TM_radio_messages *kcg_c1,
  M_132_T_TM_radio_messages *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->q_marqstreason == kcg_c2->q_marqstreason);
  kcg_equ = kcg_equ & (kcg_c1->nid_engine == kcg_c2->nid_engine);
  kcg_equ = kcg_equ & (kcg_c1->t_train == kcg_c2->t_train);
  kcg_equ = kcg_equ & (kcg_c1->l_message == kcg_c2->l_message);
  kcg_equ = kcg_equ & (kcg_c1->nid_message == kcg_c2->nid_message);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_M_132_T_TM_radio_messages */

#ifdef kcg_use_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg
kcg_bool kcg_comp_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg(
  T_Data_To_BG_Management_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Data_To_BG_Management_Level_And_Mode_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Position_Repport_Needed ==
      kcg_c2->Position_Repport_Needed);
  kcg_equ = kcg_equ & (kcg_c1->Connection_to_RBC_req ==
      kcg_c2->Connection_to_RBC_req);
  kcg_equ = kcg_equ & (kcg_c1->Req_for_SH_from_Driver ==
      kcg_c2->Req_for_SH_from_Driver);
  kcg_equ = kcg_equ & (kcg_c1->MA_Req == kcg_c2->MA_Req);
  kcg_equ = kcg_equ & (kcg_c1->Clean_BG_List_SH_Area ==
      kcg_c2->Clean_BG_List_SH_Area);
  kcg_equ = kcg_equ & (kcg_c1->EoM_Procedure_req == kcg_c2->EoM_Procedure_req);
  return kcg_equ;
}
#endif /* kcg_use_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_extractTargetsMRSPACC_TargetManagement_pkg
kcg_bool kcg_comp_extractTargetsMRSPACC_TargetManagement_pkg(
  extractTargetsMRSPACC_TargetManagement_pkg *kcg_c1,
  extractTargetsMRSPACC_TargetManagement_pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->lastInsertedTargetIndex ==
      kcg_c2->lastInsertedTargetIndex);
  kcg_equ = kcg_equ & kcg_comp_Target_list_MRSP_real_T_TargetManagement_types(
      &kcg_c1->targetList,
      &kcg_c2->targetList);
  return kcg_equ;
}
#endif /* kcg_use_extractTargetsMRSPACC_TargetManagement_pkg */

#ifdef kcg_use_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg
kcg_bool kcg_comp_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg(
  T_LevelTansitionInfo_Level_And_Mode_Types_Pkg *kcg_c1,
  T_LevelTansitionInfo_Level_And_Mode_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->AckLength == kcg_c2->AckLength);
  kcg_equ = kcg_equ & (kcg_c1->immediateAck == kcg_c2->immediateAck);
  kcg_equ = kcg_equ & (kcg_c1->transitionType == kcg_c2->transitionType);
  kcg_equ = kcg_equ & (kcg_c1->position == kcg_c2->position);
  kcg_equ = kcg_equ & (kcg_c1->level == kcg_c2->level);
  return kcg_equ;
}
#endif /* kcg_use_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_BG_Message_T_BG_Types_Pkg
kcg_bool kcg_comp_BG_Message_T_BG_Types_Pkg(
  BG_Message_T_BG_Types_Pkg *kcg_c1,
  BG_Message_T_BG_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_centerOfBalisePosition_T_BG_Types_Pkg(
      &kcg_c1->centerOfBalisePosition,
      &kcg_c2->centerOfBalisePosition);
  kcg_equ = kcg_equ & (kcg_c1->numberBalises == kcg_c2->numberBalises);
  kcg_equ = kcg_equ & kcg_comp_TelegramArray_T_BG_Types_Pkg(
      &kcg_c1->Telegrams,
      &kcg_c2->Telegrams);
  kcg_equ = kcg_equ & (kcg_c1->present == kcg_c2->present);
  return kcg_equ;
}
#endif /* kcg_use_BG_Message_T_BG_Types_Pkg */

#ifdef kcg_use_Telegram_T_BG_Types_Pkg
kcg_bool kcg_comp_Telegram_T_BG_Types_Pkg(
  Telegram_T_BG_Types_Pkg *kcg_c1,
  Telegram_T_BG_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_CompressedPackets_T_Common_Types_Pkg(
      &kcg_c1->packets,
      &kcg_c2->packets);
  kcg_equ = kcg_equ & kcg_comp_TelegramHeader_T_BG_Types_Pkg(
      &kcg_c1->telegramheader,
      &kcg_c2->telegramheader);
  kcg_equ = kcg_equ & (kcg_c1->checkResult == kcg_c2->checkResult);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_Telegram_T_BG_Types_Pkg */

#ifdef kcg_use_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg
kcg_bool kcg_comp_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg(
  ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg *kcg_c1,
  ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_DMI_LevelList_T_DMI_Types_Pkg(
      &kcg_c1->availableLevelsList,
      &kcg_c2->availableLevelsList);
  kcg_equ = kcg_equ & (kcg_c1->lastActiveNTC == kcg_c2->lastActiveNTC);
  kcg_equ = kcg_equ & (kcg_c1->lastActiveLevel == kcg_c2->lastActiveLevel);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg */

#ifdef kcg_use_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg
kcg_bool kcg_comp_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg(
  DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c1,
  DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->systemTime == kcg_c2->systemTime);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg */

#ifdef kcg_use_struct_169236
kcg_bool kcg_comp_struct_169236(struct_169236 *kcg_c1, struct_169236 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array_bool_5(&kcg_c1->items, &kcg_c2->items);
  kcg_equ = kcg_equ & (kcg_c1->idx == kcg_c2->idx);
  return kcg_equ;
}
#endif /* kcg_use_struct_169236 */

#ifdef kcg_use_ParabolaArc_T_CalcBrakingCurves_types
kcg_bool kcg_comp_ParabolaArc_T_CalcBrakingCurves_types(
  ParabolaArc_T_CalcBrakingCurves_types *kcg_c1,
  ParabolaArc_T_CalcBrakingCurves_types *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->acceleration == kcg_c2->acceleration);
  kcg_equ = kcg_equ & (kcg_c1->speed == kcg_c2->speed);
  kcg_equ = kcg_equ & (kcg_c1->distance == kcg_c2->distance);
  return kcg_equ;
}
#endif /* kcg_use_ParabolaArc_T_CalcBrakingCurves_types */

#ifdef kcg_use_DMI_train_length_T_DMI_Types_Pkg
kcg_bool kcg_comp_DMI_train_length_T_DMI_Types_Pkg(
  DMI_train_length_T_DMI_Types_Pkg *kcg_c1,
  DMI_train_length_T_DMI_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->dig4 == kcg_c2->dig4);
  kcg_equ = kcg_equ & (kcg_c1->dig3 == kcg_c2->dig3);
  kcg_equ = kcg_equ & (kcg_c1->dig2 == kcg_c2->dig2);
  kcg_equ = kcg_equ & (kcg_c1->dig1 == kcg_c2->dig1);
  kcg_equ = kcg_equ & (kcg_c1->number == kcg_c2->number);
  return kcg_equ;
}
#endif /* kcg_use_DMI_train_length_T_DMI_Types_Pkg */

#ifdef kcg_use_IterPacket58_T_Packet_Types_Pkg
kcg_bool kcg_comp_IterPacket58_T_Packet_Types_Pkg(
  IterPacket58_T_Packet_Types_Pkg *kcg_c1,
  IterPacket58_T_Packet_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->q_lgtloc == kcg_c2->q_lgtloc);
  kcg_equ = kcg_equ & (kcg_c1->d_loc == kcg_c2->d_loc);
  return kcg_equ;
}
#endif /* kcg_use_IterPacket58_T_Packet_Types_Pkg */

#ifdef kcg_use_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg
kcg_bool kcg_comp_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(
  DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg *kcg_c1,
  DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->adhesionFactor == kcg_c2->adhesionFactor);
  kcg_equ = kcg_equ & (kcg_c1->systemTime == kcg_c2->systemTime);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg */

#ifdef kcg_use_P046_section_int_T_TM
kcg_bool kcg_comp_P046_section_int_T_TM(
  P046_section_int_T_TM *kcg_c1,
  P046_section_int_T_TM *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->NID_NTC == kcg_c2->NID_NTC);
  kcg_equ = kcg_equ & (kcg_c1->M_LEVELTR == kcg_c2->M_LEVELTR);
  return kcg_equ;
}
#endif /* kcg_use_P046_section_int_T_TM */

#ifdef kcg_use_TargetCollection_T_TargetManagement_types
kcg_bool kcg_comp_TargetCollection_T_TargetManagement_types(
  TargetCollection_T_TargetManagement_types *kcg_c1,
  TargetCollection_T_TargetManagement_types *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_Target_real_T_TargetManagement_types(
      &kcg_c1->SvL_LoA_target,
      &kcg_c2->SvL_LoA_target);
  kcg_equ = kcg_equ & kcg_comp_Target_real_T_TargetManagement_types(
      &kcg_c1->EOA_target,
      &kcg_c2->EOA_target);
  kcg_equ = kcg_equ & kcg_comp_Target_list_MRSP_real_T_TargetManagement_types(
      &kcg_c1->MRSP_targetList,
      &kcg_c2->MRSP_targetList);
  kcg_equ = kcg_equ & (kcg_c1->updatedTargetList == kcg_c2->updatedTargetList);
  return kcg_equ;
}
#endif /* kcg_use_TargetCollection_T_TargetManagement_types */

#ifdef kcg_use_probesBalises_T_xdebugSupport_Pkg
kcg_bool kcg_comp_probesBalises_T_xdebugSupport_Pkg(
  probesBalises_T_xdebugSupport_Pkg *kcg_c1,
  probesBalises_T_xdebugSupport_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_MSG_Errors_T_Common_Types_Pkg(
      &kcg_c1->errors,
      &kcg_c2->errors);
  kcg_equ = kcg_equ & (kcg_c1->nid_c == kcg_c2->nid_c);
  kcg_equ = kcg_equ & (kcg_c1->bg_id == kcg_c2->bg_id);
  kcg_equ = kcg_equ & (kcg_c1->isChanged == kcg_c2->isChanged);
  return kcg_equ;
}
#endif /* kcg_use_probesBalises_T_xdebugSupport_Pkg */

#ifdef kcg_use_DynamicConfig_T
kcg_bool kcg_comp_DynamicConfig_T(
  DynamicConfig_T *kcg_c1,
  DynamicConfig_T *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_PosRepParams_T(
      &kcg_c1->m_PosRepParams,
      &kcg_c2->m_PosRepParams);
  kcg_equ = kcg_equ & kcg_comp_MAReqParams_T(
      &kcg_c1->m_MAReqParams,
      &kcg_c2->m_MAReqParams);
  kcg_equ = kcg_equ & kcg_comp_NationalParams_T(
      &kcg_c1->m_NationalParams,
      &kcg_c2->m_NationalParams);
  kcg_equ = kcg_equ & (kcg_c1->m_version == kcg_c2->m_version);
  return kcg_equ;
}
#endif /* kcg_use_DynamicConfig_T */

#ifdef kcg_use_T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg
kcg_bool kcg_comp_T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg(
  T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->receivedL1MA_track ==
      kcg_c2->receivedL1MA_track);
  kcg_equ = kcg_equ & (kcg_c1->receivedL2L3MA_track ==
      kcg_c2->receivedL2L3MA_track);
  kcg_equ = kcg_equ &
    kcg_comp_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg(
      &kcg_c1->conditionnalTransition,
      &kcg_c2->conditionnalTransition);
  kcg_equ = kcg_equ &
    kcg_comp_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg(
      &kcg_c1->level_transition_priority_table,
      &kcg_c2->level_transition_priority_table);
  return kcg_equ;
}
#endif /* kcg_use_T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_nationValuesForDMI_T_DMI_Types_Pkg
kcg_bool kcg_comp_nationValuesForDMI_T_DMI_Types_Pkg(
  nationValuesForDMI_T_DMI_Types_Pkg *kcg_c1,
  nationValuesForDMI_T_DMI_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_c_valid == kcg_c2->nid_c_valid);
  kcg_equ = kcg_equ & (kcg_c1->nid_c == kcg_c2->nid_c);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_nationValuesForDMI_T_DMI_Types_Pkg */

#ifdef kcg_use_Target_T_TargetManagement_types
kcg_bool kcg_comp_Target_T_TargetManagement_types(
  Target_T_TargetManagement_types *kcg_c1,
  Target_T_TargetManagement_types *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  kcg_equ = kcg_equ & (kcg_c1->speed == kcg_c2->speed);
  kcg_equ = kcg_equ & (kcg_c1->distance == kcg_c2->distance);
  kcg_equ = kcg_equ & (kcg_c1->targetType == kcg_c2->targetType);
  return kcg_equ;
}
#endif /* kcg_use_Target_T_TargetManagement_types */

#ifdef kcg_use_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg
kcg_bool kcg_comp_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
  DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c1,
  DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->acknowledged == kcg_c2->acknowledged);
  kcg_equ = kcg_equ & (kcg_c1->textMessage_ID == kcg_c2->textMessage_ID);
  kcg_equ = kcg_equ & (kcg_c1->systemTime == kcg_c2->systemTime);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg */

#ifdef kcg_use_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg
kcg_bool kcg_comp_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg(
  DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c1,
  DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nAlive == kcg_c2->nAlive);
  kcg_equ = kcg_equ & (kcg_c1->statusSet == kcg_c2->statusSet);
  kcg_equ = kcg_equ & (kcg_c1->systemTime == kcg_c2->systemTime);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg */

#ifdef kcg_use_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg
kcg_bool kcg_comp_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg(
  T_AcknoledgementRequest_Level_And_Mode_Types_Pkg *kcg_c1,
  T_AcknoledgementRequest_Level_And_Mode_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->LevelNeedsAck == kcg_c2->LevelNeedsAck);
  kcg_equ = kcg_equ & (kcg_c1->SH_Req_RefusedByRBC ==
      kcg_c2->SH_Req_RefusedByRBC);
  kcg_equ = kcg_equ & (kcg_c1->whichMode == kcg_c2->whichMode);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_struct_169401
kcg_bool kcg_comp_struct_169401(struct_169401 *kcg_c1, struct_169401 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Or_Line == kcg_c2->Or_Line);
  kcg_equ = kcg_equ & (kcg_c1->Or_BG == kcg_c2->Or_BG);
  kcg_equ = kcg_equ & (kcg_c1->Pos == kcg_c2->Pos);
  kcg_equ = kcg_equ & (kcg_c1->NID_BG == kcg_c2->NID_BG);
  kcg_equ = kcg_equ & (kcg_c1->NID_C == kcg_c2->NID_C);
  return kcg_equ;
}
#endif /* kcg_use_struct_169401 */

#ifdef kcg_use_passedBG_T_BG_Types_Pkg
kcg_bool kcg_comp_passedBG_T_BG_Types_Pkg(
  passedBG_T_BG_Types_Pkg *kcg_c1,
  passedBG_T_BG_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_LinkedBGs_T_BG_Types_Pkg(
      &kcg_c1->linkedBGs,
      &kcg_c2->linkedBGs);
  kcg_equ = kcg_equ & kcg_comp_BG_Header_T_BG_Types_Pkg(
      &kcg_c1->BG_Header,
      &kcg_c2->BG_Header);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_passedBG_T_BG_Types_Pkg */

#ifdef kcg_use_trainData_Events_T_trainData_Types_pkg
kcg_bool kcg_comp_trainData_Events_T_trainData_Types_pkg(
  trainData_Events_T_trainData_Types_pkg *kcg_c1,
  trainData_Events_T_trainData_Types_pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->MoRCreadyFlag == kcg_c2->MoRCreadyFlag);
  kcg_equ = kcg_equ & (kcg_c1->approachingRBCarea ==
      kcg_c2->approachingRBCarea);
  kcg_equ = kcg_equ & (kcg_c1->safeRadioConnectionLost ==
      kcg_c2->safeRadioConnectionLost);
  kcg_equ = kcg_equ & (kcg_c1->communicationSessionEstablished ==
      kcg_c2->communicationSessionEstablished);
  kcg_equ = kcg_equ & (kcg_c1->driverRequestModify ==
      kcg_c2->driverRequestModify);
  kcg_equ = kcg_equ & (kcg_c1->trainStandStill == kcg_c2->trainStandStill);
  return kcg_equ;
}
#endif /* kcg_use_trainData_Events_T_trainData_Types_pkg */

#ifdef kcg_use_struct_169455
kcg_bool kcg_comp_struct_169455(struct_169455 *kcg_c1, struct_169455 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->d_sectiontimerstoploc ==
      kcg_c2->d_sectiontimerstoploc);
  kcg_equ = kcg_equ & (kcg_c1->t_sectiontimer == kcg_c2->t_sectiontimer);
  kcg_equ = kcg_equ & (kcg_c1->q_sectiontimer == kcg_c2->q_sectiontimer);
  kcg_equ = kcg_equ & (kcg_c1->l_section == kcg_c2->l_section);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_struct_169455 */

#ifdef kcg_use_P046_section_enum_T_TM
kcg_bool kcg_comp_P046_section_enum_T_TM(
  P046_section_enum_T_TM *kcg_c1,
  P046_section_enum_T_TM *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_ntc == kcg_c2->nid_ntc);
  kcg_equ = kcg_equ & (kcg_c1->m_leveltr == kcg_c2->m_leveltr);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P046_section_enum_T_TM */

#ifdef kcg_use_struct_169478
kcg_bool kcg_comp_struct_169478(struct_169478 *kcg_c1, struct_169478 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->MRS == kcg_c2->MRS);
  kcg_equ = kcg_equ & (kcg_c1->Loc_LRBG == kcg_c2->Loc_LRBG);
  kcg_equ = kcg_equ & (kcg_c1->Loc_Abs == kcg_c2->Loc_Abs);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_struct_169478 */

#ifdef kcg_use_MRSP_reduction_acc_TA_Export
kcg_bool kcg_comp_MRSP_reduction_acc_TA_Export(
  MRSP_reduction_acc_TA_Export *kcg_c1,
  MRSP_reduction_acc_TA_Export *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_MRSP_Profile_t_TrackAtlasTypes(
      &kcg_c1->MRSP,
      &kcg_c2->MRSP);
  kcg_equ = kcg_equ & (kcg_c1->write_index == kcg_c2->write_index);
  return kcg_equ;
}
#endif /* kcg_use_MRSP_reduction_acc_TA_Export */

#ifdef kcg_use_DP_or_OL_t_TrackAtlasTypes
kcg_bool kcg_comp_DP_or_OL_t_TrackAtlasTypes(
  DP_or_OL_t_TrackAtlasTypes *kcg_c1,
  DP_or_OL_t_TrackAtlasTypes *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->calc_v_release_onboard ==
      kcg_c2->calc_v_release_onboard);
  kcg_equ = kcg_equ & (kcg_c1->v_release == kcg_c2->v_release);
  kcg_equ = kcg_equ & (kcg_c1->d_DP_or_OL == kcg_c2->d_DP_or_OL);
  return kcg_equ;
}
#endif /* kcg_use_DP_or_OL_t_TrackAtlasTypes */

#ifdef kcg_use_RadioManagement_T_API_RadioCommunication_Pkg
kcg_bool kcg_comp_RadioManagement_T_API_RadioCommunication_Pkg(
  RadioManagement_T_API_RadioCommunication_Pkg *kcg_c1,
  RadioManagement_T_API_RadioCommunication_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->networkID == kcg_c2->networkID);
  kcg_equ = kcg_equ & (kcg_c1->cmd == kcg_c2->cmd);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_RadioManagement_T_API_RadioCommunication_Pkg */

#ifdef kcg_use_av_MergedMap_t_SDMConversionModelPkg
kcg_bool kcg_comp_av_MergedMap_t_SDMConversionModelPkg(
  av_MergedMap_t_SDMConversionModelPkg *kcg_c1,
  av_MergedMap_t_SDMConversionModelPkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_v_MergedSteps_t_SDMConversionModelPkg(
      &kcg_c1->v,
      &kcg_c2->v);
  kcg_equ = kcg_equ & kcg_comp_a_MergedSteps_t_SDMConversionModelPkg(
      &kcg_c1->a,
      &kcg_c2->a);
  return kcg_equ;
}
#endif /* kcg_use_av_MergedMap_t_SDMConversionModelPkg */

#ifdef kcg_use_P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg
kcg_bool kcg_comp_P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg(
  P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg *kcg_c1,
  P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_ntc == kcg_c2->nid_ntc);
  kcg_equ = kcg_equ & (kcg_c1->m_leveltr == kcg_c2->m_leveltr);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg */

#ifdef kcg_use_Diff_T_Packet_Types_Pkg
kcg_bool kcg_comp_Diff_T_Packet_Types_Pkg(
  Diff_T_Packet_Types_Pkg *kcg_c1,
  Diff_T_Packet_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->v_diff == kcg_c2->v_diff);
  kcg_equ = kcg_equ & (kcg_c1->nc_diff == kcg_c2->nc_diff);
  kcg_equ = kcg_equ & (kcg_c1->nc_cddiff == kcg_c2->nc_cddiff);
  kcg_equ = kcg_equ & (kcg_c1->q_diff == kcg_c2->q_diff);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_Diff_T_Packet_Types_Pkg */

#ifdef kcg_use_CompressedPackets_T_Common_Types_Pkg
kcg_bool kcg_comp_CompressedPackets_T_Common_Types_Pkg(
  CompressedPackets_T_Common_Types_Pkg *kcg_c1,
  CompressedPackets_T_Common_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_CompressedPacketData_T_Common_Types_Pkg(
      &kcg_c1->PacketData,
      &kcg_c2->PacketData);
  kcg_equ = kcg_equ & kcg_comp_Metadata_T_Common_Types_Pkg(
      &kcg_c1->PacketHeaders,
      &kcg_c2->PacketHeaders);
  return kcg_equ;
}
#endif /* kcg_use_CompressedPackets_T_Common_Types_Pkg */

#ifdef kcg_use_msgToTrackTriggers_T_RCM_MsgTypes_Pkg
kcg_bool kcg_comp_msgToTrackTriggers_T_RCM_MsgTypes_Pkg(
  msgToTrackTriggers_T_RCM_MsgTypes_Pkg *kcg_c1,
  msgToTrackTriggers_T_RCM_MsgTypes_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m154_noCompatibleVersionSupported ==
      kcg_c2->m154_noCompatibleVersionSupported);
  kcg_equ = kcg_equ & (kcg_c1->m159_sessionEstablished ==
      kcg_c2->m159_sessionEstablished);
  kcg_equ = kcg_equ & (kcg_c1->m156_terminationOfACommunicationSession ==
      kcg_c2->m156_terminationOfACommunicationSession);
  kcg_equ = kcg_equ & (kcg_c1->m155_initiationOfACommunicationSession ==
      kcg_c2->m155_initiationOfACommunicationSession);
  return kcg_equ;
}
#endif /* kcg_use_msgToTrackTriggers_T_RCM_MsgTypes_Pkg */

#ifdef kcg_use_Gradient_section_real_t_SDM_GradientAcceleration_types
kcg_bool kcg_comp_Gradient_section_real_t_SDM_GradientAcceleration_types(
  Gradient_section_real_t_SDM_GradientAcceleration_types *kcg_c1,
  Gradient_section_real_t_SDM_GradientAcceleration_types *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  kcg_equ = kcg_equ & (kcg_c1->gradient == kcg_c2->gradient);
  kcg_equ = kcg_equ & (kcg_c1->location == kcg_c2->location);
  return kcg_equ;
}
#endif /* kcg_use_Gradient_section_real_t_SDM_GradientAcceleration_types */

#ifdef kcg_use_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg
kcg_bool kcg_comp_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(
  PT4_ErrorReporting_T_Packet_TrainTypes_Pkg *kcg_c1,
  PT4_ErrorReporting_T_Packet_TrainTypes_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_error == kcg_c2->m_error);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_DMI_trackConditionElement_T_DMI_Types_Pkg
kcg_bool kcg_comp_DMI_trackConditionElement_T_DMI_Types_Pkg(
  DMI_trackConditionElement_T_DMI_Types_Pkg *kcg_c1,
  DMI_trackConditionElement_T_DMI_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_trackcond == kcg_c2->m_trackcond);
  kcg_equ = kcg_equ & (kcg_c1->d_trackcond == kcg_c2->d_trackcond);
  return kcg_equ;
}
#endif /* kcg_use_DMI_trackConditionElement_T_DMI_Types_Pkg */

#ifdef kcg_use_struct_169584
kcg_bool kcg_comp_struct_169584(struct_169584 *kcg_c1, struct_169584 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->l_reversearea == kcg_c2->l_reversearea);
  kcg_equ = kcg_equ & (kcg_c1->d_startreverse == kcg_c2->d_startreverse);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_struct_169584 */

#ifdef kcg_use_struct_169597
kcg_bool kcg_comp_struct_169597(struct_169597 *kcg_c1, struct_169597 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->dig3 == kcg_c2->dig3);
  kcg_equ = kcg_equ & (kcg_c1->dig2 == kcg_c2->dig2);
  kcg_equ = kcg_equ & (kcg_c1->dig1 == kcg_c2->dig1);
  kcg_equ = kcg_equ & (kcg_c1->number == kcg_c2->number);
  return kcg_equ;
}
#endif /* kcg_use_struct_169597 */

#ifdef kcg_use_Type_I_train_commands_T_TIU_Types_Pkg
kcg_bool kcg_comp_Type_I_train_commands_T_TIU_Types_Pkg(
  Type_I_train_commands_T_TIU_Types_Pkg *kcg_c1,
  Type_I_train_commands_T_TIU_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_traction_cutoff_cm ==
      kcg_c2->m_traction_cutoff_cm);
  kcg_equ = kcg_equ & (kcg_c1->m_mainpowerswitch_cm ==
      kcg_c2->m_mainpowerswitch_cm);
  kcg_equ = kcg_equ & (kcg_c1->m_airtightness_cm == kcg_c2->m_airtightness_cm);
  kcg_equ = kcg_equ & (kcg_c1->m_pantograph_cm == kcg_c2->m_pantograph_cm);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_Type_I_train_commands_T_TIU_Types_Pkg */

#ifdef kcg_use_connection_ids_T_Handover_Pkg
kcg_bool kcg_comp_connection_ids_T_Handover_Pkg(
  connection_ids_T_Handover_Pkg *kcg_c1,
  connection_ids_T_Handover_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_mn == kcg_c2->nid_mn);
  kcg_equ = kcg_equ & (kcg_c1->nid_radio == kcg_c2->nid_radio);
  kcg_equ = kcg_equ & (kcg_c1->nid_RBC == kcg_c2->nid_RBC);
  kcg_equ = kcg_equ & (kcg_c1->nid_c == kcg_c2->nid_c);
  kcg_equ = kcg_equ & (kcg_c1->mobileDeviceNo == kcg_c2->mobileDeviceNo);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_connection_ids_T_Handover_Pkg */

#ifdef kcg_use_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg
kcg_bool kcg_comp_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *kcg_c1,
  linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->subsequentLinkedBG_idx ==
      kcg_c2->subsequentLinkedBG_idx);
  kcg_equ = kcg_equ & (kcg_c1->currentIndex == kcg_c2->currentIndex);
  kcg_equ = kcg_equ & (kcg_c1->previousLinkedBG_idx ==
      kcg_c2->previousLinkedBG_idx);
  return kcg_equ;
}
#endif /* kcg_use_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg */

#ifdef kcg_use_P027V1_section_int_qdiff_T_TM_baseline2
kcg_bool kcg_comp_P027V1_section_int_qdiff_T_TM_baseline2(
  P027V1_section_int_qdiff_T_TM_baseline2 *kcg_c1,
  P027V1_section_int_qdiff_T_TM_baseline2 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->V_DIFF == kcg_c2->V_DIFF);
  kcg_equ = kcg_equ & (kcg_c1->NC_DIFF == kcg_c2->NC_DIFF);
  return kcg_equ;
}
#endif /* kcg_use_P027V1_section_int_qdiff_T_TM_baseline2 */

#ifdef kcg_use_struct_169664
kcg_bool kcg_comp_struct_169664(struct_169664 *kcg_c1, struct_169664 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array_bool_4(&kcg_c1->items, &kcg_c2->items);
  kcg_equ = kcg_equ & (kcg_c1->idx == kcg_c2->idx);
  return kcg_equ;
}
#endif /* kcg_use_struct_169664 */

#ifdef kcg_use_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg
kcg_bool kcg_comp_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg(
  m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg *kcg_c1,
  m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_version == kcg_c2->m_version);
  kcg_equ = kcg_equ & kcg_comp_RBC_Id_T_Common_Types_Pkg(
      &kcg_c1->origin,
      &kcg_c2->origin);
  kcg_equ = kcg_equ & (kcg_c1->versionSupported == kcg_c2->versionSupported);
  kcg_equ = kcg_equ & (kcg_c1->msgSrc == kcg_c2->msgSrc);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg */

#ifdef kcg_use_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg
kcg_bool kcg_comp_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
  DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c1,
  DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->entry_request == kcg_c2->entry_request);
  kcg_equ = kcg_equ & (kcg_c1->system_clock == kcg_c2->system_clock);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifdef kcg_use_CurveCollection_T_CalcBrakingCurves_types
kcg_bool kcg_comp_CurveCollection_T_CalcBrakingCurves_types(
  CurveCollection_T_CalcBrakingCurves_types *kcg_c1,
  CurveCollection_T_CalcBrakingCurves_types *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->GUI_curve_enabled == kcg_c2->GUI_curve_enabled);
  kcg_equ = kcg_equ & kcg_comp_ParabolaCurve_T_CalcBrakingCurves_types(
      &kcg_c1->GUI_curve,
      &kcg_c2->GUI_curve);
  kcg_equ = kcg_equ & kcg_comp_ParabolaCurve_T_CalcBrakingCurves_types(
      &kcg_c1->SvL_LoA_EBD_curve,
      &kcg_c2->SvL_LoA_EBD_curve);
  kcg_equ = kcg_equ & kcg_comp_ParabolaCurve_T_CalcBrakingCurves_types(
      &kcg_c1->EOA_SBD_curve,
      &kcg_c2->EOA_SBD_curve);
  kcg_equ = kcg_equ &
    kcg_comp_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types(
      &kcg_c1->MRSP_EBD_curves,
      &kcg_c2->MRSP_EBD_curves);
  return kcg_equ;
}
#endif /* kcg_use_CurveCollection_T_CalcBrakingCurves_types */

#ifdef kcg_use_SSP_section_t_TA_MRSP
kcg_bool kcg_comp_SSP_section_t_TA_MRSP(
  SSP_section_t_TA_MRSP *kcg_c1,
  SSP_section_t_TA_MRSP *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->speed == kcg_c2->speed);
  kcg_equ = kcg_equ & (kcg_c1->target == kcg_c2->target);
  return kcg_equ;
}
#endif /* kcg_use_SSP_section_t_TA_MRSP */

#ifdef kcg_use_P021_section_int_T_TM
kcg_bool kcg_comp_P021_section_int_T_TM(
  P021_section_int_T_TM *kcg_c1,
  P021_section_int_T_TM *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->G_A == kcg_c2->G_A);
  kcg_equ = kcg_equ & (kcg_c1->Q_GDIR == kcg_c2->Q_GDIR);
  kcg_equ = kcg_equ & (kcg_c1->D_GRADIENT == kcg_c2->D_GRADIENT);
  return kcg_equ;
}
#endif /* kcg_use_P021_section_int_T_TM */

#ifdef kcg_use_mobileRegistrationCmd_T_RCM_Types_Pkg
kcg_bool kcg_comp_mobileRegistrationCmd_T_RCM_Types_Pkg(
  mobileRegistrationCmd_T_RCM_Types_Pkg *kcg_c1,
  mobileRegistrationCmd_T_RCM_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->network_id == kcg_c2->network_id);
  kcg_equ = kcg_equ & (kcg_c1->action == kcg_c2->action);
  kcg_equ = kcg_equ & (kcg_c1->mobileDeviceNo == kcg_c2->mobileDeviceNo);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_mobileRegistrationCmd_T_RCM_Types_Pkg */

#ifdef kcg_use_T_AnnouncedLevel_Level_And_Mode_Types_Pkg
kcg_bool kcg_comp_T_AnnouncedLevel_Level_And_Mode_Types_Pkg(
  T_AnnouncedLevel_Level_And_Mode_Types_Pkg *kcg_c1,
  T_AnnouncedLevel_Level_And_Mode_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->IsAvailableForUse == kcg_c2->IsAvailableForUse);
  kcg_equ = kcg_equ & kcg_comp_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &kcg_c1->LevelTransition,
      &kcg_c2->LevelTransition);
  return kcg_equ;
}
#endif /* kcg_use_T_AnnouncedLevel_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_T_Data_From_STM_Level_And_Mode_Types_Pkg
kcg_bool kcg_comp_T_Data_From_STM_Level_And_Mode_Types_Pkg(
  T_Data_From_STM_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Data_From_STM_Level_And_Mode_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->National_trip_Order ==
      kcg_c2->National_trip_Order);
  kcg_equ = kcg_equ & (kcg_c1->Interface_To_National_System ==
      kcg_c2->Interface_To_National_System);
  return kcg_equ;
}
#endif /* kcg_use_T_Data_From_STM_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_AccuDistanceProfileMA_TA_MA
kcg_bool kcg_comp_AccuDistanceProfileMA_TA_MA(
  AccuDistanceProfileMA_TA_MA *kcg_c1,
  AccuDistanceProfileMA_TA_MA *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->d_endsection == kcg_c2->d_endsection);
  kcg_equ = kcg_equ & kcg_comp_MovementAuthoritySectionlist_t_TrackAtlasTypes(
      &kcg_c1->sections,
      &kcg_c2->sections);
  return kcg_equ;
}
#endif /* kcg_use_AccuDistanceProfileMA_TA_MA */

#ifdef kcg_use_P041_section_enum_T_TM
kcg_bool kcg_comp_P041_section_enum_T_TM(
  P041_section_enum_T_TM *kcg_c1,
  P041_section_enum_T_TM *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->l_ackleveltr == kcg_c2->l_ackleveltr);
  kcg_equ = kcg_equ & (kcg_c1->nid_ntc == kcg_c2->nid_ntc);
  kcg_equ = kcg_equ & (kcg_c1->m_leveltr == kcg_c2->m_leveltr);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P041_section_enum_T_TM */

#ifdef kcg_use_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg
kcg_bool kcg_comp_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg(
  P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg *kcg_c1,
  P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->t_cycrqst == kcg_c2->t_cycrqst);
  kcg_equ = kcg_equ & (kcg_c1->t_timeoutrqst == kcg_c2->t_timeoutrqst);
  kcg_equ = kcg_equ & (kcg_c1->t_mar == kcg_c2->t_mar);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg */

#ifdef kcg_use_struct_169865
kcg_bool kcg_comp_struct_169865(struct_169865 *kcg_c1, struct_169865 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_nvkvint_km_23 == kcg_c2->m_nvkvint_km_23);
  kcg_equ = kcg_equ & (kcg_c1->m_nvkvint_km_12 == kcg_c2->m_nvkvint_km_12);
  kcg_equ = kcg_equ & (kcg_c1->v_nvkvint_k_m == kcg_c2->v_nvkvint_k_m);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_struct_169865 */

#ifdef kcg_use_nvkvint_T_Packet_Types_Pkg
kcg_bool kcg_comp_nvkvint_T_Packet_Types_Pkg(
  nvkvint_T_Packet_Types_Pkg *kcg_c1,
  nvkvint_T_Packet_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_nvkvint23 == kcg_c2->m_nvkvint23);
  kcg_equ = kcg_equ & (kcg_c1->m_nvkvint12 == kcg_c2->m_nvkvint12);
  kcg_equ = kcg_equ & (kcg_c1->v_nvkvint == kcg_c2->v_nvkvint);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_nvkvint_T_Packet_Types_Pkg */

#ifdef kcg_use_P046_OBU_T_TM
kcg_bool kcg_comp_P046_OBU_T_TM(P046_OBU_T_TM *kcg_c1, P046_OBU_T_TM *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_P046_OBU_sectionlist_enum_T_TM(
      &kcg_c1->sections,
      &kcg_c2->sections);
  kcg_equ = kcg_equ & (kcg_c1->n_iter == kcg_c2->n_iter);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P046_OBU_T_TM */

#ifdef kcg_use_P027V1_OBU_T_TM_baseline2
kcg_bool kcg_comp_P027V1_OBU_T_TM_baseline2(
  P027V1_OBU_T_TM_baseline2 *kcg_c1,
  P027V1_OBU_T_TM_baseline2 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_P027V1_OBU_sectionlist_enum_T_TM_baseline2(
      &kcg_c1->sections,
      &kcg_c2->sections);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P027V1_OBU_T_TM_baseline2 */

#ifdef kcg_use_bec_t_TargetLimits_Pkg
kcg_bool kcg_comp_bec_t_TargetLimits_Pkg(
  bec_t_TargetLimits_Pkg *kcg_c1,
  bec_t_TargetLimits_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->d == kcg_c2->d);
  kcg_equ = kcg_equ & (kcg_c1->v == kcg_c2->v);
  return kcg_equ;
}
#endif /* kcg_use_bec_t_TargetLimits_Pkg */

#ifdef kcg_use_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg
kcg_bool kcg_comp_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg *kcg_c1,
  BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->passedTotalBGsCount ==
      kcg_c2->passedTotalBGsCount);
  kcg_equ = kcg_equ & (kcg_c1->passedLinkedBGsCount ==
      kcg_c2->passedLinkedBGsCount);
  kcg_equ = kcg_equ & (kcg_c1->passedUnlinkedBGsCount ==
      kcg_c2->passedUnlinkedBGsCount);
  kcg_equ = kcg_equ & (kcg_c1->totalBGsCount == kcg_c2->totalBGsCount);
  kcg_equ = kcg_equ & (kcg_c1->linkedBGsCount == kcg_c2->linkedBGsCount);
  kcg_equ = kcg_equ & (kcg_c1->unlinkedBGsCount == kcg_c2->unlinkedBGsCount);
  return kcg_equ;
}
#endif /* kcg_use_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg */

#ifdef kcg_use_mobileHWStatus_Type_MoRC_Pck
kcg_bool kcg_comp_mobileHWStatus_Type_MoRC_Pck(
  mobileHWStatus_Type_MoRC_Pck *kcg_c1,
  mobileHWStatus_Type_MoRC_Pck *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->connectionLost == kcg_c2->connectionLost);
  kcg_equ = kcg_equ & (kcg_c1->settingUpConnectionHasFailed ==
      kcg_c2->settingUpConnectionHasFailed);
  kcg_equ = kcg_equ & (kcg_c1->connectionStatus == kcg_c2->connectionStatus);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_mobileHWStatus_Type_MoRC_Pck */

#ifdef kcg_use_struct_169965
kcg_bool kcg_comp_struct_169965(struct_169965 *kcg_c1, struct_169965 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_ctraction == kcg_c2->nid_ctraction);
  kcg_equ = kcg_equ & (kcg_c1->m_voltage == kcg_c2->m_voltage);
  return kcg_equ;
}
#endif /* kcg_use_struct_169965 */

#ifdef kcg_use_struct_169971
kcg_bool kcg_comp_struct_169971(struct_169971 *kcg_c1, struct_169971 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->distance == kcg_c2->distance);
  kcg_equ = kcg_equ & (kcg_c1->now == kcg_c2->now);
  return kcg_equ;
}
#endif /* kcg_use_struct_169971 */

#ifdef kcg_use_TelegramStore_T_Receive_TrackSide_Msg_Pkg
kcg_bool kcg_comp_TelegramStore_T_Receive_TrackSide_Msg_Pkg(
  TelegramStore_T_Receive_TrackSide_Msg_Pkg *kcg_c1,
  TelegramStore_T_Receive_TrackSide_Msg_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_centerOfBalisePosition_T_BG_Types_Pkg(
      &kcg_c1->position,
      &kcg_c2->position);
  kcg_equ = kcg_equ & kcg_comp_Telegram_T_BG_Types_Pkg(
      &kcg_c1->telegram,
      &kcg_c2->telegram);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_TelegramStore_T_Receive_TrackSide_Msg_Pkg */

#ifdef kcg_use_ReportedBG_T_ProvidePositionReport_Pkg
kcg_bool kcg_comp_ReportedBG_T_ProvidePositionReport_Pkg(
  ReportedBG_T_ProvidePositionReport_Pkg *kcg_c1,
  ReportedBG_T_ProvidePositionReport_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &kcg_c1->location,
      &kcg_c2->location);
  kcg_equ = kcg_equ & (kcg_c1->nidBG == kcg_c2->nidBG);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_ReportedBG_T_ProvidePositionReport_Pkg */

#ifdef kcg_use_radioNetWorkIDs_T_MoRC_Pck
kcg_bool kcg_comp_radioNetWorkIDs_T_MoRC_Pck(
  radioNetWorkIDs_T_MoRC_Pck *kcg_c1,
  radioNetWorkIDs_T_MoRC_Pck *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &kcg_c1->ID_fromDriver,
      &kcg_c2->ID_fromDriver);
  kcg_equ = kcg_equ & kcg_comp_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &kcg_c1->memorizedID,
      &kcg_c2->memorizedID);
  kcg_equ = kcg_equ & kcg_comp_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &kcg_c1->defaultID,
      &kcg_c2->defaultID);
  return kcg_equ;
}
#endif /* kcg_use_radioNetWorkIDs_T_MoRC_Pck */

#ifdef kcg_use_Change_traction_system_T_TIU_Types_Pkg
kcg_bool kcg_comp_Change_traction_system_T_TIU_Types_Pkg(
  Change_traction_system_T_TIU_Types_Pkg *kcg_c1,
  Change_traction_system_T_TIU_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_M_voltage_T_TIU_Types_Pkg(
      &kcg_c1->m_voltage,
      &kcg_c2->m_voltage);
  kcg_equ = kcg_equ & kcg_comp_D_test_traction_T_TIU_Types_Pkg(
      &kcg_c1->d_test_traction,
      &kcg_c2->d_test_traction);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_Change_traction_system_T_TIU_Types_Pkg */

#ifdef kcg_use_Change_of_allowed_current_consumption_T_TIU_Types_Pkg
kcg_bool kcg_comp_Change_of_allowed_current_consumption_T_TIU_Types_Pkg(
  Change_of_allowed_current_consumption_T_TIU_Types_Pkg *kcg_c1,
  Change_of_allowed_current_consumption_T_TIU_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_M_current_T_TIU_Types_Pkg(
      &kcg_c1->m_current,
      &kcg_c2->m_current);
  kcg_equ = kcg_equ & kcg_comp_D_test_current_T_TIU_Types_Pkg(
      &kcg_c1->d_test_current,
      &kcg_c2->d_test_current);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_Change_of_allowed_current_consumption_T_TIU_Types_Pkg */

#ifdef kcg_use_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg
kcg_bool kcg_comp_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg(
  Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg *kcg_c1,
  Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_D_test_trackinit_T_TIU_Types_Pkg(
      &kcg_c1->empty_profile_initial_state_to_be_resumed,
      &kcg_c2->empty_profile_initial_state_to_be_resumed);
  kcg_equ = kcg_equ & kcg_comp_nothing_to_resume_profile_follow_T_TIU_Types_Pkg(
      &kcg_c1->nothing_to_resume_profile_follow,
      &kcg_c2->nothing_to_resume_profile_follow);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg */

#ifdef kcg_use_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg
kcg_bool kcg_comp_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(
  DMI_Level_Data_T_DMI_Messages_Bothways_Pkg *kcg_c1,
  DMI_Level_Data_T_DMI_Messages_Bothways_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_DMI_level_T_DMI_Types_Pkg(
      &kcg_c1->level,
      &kcg_c2->level);
  kcg_equ = kcg_equ & (kcg_c1->systemTime == kcg_c2->systemTime);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg */

#ifdef kcg_use_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg
kcg_bool kcg_comp_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
  DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c1,
  DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_DMI_LevelList_T_DMI_Types_Pkg(
      &kcg_c1->levelList,
      &kcg_c2->levelList);
  kcg_equ = kcg_equ & (kcg_c1->system_clock == kcg_c2->system_clock);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifdef kcg_use_struct_170025
kcg_bool kcg_comp_struct_170025(struct_170025 *kcg_c1, struct_170025 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->gradient == kcg_c2->gradient);
  kcg_equ = kcg_equ & (kcg_c1->end_section == kcg_c2->end_section);
  kcg_equ = kcg_equ & (kcg_c1->begin_section == kcg_c2->begin_section);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_struct_170025 */

#ifdef kcg_use_P005_TM_TrainToTrack
kcg_bool kcg_comp_P005_TM_TrainToTrack(
  P005_TM_TrainToTrack *kcg_c1,
  P005_TM_TrainToTrack *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_opeartional == kcg_c2->nid_opeartional);
  kcg_equ = kcg_equ & (kcg_c1->l_packet == kcg_c2->l_packet);
  kcg_equ = kcg_equ & (kcg_c1->nid_packet == kcg_c2->nid_packet);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P005_TM_TrainToTrack */

#ifdef kcg_use_TIU_trainStatus_T_TIU_Types_Pkg
kcg_bool kcg_comp_TIU_trainStatus_T_TIU_Types_Pkg(
  TIU_trainStatus_T_TIU_Types_Pkg *kcg_c1,
  TIU_trainStatus_T_TIU_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->activeCab == kcg_c2->activeCab);
  kcg_equ = kcg_equ & (kcg_c1->ownCab == kcg_c2->ownCab);
  kcg_equ = kcg_equ & (kcg_c1->deskOpen == kcg_c2->deskOpen);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_TIU_trainStatus_T_TIU_Types_Pkg */

#ifdef kcg_use_P058_section_enum_T_TM
kcg_bool kcg_comp_P058_section_enum_T_TM(
  P058_section_enum_T_TM *kcg_c1,
  P058_section_enum_T_TM *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->q_lgtloc == kcg_c2->q_lgtloc);
  kcg_equ = kcg_equ & (kcg_c1->d_loc == kcg_c2->d_loc);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P058_section_enum_T_TM */

#ifdef kcg_use_DMI_gradientProfile_T_DMI_Types_Pkg
kcg_bool kcg_comp_DMI_gradientProfile_T_DMI_Types_Pkg(
  DMI_gradientProfile_T_DMI_Types_Pkg *kcg_c1,
  DMI_gradientProfile_T_DMI_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_DMI_gradientProfileArray_T_DMI_Types_Pkg(
      &kcg_c1->gradientProfiles,
      &kcg_c2->gradientProfiles);
  kcg_equ = kcg_equ & (kcg_c1->profileChanged == kcg_c2->profileChanged);
  return kcg_equ;
}
#endif /* kcg_use_DMI_gradientProfile_T_DMI_Types_Pkg */

#ifdef kcg_use_DMI_trackCondition_T_DMI_Types_Pkg
kcg_bool kcg_comp_DMI_trackCondition_T_DMI_Types_Pkg(
  DMI_trackCondition_T_DMI_Types_Pkg *kcg_c1,
  DMI_trackCondition_T_DMI_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_DMI_trackConditionArray_T_DMI_Types_Pkg(
      &kcg_c1->trackCondition,
      &kcg_c2->trackCondition);
  kcg_equ = kcg_equ & (kcg_c1->nIter == kcg_c2->nIter);
  return kcg_equ;
}
#endif /* kcg_use_DMI_trackCondition_T_DMI_Types_Pkg */

#ifdef kcg_use_DMI_speedProfile_T_DMI_Types_Pkg
kcg_bool kcg_comp_DMI_speedProfile_T_DMI_Types_Pkg(
  DMI_speedProfile_T_DMI_Types_Pkg *kcg_c1,
  DMI_speedProfile_T_DMI_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_DMI_SpeedProfileArray_T_DMI_Types_Pkg(
      &kcg_c1->speedProfiles,
      &kcg_c2->speedProfiles);
  kcg_equ = kcg_equ & (kcg_c1->profileChanged == kcg_c2->profileChanged);
  return kcg_equ;
}
#endif /* kcg_use_DMI_speedProfile_T_DMI_Types_Pkg */

#ifdef kcg_use_DMI_LevelList_T_DMI_Types_Pkg
kcg_bool kcg_comp_DMI_LevelList_T_DMI_Types_Pkg(
  DMI_LevelList_T_DMI_Types_Pkg *kcg_c1,
  DMI_LevelList_T_DMI_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_DMI_level_array_T_DMI_Types_Pkg(
      &kcg_c1->levelList,
      &kcg_c2->levelList);
  kcg_equ = kcg_equ & (kcg_c1->number == kcg_c2->number);
  return kcg_equ;
}
#endif /* kcg_use_DMI_LevelList_T_DMI_Types_Pkg */

#ifdef kcg_use_MRSP_internal_section_T_TargetManagement_types
kcg_bool kcg_comp_MRSP_internal_section_T_TargetManagement_types(
  MRSP_internal_section_T_TargetManagement_types *kcg_c1,
  MRSP_internal_section_T_TargetManagement_types *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  kcg_equ = kcg_equ & (kcg_c1->MRS == kcg_c2->MRS);
  kcg_equ = kcg_equ & (kcg_c1->Loc_Abs == kcg_c2->Loc_Abs);
  return kcg_equ;
}
#endif /* kcg_use_MRSP_internal_section_T_TargetManagement_types */

#ifdef kcg_use_R_data_internal_T_InfraLib
kcg_bool kcg_comp_R_data_internal_T_InfraLib(
  R_data_internal_T_InfraLib *kcg_c1,
  R_data_internal_T_InfraLib *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->message_sent == kcg_c2->message_sent);
  kcg_equ = kcg_equ & (kcg_c1->trigger == kcg_c2->trigger);
  kcg_equ = kcg_equ & kcg_comp_CompressedPackets_T_Common_Types_Pkg(
      &kcg_c1->packets,
      &kcg_c2->packets);
  kcg_equ = kcg_equ & kcg_comp_M_TrackTrain_Radio_T_TM_radio_messages(
      &kcg_c1->message,
      &kcg_c2->message);
  return kcg_equ;
}
#endif /* kcg_use_R_data_internal_T_InfraLib */

#ifdef kcg_use_struct_170132
kcg_bool kcg_comp_struct_170132(struct_170132 *kcg_c1, struct_170132 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_engine == kcg_c2->nid_engine);
  kcg_equ = kcg_equ & (kcg_c1->t_train == kcg_c2->t_train);
  kcg_equ = kcg_equ & (kcg_c1->l_message == kcg_c2->l_message);
  kcg_equ = kcg_equ & (kcg_c1->nid_message == kcg_c2->nid_message);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_struct_170132 */

#ifdef kcg_use_P044_TM_TrainToTrack
kcg_bool kcg_comp_P044_TM_TrainToTrack(
  P044_TM_TrainToTrack *kcg_c1,
  P044_TM_TrainToTrack *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_P044_other_data_TM_TrainToTrack(
      &kcg_c1->external_data,
      &kcg_c2->external_data);
  kcg_equ = kcg_equ & (kcg_c1->nid_xuser == kcg_c2->nid_xuser);
  kcg_equ = kcg_equ & (kcg_c1->l_packet == kcg_c2->l_packet);
  kcg_equ = kcg_equ & (kcg_c1->nid_packet == kcg_c2->nid_packet);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P044_TM_TrainToTrack */

#ifdef kcg_use_av_Map_t_SDMConversionModelPkg
kcg_bool kcg_comp_av_Map_t_SDMConversionModelPkg(
  av_Map_t_SDMConversionModelPkg *kcg_c1,
  av_Map_t_SDMConversionModelPkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_v_BrakeSteps_t_SDMConversionModelPkg(
      &kcg_c1->v,
      &kcg_c2->v);
  kcg_equ = kcg_equ & kcg_comp_a_BrakeSteps_t_SDMConversionModelPkg(
      &kcg_c1->a,
      &kcg_c2->a);
  return kcg_equ;
}
#endif /* kcg_use_av_Map_t_SDMConversionModelPkg */

#ifdef kcg_use_struct_170172
kcg_bool kcg_comp_struct_170172(struct_170172 *kcg_c1, struct_170172 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_c == kcg_c2->nid_c);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_struct_170172 */

#ifdef kcg_use_P003_TM_TrainToTrack
kcg_bool kcg_comp_P003_TM_TrainToTrack(
  P003_TM_TrainToTrack *kcg_c1,
  P003_TM_TrainToTrack *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_P003_nid_radio_list_t_TM_TrainToTrack(
      &kcg_c1->nid_radio,
      &kcg_c2->nid_radio);
  kcg_equ = kcg_equ & (kcg_c1->n_iter == kcg_c2->n_iter);
  kcg_equ = kcg_equ & (kcg_c1->l_packet == kcg_c2->l_packet);
  kcg_equ = kcg_equ & (kcg_c1->nid_packet == kcg_c2->nid_packet);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P003_TM_TrainToTrack */

#ifdef kcg_use_SSP_T_Packet_Types_Pkg
kcg_bool kcg_comp_SSP_T_Packet_Types_Pkg(
  SSP_T_Packet_Types_Pkg *kcg_c1,
  SSP_T_Packet_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_DiffArray_T_Packet_Types_Pkg(
      &kcg_c1->diffArray,
      &kcg_c2->diffArray);
  kcg_equ = kcg_equ & (kcg_c1->q_front == kcg_c2->q_front);
  kcg_equ = kcg_equ & (kcg_c1->v_static == kcg_c2->v_static);
  kcg_equ = kcg_equ & (kcg_c1->d_static == kcg_c2->d_static);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_SSP_T_Packet_Types_Pkg */

#ifdef kcg_use_nvkvintset_T_Packet_Types_Pkg
kcg_bool kcg_comp_nvkvintset_T_Packet_Types_Pkg(
  nvkvintset_T_Packet_Types_Pkg *kcg_c1,
  nvkvintset_T_Packet_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_nvkvintArray_T_Packet_Types_Pkg(
      &kcg_c1->nvkintArray,
      &kcg_c2->nvkintArray);
  kcg_equ = kcg_equ & (kcg_c1->a_nvp23 == kcg_c2->a_nvp23);
  kcg_equ = kcg_equ & (kcg_c1->a_nvp12 == kcg_c2->a_nvp12);
  kcg_equ = kcg_equ & (kcg_c1->q_nvkvintset == kcg_c2->q_nvkvintset);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_nvkvintset_T_Packet_Types_Pkg */

#ifdef kcg_use_struct_170221
kcg_bool kcg_comp_struct_170221(struct_170221 *kcg_c1, struct_170221 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_nvkvint_n_23 == kcg_c2->m_nvkvint_n_23);
  kcg_equ = kcg_equ & (kcg_c1->m_nvkvint_n_12 == kcg_c2->m_nvkvint_n_12);
  kcg_equ = kcg_equ & (kcg_c1->v_nvkvint_n == kcg_c2->v_nvkvint_n);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_struct_170221 */

#ifdef kcg_use_t_Brake_t_SDMModelPkg
kcg_bool kcg_comp_t_Brake_t_SDMModelPkg(
  t_Brake_t_SDMModelPkg *kcg_c1,
  t_Brake_t_SDMModelPkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_t_BrakeVt_t_SDMModelPkg(
      &kcg_c1->service,
      &kcg_c2->service);
  kcg_equ = kcg_equ & kcg_comp_t_BrakeVt_t_SDMModelPkg(
      &kcg_c1->emergency,
      &kcg_c2->emergency);
  return kcg_equ;
}
#endif /* kcg_use_t_Brake_t_SDMModelPkg */

#ifdef kcg_use_M_current_T_TIU_Types_Pkg
kcg_bool kcg_comp_M_current_T_TIU_Types_Pkg(
  M_current_T_TIU_Types_Pkg *kcg_c1,
  M_current_T_TIU_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->restriction == kcg_c2->restriction);
  kcg_equ = kcg_equ & (kcg_c1->no_restriction == kcg_c2->no_restriction);
  return kcg_equ;
}
#endif /* kcg_use_M_current_T_TIU_Types_Pkg */

#ifdef kcg_use_P009_TM_TrainToTrack
kcg_bool kcg_comp_P009_TM_TrainToTrack(
  P009_TM_TrainToTrack *kcg_c1,
  P009_TM_TrainToTrack *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_ltrbg == kcg_c2->nid_ltrbg);
  kcg_equ = kcg_equ & (kcg_c1->l_packet == kcg_c2->l_packet);
  kcg_equ = kcg_equ & (kcg_c1->nid_packet == kcg_c2->nid_packet);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P009_TM_TrainToTrack */

#ifdef kcg_use_TIU_Output_msg_API_TIU_Pkg
kcg_bool kcg_comp_TIU_Output_msg_API_TIU_Pkg(
  TIU_Output_msg_API_TIU_Pkg *kcg_c1,
  TIU_Output_msg_API_TIU_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg(
      &kcg_c1->info,
      &kcg_c2->info);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_TIU_Output_msg_API_TIU_Pkg */

#ifdef kcg_use_PT0_PositionReport_T_Packet_TrainTypes_Pkg
kcg_bool kcg_comp_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
  PT0_PositionReport_T_Packet_TrainTypes_Pkg *kcg_c1,
  PT0_PositionReport_T_Packet_TrainTypes_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_Position_Report_TrainToTrack(
      &kcg_c1->packet0,
      &kcg_c2->packet0);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_PT0_PositionReport_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg
kcg_bool kcg_comp_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *kcg_c1,
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ &
    kcg_comp_Position_Report_based_on_two_balise_groups_TrainToTrack(
      &kcg_c1->packet1,
      &kcg_c2->packet1);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_SessionManagement_T
kcg_bool kcg_comp_SessionManagement_T(
  SessionManagement_T *kcg_c1,
  SessionManagement_T *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_PosData_T(
      &kcg_c1->m_PosData,
      &kcg_c2->m_PosData);
  kcg_equ = kcg_equ & kcg_comp_TrainData_T(
      &kcg_c1->m_TrainData,
      &kcg_c2->m_TrainData);
  return kcg_equ;
}
#endif /* kcg_use_SessionManagement_T */

#ifdef kcg_use_TIU_Input_msg_API_TIU_Pkg
kcg_bool kcg_comp_TIU_Input_msg_API_TIU_Pkg(
  TIU_Input_msg_API_TIU_Pkg *kcg_c1,
  TIU_Input_msg_API_TIU_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(
      &kcg_c1->info,
      &kcg_c2->info);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_TIU_Input_msg_API_TIU_Pkg */

#ifdef kcg_use_MsgStructure
kcg_bool kcg_comp_MsgStructure(MsgStructure *kcg_c1, MsgStructure *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
      &kcg_c1->dmi_msg,
      &kcg_c2->dmi_msg);
  kcg_equ = kcg_equ & (kcg_c1->present == kcg_c2->present);
  return kcg_equ;
}
#endif /* kcg_use_MsgStructure */

#ifdef kcg_use_Passenger_door_control_info_T_TIU_Types_Pkg
kcg_bool kcg_comp_Passenger_door_control_info_T_TIU_Types_Pkg(
  Passenger_door_control_info_T_TIU_Types_Pkg *kcg_c1,
  Passenger_door_control_info_T_TIU_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->door_control_info == kcg_c2->door_control_info);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_Passenger_door_control_info_T_TIU_Types_Pkg */

#ifdef kcg_use_Brake_command_T_TIU_Types_Pkg
kcg_bool kcg_comp_Brake_command_T_TIU_Types_Pkg(
  Brake_command_T_TIU_Types_Pkg *kcg_c1,
  Brake_command_T_TIU_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_emergencybrake_cm ==
      kcg_c2->m_emergencybrake_cm);
  kcg_equ = kcg_equ & (kcg_c1->m_servicebrake_cm == kcg_c2->m_servicebrake_cm);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_Brake_command_T_TIU_Types_Pkg */

#ifdef kcg_use_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg
kcg_bool kcg_comp_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg(
  DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c1,
  DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->system_clock == kcg_c2->system_clock);
  kcg_equ = kcg_equ & (kcg_c1->cab_is_active == kcg_c2->cab_is_active);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifdef kcg_use_P004_TM_TrainToTrack
kcg_bool kcg_comp_P004_TM_TrainToTrack(
  P004_TM_TrainToTrack *kcg_c1,
  P004_TM_TrainToTrack *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_error == kcg_c2->m_error);
  kcg_equ = kcg_equ & (kcg_c1->l_packet == kcg_c2->l_packet);
  kcg_equ = kcg_equ & (kcg_c1->nid_packet == kcg_c2->nid_packet);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P004_TM_TrainToTrack */

#ifdef kcg_use_ASafe_T_CalcBrakingCurves_types
kcg_bool kcg_comp_ASafe_T_CalcBrakingCurves_types(
  ASafe_T_CalcBrakingCurves_types *kcg_c1,
  ASafe_T_CalcBrakingCurves_types *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_ASafe_Data_T_CalcBrakingCurves_types(
      &kcg_c1->data,
      &kcg_c2->data);
  kcg_equ = kcg_equ & kcg_comp_ASafeSpeedDefinition_T_CalcBrakingCurves_types(
      &kcg_c1->speed_definition,
      &kcg_c2->speed_definition);
  kcg_equ = kcg_equ &
    kcg_comp_ASafeDistanceDefinition_T_CalcBrakingCurves_types(
      &kcg_c1->distance_definition,
      &kcg_c2->distance_definition);
  return kcg_equ;
}
#endif /* kcg_use_ASafe_T_CalcBrakingCurves_types */

#ifdef kcg_use_P027V1_section_int_T_TM_baseline2
kcg_bool kcg_comp_P027V1_section_int_T_TM_baseline2(
  P027V1_section_int_T_TM_baseline2 *kcg_c1,
  P027V1_section_int_T_TM_baseline2 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_P027V1_trackside_qdifflist_T_TM_baseline2(
      &kcg_c1->SECTIONS_q_diff,
      &kcg_c2->SECTIONS_q_diff);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER == kcg_c2->N_ITER);
  kcg_equ = kcg_equ & (kcg_c1->Q_FRONT == kcg_c2->Q_FRONT);
  kcg_equ = kcg_equ & (kcg_c1->V_STATIC == kcg_c2->V_STATIC);
  kcg_equ = kcg_equ & (kcg_c1->D_STATIC == kcg_c2->D_STATIC);
  return kcg_equ;
}
#endif /* kcg_use_P027V1_section_int_T_TM_baseline2 */

#ifdef kcg_use_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg
kcg_bool kcg_comp_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg(
  ModeLevel2PositionReport_T_ProvidePositionReport_Pkg *kcg_c1,
  ModeLevel2PositionReport_T_ProvidePositionReport_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->levelTransitionBorderPassed ==
      kcg_c2->levelTransitionBorderPassed);
  kcg_equ = kcg_equ & (kcg_c1->currLevel == kcg_c2->currLevel);
  kcg_equ = kcg_equ & (kcg_c1->currMode == kcg_c2->currMode);
  return kcg_equ;
}
#endif /* kcg_use_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg */

#ifdef kcg_use_P021_OBU_T_TM
kcg_bool kcg_comp_P021_OBU_T_TM(P021_OBU_T_TM *kcg_c1, P021_OBU_T_TM *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_P021_OBU_sectionlist_enum_T_TM(
      &kcg_c1->sections,
      &kcg_c2->sections);
  kcg_equ = kcg_equ & (kcg_c1->n_iter == kcg_c2->n_iter);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P021_OBU_T_TM */

#ifdef kcg_use_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg
kcg_bool kcg_comp_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(
  PT5_TrainRunningNumber_Packet_TrainTypes_Pkg *kcg_c1,
  PT5_TrainRunningNumber_Packet_TrainTypes_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->TrainRunningNumber ==
      kcg_c2->TrainRunningNumber);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg */

#ifdef kcg_use_M_TrainTrack_Message_T_TM_radio_messages
kcg_bool kcg_comp_M_TrainTrack_Message_T_TM_radio_messages(
  M_TrainTrack_Message_T_TM_radio_messages *kcg_c1,
  M_TrainTrack_Message_T_TM_radio_messages *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ &
    kcg_comp_M_TrainTrack_compressed_packets_T_TM_radio_messages(
      &kcg_c1->OptionalPackets,
      &kcg_c2->OptionalPackets);
  kcg_equ = kcg_equ & kcg_comp_M_TrainTrack_MessageHd_T_TM_radio_messages(
      &kcg_c1->Message,
      &kcg_c2->Message);
  return kcg_equ;
}
#endif /* kcg_use_M_TrainTrack_Message_T_TM_radio_messages */

#ifdef kcg_use_T_Reversing_Data_Level_And_Mode_Types_Pkg
kcg_bool kcg_comp_T_Reversing_Data_Level_And_Mode_Types_Pkg(
  T_Reversing_Data_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Reversing_Data_Level_And_Mode_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Speed == kcg_c2->Speed);
  kcg_equ = kcg_equ & (kcg_c1->Dist_Run == kcg_c2->Dist_Run);
  kcg_equ = kcg_equ & (kcg_c1->Length == kcg_c2->Length);
  kcg_equ = kcg_equ & (kcg_c1->Dist_Start == kcg_c2->Dist_Start);
  kcg_equ = kcg_equ & (kcg_c1->Available == kcg_c2->Available);
  return kcg_equ;
}
#endif /* kcg_use_T_Reversing_Data_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_ErrorMessage_T_ProvidePositionReport_Pkg
kcg_bool kcg_comp_ErrorMessage_T_ProvidePositionReport_Pkg(
  ErrorMessage_T_ProvidePositionReport_Pkg *kcg_c1,
  ErrorMessage_T_ProvidePositionReport_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->errorType == kcg_c2->errorType);
  kcg_equ = kcg_equ & (kcg_c1->present == kcg_c2->present);
  return kcg_equ;
}
#endif /* kcg_use_ErrorMessage_T_ProvidePositionReport_Pkg */

#ifdef kcg_use_TrainToTrackStatus_T_BG_Types_Pkg
kcg_bool kcg_comp_TrainToTrackStatus_T_BG_Types_Pkg(
  TrainToTrackStatus_T_BG_Types_Pkg *kcg_c1,
  TrainToTrackStatus_T_BG_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->q_length == kcg_c2->q_length);
  kcg_equ = kcg_equ & (kcg_c1->nid_ntc == kcg_c2->nid_ntc);
  return kcg_equ;
}
#endif /* kcg_use_TrainToTrackStatus_T_BG_Types_Pkg */

#ifdef kcg_use_P021_section_enum_T_TM
kcg_bool kcg_comp_P021_section_enum_T_TM(
  P021_section_enum_T_TM *kcg_c1,
  P021_section_enum_T_TM *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->g_a == kcg_c2->g_a);
  kcg_equ = kcg_equ & (kcg_c1->q_gdir == kcg_c2->q_gdir);
  kcg_equ = kcg_equ & (kcg_c1->d_gradient == kcg_c2->d_gradient);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P021_section_enum_T_TM */

#ifdef kcg_use_B_data_internal_T_InfraLib
kcg_bool kcg_comp_B_data_internal_T_InfraLib(
  B_data_internal_T_InfraLib *kcg_c1,
  B_data_internal_T_InfraLib *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->balise_passed == kcg_c2->balise_passed);
  kcg_equ = kcg_equ & (kcg_c1->pig_nom_0 == kcg_c2->pig_nom_0);
  kcg_equ = kcg_equ & (kcg_c1->TrainPos == kcg_c2->TrainPos);
  kcg_equ = kcg_equ & (kcg_c1->engineering_BG_location ==
      kcg_c2->engineering_BG_location);
  kcg_equ = kcg_equ & kcg_comp_CompressedPackets_T_Common_Types_Pkg(
      &kcg_c1->packets,
      &kcg_c2->packets);
  kcg_equ = kcg_equ & kcg_comp_BaliseTelegramHeader_int_T_TM(
      &kcg_c1->header,
      &kcg_c2->header);
  return kcg_equ;
}
#endif /* kcg_use_B_data_internal_T_InfraLib */

#ifdef kcg_use_struct_170518
kcg_bool kcg_comp_struct_170518(struct_170518 *kcg_c1, struct_170518 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_struct_170518 */

#ifdef kcg_use_TSM_revokeCond_T_SDM_Commands_Pkg
kcg_bool kcg_comp_TSM_revokeCond_T_SDM_Commands_Pkg(
  TSM_revokeCond_T_SDM_Commands_Pkg *kcg_c1,
  TSM_revokeCond_T_SDM_Commands_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->r3 == kcg_c2->r3);
  kcg_equ = kcg_equ & (kcg_c1->r2 == kcg_c2->r2);
  kcg_equ = kcg_equ & (kcg_c1->r1 == kcg_c2->r1);
  kcg_equ = kcg_equ & (kcg_c1->r0 == kcg_c2->r0);
  return kcg_equ;
}
#endif /* kcg_use_TSM_revokeCond_T_SDM_Commands_Pkg */

#ifdef kcg_use_ParabolaCurve_T_CalcBrakingCurves_types
kcg_bool kcg_comp_ParabolaCurve_T_CalcBrakingCurves_types(
  ParabolaCurve_T_CalcBrakingCurves_types *kcg_c1,
  ParabolaCurve_T_CalcBrakingCurves_types *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_ParabolaCurveValid_T_CalcBrakingCurves_types(
      &kcg_c1->valid,
      &kcg_c2->valid);
  kcg_equ = kcg_equ &
    kcg_comp_ParabolaCurveAccelerations_T_CalcBrakingCurves_types(
      &kcg_c1->accelerations,
      &kcg_c2->accelerations);
  kcg_equ = kcg_equ & kcg_comp_ParabolaCurveSpeeds_T_CalcBrakingCurves_types(
      &kcg_c1->speeds,
      &kcg_c2->speeds);
  kcg_equ = kcg_equ & kcg_comp_ParabolaCurveDistances_T_CalcBrakingCurves_types(
      &kcg_c1->distances,
      &kcg_c2->distances);
  return kcg_equ;
}
#endif /* kcg_use_ParabolaCurve_T_CalcBrakingCurves_types */

#ifdef kcg_use_movementAuthorityForDMI_T_DMI_Types_Pkg
kcg_bool kcg_comp_movementAuthorityForDMI_T_DMI_Types_Pkg(
  movementAuthorityForDMI_T_DMI_Types_Pkg *kcg_c1,
  movementAuthorityForDMI_T_DMI_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->v_LOA == kcg_c2->v_LOA);
  kcg_equ = kcg_equ & (kcg_c1->location_LOA == kcg_c2->location_LOA);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_movementAuthorityForDMI_T_DMI_Types_Pkg */

#ifdef kcg_use_DataForModeAndLevel_t_TrackAtlasTypes
kcg_bool kcg_comp_DataForModeAndLevel_t_TrackAtlasTypes(
  DataForModeAndLevel_t_TrackAtlasTypes *kcg_c1,
  DataForModeAndLevel_t_TrackAtlasTypes *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->p27 == kcg_c2->p27);
  kcg_equ = kcg_equ & (kcg_c1->p21 == kcg_c2->p21);
  kcg_equ = kcg_equ & (kcg_c1->p15 == kcg_c2->p15);
  kcg_equ = kcg_equ & (kcg_c1->p12 == kcg_c2->p12);
  kcg_equ = kcg_equ & kcg_comp_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg(
      &kcg_c1->train_messages,
      &kcg_c2->train_messages);
  kcg_equ = kcg_equ &
    kcg_comp_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg(
      &kcg_c1->train_packets,
      &kcg_c2->train_packets);
  return kcg_equ;
}
#endif /* kcg_use_DataForModeAndLevel_t_TrackAtlasTypes */

#ifdef kcg_use_M_146_T_TM_radio_messages
kcg_bool kcg_comp_M_146_T_TM_radio_messages(
  M_146_T_TM_radio_messages *kcg_c1,
  M_146_T_TM_radio_messages *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->t_train_req == kcg_c2->t_train_req);
  kcg_equ = kcg_equ & (kcg_c1->nid_engine == kcg_c2->nid_engine);
  kcg_equ = kcg_equ & (kcg_c1->t_train == kcg_c2->t_train);
  kcg_equ = kcg_equ & (kcg_c1->l_message == kcg_c2->l_message);
  kcg_equ = kcg_equ & (kcg_c1->nid_message == kcg_c2->nid_message);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_M_146_T_TM_radio_messages */

#ifdef kcg_use_struct_170588
kcg_bool kcg_comp_struct_170588(struct_170588 *kcg_c1, struct_170588 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->v_reverse == kcg_c2->v_reverse);
  kcg_equ = kcg_equ & (kcg_c1->d_reverse == kcg_c2->d_reverse);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_struct_170588 */

#ifdef kcg_use_MovementAuthoritySection_t_TrackAtlasTypes
kcg_bool kcg_comp_MovementAuthoritySection_t_TrackAtlasTypes(
  MovementAuthoritySection_t_TrackAtlasTypes *kcg_c1,
  MovementAuthoritySection_t_TrackAtlasTypes *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->d_sectiontimerstoploc ==
      kcg_c2->d_sectiontimerstoploc);
  kcg_equ = kcg_equ & (kcg_c1->t_sectiontimer == kcg_c2->t_sectiontimer);
  kcg_equ = kcg_equ & (kcg_c1->q_sectiontimer == kcg_c2->q_sectiontimer);
  kcg_equ = kcg_equ & (kcg_c1->l_section == kcg_c2->l_section);
  kcg_equ = kcg_equ & (kcg_c1->q_endsection == kcg_c2->q_endsection);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_MovementAuthoritySection_t_TrackAtlasTypes */

#ifdef kcg_use_nvkrint_T_Packet_Types_Pkg
kcg_bool kcg_comp_nvkrint_T_Packet_Types_Pkg(
  nvkrint_T_Packet_Types_Pkg *kcg_c1,
  nvkrint_T_Packet_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_nvkrint == kcg_c2->m_nvkrint);
  kcg_equ = kcg_equ & (kcg_c1->l_nvkrint == kcg_c2->l_nvkrint);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_nvkrint_T_Packet_Types_Pkg */

#ifdef kcg_use_T_Mode_Level_Level_And_Mode_Types_Pkg
kcg_bool kcg_comp_T_Mode_Level_Level_And_Mode_Types_Pkg(
  T_Mode_Level_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Mode_Level_Level_And_Mode_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->newMode == kcg_c2->newMode);
  kcg_equ = kcg_equ & (kcg_c1->Mode == kcg_c2->Mode);
  kcg_equ = kcg_equ & (kcg_c1->newLevel == kcg_c2->newLevel);
  kcg_equ = kcg_equ & (kcg_c1->level == kcg_c2->level);
  kcg_equ = kcg_equ & (kcg_c1->compatibleModeAndLevel ==
      kcg_c2->compatibleModeAndLevel);
  return kcg_equ;
}
#endif /* kcg_use_T_Mode_Level_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_P137_trackside_int_T_TM
kcg_bool kcg_comp_P137_trackside_int_T_TM(
  P137_trackside_int_T_TM *kcg_c1,
  P137_trackside_int_T_TM *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Q_SRSTOP == kcg_c2->Q_SRSTOP);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P137_trackside_int_T_TM */

#ifdef kcg_use_T_Mode_Profile_Level_And_Mode_Types_Pkg
kcg_bool kcg_comp_T_Mode_Profile_Level_And_Mode_Types_Pkg(
  T_Mode_Profile_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Mode_Profile_Level_And_Mode_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Length_Ack == kcg_c2->Length_Ack);
  kcg_equ = kcg_equ & (kcg_c1->Length == kcg_c2->Length);
  kcg_equ = kcg_equ & (kcg_c1->Speed == kcg_c2->Speed);
  kcg_equ = kcg_equ & (kcg_c1->Mode == kcg_c2->Mode);
  kcg_equ = kcg_equ & (kcg_c1->Distance == kcg_c2->Distance);
  return kcg_equ;
}
#endif /* kcg_use_T_Mode_Profile_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_trainData_internal_t_SDM_Types_Pkg
kcg_bool kcg_comp_trainData_internal_t_SDM_Types_Pkg(
  trainData_internal_t_SDM_Types_Pkg *kcg_c1,
  trainData_internal_t_SDM_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->offsetAntennaL1 == kcg_c2->offsetAntennaL1);
  kcg_equ = kcg_equ & (kcg_c1->T_traction_cut_off ==
      kcg_c2->T_traction_cut_off);
  kcg_equ = kcg_equ & (kcg_c1->isTCOAvailable == kcg_c2->isTCOAvailable);
  kcg_equ = kcg_equ & (kcg_c1->isSB_CmdAvailable == kcg_c2->isSB_CmdAvailable);
  kcg_equ = kcg_equ & (kcg_c1->isSB_FBAvailable == kcg_c2->isSB_FBAvailable);
  return kcg_equ;
}
#endif /* kcg_use_trainData_internal_t_SDM_Types_Pkg */

#ifdef kcg_use_EOA_real_T_TargetManagement_types
kcg_bool kcg_comp_EOA_real_T_TargetManagement_types(
  EOA_real_T_TargetManagement_types *kcg_c1,
  EOA_real_T_TargetManagement_types *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->TargetSpeed == kcg_c2->TargetSpeed);
  kcg_equ = kcg_equ & (kcg_c1->Location == kcg_c2->Location);
  return kcg_equ;
}
#endif /* kcg_use_EOA_real_T_TargetManagement_types */

#ifdef kcg_use_P058_section_int_T_TM
kcg_bool kcg_comp_P058_section_int_T_TM(
  P058_section_int_T_TM *kcg_c1,
  P058_section_int_T_TM *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Q_LGTLOC == kcg_c2->Q_LGTLOC);
  kcg_equ = kcg_equ & (kcg_c1->D_LOC == kcg_c2->D_LOC);
  return kcg_equ;
}
#endif /* kcg_use_P058_section_int_T_TM */

#ifdef kcg_use_M_voltage_T_TIU_Types_Pkg
kcg_bool kcg_comp_M_voltage_T_TIU_Types_Pkg(
  M_voltage_T_TIU_Types_Pkg *kcg_c1,
  M_voltage_T_TIU_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->NID_ctraction == kcg_c2->NID_ctraction);
  kcg_equ = kcg_equ & (kcg_c1->voltage_type == kcg_c2->voltage_type);
  return kcg_equ;
}
#endif /* kcg_use_M_voltage_T_TIU_Types_Pkg */

#ifdef kcg_use_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg
kcg_bool kcg_comp_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(
  PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg *kcg_c1,
  PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_aNID_RADIO_T_Packet_TrainTypes_Pkg(
      &kcg_c1->aNID_RADIO,
      &kcg_c2->aNID_RADIO);
  kcg_equ = kcg_equ & (kcg_c1->number == kcg_c2->number);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_struct_170763
kcg_bool kcg_comp_struct_170763(struct_170763 *kcg_c1, struct_170763 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_lrbg == kcg_c2->nid_lrbg);
  kcg_equ = kcg_equ & (kcg_c1->m_ack == kcg_c2->m_ack);
  kcg_equ = kcg_equ & (kcg_c1->t_train == kcg_c2->t_train);
  kcg_equ = kcg_equ & (kcg_c1->l_message == kcg_c2->l_message);
  kcg_equ = kcg_equ & (kcg_c1->nid_message == kcg_c2->nid_message);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_struct_170763 */

#ifdef kcg_use_struct_170773
kcg_bool kcg_comp_struct_170773(struct_170773 *kcg_c1, struct_170773 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_lrbg == kcg_c2->nid_lrbg);
  kcg_equ = kcg_equ & (kcg_c1->m_ack == kcg_c2->m_ack);
  kcg_equ = kcg_equ & (kcg_c1->t_train == kcg_c2->t_train);
  kcg_equ = kcg_equ & (kcg_c1->l_message == kcg_c2->l_message);
  kcg_equ = kcg_equ & (kcg_c1->nid_message == kcg_c2->nid_message);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_struct_170773 */

#ifdef kcg_use_trainData_Trigger_T_trainData_Types_pkg
kcg_bool kcg_comp_trainData_Trigger_T_trainData_Types_pkg(
  trainData_Trigger_T_trainData_Types_pkg *kcg_c1,
  trainData_Trigger_T_trainData_Types_pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->trainLengthIncreased ==
      kcg_c2->trainLengthIncreased);
  kcg_equ = kcg_equ & (kcg_c1->deleteMA == kcg_c2->deleteMA);
  kcg_equ = kcg_equ & (kcg_c1->shortenLocationBasedInformation ==
      kcg_c2->shortenLocationBasedInformation);
  kcg_equ = kcg_equ & (kcg_c1->driverRequestModify ==
      kcg_c2->driverRequestModify);
  kcg_equ = kcg_equ & (kcg_c1->brakeTrigger == kcg_c2->brakeTrigger);
  return kcg_equ;
}
#endif /* kcg_use_trainData_Trigger_T_trainData_Types_pkg */

#ifdef kcg_use_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg
kcg_bool kcg_comp_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg(
  DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c1,
  DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->system_version == kcg_c2->system_version);
  kcg_equ = kcg_equ & (kcg_c1->system_clock == kcg_c2->system_clock);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifdef kcg_use_Isolation_Status_T_TIU_Types_Pkg
kcg_bool kcg_comp_Isolation_Status_T_TIU_Types_Pkg(
  Isolation_Status_T_TIU_Types_Pkg *kcg_c1,
  Isolation_Status_T_TIU_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->isolation_status == kcg_c2->isolation_status);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_Isolation_Status_T_TIU_Types_Pkg */

#ifdef kcg_use_T_Data_From_F2_functions_Level_And_Mode_Types_Pkg
kcg_bool kcg_comp_T_Data_From_F2_functions_Level_And_Mode_Types_Pkg(
  T_Data_From_F2_functions_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Data_From_F2_functions_Level_And_Mode_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Stop_Shunting_Stored ==
      kcg_c2->Stop_Shunting_Stored);
  kcg_equ = kcg_equ & (kcg_c1->Continue_Shunting_Active ==
      kcg_c2->Continue_Shunting_Active);
  kcg_equ = kcg_equ & (kcg_c1->Failure_Occured == kcg_c2->Failure_Occured);
  kcg_equ = kcg_equ & kcg_comp_MSG_Errors_T_Common_Types_Pkg(
      &kcg_c1->Common_Errors,
      &kcg_c2->Common_Errors);
  return kcg_equ;
}
#endif /* kcg_use_T_Data_From_F2_functions_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_ACC_SDM_GradientAcceleration_Pkg
kcg_bool kcg_comp_ACC_SDM_GradientAcceleration_Pkg(
  ACC_SDM_GradientAcceleration_Pkg *kcg_c1,
  ACC_SDM_GradientAcceleration_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ &
    kcg_comp_GradientProfile_real_compensated_t_SDM_GradientAcceleration_types(
      &kcg_c1->compensatedGradientProfile,
      &kcg_c2->compensatedGradientProfile);
  kcg_equ = kcg_equ & (kcg_c1->rearIndex == kcg_c2->rearIndex);
  kcg_equ = kcg_equ & (kcg_c1->rearPos == kcg_c2->rearPos);
  kcg_equ = kcg_equ & (kcg_c1->frontIndex == kcg_c2->frontIndex);
  kcg_equ = kcg_equ & (kcg_c1->frontPos == kcg_c2->frontPos);
  return kcg_equ;
}
#endif /* kcg_use_ACC_SDM_GradientAcceleration_Pkg */

#ifdef kcg_use_sessionStatus_T_RCM_Session_Types_Pkg
kcg_bool kcg_comp_sessionStatus_T_RCM_Session_Types_Pkg(
  sessionStatus_T_RCM_Session_Types_Pkg *kcg_c1,
  sessionStatus_T_RCM_Session_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_radio == kcg_c2->nid_radio);
  kcg_equ = kcg_equ & (kcg_c1->nid_rbc == kcg_c2->nid_rbc);
  kcg_equ = kcg_equ & (kcg_c1->nid_c == kcg_c2->nid_c);
  kcg_equ = kcg_equ & (kcg_c1->phase == kcg_c2->phase);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_sessionStatus_T_RCM_Session_Types_Pkg */

#ifdef kcg_use_BCAccumulator_type_CalcBrakingCurves_Pkg
kcg_bool kcg_comp_BCAccumulator_type_CalcBrakingCurves_Pkg(
  BCAccumulator_type_CalcBrakingCurves_Pkg *kcg_c1,
  BCAccumulator_type_CalcBrakingCurves_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_ParabolaCurve_T_CalcBrakingCurves_types(
      &kcg_c1->BC,
      &kcg_c2->BC);
  kcg_equ = kcg_equ & (kcg_c1->speedIndex == kcg_c2->speedIndex);
  kcg_equ = kcg_equ & (kcg_c1->distanceIndex == kcg_c2->distanceIndex);
  kcg_equ = kcg_equ & (kcg_c1->speed == kcg_c2->speed);
  kcg_equ = kcg_equ & (kcg_c1->distance == kcg_c2->distance);
  return kcg_equ;
}
#endif /* kcg_use_BCAccumulator_type_CalcBrakingCurves_Pkg */

#ifdef kcg_use_TrackSide_ForCheck_T_Common_Types_Pkg
kcg_bool kcg_comp_TrackSide_ForCheck_T_Common_Types_Pkg(
  TrackSide_ForCheck_T_Common_Types_Pkg *kcg_c1,
  TrackSide_ForCheck_T_Common_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_RadioMessage_T_Radio_Types_Pkg(
      &kcg_c1->radio_Msg,
      &kcg_c2->radio_Msg);
  kcg_equ = kcg_equ & kcg_comp_BG_Message_T_BG_Types_Pkg(
      &kcg_c1->telegramHeaders,
      &kcg_c2->telegramHeaders);
  kcg_equ = kcg_equ & (kcg_c1->msg_type == kcg_c2->msg_type);
  kcg_equ = kcg_equ & (kcg_c1->systemTime == kcg_c2->systemTime);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_TrackSide_ForCheck_T_Common_Types_Pkg */

#ifdef kcg_use_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg
kcg_bool kcg_comp_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *kcg_c1,
  refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &kcg_c1->sumOfBestDistances,
      &kcg_c2->sumOfBestDistances);
  kcg_equ = kcg_equ & (kcg_c1->recalculate == kcg_c2->recalculate);
  kcg_equ = kcg_equ & kcg_comp_positionedBG_T_TrainPosition_Types_Pck(
      &kcg_c1->prevUnlinkedBG,
      &kcg_c2->prevUnlinkedBG);
  kcg_equ = kcg_equ & kcg_comp_positionedBG_T_TrainPosition_Types_Pck(
      &kcg_c1->prevLinkedBG,
      &kcg_c2->prevLinkedBG);
  kcg_equ = kcg_equ & kcg_comp_positionedBG_T_TrainPosition_Types_Pck(
      &kcg_c1->refBG,
      &kcg_c2->refBG);
  return kcg_equ;
}
#endif /* kcg_use_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg */

#ifdef kcg_use_p45_radioNetworkRegistration_T_RCM_MsgTypes_Pkg
kcg_bool kcg_comp_p45_radioNetworkRegistration_T_RCM_MsgTypes_Pkg(
  p45_radioNetworkRegistration_T_RCM_MsgTypes_Pkg *kcg_c1,
  p45_radioNetworkRegistration_T_RCM_MsgTypes_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_RBC_Id_T_Common_Types_Pkg(
      &kcg_c1->origin,
      &kcg_c2->origin);
  kcg_equ = kcg_equ & (kcg_c1->nid_mn == kcg_c2->nid_mn);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->msgSrc == kcg_c2->msgSrc);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_p45_radioNetworkRegistration_T_RCM_MsgTypes_Pkg */

#ifdef kcg_use_API_TelegramHeader_T_API_Msg_Pkg
kcg_bool kcg_comp_API_TelegramHeader_T_API_Msg_Pkg(
  API_TelegramHeader_T_API_Msg_Pkg *kcg_c1,
  API_TelegramHeader_T_API_Msg_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_centerOfBalisePosition_T_BG_Types_Pkg(
      &kcg_c1->centerOfBalisePosition,
      &kcg_c2->centerOfBalisePosition);
  kcg_equ = kcg_equ & kcg_comp_TelegramHeader_T_BG_Types_Pkg(
      &kcg_c1->api_header,
      &kcg_c2->api_header);
  kcg_equ = kcg_equ & (kcg_c1->api_bad_balise_received ==
      kcg_c2->api_bad_balise_received);
  kcg_equ = kcg_equ & (kcg_c1->checkResult == kcg_c2->checkResult);
  kcg_equ = kcg_equ & (kcg_c1->present == kcg_c2->present);
  return kcg_equ;
}
#endif /* kcg_use_API_TelegramHeader_T_API_Msg_Pkg */

#ifdef kcg_use_API_RadioMsgHeader_T_API_Msg_Pkg
kcg_bool kcg_comp_API_RadioMsgHeader_T_API_Msg_Pkg(
  API_RadioMsgHeader_T_API_Msg_Pkg *kcg_c1,
  API_RadioMsgHeader_T_API_Msg_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_RBC_Id_T_Common_Types_Pkg(
      &kcg_c1->sendingRBC_Id,
      &kcg_c2->sendingRBC_Id);
  kcg_equ = kcg_equ & kcg_comp_RadioMetadata_T_Common_Types_Pkg(
      &kcg_c1->Radio_MetaData,
      &kcg_c2->Radio_MetaData);
  kcg_equ = kcg_equ & kcg_comp_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
      &kcg_c1->Radio_Common_Header,
      &kcg_c2->Radio_Common_Header);
  kcg_equ = kcg_equ & (kcg_c1->apiConsistencyError ==
      kcg_c2->apiConsistencyError);
  kcg_equ = kcg_equ & (kcg_c1->present == kcg_c2->present);
  return kcg_equ;
}
#endif /* kcg_use_API_RadioMsgHeader_T_API_Msg_Pkg */

#ifdef kcg_use_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg
kcg_bool kcg_comp_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg(
  DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c1,
  DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_DMI_trackCondition_T_DMI_Types_Pkg(
      &kcg_c1->trackConditions,
      &kcg_c2->trackConditions);
  kcg_equ = kcg_equ & kcg_comp_DMI_gradientProfile_T_DMI_Types_Pkg(
      &kcg_c1->gradientProfiles,
      &kcg_c2->gradientProfiles);
  kcg_equ = kcg_equ & kcg_comp_DMI_speedProfile_T_DMI_Types_Pkg(
      &kcg_c1->speedProfiles,
      &kcg_c2->speedProfiles);
  kcg_equ = kcg_equ & (kcg_c1->system_clock == kcg_c2->system_clock);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifdef kcg_use_OdometrySpeeds_T_Obu_BasicTypes_Pkg
kcg_bool kcg_comp_OdometrySpeeds_T_Obu_BasicTypes_Pkg(
  OdometrySpeeds_T_Obu_BasicTypes_Pkg *kcg_c1,
  OdometrySpeeds_T_Obu_BasicTypes_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->v_upper == kcg_c2->v_upper);
  kcg_equ = kcg_equ & (kcg_c1->v_lower == kcg_c2->v_lower);
  kcg_equ = kcg_equ & (kcg_c1->v_rawNominal == kcg_c2->v_rawNominal);
  kcg_equ = kcg_equ & (kcg_c1->v_safeNominal == kcg_c2->v_safeNominal);
  return kcg_equ;
}
#endif /* kcg_use_OdometrySpeeds_T_Obu_BasicTypes_Pkg */

#ifdef kcg_use_Gradient_section_t_TrackAtlasTypes
kcg_bool kcg_comp_Gradient_section_t_TrackAtlasTypes(
  Gradient_section_t_TrackAtlasTypes *kcg_c1,
  Gradient_section_t_TrackAtlasTypes *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->L_Gradient == kcg_c2->L_Gradient);
  kcg_equ = kcg_equ & (kcg_c1->Gradient == kcg_c2->Gradient);
  kcg_equ = kcg_equ & (kcg_c1->Loc_LRBG == kcg_c2->Loc_LRBG);
  kcg_equ = kcg_equ & (kcg_c1->Loc_Absolute == kcg_c2->Loc_Absolute);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_Gradient_section_t_TrackAtlasTypes */

#ifdef kcg_use_dmiOutputs_T_manage_DMI_Output_Pkg
kcg_bool kcg_comp_dmiOutputs_T_manage_DMI_Output_Pkg(
  dmiOutputs_T_manage_DMI_Output_Pkg *kcg_c1,
  dmiOutputs_T_manage_DMI_Output_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->secondValidationRequested ==
      kcg_c2->secondValidationRequested);
  kcg_equ = kcg_equ & (kcg_c1->NO_initrequestSent ==
      kcg_c2->NO_initrequestSent);
  return kcg_equ;
}
#endif /* kcg_use_dmiOutputs_T_manage_DMI_Output_Pkg */

#ifdef kcg_use_OdometryLocations_T_Obu_BasicTypes_Pkg
kcg_bool kcg_comp_OdometryLocations_T_Obu_BasicTypes_Pkg(
  OdometryLocations_T_Obu_BasicTypes_Pkg *kcg_c1,
  OdometryLocations_T_Obu_BasicTypes_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->o_max == kcg_c2->o_max);
  kcg_equ = kcg_equ & (kcg_c1->o_min == kcg_c2->o_min);
  kcg_equ = kcg_equ & (kcg_c1->o_nominal == kcg_c2->o_nominal);
  return kcg_equ;
}
#endif /* kcg_use_OdometryLocations_T_Obu_BasicTypes_Pkg */

#ifdef kcg_use_T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg
kcg_bool kcg_comp_T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg(
  T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Emergency_Stop_Message_Received ==
      kcg_c2->Emergency_Stop_Message_Received);
  kcg_equ = kcg_equ & kcg_comp_T_Reversing_Data_Level_And_Mode_Types_Pkg(
      &kcg_c1->Reversing_Data,
      &kcg_c2->Reversing_Data);
  kcg_equ = kcg_equ & (kcg_c1->RBC_Authorized_SR == kcg_c2->RBC_Authorized_SR);
  kcg_equ = kcg_equ & (kcg_c1->RBC_Ack_TR_EB_Revocked ==
      kcg_c2->RBC_Ack_TR_EB_Revocked);
  kcg_equ = kcg_equ & (kcg_c1->Stop_If_In_SR == kcg_c2->Stop_If_In_SR);
  kcg_equ = kcg_equ & (kcg_c1->Stop_If_In_shunting ==
      kcg_c2->Stop_If_In_shunting);
  kcg_equ = kcg_equ & (kcg_c1->List_Bg_Related_To_SR_Empty ==
      kcg_c2->List_Bg_Related_To_SR_Empty);
  kcg_equ = kcg_equ & (kcg_c1->Trip_Order_Given_By_Balise ==
      kcg_c2->Trip_Order_Given_By_Balise);
  kcg_equ = kcg_equ & (kcg_c1->Shunting_granted_By_RBC ==
      kcg_c2->Shunting_granted_By_RBC);
  kcg_equ = kcg_equ & kcg_comp_T_Mode_Profile_Table_Level_And_Mode_Types_Pkg(
      &kcg_c1->Mode_Profile_On_Board,
      &kcg_c2->Mode_Profile_On_Board);
  kcg_equ = kcg_equ & (kcg_c1->MA_SSP_Gradient_Available ==
      kcg_c2->MA_SSP_Gradient_Available);
  return kcg_equ;
}
#endif /* kcg_use_T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_T_Data_From_DMI_Level_And_Mode_Types_Pkg
kcg_bool kcg_comp_T_Data_From_DMI_Level_And_Mode_Types_Pkg(
  T_Data_From_DMI_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Data_From_DMI_Level_And_Mode_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->ETCS_Isolated == kcg_c2->ETCS_Isolated);
  kcg_equ = kcg_equ & (kcg_c1->Req_Start == kcg_c2->Req_Start);
  kcg_equ = kcg_equ & (kcg_c1->Req_SH == kcg_c2->Req_SH);
  kcg_equ = kcg_equ & (kcg_c1->Req_Override == kcg_c2->Req_Override);
  kcg_equ = kcg_equ & (kcg_c1->Req_NL == kcg_c2->Req_NL);
  kcg_equ = kcg_equ & (kcg_c1->Req_Exit_SH == kcg_c2->Req_Exit_SH);
  kcg_equ = kcg_equ & (kcg_c1->Ack_UN == kcg_c2->Ack_UN);
  kcg_equ = kcg_equ & (kcg_c1->Ack_TR == kcg_c2->Ack_TR);
  kcg_equ = kcg_equ & (kcg_c1->Ack_SR == kcg_c2->Ack_SR);
  kcg_equ = kcg_equ & (kcg_c1->Ack_SN == kcg_c2->Ack_SN);
  kcg_equ = kcg_equ & (kcg_c1->Ack_SH == kcg_c2->Ack_SH);
  kcg_equ = kcg_equ & (kcg_c1->Ack_RV == kcg_c2->Ack_RV);
  kcg_equ = kcg_equ & (kcg_c1->Ack_OS == kcg_c2->Ack_OS);
  kcg_equ = kcg_equ & (kcg_c1->Ack_LS == kcg_c2->Ack_LS);
  return kcg_equ;
}
#endif /* kcg_use_T_Data_From_DMI_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_TSM_triggerCond_T_SDM_Commands_Pkg
kcg_bool kcg_comp_TSM_triggerCond_T_SDM_Commands_Pkg(
  TSM_triggerCond_T_SDM_Commands_Pkg *kcg_c1,
  TSM_triggerCond_T_SDM_Commands_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->t14 == kcg_c2->t14);
  kcg_equ = kcg_equ & (kcg_c1->t13 == kcg_c2->t13);
  kcg_equ = kcg_equ & (kcg_c1->t12 == kcg_c2->t12);
  kcg_equ = kcg_equ & (kcg_c1->t11 == kcg_c2->t11);
  kcg_equ = kcg_equ & (kcg_c1->t10 == kcg_c2->t10);
  kcg_equ = kcg_equ & (kcg_c1->t9 == kcg_c2->t9);
  kcg_equ = kcg_equ & (kcg_c1->t8 == kcg_c2->t8);
  kcg_equ = kcg_equ & (kcg_c1->t7 == kcg_c2->t7);
  kcg_equ = kcg_equ & (kcg_c1->t6 == kcg_c2->t6);
  kcg_equ = kcg_equ & (kcg_c1->t5 == kcg_c2->t5);
  kcg_equ = kcg_equ & (kcg_c1->t4 == kcg_c2->t4);
  kcg_equ = kcg_equ & (kcg_c1->t3 == kcg_c2->t3);
  kcg_equ = kcg_equ & (kcg_c1->t2 == kcg_c2->t2);
  kcg_equ = kcg_equ & (kcg_c1->t1 == kcg_c2->t1);
  return kcg_equ;
}
#endif /* kcg_use_TSM_triggerCond_T_SDM_Commands_Pkg */

#ifdef kcg_use_speedSupervisionForDMI_T_DMI_Types_Pkg
kcg_bool kcg_comp_speedSupervisionForDMI_T_DMI_Types_Pkg(
  speedSupervisionForDMI_T_DMI_Types_Pkg *kcg_c1,
  speedSupervisionForDMI_T_DMI_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->distanceIndicationPoint ==
      kcg_c2->distanceIndicationPoint);
  kcg_equ = kcg_equ & (kcg_c1->supervisionDisplay ==
      kcg_c2->supervisionDisplay);
  kcg_equ = kcg_equ & (kcg_c1->sup_status == kcg_c2->sup_status);
  kcg_equ = kcg_equ & (kcg_c1->interventionSpeed == kcg_c2->interventionSpeed);
  kcg_equ = kcg_equ & (kcg_c1->location_brake_curve_starting_point ==
      kcg_c2->location_brake_curve_starting_point);
  kcg_equ = kcg_equ & (kcg_c1->locationBrakeTarget ==
      kcg_c2->locationBrakeTarget);
  kcg_equ = kcg_equ & (kcg_c1->releaseSpeed == kcg_c2->releaseSpeed);
  kcg_equ = kcg_equ & (kcg_c1->permittedSpeed == kcg_c2->permittedSpeed);
  kcg_equ = kcg_equ & (kcg_c1->targetSpeed == kcg_c2->targetSpeed);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_speedSupervisionForDMI_T_DMI_Types_Pkg */

#ifdef kcg_use_Speeds_T_SDM_Types_Pkg
kcg_bool kcg_comp_Speeds_T_SDM_Types_Pkg(
  Speeds_T_SDM_Types_Pkg *kcg_c1,
  Speeds_T_SDM_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->OdoStandStill == kcg_c2->OdoStandStill);
  kcg_equ = kcg_equ & (kcg_c1->dV_ebi_V_target == kcg_c2->dV_ebi_V_target);
  kcg_equ = kcg_equ & (kcg_c1->dV_ebi_V_MRSP == kcg_c2->dV_ebi_V_MRSP);
  kcg_equ = kcg_equ & (kcg_c1->dV_sbi_V_target == kcg_c2->dV_sbi_V_target);
  kcg_equ = kcg_equ & (kcg_c1->dV_sbi_V_MRSP == kcg_c2->dV_sbi_V_MRSP);
  kcg_equ = kcg_equ & (kcg_c1->dV_warning_V_target ==
      kcg_c2->dV_warning_V_target);
  kcg_equ = kcg_equ & (kcg_c1->dV_warning_V_MRSP == kcg_c2->dV_warning_V_MRSP);
  kcg_equ = kcg_equ & (kcg_c1->v_FLOI_dmi == kcg_c2->v_FLOI_dmi);
  kcg_equ = kcg_equ & (kcg_c1->v_sbi_mrdt == kcg_c2->v_sbi_mrdt);
  kcg_equ = kcg_equ & (kcg_c1->v_p_dmi == kcg_c2->v_p_dmi);
  kcg_equ = kcg_equ & (kcg_c1->v_p_mrdt == kcg_c2->v_p_mrdt);
  kcg_equ = kcg_equ & (kcg_c1->V_target == kcg_c2->V_target);
  kcg_equ = kcg_equ & (kcg_c1->V_release == kcg_c2->V_release);
  kcg_equ = kcg_equ & (kcg_c1->V_MRSP == kcg_c2->V_MRSP);
  kcg_equ = kcg_equ & (kcg_c1->V_est == kcg_c2->V_est);
  return kcg_equ;
}
#endif /* kcg_use_Speeds_T_SDM_Types_Pkg */

#ifdef kcg_use_SDM_Locations_T_SDM_Types_Pkg
kcg_bool kcg_comp_SDM_Locations_T_SDM_Types_Pkg(
  SDM_Locations_T_SDM_Types_Pkg *kcg_c1,
  SDM_Locations_T_SDM_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->RSM_start_location_SBD_valid ==
      kcg_c2->RSM_start_location_SBD_valid);
  kcg_equ = kcg_equ & (kcg_c1->RSM_start_location_EBD_valid ==
      kcg_c2->RSM_start_location_EBD_valid);
  kcg_equ = kcg_equ & (kcg_c1->Preindication_SBD_location_valid ==
      kcg_c2->Preindication_SBD_location_valid);
  kcg_equ = kcg_equ & (kcg_c1->Preindication_EBD_location_valid ==
      kcg_c2->Preindication_EBD_location_valid);
  kcg_equ = kcg_equ & (kcg_c1->d_svl == kcg_c2->d_svl);
  kcg_equ = kcg_equ & (kcg_c1->d_eoa == kcg_c2->d_eoa);
  kcg_equ = kcg_equ & (kcg_c1->d_target == kcg_c2->d_target);
  kcg_equ = kcg_equ & (kcg_c1->SBI2_of_V_est == kcg_c2->SBI2_of_V_est);
  kcg_equ = kcg_equ & (kcg_c1->SBI1_of_V_est == kcg_c2->SBI1_of_V_est);
  kcg_equ = kcg_equ & (kcg_c1->FLOI_of_V_est == kcg_c2->FLOI_of_V_est);
  kcg_equ = kcg_equ & (kcg_c1->d_EBI_of_V_est == kcg_c2->d_EBI_of_V_est);
  kcg_equ = kcg_equ & (kcg_c1->d_FLOI_of_V_est == kcg_c2->d_FLOI_of_V_est);
  kcg_equ = kcg_equ & (kcg_c1->d_W_of_V_est == kcg_c2->d_W_of_V_est);
  kcg_equ = kcg_equ & (kcg_c1->d_P_of_V_est == kcg_c2->d_P_of_V_est);
  kcg_equ = kcg_equ & (kcg_c1->d_I_of_V_MRSP == kcg_c2->d_I_of_V_MRSP);
  kcg_equ = kcg_equ & (kcg_c1->d_I_of_V_est == kcg_c2->d_I_of_V_est);
  kcg_equ = kcg_equ & (kcg_c1->SBD_RSM_start_location ==
      kcg_c2->SBD_RSM_start_location);
  kcg_equ = kcg_equ & (kcg_c1->EBD_RSM_start_location ==
      kcg_c2->EBD_RSM_start_location);
  kcg_equ = kcg_equ & (kcg_c1->EBD_preindication_location ==
      kcg_c2->EBD_preindication_location);
  kcg_equ = kcg_equ & (kcg_c1->SBD_preindication_location ==
      kcg_c2->SBD_preindication_location);
  return kcg_equ;
}
#endif /* kcg_use_SDM_Locations_T_SDM_Types_Pkg */

#ifdef kcg_use_MA_section_real_T_TargetManagement_types
kcg_bool kcg_comp_MA_section_real_T_TargetManagement_types(
  MA_section_real_T_TargetManagement_types *kcg_c1,
  MA_section_real_T_TargetManagement_types *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->level == kcg_c2->level);
  kcg_equ = kcg_equ & (kcg_c1->ReleaseSpeed == kcg_c2->ReleaseSpeed);
  kcg_equ = kcg_equ & (kcg_c1->q_calculate_release ==
      kcg_c2->q_calculate_release);
  kcg_equ = kcg_equ & (kcg_c1->Overlap == kcg_c2->Overlap);
  kcg_equ = kcg_equ & (kcg_c1->OL_valid == kcg_c2->OL_valid);
  kcg_equ = kcg_equ & (kcg_c1->DangerPoint == kcg_c2->DangerPoint);
  kcg_equ = kcg_equ & (kcg_c1->DP_valid == kcg_c2->DP_valid);
  kcg_equ = kcg_equ & kcg_comp_EOA_real_T_TargetManagement_types(
      &kcg_c1->EOA,
      &kcg_c2->EOA);
  kcg_equ = kcg_equ & (kcg_c1->v_main == kcg_c2->v_main);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_MA_section_real_T_TargetManagement_types */

#ifdef kcg_use_SDM_Commands_T_SDM_Types_Pkg
kcg_bool kcg_comp_SDM_Commands_T_SDM_Types_Pkg(
  SDM_Commands_T_SDM_Types_Pkg *kcg_c1,
  SDM_Commands_T_SDM_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->ebCmd == kcg_c2->ebCmd);
  kcg_equ = kcg_equ & (kcg_c1->triggeredTCO == kcg_c2->triggeredTCO);
  kcg_equ = kcg_equ & (kcg_c1->revokedTCO == kcg_c2->revokedTCO);
  kcg_equ = kcg_equ & (kcg_c1->triggeredEB == kcg_c2->triggeredEB);
  kcg_equ = kcg_equ & (kcg_c1->revokedEB == kcg_c2->revokedEB);
  kcg_equ = kcg_equ & (kcg_c1->triggeredSB == kcg_c2->triggeredSB);
  kcg_equ = kcg_equ & (kcg_c1->revokedSB == kcg_c2->revokedSB);
  kcg_equ = kcg_equ & (kcg_c1->triggeredSupervisionStatus ==
      kcg_c2->triggeredSupervisionStatus);
  kcg_equ = kcg_equ & (kcg_c1->revokedSupervisionStatus ==
      kcg_c2->revokedSupervisionStatus);
  kcg_equ = kcg_equ & (kcg_c1->sdmType == kcg_c2->sdmType);
  kcg_equ = kcg_equ & (kcg_c1->supervisionStatus == kcg_c2->supervisionStatus);
  kcg_equ = kcg_equ & (kcg_c1->valid_targetDistance ==
      kcg_c2->valid_targetDistance);
  kcg_equ = kcg_equ & (kcg_c1->targetDistance == kcg_c2->targetDistance);
  kcg_equ = kcg_equ & (kcg_c1->valid_v_sbi == kcg_c2->valid_v_sbi);
  kcg_equ = kcg_equ & (kcg_c1->sbiSpeed == kcg_c2->sbiSpeed);
  kcg_equ = kcg_equ & (kcg_c1->valid_v_mrdt == kcg_c2->valid_v_mrdt);
  kcg_equ = kcg_equ & (kcg_c1->mrdtSpeed == kcg_c2->mrdtSpeed);
  kcg_equ = kcg_equ & (kcg_c1->valid_v_release == kcg_c2->valid_v_release);
  kcg_equ = kcg_equ & (kcg_c1->releaseSpeed == kcg_c2->releaseSpeed);
  kcg_equ = kcg_equ & (kcg_c1->valid_v_permitted == kcg_c2->valid_v_permitted);
  kcg_equ = kcg_equ & (kcg_c1->permittedSpeed == kcg_c2->permittedSpeed);
  kcg_equ = kcg_equ & (kcg_c1->valid_v_est == kcg_c2->valid_v_est);
  kcg_equ = kcg_equ & (kcg_c1->estimatedSpeed == kcg_c2->estimatedSpeed);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_SDM_Commands_T_SDM_Types_Pkg */

#ifdef kcg_use_P58_PositionReportParameters_T_Packet_Types_Pkg
kcg_bool kcg_comp_P58_PositionReportParameters_T_Packet_Types_Pkg(
  P58_PositionReportParameters_T_Packet_Types_Pkg *kcg_c1,
  P58_PositionReportParameters_T_Packet_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_IterPacket58List_T_Packet_Types_Pkg(
      &kcg_c1->iterPacket58List,
      &kcg_c2->iterPacket58List);
  kcg_equ = kcg_equ & (kcg_c1->n_iter == kcg_c2->n_iter);
  kcg_equ = kcg_equ & (kcg_c1->m_loc == kcg_c2->m_loc);
  kcg_equ = kcg_equ & (kcg_c1->d_cycloc == kcg_c2->d_cycloc);
  kcg_equ = kcg_equ & (kcg_c1->t_cycloc == kcg_c2->t_cycloc);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->l_packet == kcg_c2->l_packet);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->nid_packet == kcg_c2->nid_packet);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P58_PositionReportParameters_T_Packet_Types_Pkg */

#ifdef kcg_use_P003_OBU_T_TM
kcg_bool kcg_comp_P003_OBU_T_TM(P003_OBU_T_TM *kcg_c1, P003_OBU_T_TM *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_nvktint == kcg_c2->m_nvktint);
  kcg_equ = kcg_equ & kcg_comp_P003_OBU_l_sectionlist_enum_T_TM(
      &kcg_c1->n_iter_l_list,
      &kcg_c2->n_iter_l_list);
  kcg_equ = kcg_equ & (kcg_c1->n_iter_l == kcg_c2->n_iter_l);
  kcg_equ = kcg_equ & (kcg_c1->m_nvkrint == kcg_c2->m_nvkrint);
  kcg_equ = kcg_equ & (kcg_c1->l_nvkrint == kcg_c2->l_nvkrint);
  kcg_equ = kcg_equ & kcg_comp_P003_OBU_k_sectionlist_enum_T_TM(
      &kcg_c1->n_iter_k_list,
      &kcg_c2->n_iter_k_list);
  kcg_equ = kcg_equ & (kcg_c1->n_iter_k == kcg_c2->n_iter_k);
  kcg_equ = kcg_equ & kcg_comp_P003_OBU_n_sectionlist_enum_T_TM(
      &kcg_c1->n_iter_n_list,
      &kcg_c2->n_iter_n_list);
  kcg_equ = kcg_equ & (kcg_c1->n_iter_n == kcg_c2->n_iter_n);
  kcg_equ = kcg_equ & (kcg_c1->m_nvkvint_23 == kcg_c2->m_nvkvint_23);
  kcg_equ = kcg_equ & (kcg_c1->m_nvkvint_12 == kcg_c2->m_nvkvint_12);
  kcg_equ = kcg_equ & (kcg_c1->v_nvkvint == kcg_c2->v_nvkvint);
  kcg_equ = kcg_equ & (kcg_c1->a_nvp23 == kcg_c2->a_nvp23);
  kcg_equ = kcg_equ & (kcg_c1->a_nvp12 == kcg_c2->a_nvp12);
  kcg_equ = kcg_equ & (kcg_c1->q_nvkvintset == kcg_c2->q_nvkvintset);
  kcg_equ = kcg_equ & (kcg_c1->q_nvkint == kcg_c2->q_nvkint);
  kcg_equ = kcg_equ & (kcg_c1->m_nvebcl == kcg_c2->m_nvebcl);
  kcg_equ = kcg_equ & (kcg_c1->m_nvavadh == kcg_c2->m_nvavadh);
  kcg_equ = kcg_equ & (kcg_c1->q_nvlocacc == kcg_c2->q_nvlocacc);
  kcg_equ = kcg_equ & (kcg_c1->a_nvmaxredadh3 == kcg_c2->a_nvmaxredadh3);
  kcg_equ = kcg_equ & (kcg_c1->a_nvmaxredadh2 == kcg_c2->a_nvmaxredadh2);
  kcg_equ = kcg_equ & (kcg_c1->a_nvmaxredadh1 == kcg_c2->a_nvmaxredadh1);
  kcg_equ = kcg_equ & (kcg_c1->q_nvdriver_adhes == kcg_c2->q_nvdriver_adhes);
  kcg_equ = kcg_equ & (kcg_c1->d_nvstff == kcg_c2->d_nvstff);
  kcg_equ = kcg_equ & (kcg_c1->m_nvderun == kcg_c2->m_nvderun);
  kcg_equ = kcg_equ & (kcg_c1->t_nvcontact == kcg_c2->t_nvcontact);
  kcg_equ = kcg_equ & (kcg_c1->m_nvcontact == kcg_c2->m_nvcontact);
  kcg_equ = kcg_equ & (kcg_c1->d_nvpotrp == kcg_c2->d_nvpotrp);
  kcg_equ = kcg_equ & (kcg_c1->t_nvovtrp == kcg_c2->t_nvovtrp);
  kcg_equ = kcg_equ & (kcg_c1->d_nvovtrp == kcg_c2->d_nvovtrp);
  kcg_equ = kcg_equ & (kcg_c1->v_nvsupovtrp == kcg_c2->v_nvsupovtrp);
  kcg_equ = kcg_equ & (kcg_c1->v_nvallowovtrp == kcg_c2->v_nvallowovtrp);
  kcg_equ = kcg_equ & (kcg_c1->q_nvinhsnicperm == kcg_c2->q_nvinhsnicperm);
  kcg_equ = kcg_equ & (kcg_c1->q_nvsbfbperm == kcg_c2->q_nvsbfbperm);
  kcg_equ = kcg_equ & (kcg_c1->q_nvguiperm == kcg_c2->q_nvguiperm);
  kcg_equ = kcg_equ & (kcg_c1->q_nvemrrls == kcg_c2->q_nvemrrls);
  kcg_equ = kcg_equ & (kcg_c1->q_nvsbtsmperm == kcg_c2->q_nvsbtsmperm);
  kcg_equ = kcg_equ & (kcg_c1->d_nvroll == kcg_c2->d_nvroll);
  kcg_equ = kcg_equ & (kcg_c1->v_nvrel == kcg_c2->v_nvrel);
  kcg_equ = kcg_equ & (kcg_c1->v_nvunfit == kcg_c2->v_nvunfit);
  kcg_equ = kcg_equ & (kcg_c1->v_nvlimsuperv == kcg_c2->v_nvlimsuperv);
  kcg_equ = kcg_equ & (kcg_c1->v_nvonsight == kcg_c2->v_nvonsight);
  kcg_equ = kcg_equ & (kcg_c1->v_nvstff == kcg_c2->v_nvstff);
  kcg_equ = kcg_equ & (kcg_c1->v_nvshunt == kcg_c2->v_nvshunt);
  kcg_equ = kcg_equ & kcg_comp_P003_OBU_nid_c_sectionlist_enum_T_TM(
      &kcg_c1->nid_c_list,
      &kcg_c2->nid_c_list);
  kcg_equ = kcg_equ & (kcg_c1->n_iter_nid_c == kcg_c2->n_iter_nid_c);
  kcg_equ = kcg_equ & (kcg_c1->nid_c == kcg_c2->nid_c);
  kcg_equ = kcg_equ & (kcg_c1->d_validnv == kcg_c2->d_validnv);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->nid_packet == kcg_c2->nid_packet);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P003_OBU_T_TM */

#ifdef kcg_use_P003V1_OBU_T_TM_baseline2
kcg_bool kcg_comp_P003V1_OBU_T_TM_baseline2(
  P003V1_OBU_T_TM_baseline2 *kcg_c1,
  P003V1_OBU_T_TM_baseline2 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->q_nvdriver_adhes == kcg_c2->q_nvdriver_adhes);
  kcg_equ = kcg_equ & (kcg_c1->d_nvstff == kcg_c2->d_nvstff);
  kcg_equ = kcg_equ & (kcg_c1->m_nvderun == kcg_c2->m_nvderun);
  kcg_equ = kcg_equ & (kcg_c1->t_nvcontact == kcg_c2->t_nvcontact);
  kcg_equ = kcg_equ & (kcg_c1->m_nvcontact == kcg_c2->m_nvcontact);
  kcg_equ = kcg_equ & (kcg_c1->d_nvpotrp == kcg_c2->d_nvpotrp);
  kcg_equ = kcg_equ & (kcg_c1->t_nvovtrp == kcg_c2->t_nvovtrp);
  kcg_equ = kcg_equ & (kcg_c1->d_nvovtrp == kcg_c2->d_nvovtrp);
  kcg_equ = kcg_equ & (kcg_c1->v_nvsopovtrp == kcg_c2->v_nvsopovtrp);
  kcg_equ = kcg_equ & (kcg_c1->v_nvallowovtrp == kcg_c2->v_nvallowovtrp);
  kcg_equ = kcg_equ & (kcg_c1->q_nvemrrls == kcg_c2->q_nvemrrls);
  kcg_equ = kcg_equ & (kcg_c1->q_nvsbtsmperm == kcg_c2->q_nvsbtsmperm);
  kcg_equ = kcg_equ & (kcg_c1->d_nvroll == kcg_c2->d_nvroll);
  kcg_equ = kcg_equ & (kcg_c1->v_nvrel == kcg_c2->v_nvrel);
  kcg_equ = kcg_equ & (kcg_c1->v_nvunfit == kcg_c2->v_nvunfit);
  kcg_equ = kcg_equ & (kcg_c1->v_nvonsight == kcg_c2->v_nvonsight);
  kcg_equ = kcg_equ & (kcg_c1->v_nvstff == kcg_c2->v_nvstff);
  kcg_equ = kcg_equ & (kcg_c1->v_nvshunt == kcg_c2->v_nvshunt);
  kcg_equ = kcg_equ & kcg_comp_P003V1_sectionlist_enum_T_TM_baseline2(
      &kcg_c1->SECTIONS,
      &kcg_c2->SECTIONS);
  kcg_equ = kcg_equ & (kcg_c1->n_iter == kcg_c2->n_iter);
  kcg_equ = kcg_equ & (kcg_c1->d_validnv == kcg_c2->d_validnv);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P003V1_OBU_T_TM_baseline2 */

#ifdef kcg_use_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg
kcg_bool kcg_comp_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg(
  T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->referenceLocation == kcg_c2->referenceLocation);
  kcg_equ = kcg_equ & (kcg_c1->LRBG == kcg_c2->LRBG);
  kcg_equ = kcg_equ & kcg_comp_P80_ModeProfiles_T_Packet_Types_Pkg(
      &kcg_c1->P_80,
      &kcg_c2->P_80);
  kcg_equ = kcg_equ &
    kcg_comp_P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg(
      &kcg_c1->P_63,
      &kcg_c2->P_63);
  kcg_equ = kcg_equ &
    kcg_comp_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg(
      &kcg_c1->P_46,
      &kcg_c2->P_46);
  kcg_equ = kcg_equ & kcg_comp_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
      &kcg_c1->P_41,
      &kcg_c2->P_41);
  kcg_equ = kcg_equ &
    kcg_comp_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg(
      &kcg_c1->P_27,
      &kcg_c2->P_27);
  kcg_equ = kcg_equ & kcg_comp_P21_GradientProfiles_T_Packet_Types_Pkg(
      &kcg_c1->P_21,
      &kcg_c2->P_21);
  kcg_equ = kcg_equ &
    kcg_comp_P15_Level23MovementAuthorities_T_Packet_Types_Pkg(
      &kcg_c1->P_15,
      &kcg_c2->P_15);
  kcg_equ = kcg_equ &
    kcg_comp_P139_ReversingSupervisionInformation_T_Packet_Types_Pkg(
      &kcg_c1->P_139,
      &kcg_c2->P_139);
  kcg_equ = kcg_equ & kcg_comp_P138_ReversingAreaInformation_T_Packet_Types_Pkg(
      &kcg_c1->P_138,
      &kcg_c2->P_138);
  kcg_equ = kcg_equ & kcg_comp_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg(
      &kcg_c1->P_137,
      &kcg_c2->P_137);
  kcg_equ = kcg_equ &
    kcg_comp_P135_StopShuntingOnDeskOpening_T_Packet_Types_Pkg(
      &kcg_c1->P_135,
      &kcg_c2->P_135);
  kcg_equ = kcg_equ & kcg_comp_P12_Level1MovementAuthorities_T_Packet_Types_Pkg(
      &kcg_c1->P_12,
      &kcg_c2->P_12);
  return kcg_equ;
}
#endif /* kcg_use_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_P012_OBU_T_TM
kcg_bool kcg_comp_P012_OBU_T_TM(P012_OBU_T_TM *kcg_c1, P012_OBU_T_TM *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->v_releaseol == kcg_c2->v_releaseol);
  kcg_equ = kcg_equ & (kcg_c1->d_ol == kcg_c2->d_ol);
  kcg_equ = kcg_equ & (kcg_c1->t_ol == kcg_c2->t_ol);
  kcg_equ = kcg_equ & (kcg_c1->d_startol == kcg_c2->d_startol);
  kcg_equ = kcg_equ & (kcg_c1->q_overlap == kcg_c2->q_overlap);
  kcg_equ = kcg_equ & (kcg_c1->v_releasedp == kcg_c2->v_releasedp);
  kcg_equ = kcg_equ & (kcg_c1->d_dp == kcg_c2->d_dp);
  kcg_equ = kcg_equ & (kcg_c1->q_dangerpoint == kcg_c2->q_dangerpoint);
  kcg_equ = kcg_equ & (kcg_c1->d_endtimerstartloc ==
      kcg_c2->d_endtimerstartloc);
  kcg_equ = kcg_equ & (kcg_c1->t_endtimer == kcg_c2->t_endtimer);
  kcg_equ = kcg_equ & (kcg_c1->q_endtimer == kcg_c2->q_endtimer);
  kcg_equ = kcg_equ & (kcg_c1->d_sectiontimerstoploc ==
      kcg_c2->d_sectiontimerstoploc);
  kcg_equ = kcg_equ & (kcg_c1->t_sectiontimer == kcg_c2->t_sectiontimer);
  kcg_equ = kcg_equ & (kcg_c1->q_sectiontimer == kcg_c2->q_sectiontimer);
  kcg_equ = kcg_equ & (kcg_c1->l_endsection == kcg_c2->l_endsection);
  kcg_equ = kcg_equ & kcg_comp_P015_OBU_sectionlist_enum_T_TM(
      &kcg_c1->sections,
      &kcg_c2->sections);
  kcg_equ = kcg_equ & (kcg_c1->n_iter == kcg_c2->n_iter);
  kcg_equ = kcg_equ & (kcg_c1->t_loa == kcg_c2->t_loa);
  kcg_equ = kcg_equ & (kcg_c1->v_loa == kcg_c2->v_loa);
  kcg_equ = kcg_equ & (kcg_c1->v_main == kcg_c2->v_main);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P012_OBU_T_TM */

#ifdef kcg_use_P15_Level23MovementAuthority_T_Packet_Types_Pkg
kcg_bool kcg_comp_P15_Level23MovementAuthority_T_Packet_Types_Pkg(
  P15_Level23MovementAuthority_T_Packet_Types_Pkg *kcg_c1,
  P15_Level23MovementAuthority_T_Packet_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->v_releaseol == kcg_c2->v_releaseol);
  kcg_equ = kcg_equ & (kcg_c1->d_ol == kcg_c2->d_ol);
  kcg_equ = kcg_equ & (kcg_c1->t_ol == kcg_c2->t_ol);
  kcg_equ = kcg_equ & (kcg_c1->d_startol == kcg_c2->d_startol);
  kcg_equ = kcg_equ & (kcg_c1->q_overlap == kcg_c2->q_overlap);
  kcg_equ = kcg_equ & (kcg_c1->v_releasedp == kcg_c2->v_releasedp);
  kcg_equ = kcg_equ & (kcg_c1->d_dp == kcg_c2->d_dp);
  kcg_equ = kcg_equ & (kcg_c1->q_dangerpoint == kcg_c2->q_dangerpoint);
  kcg_equ = kcg_equ & (kcg_c1->d_endtimerstartloc ==
      kcg_c2->d_endtimerstartloc);
  kcg_equ = kcg_equ & (kcg_c1->t_endtimer == kcg_c2->t_endtimer);
  kcg_equ = kcg_equ & (kcg_c1->q_endtimer == kcg_c2->q_endtimer);
  kcg_equ = kcg_equ & (kcg_c1->d_sectiontimerstoploc ==
      kcg_c2->d_sectiontimerstoploc);
  kcg_equ = kcg_equ & (kcg_c1->t_sectiontimer == kcg_c2->t_sectiontimer);
  kcg_equ = kcg_equ & (kcg_c1->q_sectiontimer == kcg_c2->q_sectiontimer);
  kcg_equ = kcg_equ & (kcg_c1->l_endsection == kcg_c2->l_endsection);
  kcg_equ = kcg_equ & (kcg_c1->d_sectiontimerstoploc_k ==
      kcg_c2->d_sectiontimerstoploc_k);
  kcg_equ = kcg_equ & (kcg_c1->t_sectiontimer_k == kcg_c2->t_sectiontimer_k);
  kcg_equ = kcg_equ & (kcg_c1->q_sectiontimer_k == kcg_c2->q_sectiontimer_k);
  kcg_equ = kcg_equ & (kcg_c1->l_section == kcg_c2->l_section);
  kcg_equ = kcg_equ & (kcg_c1->t_loa == kcg_c2->t_loa);
  kcg_equ = kcg_equ & (kcg_c1->v_loa == kcg_c2->v_loa);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P15_Level23MovementAuthority_T_Packet_Types_Pkg */

#ifdef kcg_use_P12_Level1MovementAuthority_T_Packet_Types_Pkg
kcg_bool kcg_comp_P12_Level1MovementAuthority_T_Packet_Types_Pkg(
  P12_Level1MovementAuthority_T_Packet_Types_Pkg *kcg_c1,
  P12_Level1MovementAuthority_T_Packet_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->v_releaseol == kcg_c2->v_releaseol);
  kcg_equ = kcg_equ & (kcg_c1->d_ol == kcg_c2->d_ol);
  kcg_equ = kcg_equ & (kcg_c1->t_ol == kcg_c2->t_ol);
  kcg_equ = kcg_equ & (kcg_c1->d_startol == kcg_c2->d_startol);
  kcg_equ = kcg_equ & (kcg_c1->q_overlap == kcg_c2->q_overlap);
  kcg_equ = kcg_equ & (kcg_c1->v_releasedp == kcg_c2->v_releasedp);
  kcg_equ = kcg_equ & (kcg_c1->d_dp == kcg_c2->d_dp);
  kcg_equ = kcg_equ & (kcg_c1->q_dangerpoint == kcg_c2->q_dangerpoint);
  kcg_equ = kcg_equ & (kcg_c1->d_endtimerstartloc ==
      kcg_c2->d_endtimerstartloc);
  kcg_equ = kcg_equ & (kcg_c1->t_endtimer == kcg_c2->t_endtimer);
  kcg_equ = kcg_equ & (kcg_c1->q_endtimer == kcg_c2->q_endtimer);
  kcg_equ = kcg_equ & (kcg_c1->d_sectiontimerstoploc ==
      kcg_c2->d_sectiontimerstoploc);
  kcg_equ = kcg_equ & (kcg_c1->t_sectiontimer == kcg_c2->t_sectiontimer);
  kcg_equ = kcg_equ & (kcg_c1->q_sectiontimer == kcg_c2->q_sectiontimer);
  kcg_equ = kcg_equ & (kcg_c1->l_endsection == kcg_c2->l_endsection);
  kcg_equ = kcg_equ & (kcg_c1->d_sectiontimerstoploc_k ==
      kcg_c2->d_sectiontimerstoploc_k);
  kcg_equ = kcg_equ & (kcg_c1->t_sectiontimer_k == kcg_c2->t_sectiontimer_k);
  kcg_equ = kcg_equ & (kcg_c1->q_sectiontimer_k == kcg_c2->q_sectiontimer_k);
  kcg_equ = kcg_equ & (kcg_c1->l_section == kcg_c2->l_section);
  kcg_equ = kcg_equ & (kcg_c1->t_loa == kcg_c2->t_loa);
  kcg_equ = kcg_equ & (kcg_c1->v_loa == kcg_c2->v_loa);
  kcg_equ = kcg_equ & (kcg_c1->v_main == kcg_c2->v_main);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P12_Level1MovementAuthority_T_Packet_Types_Pkg */

#ifdef kcg_use_P015_OBU_T_TM
kcg_bool kcg_comp_P015_OBU_T_TM(P015_OBU_T_TM *kcg_c1, P015_OBU_T_TM *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->v_releaseol == kcg_c2->v_releaseol);
  kcg_equ = kcg_equ & (kcg_c1->d_ol == kcg_c2->d_ol);
  kcg_equ = kcg_equ & (kcg_c1->t_ol == kcg_c2->t_ol);
  kcg_equ = kcg_equ & (kcg_c1->d_startol == kcg_c2->d_startol);
  kcg_equ = kcg_equ & (kcg_c1->q_overlap == kcg_c2->q_overlap);
  kcg_equ = kcg_equ & (kcg_c1->v_releasedp == kcg_c2->v_releasedp);
  kcg_equ = kcg_equ & (kcg_c1->d_dp == kcg_c2->d_dp);
  kcg_equ = kcg_equ & (kcg_c1->q_dangerpoint == kcg_c2->q_dangerpoint);
  kcg_equ = kcg_equ & (kcg_c1->d_endtimerstartloc ==
      kcg_c2->d_endtimerstartloc);
  kcg_equ = kcg_equ & (kcg_c1->t_endtimer == kcg_c2->t_endtimer);
  kcg_equ = kcg_equ & (kcg_c1->q_endtimer == kcg_c2->q_endtimer);
  kcg_equ = kcg_equ & (kcg_c1->d_sectiontimerstoploc ==
      kcg_c2->d_sectiontimerstoploc);
  kcg_equ = kcg_equ & (kcg_c1->t_sectiontimer == kcg_c2->t_sectiontimer);
  kcg_equ = kcg_equ & (kcg_c1->q_sectiontimer == kcg_c2->q_sectiontimer);
  kcg_equ = kcg_equ & (kcg_c1->l_endsection == kcg_c2->l_endsection);
  kcg_equ = kcg_equ & kcg_comp_P015_OBU_sectionlist_enum_T_TM(
      &kcg_c1->sections,
      &kcg_c2->sections);
  kcg_equ = kcg_equ & (kcg_c1->n_iter == kcg_c2->n_iter);
  kcg_equ = kcg_equ & (kcg_c1->t_loa == kcg_c2->t_loa);
  kcg_equ = kcg_equ & (kcg_c1->v_loa == kcg_c2->v_loa);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P015_OBU_T_TM */

#ifdef kcg_use_MovementAuthority_t_TrackAtlasTypes
kcg_bool kcg_comp_MovementAuthority_t_TrackAtlasTypes(
  MovementAuthority_t_TrackAtlasTypes *kcg_c1,
  MovementAuthority_t_TrackAtlasTypes *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_Endtimer_t_TrackAtlasTypes(
      &kcg_c1->endtimer_t,
      &kcg_c2->endtimer_t);
  kcg_equ = kcg_equ & (kcg_c1->q_endtimer == kcg_c2->q_endtimer);
  kcg_equ = kcg_equ & kcg_comp_DP_or_OL_t_TrackAtlasTypes(
      &kcg_c1->overlap,
      &kcg_c2->overlap);
  kcg_equ = kcg_equ & (kcg_c1->q_overlap == kcg_c2->q_overlap);
  kcg_equ = kcg_equ & kcg_comp_DP_or_OL_t_TrackAtlasTypes(
      &kcg_c1->dangerpoint,
      &kcg_c2->dangerpoint);
  kcg_equ = kcg_equ & (kcg_c1->q_dangerpoint == kcg_c2->q_dangerpoint);
  kcg_equ = kcg_equ & kcg_comp_MovementAuthoritySectionlist_t_TrackAtlasTypes(
      &kcg_c1->sections,
      &kcg_c2->sections);
  kcg_equ = kcg_equ & (kcg_c1->n_iter == kcg_c2->n_iter);
  kcg_equ = kcg_equ & (kcg_c1->t_loa == kcg_c2->t_loa);
  kcg_equ = kcg_equ & (kcg_c1->t_loa_unlimited == kcg_c2->t_loa_unlimited);
  kcg_equ = kcg_equ & (kcg_c1->v_loa == kcg_c2->v_loa);
  kcg_equ = kcg_equ & (kcg_c1->v_main == kcg_c2->v_main);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->Level == kcg_c2->Level);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_MovementAuthority_t_TrackAtlasTypes */

#ifdef kcg_use_trainPositionInfo_T_TrainPosition_Types_Pck
kcg_bool kcg_comp_trainPositionInfo_T_TrainPosition_Types_Pck(
  trainPositionInfo_T_TrainPosition_Types_Pck *kcg_c1,
  trainPositionInfo_T_TrainPosition_Types_Pck *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->linkingIsUsedOnboard ==
      kcg_c2->linkingIsUsedOnboard);
  kcg_equ = kcg_equ & (kcg_c1->speed == kcg_c2->speed);
  kcg_equ = kcg_equ & kcg_comp_positionedBG_T_TrainPosition_Types_Pck(
      &kcg_c1->lastPassedUnlinkedBG,
      &kcg_c2->lastPassedUnlinkedBG);
  kcg_equ = kcg_equ & kcg_comp_positionedBG_T_TrainPosition_Types_Pck(
      &kcg_c1->lastPassedLinkedBG,
      &kcg_c2->lastPassedLinkedBG);
  kcg_equ = kcg_equ & kcg_comp_positionedBG_T_TrainPosition_Types_Pck(
      &kcg_c1->prevPassedLinkedBG,
      &kcg_c2->prevPassedLinkedBG);
  kcg_equ = kcg_equ & kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &kcg_c1->trainPositionDerivedFromLastUnlinkedBG,
      &kcg_c2->trainPositionDerivedFromLastUnlinkedBG);
  kcg_equ = kcg_equ & kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &kcg_c1->trainPositionDerivedFromLastLinkedBG,
      &kcg_c2->trainPositionDerivedFromLastLinkedBG);
  kcg_equ = kcg_equ & kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &kcg_c1->trainPosition,
      &kcg_c2->trainPosition);
  kcg_equ = kcg_equ & (kcg_c1->timestamp == kcg_c2->timestamp);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_trainPositionInfo_T_TrainPosition_Types_Pck */

#ifdef kcg_use_P3_NationalValues_T_Packet_Types_Pkg
kcg_bool kcg_comp_P3_NationalValues_T_Packet_Types_Pkg(
  P3_NationalValues_T_Packet_Types_Pkg *kcg_c1,
  P3_NationalValues_T_Packet_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_nvktint == kcg_c2->m_nvktint);
  kcg_equ = kcg_equ & kcg_comp_nvkrintArray_T_Packet_Types_Pkg(
      &kcg_c1->nvkrintArray,
      &kcg_c2->nvkrintArray);
  kcg_equ = kcg_equ & kcg_comp_nvkvintsetArray_T_Packet_Types_Pkg(
      &kcg_c1->nvkvintsetArray,
      &kcg_c2->nvkvintsetArray);
  kcg_equ = kcg_equ & (kcg_c1->q_nvkint == kcg_c2->q_nvkint);
  kcg_equ = kcg_equ & (kcg_c1->m_nvebcl == kcg_c2->m_nvebcl);
  kcg_equ = kcg_equ & (kcg_c1->m_nvavadh == kcg_c2->m_nvavadh);
  kcg_equ = kcg_equ & (kcg_c1->q_nvlocacc == kcg_c2->q_nvlocacc);
  kcg_equ = kcg_equ & (kcg_c1->a_nvmaxredadh3 == kcg_c2->a_nvmaxredadh3);
  kcg_equ = kcg_equ & (kcg_c1->a_nvmaxredadh2 == kcg_c2->a_nvmaxredadh2);
  kcg_equ = kcg_equ & (kcg_c1->a_nvmaxredadh1 == kcg_c2->a_nvmaxredadh1);
  kcg_equ = kcg_equ & (kcg_c1->q_nvdriver_adhes == kcg_c2->q_nvdriver_adhes);
  kcg_equ = kcg_equ & (kcg_c1->d_nvstff == kcg_c2->d_nvstff);
  kcg_equ = kcg_equ & (kcg_c1->m_nvderun == kcg_c2->m_nvderun);
  kcg_equ = kcg_equ & (kcg_c1->t_nvcontact == kcg_c2->t_nvcontact);
  kcg_equ = kcg_equ & (kcg_c1->m_nvcontact == kcg_c2->m_nvcontact);
  kcg_equ = kcg_equ & (kcg_c1->d_nvpotrp == kcg_c2->d_nvpotrp);
  kcg_equ = kcg_equ & (kcg_c1->t_nvovtrp == kcg_c2->t_nvovtrp);
  kcg_equ = kcg_equ & (kcg_c1->d_nvovtrp == kcg_c2->d_nvovtrp);
  kcg_equ = kcg_equ & (kcg_c1->v_nvsupovtrp == kcg_c2->v_nvsupovtrp);
  kcg_equ = kcg_equ & (kcg_c1->v_nvallowovtrp == kcg_c2->v_nvallowovtrp);
  kcg_equ = kcg_equ & (kcg_c1->q_nvinhsmicperm == kcg_c2->q_nvinhsmicperm);
  kcg_equ = kcg_equ & (kcg_c1->q_nvsbfbperm == kcg_c2->q_nvsbfbperm);
  kcg_equ = kcg_equ & (kcg_c1->q_nvguiperm == kcg_c2->q_nvguiperm);
  kcg_equ = kcg_equ & (kcg_c1->q_nvemrrls == kcg_c2->q_nvemrrls);
  kcg_equ = kcg_equ & (kcg_c1->q_nvsbtsmperm == kcg_c2->q_nvsbtsmperm);
  kcg_equ = kcg_equ & (kcg_c1->d_nvroll == kcg_c2->d_nvroll);
  kcg_equ = kcg_equ & (kcg_c1->v_nvrel == kcg_c2->v_nvrel);
  kcg_equ = kcg_equ & (kcg_c1->v_nvunfit == kcg_c2->v_nvunfit);
  kcg_equ = kcg_equ & (kcg_c1->v_nvlimsuperv == kcg_c2->v_nvlimsuperv);
  kcg_equ = kcg_equ & (kcg_c1->v_nvonsight == kcg_c2->v_nvonsight);
  kcg_equ = kcg_equ & (kcg_c1->v_nvstff == kcg_c2->v_nvstff);
  kcg_equ = kcg_equ & (kcg_c1->v_nvshunt == kcg_c2->v_nvshunt);
  kcg_equ = kcg_equ & kcg_comp_nidCArray_T_Packet_Types_Pkg(
      &kcg_c1->nid_cArray,
      &kcg_c2->nid_cArray);
  kcg_equ = kcg_equ & (kcg_c1->d_validnv == kcg_c2->d_validnv);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P3_NationalValues_T_Packet_Types_Pkg */

#ifdef kcg_use_P203V1_OBU_T_TM_baseline2
kcg_bool kcg_comp_P203V1_OBU_T_TM_baseline2(
  P203V1_OBU_T_TM_baseline2 *kcg_c1,
  P203V1_OBU_T_TM_baseline2 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_nvktint == kcg_c2->m_nvktint);
  kcg_equ = kcg_equ & kcg_comp_P203V1_OBU_l_sectionlist_enum_T_TM_baseline2(
      &kcg_c1->n_iter_l_list,
      &kcg_c2->n_iter_l_list);
  kcg_equ = kcg_equ & (kcg_c1->n_iter_l == kcg_c2->n_iter_l);
  kcg_equ = kcg_equ & (kcg_c1->m_nvkrint == kcg_c2->m_nvkrint);
  kcg_equ = kcg_equ & (kcg_c1->l_nvkrint == kcg_c2->l_nvkrint);
  kcg_equ = kcg_equ & kcg_comp_P203V1_OBU_k_sectionlist_enum_T_TM_baseline2(
      &kcg_c1->n_iter_k_list,
      &kcg_c2->n_iter_k_list);
  kcg_equ = kcg_equ & (kcg_c1->n_iter_k == kcg_c2->n_iter_k);
  kcg_equ = kcg_equ & kcg_comp_P203V1_OBU_n_sectionlist_enum_T_TM_baseline2(
      &kcg_c1->n_iter_n_list,
      &kcg_c2->n_iter_n_list);
  kcg_equ = kcg_equ & (kcg_c1->n_iter_n == kcg_c2->n_iter_n);
  kcg_equ = kcg_equ & (kcg_c1->m_nvkvint_23 == kcg_c2->m_nvkvint_23);
  kcg_equ = kcg_equ & (kcg_c1->m_nvkvint_12 == kcg_c2->m_nvkvint_12);
  kcg_equ = kcg_equ & (kcg_c1->v_nvkvint == kcg_c2->v_nvkvint);
  kcg_equ = kcg_equ & (kcg_c1->a_nvp23 == kcg_c2->a_nvp23);
  kcg_equ = kcg_equ & (kcg_c1->a_nvp12 == kcg_c2->a_nvp12);
  kcg_equ = kcg_equ & (kcg_c1->q_nvkvintset == kcg_c2->q_nvkvintset);
  kcg_equ = kcg_equ & (kcg_c1->q_nvkint == kcg_c2->q_nvkint);
  kcg_equ = kcg_equ & (kcg_c1->m_nvebcl == kcg_c2->m_nvebcl);
  kcg_equ = kcg_equ & (kcg_c1->m_nvavadh == kcg_c2->m_nvavadh);
  kcg_equ = kcg_equ & (kcg_c1->a_nvmaxredadh3 == kcg_c2->a_nvmaxredadh3);
  kcg_equ = kcg_equ & (kcg_c1->a_nvmaxredadh2 == kcg_c2->a_nvmaxredadh2);
  kcg_equ = kcg_equ & (kcg_c1->a_nvmaxredadh1 == kcg_c2->a_nvmaxredadh1);
  kcg_equ = kcg_equ & (kcg_c1->q_nvinhsnicperm == kcg_c2->q_nvinhsnicperm);
  kcg_equ = kcg_equ & (kcg_c1->q_nvsbfbperm == kcg_c2->q_nvsbfbperm);
  kcg_equ = kcg_equ & (kcg_c1->q_nvguiperm == kcg_c2->q_nvguiperm);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->nid_packet == kcg_c2->nid_packet);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P203V1_OBU_T_TM_baseline2 */

#ifdef kcg_use_trainPosition_T_TrainPosition_Types_Pck
kcg_bool kcg_comp_trainPosition_T_TrainPosition_Types_Pck(
  trainPosition_T_TrainPosition_Types_Pck *kcg_c1,
  trainPosition_T_TrainPosition_Types_Pck *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->maxSafeRearEndPosition ==
      kcg_c2->maxSafeRearEndPosition);
  kcg_equ = kcg_equ & (kcg_c1->minSafeRearEndPosition ==
      kcg_c2->minSafeRearEndPosition);
  kcg_equ = kcg_equ & (kcg_c1->estimatedRearEndPosition ==
      kcg_c2->estimatedRearEndPosition);
  kcg_equ = kcg_equ & (kcg_c1->linkingIsUsedOnboard ==
      kcg_c2->linkingIsUsedOnboard);
  kcg_equ = kcg_equ & (kcg_c1->trainRunningDirectionToLRBG ==
      kcg_c2->trainRunningDirectionToLRBG);
  kcg_equ = kcg_equ & (kcg_c1->trainOrientationToLRBG ==
      kcg_c2->trainOrientationToLRBG);
  kcg_equ = kcg_equ & (kcg_c1->nominalOrReverseToLRBG ==
      kcg_c2->nominalOrReverseToLRBG);
  kcg_equ = kcg_equ & kcg_comp_positionedBG_T_TrainPosition_Types_Pck(
      &kcg_c1->prvLRBG,
      &kcg_c2->prvLRBG);
  kcg_equ = kcg_equ & kcg_comp_positionedBG_T_TrainPosition_Types_Pck(
      &kcg_c1->LRBG,
      &kcg_c2->LRBG);
  kcg_equ = kcg_equ & (kcg_c1->maxSafeFrontEndPostion ==
      kcg_c2->maxSafeFrontEndPostion);
  kcg_equ = kcg_equ & (kcg_c1->minSafeFrontEndPosition ==
      kcg_c2->minSafeFrontEndPosition);
  kcg_equ = kcg_equ & (kcg_c1->estimatedFrontEndPosition ==
      kcg_c2->estimatedFrontEndPosition);
  kcg_equ = kcg_equ & kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &kcg_c1->trainPosition,
      &kcg_c2->trainPosition);
  kcg_equ = kcg_equ & (kcg_c1->noCoordinateSystemHasBeenAssigned ==
      kcg_c2->noCoordinateSystemHasBeenAssigned);
  kcg_equ = kcg_equ & (kcg_c1->trainPositionIsUnknown ==
      kcg_c2->trainPositionIsUnknown);
  kcg_equ = kcg_equ & (kcg_c1->timestamp == kcg_c2->timestamp);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_trainPosition_T_TrainPosition_Types_Pck */

#ifdef kcg_use_LinkedBG_T_BG_Types_Pkg
kcg_bool kcg_comp_LinkedBG_T_BG_Types_Pkg(
  LinkedBG_T_BG_Types_Pkg *kcg_c1,
  LinkedBG_T_BG_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->q_locacc == kcg_c2->q_locacc);
  kcg_equ = kcg_equ & (kcg_c1->q_linkreaction == kcg_c2->q_linkreaction);
  kcg_equ = kcg_equ & (kcg_c1->q_linkorientation == kcg_c2->q_linkorientation);
  kcg_equ = kcg_equ & (kcg_c1->nid_bg == kcg_c2->nid_bg);
  kcg_equ = kcg_equ & (kcg_c1->nid_c == kcg_c2->nid_c);
  kcg_equ = kcg_equ & (kcg_c1->q_newcountry == kcg_c2->q_newcountry);
  kcg_equ = kcg_equ & (kcg_c1->d_link == kcg_c2->d_link);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->nid_LRBG == kcg_c2->nid_LRBG);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_LinkedBG_T_BG_Types_Pkg */

#ifdef kcg_use_morc_configData_T_RCM_Session_Types_Pkg
kcg_bool kcg_comp_morc_configData_T_RCM_Session_Types_Pkg(
  morc_configData_T_RCM_Session_Types_Pkg *kcg_c1,
  morc_configData_T_RCM_Session_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->noOfTriesToEstablishASafeRadioConnection ==
      kcg_c2->noOfTriesToEstablishASafeRadioConnection);
  kcg_equ = kcg_equ & (kcg_c1->maxTimeToMaintainCommSession ==
      kcg_c2->maxTimeToMaintainCommSession);
  kcg_equ = kcg_equ & (kcg_c1->nid_engine == kcg_c2->nid_engine);
  kcg_equ = kcg_equ &
    kcg_comp_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(
      &kcg_c1->onboardPhoneNumbers,
      &kcg_c2->onboardPhoneNumbers);
  kcg_equ = kcg_equ & (kcg_c1->connectionStatusTimerInterval ==
      kcg_c2->connectionStatusTimerInterval);
  kcg_equ = kcg_equ & (kcg_c1->noOfRetriesUntilTerminationOrderIsReceived ==
      kcg_c2->noOfRetriesUntilTerminationOrderIsReceived);
  kcg_equ = kcg_equ & (kcg_c1->maxWaitingTimeUntilTerminationOrderReceived ==
      kcg_c2->maxWaitingTimeUntilTerminationOrderReceived);
  kcg_equ = kcg_equ & (kcg_c1->maxWaitingTimeForAckMessageReceived ==
      kcg_c2->maxWaitingTimeForAckMessageReceived);
  kcg_equ = kcg_equ & (kcg_c1->noOfRetriesOfSendingTerminationMessage ==
      kcg_c2->noOfRetriesOfSendingTerminationMessage);
  kcg_equ = kcg_equ & (kcg_c1->nid_radio_shortNumberStoredOnboard ==
      kcg_c2->nid_radio_shortNumberStoredOnboard);
  kcg_equ = kcg_equ & kcg_comp_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &kcg_c1->radioNetworkID_Default,
      &kcg_c2->radioNetworkID_Default);
  return kcg_equ;
}
#endif /* kcg_use_morc_configData_T_RCM_Session_Types_Pkg */

#ifdef kcg_use_sessionCmd_T_RCM_Session_Types_Pkg
kcg_bool kcg_comp_sessionCmd_T_RCM_Session_Types_Pkg(
  sessionCmd_T_RCM_Session_Types_Pkg *kcg_c1,
  sessionCmd_T_RCM_Session_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
      &kcg_c1->p42,
      &kcg_c2->p42);
  kcg_equ = kcg_equ &
    kcg_comp_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg(
      &kcg_c1->m38,
      &kcg_c2->m38);
  kcg_equ = kcg_equ & kcg_comp_RBC_Id_T_Common_Types_Pkg(
      &kcg_c1->origin,
      &kcg_c2->origin);
  kcg_equ = kcg_equ & (kcg_c1->nid_radio == kcg_c2->nid_radio);
  kcg_equ = kcg_equ & (kcg_c1->nid_rbc == kcg_c2->nid_rbc);
  kcg_equ = kcg_equ & (kcg_c1->nid_c == kcg_c2->nid_c);
  kcg_equ = kcg_equ & (kcg_c1->q_rbc == kcg_c2->q_rbc);
  kcg_equ = kcg_equ & (kcg_c1->initiatedByRBC == kcg_c2->initiatedByRBC);
  kcg_equ = kcg_equ & (kcg_c1->initiatedByOBU == kcg_c2->initiatedByOBU);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_sessionCmd_T_RCM_Session_Types_Pkg */

#ifdef kcg_use_obuEventsAndPhases_T_RCM_Session_Types_Pkg
kcg_bool kcg_comp_obuEventsAndPhases_T_RCM_Session_Types_Pkg(
  obuEventsAndPhases_T_RCM_Session_Types_Pkg *kcg_c1,
  obuEventsAndPhases_T_RCM_Session_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->level_1_isLeft == kcg_c2->level_1_isLeft);
  kcg_equ = kcg_equ & (kcg_c1->isInCommunicationSessionWithAnRIU ==
      kcg_c2->isInCommunicationSessionWithAnRIU);
  kcg_equ = kcg_equ & (kcg_c1->trainExitedFromAnRBCArea ==
      kcg_c2->trainExitedFromAnRBCArea);
  kcg_equ = kcg_equ & (kcg_c1->driverClosesTheDeskduringStartOfMission ==
      kcg_c2->driverClosesTheDeskduringStartOfMission);
  kcg_equ = kcg_equ & (kcg_c1->trainIsRejectedByRBC_duringStartOfMission ==
      kcg_c2->trainIsRejectedByRBC_duringStartOfMission);
  kcg_equ = kcg_equ & (kcg_c1->errorConditionRequiringTerminationDetected ==
      kcg_c2->errorConditionRequiringTerminationDetected);
  kcg_equ = kcg_equ & (kcg_c1->triggerDecisionThatNoRadioNetworkIDAvailable ==
      kcg_c2->triggerDecisionThatNoRadioNetworkIDAvailable);
  kcg_equ = kcg_equ & (kcg_c1->endOfMissionIsExecuted ==
      kcg_c2->endOfMissionIsExecuted);
  kcg_equ = kcg_equ & (kcg_c1->startOfMissionProcedureIsGoingOn ==
      kcg_c2->startOfMissionProcedureIsGoingOn);
  kcg_equ = kcg_equ & (kcg_c1->isPartOfAnOngoingStartOfMissionProcedure ==
      kcg_c2->isPartOfAnOngoingStartOfMissionProcedure);
  kcg_equ = kcg_equ &
    (kcg_c1->startOfMissionProcedureCompleted_in_level_2_or_3 ==
      kcg_c2->startOfMissionProcedureCompleted_in_level_2_or_3);
  kcg_equ = kcg_equ & (kcg_c1->trainFrontPassesA_RBC_RBC_border ==
      kcg_c2->trainFrontPassesA_RBC_RBC_border);
  kcg_equ = kcg_equ & (kcg_c1->trainFrontPassesALevelTransitionBorder ==
      kcg_c2->trainFrontPassesALevelTransitionBorder);
  kcg_equ = kcg_equ & (kcg_c1->trainFrontInsideInAnAnnouncedRadioHole ==
      kcg_c2->trainFrontInsideInAnAnnouncedRadioHole);
  kcg_equ = kcg_equ & (kcg_c1->trainFrontReachesEndOfAnnouncedRadioHole ==
      kcg_c2->trainFrontReachesEndOfAnnouncedRadioHole);
  kcg_equ = kcg_equ & (kcg_c1->trainFrontPassesStartOfAnnouncedRadioHole ==
      kcg_c2->trainFrontPassesStartOfAnnouncedRadioHole);
  kcg_equ = kcg_equ & (kcg_c1->driverHasManuallyChangedLevel_to_2_or_3 ==
      kcg_c2->driverHasManuallyChangedLevel_to_2_or_3);
  kcg_equ = kcg_equ & (kcg_c1->modeChangeHasToBeReportedToRBC ==
      kcg_c2->modeChangeHasToBeReportedToRBC);
  kcg_equ = kcg_equ & (kcg_c1->atStartOfMission == kcg_c2->atStartOfMission);
  kcg_equ = kcg_equ & (kcg_c1->atPowerDown == kcg_c2->atPowerDown);
  kcg_equ = kcg_equ & (kcg_c1->atPowerUp == kcg_c2->atPowerUp);
  return kcg_equ;
}
#endif /* kcg_use_obuEventsAndPhases_T_RCM_Session_Types_Pkg */

#ifdef kcg_use_BG_Header_T_BG_Types_Pkg
kcg_bool kcg_comp_BG_Header_T_BG_Types_Pkg(
  BG_Header_T_BG_Types_Pkg *kcg_c1,
  BG_Header_T_BG_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->trainRunningDirectionToBG ==
      kcg_c2->trainRunningDirectionToBG);
  kcg_equ = kcg_equ & (kcg_c1->trainOrientationToBG ==
      kcg_c2->trainOrientationToBG);
  kcg_equ = kcg_equ & (kcg_c1->noCoordinateSystemHasBeenAssigned ==
      kcg_c2->noCoordinateSystemHasBeenAssigned);
  kcg_equ = kcg_equ & (kcg_c1->q_nvlocacc == kcg_c2->q_nvlocacc);
  kcg_equ = kcg_equ & kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &kcg_c1->BG_centerDetectionInaccuraccuracies,
      &kcg_c2->BG_centerDetectionInaccuraccuracies);
  kcg_equ = kcg_equ & kcg_comp_odometry_T_Obu_BasicTypes_Pkg(
      &kcg_c1->bgPosition,
      &kcg_c2->bgPosition);
  kcg_equ = kcg_equ & (kcg_c1->q_link == kcg_c2->q_link);
  kcg_equ = kcg_equ & (kcg_c1->nid_bg == kcg_c2->nid_bg);
  kcg_equ = kcg_equ & (kcg_c1->nid_c == kcg_c2->nid_c);
  kcg_equ = kcg_equ & (kcg_c1->m_mcount == kcg_c2->m_mcount);
  kcg_equ = kcg_equ & (kcg_c1->n_total == kcg_c2->n_total);
  kcg_equ = kcg_equ & (kcg_c1->q_media == kcg_c2->q_media);
  kcg_equ = kcg_equ & (kcg_c1->m_version == kcg_c2->m_version);
  kcg_equ = kcg_equ & (kcg_c1->q_updown == kcg_c2->q_updown);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_BG_Header_T_BG_Types_Pkg */

#ifdef kcg_use_P000_TM_TrainToTrack
kcg_bool kcg_comp_P000_TM_TrainToTrack(
  P000_TM_TrainToTrack *kcg_c1,
  P000_TM_TrainToTrack *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_ntc == kcg_c2->nid_ntc);
  kcg_equ = kcg_equ & (kcg_c1->m_level == kcg_c2->m_level);
  kcg_equ = kcg_equ & (kcg_c1->m_mode == kcg_c2->m_mode);
  kcg_equ = kcg_equ & (kcg_c1->q_dirtrain == kcg_c2->q_dirtrain);
  kcg_equ = kcg_equ & (kcg_c1->v_train == kcg_c2->v_train);
  kcg_equ = kcg_equ & (kcg_c1->l_trainint == kcg_c2->l_trainint);
  kcg_equ = kcg_equ & (kcg_c1->q_length == kcg_c2->q_length);
  kcg_equ = kcg_equ & (kcg_c1->l_doubtunder == kcg_c2->l_doubtunder);
  kcg_equ = kcg_equ & (kcg_c1->l_doubtover == kcg_c2->l_doubtover);
  kcg_equ = kcg_equ & (kcg_c1->q_dlrbg == kcg_c2->q_dlrbg);
  kcg_equ = kcg_equ & (kcg_c1->q_dirlrbg == kcg_c2->q_dirlrbg);
  kcg_equ = kcg_equ & (kcg_c1->d_lrbg == kcg_c2->d_lrbg);
  kcg_equ = kcg_equ & (kcg_c1->nid_lrbg == kcg_c2->nid_lrbg);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->l_packet == kcg_c2->l_packet);
  kcg_equ = kcg_equ & (kcg_c1->nid_packet == kcg_c2->nid_packet);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P000_TM_TrainToTrack */

#ifdef kcg_use_P001_TM_TrainToTrack
kcg_bool kcg_comp_P001_TM_TrainToTrack(
  P001_TM_TrainToTrack *kcg_c1,
  P001_TM_TrainToTrack *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_ntc == kcg_c2->nid_ntc);
  kcg_equ = kcg_equ & (kcg_c1->m_level == kcg_c2->m_level);
  kcg_equ = kcg_equ & (kcg_c1->m_mode == kcg_c2->m_mode);
  kcg_equ = kcg_equ & (kcg_c1->q_dirtrain == kcg_c2->q_dirtrain);
  kcg_equ = kcg_equ & (kcg_c1->v_train == kcg_c2->v_train);
  kcg_equ = kcg_equ & (kcg_c1->l_trainint == kcg_c2->l_trainint);
  kcg_equ = kcg_equ & (kcg_c1->q_length == kcg_c2->q_length);
  kcg_equ = kcg_equ & (kcg_c1->l_doubtunder == kcg_c2->l_doubtunder);
  kcg_equ = kcg_equ & (kcg_c1->l_doubtover == kcg_c2->l_doubtover);
  kcg_equ = kcg_equ & (kcg_c1->q_dlrbg == kcg_c2->q_dlrbg);
  kcg_equ = kcg_equ & (kcg_c1->q_dirlrbg == kcg_c2->q_dirlrbg);
  kcg_equ = kcg_equ & (kcg_c1->d_lrbg == kcg_c2->d_lrbg);
  kcg_equ = kcg_equ & (kcg_c1->nid_prvlrbg == kcg_c2->nid_prvlrbg);
  kcg_equ = kcg_equ & (kcg_c1->nid_lrbg == kcg_c2->nid_lrbg);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->l_packet == kcg_c2->l_packet);
  kcg_equ = kcg_equ & (kcg_c1->nid_packet == kcg_c2->nid_packet);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P001_TM_TrainToTrack */

#ifdef kcg_use_P011_TM_TrainToTrack
kcg_bool kcg_comp_P011_TM_TrainToTrack(
  P011_TM_TrainToTrack *kcg_c1,
  P011_TM_TrainToTrack *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_P011_ntc_list_TM_TrainToTrack(
      &kcg_c1->nid_ntc_list,
      &kcg_c2->nid_ntc_list);
  kcg_equ = kcg_equ & (kcg_c1->n_iter_nid_ntc == kcg_c2->n_iter_nid_ntc);
  kcg_equ = kcg_equ & kcg_comp_P011_voltage_list_TM_TrainToTrack(
      &kcg_c1->voltage_list,
      &kcg_c2->voltage_list);
  kcg_equ = kcg_equ & (kcg_c1->n_iter_voltage == kcg_c2->n_iter_voltage);
  kcg_equ = kcg_equ & (kcg_c1->n_axle == kcg_c2->n_axle);
  kcg_equ = kcg_equ & (kcg_c1->m_airtight == kcg_c2->m_airtight);
  kcg_equ = kcg_equ & (kcg_c1->m_axleloadcat == kcg_c2->m_axleloadcat);
  kcg_equ = kcg_equ & (kcg_c1->m_loadinggauge == kcg_c2->m_loadinggauge);
  kcg_equ = kcg_equ & (kcg_c1->v_maxtrain == kcg_c2->v_maxtrain);
  kcg_equ = kcg_equ & (kcg_c1->l_train == kcg_c2->l_train);
  kcg_equ = kcg_equ & (kcg_c1->nc_train == kcg_c2->nc_train);
  kcg_equ = kcg_equ & (kcg_c1->nc_cdtrain == kcg_c2->nc_cdtrain);
  kcg_equ = kcg_equ & (kcg_c1->l_packet == kcg_c2->l_packet);
  kcg_equ = kcg_equ & (kcg_c1->nid_packet == kcg_c2->nid_packet);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P011_TM_TrainToTrack */

#ifdef kcg_use_Position_Report_TrainToTrack
kcg_bool kcg_comp_Position_Report_TrainToTrack(
  Position_Report_TrainToTrack *kcg_c1,
  Position_Report_TrainToTrack *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->NID_NTC == kcg_c2->NID_NTC);
  kcg_equ = kcg_equ & (kcg_c1->level == kcg_c2->level);
  kcg_equ = kcg_equ & (kcg_c1->mode == kcg_c2->mode);
  kcg_equ = kcg_equ & (kcg_c1->dirtrain == kcg_c2->dirtrain);
  kcg_equ = kcg_equ & (kcg_c1->V_TRAIN == kcg_c2->V_TRAIN);
  kcg_equ = kcg_equ & (kcg_c1->L_TRAININT == kcg_c2->L_TRAININT);
  kcg_equ = kcg_equ & (kcg_c1->length == kcg_c2->length);
  kcg_equ = kcg_equ & (kcg_c1->L_DOUBTUNDER == kcg_c2->L_DOUBTUNDER);
  kcg_equ = kcg_equ & (kcg_c1->L_DOUBTOVER == kcg_c2->L_DOUBTOVER);
  kcg_equ = kcg_equ & (kcg_c1->dlrbg == kcg_c2->dlrbg);
  kcg_equ = kcg_equ & (kcg_c1->dirlrbg == kcg_c2->dirlrbg);
  kcg_equ = kcg_equ & (kcg_c1->D_LRBG == kcg_c2->D_LRBG);
  kcg_equ = kcg_equ & (kcg_c1->NID_LRBG == kcg_c2->NID_LRBG);
  kcg_equ = kcg_equ & (kcg_c1->qscale == kcg_c2->qscale);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_Position_Report_TrainToTrack */

#ifdef kcg_use_Position_Report_based_on_two_balise_groups_TrainToTrack
kcg_bool kcg_comp_Position_Report_based_on_two_balise_groups_TrainToTrack(
  Position_Report_based_on_two_balise_groups_TrainToTrack *kcg_c1,
  Position_Report_based_on_two_balise_groups_TrainToTrack *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->NID_NTC == kcg_c2->NID_NTC);
  kcg_equ = kcg_equ & (kcg_c1->level == kcg_c2->level);
  kcg_equ = kcg_equ & (kcg_c1->mode == kcg_c2->mode);
  kcg_equ = kcg_equ & (kcg_c1->dirtrain == kcg_c2->dirtrain);
  kcg_equ = kcg_equ & (kcg_c1->V_TRAIN == kcg_c2->V_TRAIN);
  kcg_equ = kcg_equ & (kcg_c1->L_TRAININT == kcg_c2->L_TRAININT);
  kcg_equ = kcg_equ & (kcg_c1->length == kcg_c2->length);
  kcg_equ = kcg_equ & (kcg_c1->L_DOUBTUNDER == kcg_c2->L_DOUBTUNDER);
  kcg_equ = kcg_equ & (kcg_c1->L_DOUBTOVER == kcg_c2->L_DOUBTOVER);
  kcg_equ = kcg_equ & (kcg_c1->dlrbg == kcg_c2->dlrbg);
  kcg_equ = kcg_equ & (kcg_c1->dirlrbg == kcg_c2->dirlrbg);
  kcg_equ = kcg_equ & (kcg_c1->D_LRBG == kcg_c2->D_LRBG);
  kcg_equ = kcg_equ & (kcg_c1->NID_PRVLRBG == kcg_c2->NID_PRVLRBG);
  kcg_equ = kcg_equ & (kcg_c1->NID_LRBG == kcg_c2->NID_LRBG);
  kcg_equ = kcg_equ & (kcg_c1->qscale == kcg_c2->qscale);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_Position_Report_based_on_two_balise_groups_TrainToTrack */

#ifdef kcg_use_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg
kcg_bool kcg_comp_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(
  PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg *kcg_c1,
  PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_aNID_NTC_T_Packet_TrainTypes_Pkg(
      &kcg_c1->nid_ntc,
      &kcg_c2->nid_ntc);
  kcg_equ = kcg_equ & (kcg_c1->nIter_ntc == kcg_c2->nIter_ntc);
  kcg_equ = kcg_equ & kcg_comp_aTractionIdentity_T_Packet_TrainTypes_Pkg(
      &kcg_c1->tractionIdentity,
      &kcg_c2->tractionIdentity);
  kcg_equ = kcg_equ & (kcg_c1->nIter_tractionIdentity ==
      kcg_c2->nIter_tractionIdentity);
  kcg_equ = kcg_equ & (kcg_c1->n_axle == kcg_c2->n_axle);
  kcg_equ = kcg_equ & (kcg_c1->m_airtight == kcg_c2->m_airtight);
  kcg_equ = kcg_equ & (kcg_c1->m_axleloadcat == kcg_c2->m_axleloadcat);
  kcg_equ = kcg_equ & (kcg_c1->m_loadinggoage == kcg_c2->m_loadinggoage);
  kcg_equ = kcg_equ & (kcg_c1->v_maxtrain == kcg_c2->v_maxtrain);
  kcg_equ = kcg_equ & (kcg_c1->l_train == kcg_c2->l_train);
  kcg_equ = kcg_equ & (kcg_c1->nc_train == kcg_c2->nc_train);
  kcg_equ = kcg_equ & (kcg_c1->nc_cdtrain == kcg_c2->nc_cdtrain);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_TrainData_T
kcg_bool kcg_comp_TrainData_T(TrainData_T *kcg_c1, TrainData_T *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_operational == kcg_c2->nid_operational);
  kcg_equ = kcg_equ & kcg_comp_aNID_NTC_T_Packet_TrainTypes_Pkg(
      &kcg_c1->m_NationalSystemIdentities,
      &kcg_c2->m_NationalSystemIdentities);
  kcg_equ = kcg_equ & kcg_comp_aTractionIdentity_T_Packet_TrainTypes_Pkg(
      &kcg_c1->m_TractionIdentities,
      &kcg_c2->m_TractionIdentities);
  kcg_equ = kcg_equ & (kcg_c1->n_axle == kcg_c2->n_axle);
  kcg_equ = kcg_equ & (kcg_c1->m_airtight == kcg_c2->m_airtight);
  kcg_equ = kcg_equ & (kcg_c1->m_axleloadcat == kcg_c2->m_axleloadcat);
  kcg_equ = kcg_equ & (kcg_c1->m_loadinggauge == kcg_c2->m_loadinggauge);
  kcg_equ = kcg_equ & (kcg_c1->v_maxtrain == kcg_c2->v_maxtrain);
  kcg_equ = kcg_equ & (kcg_c1->l_train == kcg_c2->l_train);
  kcg_equ = kcg_equ & (kcg_c1->nc_train == kcg_c2->nc_train);
  kcg_equ = kcg_equ & (kcg_c1->nc_cdtrain == kcg_c2->nc_cdtrain);
  kcg_equ = kcg_equ & (kcg_c1->t_train_ref == kcg_c2->t_train_ref);
  kcg_equ = kcg_equ & kcg_comp_aNID_RADIO_T_Packet_TrainTypes_Pkg(
      &kcg_c1->m_OnboardPhoneNumbers,
      &kcg_c2->m_OnboardPhoneNumbers);
  kcg_equ = kcg_equ & (kcg_c1->m_NumberOfOnboardPhoneNumbers ==
      kcg_c2->m_NumberOfOnboardPhoneNumbers);
  kcg_equ = kcg_equ & (kcg_c1->nid_engine == kcg_c2->nid_engine);
  return kcg_equ;
}
#endif /* kcg_use_TrainData_T */

#ifdef kcg_use_PosData_T
kcg_bool kcg_comp_PosData_T(PosData_T *kcg_c1, PosData_T *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_prvlrbg == kcg_c2->nid_prvlrbg);
  kcg_equ = kcg_equ & (kcg_c1->nid_ntc == kcg_c2->nid_ntc);
  kcg_equ = kcg_equ & (kcg_c1->m_level == kcg_c2->m_level);
  kcg_equ = kcg_equ & (kcg_c1->m_mode == kcg_c2->m_mode);
  kcg_equ = kcg_equ & (kcg_c1->q_dirtrain == kcg_c2->q_dirtrain);
  kcg_equ = kcg_equ & (kcg_c1->v_train == kcg_c2->v_train);
  kcg_equ = kcg_equ & (kcg_c1->l_trainint == kcg_c2->l_trainint);
  kcg_equ = kcg_equ & (kcg_c1->q_length == kcg_c2->q_length);
  kcg_equ = kcg_equ & (kcg_c1->l_doubtunder == kcg_c2->l_doubtunder);
  kcg_equ = kcg_equ & (kcg_c1->l_doubtover == kcg_c2->l_doubtover);
  kcg_equ = kcg_equ & (kcg_c1->q_dlrbg == kcg_c2->q_dlrbg);
  kcg_equ = kcg_equ & (kcg_c1->q_dirlrbg == kcg_c2->q_dirlrbg);
  kcg_equ = kcg_equ & (kcg_c1->d_lrbg == kcg_c2->d_lrbg);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->nid_lrbg == kcg_c2->nid_lrbg);
  return kcg_equ;
}
#endif /* kcg_use_PosData_T */

#ifdef kcg_use_TelegramHeader_T_BG_Types_Pkg
kcg_bool kcg_comp_TelegramHeader_T_BG_Types_Pkg(
  TelegramHeader_T_BG_Types_Pkg *kcg_c1,
  TelegramHeader_T_BG_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->q_link == kcg_c2->q_link);
  kcg_equ = kcg_equ & (kcg_c1->nid_bg == kcg_c2->nid_bg);
  kcg_equ = kcg_equ & (kcg_c1->nid_c == kcg_c2->nid_c);
  kcg_equ = kcg_equ & (kcg_c1->m_mcount == kcg_c2->m_mcount);
  kcg_equ = kcg_equ & (kcg_c1->m_dup == kcg_c2->m_dup);
  kcg_equ = kcg_equ & (kcg_c1->n_total == kcg_c2->n_total);
  kcg_equ = kcg_equ & (kcg_c1->n_pig == kcg_c2->n_pig);
  kcg_equ = kcg_equ & (kcg_c1->q_media == kcg_c2->q_media);
  kcg_equ = kcg_equ & (kcg_c1->m_version == kcg_c2->m_version);
  kcg_equ = kcg_equ & (kcg_c1->q_updown == kcg_c2->q_updown);
  return kcg_equ;
}
#endif /* kcg_use_TelegramHeader_T_BG_Types_Pkg */

#ifdef kcg_use_Radio_TrackTrain_Header_T_TM
kcg_bool kcg_comp_Radio_TrackTrain_Header_T_TM(
  Radio_TrackTrain_Header_T_TM *kcg_c1,
  Radio_TrackTrain_Header_T_TM *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_version == kcg_c2->m_version);
  kcg_equ = kcg_equ & (kcg_c1->d_emergencystop == kcg_c2->d_emergencystop);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->d_ref == kcg_c2->d_ref);
  kcg_equ = kcg_equ & (kcg_c1->t_sh_rqst == kcg_c2->t_sh_rqst);
  kcg_equ = kcg_equ & (kcg_c1->d_sr == kcg_c2->d_sr);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->nid_em == kcg_c2->nid_em);
  kcg_equ = kcg_equ & (kcg_c1->t_train_reference == kcg_c2->t_train_reference);
  kcg_equ = kcg_equ & (kcg_c1->nid_lrbg == kcg_c2->nid_lrbg);
  kcg_equ = kcg_equ & (kcg_c1->m_ack == kcg_c2->m_ack);
  kcg_equ = kcg_equ & (kcg_c1->t_train == kcg_c2->t_train);
  kcg_equ = kcg_equ & (kcg_c1->nid_message == kcg_c2->nid_message);
  kcg_equ = kcg_equ & (kcg_c1->receivedSystemTime ==
      kcg_c2->receivedSystemTime);
  kcg_equ = kcg_equ & (kcg_c1->radioDevice == kcg_c2->radioDevice);
  return kcg_equ;
}
#endif /* kcg_use_Radio_TrackTrain_Header_T_TM */

#ifdef kcg_use_M_015_int_T_TM_radio_messages
kcg_bool kcg_comp_M_015_int_T_TM_radio_messages(
  M_015_int_T_TM_radio_messages *kcg_c1,
  M_015_int_T_TM_radio_messages *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->d_emergencystop == kcg_c2->d_emergencystop);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->d_ref == kcg_c2->d_ref);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->nid_em == kcg_c2->nid_em);
  kcg_equ = kcg_equ & (kcg_c1->nid_lrbg == kcg_c2->nid_lrbg);
  kcg_equ = kcg_equ & (kcg_c1->m_ack == kcg_c2->m_ack);
  kcg_equ = kcg_equ & (kcg_c1->t_train == kcg_c2->t_train);
  kcg_equ = kcg_equ & (kcg_c1->l_message == kcg_c2->l_message);
  kcg_equ = kcg_equ & (kcg_c1->nid_message == kcg_c2->nid_message);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_M_015_int_T_TM_radio_messages */

#ifdef kcg_use_M_015_T_TM_radio_messages
kcg_bool kcg_comp_M_015_T_TM_radio_messages(
  M_015_T_TM_radio_messages *kcg_c1,
  M_015_T_TM_radio_messages *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->d_emergencystop == kcg_c2->d_emergencystop);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->d_ref == kcg_c2->d_ref);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->nid_em == kcg_c2->nid_em);
  kcg_equ = kcg_equ & (kcg_c1->nid_lrbg == kcg_c2->nid_lrbg);
  kcg_equ = kcg_equ & (kcg_c1->m_ack == kcg_c2->m_ack);
  kcg_equ = kcg_equ & (kcg_c1->t_train == kcg_c2->t_train);
  kcg_equ = kcg_equ & (kcg_c1->l_message == kcg_c2->l_message);
  kcg_equ = kcg_equ & (kcg_c1->nid_message == kcg_c2->nid_message);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_M_015_T_TM_radio_messages */

#ifdef kcg_use_M_034_T_TM_radio_messages
kcg_bool kcg_comp_M_034_T_TM_radio_messages(
  M_034_T_TM_radio_messages *kcg_c1,
  M_034_T_TM_radio_messages *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->l_tafdisplay == kcg_c2->l_tafdisplay);
  kcg_equ = kcg_equ & (kcg_c1->d_tafdisplay == kcg_c2->d_tafdisplay);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->d_ref == kcg_c2->d_ref);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->nid_lrbg == kcg_c2->nid_lrbg);
  kcg_equ = kcg_equ & (kcg_c1->m_ack == kcg_c2->m_ack);
  kcg_equ = kcg_equ & (kcg_c1->t_train == kcg_c2->t_train);
  kcg_equ = kcg_equ & (kcg_c1->l_message == kcg_c2->l_message);
  kcg_equ = kcg_equ & (kcg_c1->nid_message == kcg_c2->nid_message);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_M_034_T_TM_radio_messages */

#ifdef kcg_use_struct_171773
kcg_bool kcg_comp_struct_171773(struct_171773 *kcg_c1, struct_171773 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_version == kcg_c2->m_version);
  kcg_equ = kcg_equ & (kcg_c1->d_emergencystop == kcg_c2->d_emergencystop);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->d_ref == kcg_c2->d_ref);
  kcg_equ = kcg_equ & (kcg_c1->t_sh_rqst == kcg_c2->t_sh_rqst);
  kcg_equ = kcg_equ & (kcg_c1->d_sr == kcg_c2->d_sr);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->nid_em == kcg_c2->nid_em);
  kcg_equ = kcg_equ & (kcg_c1->t_train_reference == kcg_c2->t_train_reference);
  kcg_equ = kcg_equ & (kcg_c1->nid_lrbg == kcg_c2->nid_lrbg);
  kcg_equ = kcg_equ & (kcg_c1->m_ack == kcg_c2->m_ack);
  kcg_equ = kcg_equ & (kcg_c1->t_train == kcg_c2->t_train);
  kcg_equ = kcg_equ & (kcg_c1->nid_message == kcg_c2->nid_message);
  kcg_equ = kcg_equ & (kcg_c1->receivedSystemTime ==
      kcg_c2->receivedSystemTime);
  kcg_equ = kcg_equ & (kcg_c1->radioDevice == kcg_c2->radioDevice);
  return kcg_equ;
}
#endif /* kcg_use_struct_171773 */

#ifdef kcg_use_P058_trackside_int_T_TM
kcg_bool kcg_comp_P058_trackside_int_T_TM(
  P058_trackside_int_T_TM *kcg_c1,
  P058_trackside_int_T_TM *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_P058_trackide_sectionlist_T_TM(
      &kcg_c1->SECTIONS,
      &kcg_c2->SECTIONS);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER == kcg_c2->N_ITER);
  kcg_equ = kcg_equ & (kcg_c1->M_LOC == kcg_c2->M_LOC);
  kcg_equ = kcg_equ & (kcg_c1->D_CYCLOC == kcg_c2->D_CYCLOC);
  kcg_equ = kcg_equ & (kcg_c1->T_CYCLOC == kcg_c2->T_CYCLOC);
  kcg_equ = kcg_equ & (kcg_c1->Q_SCALE == kcg_c2->Q_SCALE);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P058_trackside_int_T_TM */

#ifdef kcg_use_M_TrackTrain_Radio_T_TM_radio_messages
kcg_bool kcg_comp_M_TrackTrain_Radio_T_TM_radio_messages(
  M_TrackTrain_Radio_T_TM_radio_messages *kcg_c1,
  M_TrackTrain_Radio_T_TM_radio_messages *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->field8 == kcg_c2->field8);
  kcg_equ = kcg_equ & (kcg_c1->field7 == kcg_c2->field7);
  kcg_equ = kcg_equ & (kcg_c1->field6 == kcg_c2->field6);
  kcg_equ = kcg_equ & (kcg_c1->field5 == kcg_c2->field5);
  kcg_equ = kcg_equ & (kcg_c1->field4 == kcg_c2->field4);
  kcg_equ = kcg_equ & (kcg_c1->field3 == kcg_c2->field3);
  kcg_equ = kcg_equ & (kcg_c1->field2 == kcg_c2->field2);
  kcg_equ = kcg_equ & (kcg_c1->field1 == kcg_c2->field1);
  kcg_equ = kcg_equ & (kcg_c1->t_train == kcg_c2->t_train);
  kcg_equ = kcg_equ & (kcg_c1->l_message == kcg_c2->l_message);
  kcg_equ = kcg_equ & (kcg_c1->nid_message == kcg_c2->nid_message);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_M_TrackTrain_Radio_T_TM_radio_messages */

#ifdef kcg_use_P065_trackside_int_T_TM
kcg_bool kcg_comp_P065_trackside_int_T_TM(
  P065_trackside_int_T_TM *kcg_c1,
  P065_trackside_int_T_TM *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->V_TSR == kcg_c2->V_TSR);
  kcg_equ = kcg_equ & (kcg_c1->Q_FRONT == kcg_c2->Q_FRONT);
  kcg_equ = kcg_equ & (kcg_c1->L_TSR == kcg_c2->L_TSR);
  kcg_equ = kcg_equ & (kcg_c1->D_TSR == kcg_c2->D_TSR);
  kcg_equ = kcg_equ & (kcg_c1->NID_TSR == kcg_c2->NID_TSR);
  kcg_equ = kcg_equ & (kcg_c1->Q_SCALE == kcg_c2->Q_SCALE);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P065_trackside_int_T_TM */

#ifdef kcg_use_P021_trackside_int_T_TM
kcg_bool kcg_comp_P021_trackside_int_T_TM(
  P021_trackside_int_T_TM *kcg_c1,
  P021_trackside_int_T_TM *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_P021_trackide_sectionlist_T_TM(
      &kcg_c1->SECTIONS,
      &kcg_c2->SECTIONS);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER == kcg_c2->N_ITER);
  kcg_equ = kcg_equ & (kcg_c1->G_A == kcg_c2->G_A);
  kcg_equ = kcg_equ & (kcg_c1->Q_GDIR == kcg_c2->Q_GDIR);
  kcg_equ = kcg_equ & (kcg_c1->D_GRADIENT == kcg_c2->D_GRADIENT);
  kcg_equ = kcg_equ & (kcg_c1->Q_SCALE == kcg_c2->Q_SCALE);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P021_trackside_int_T_TM */

#ifdef kcg_use_P027V1_trackside_int_T_TM_baseline2
kcg_bool kcg_comp_P027V1_trackside_int_T_TM_baseline2(
  P027V1_trackside_int_T_TM_baseline2 *kcg_c1,
  P027V1_trackside_int_T_TM_baseline2 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_P027V1_trackside_sectionlist_T_TM_baseline2(
      &kcg_c1->SECTIONS_SSP,
      &kcg_c2->SECTIONS_SSP);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER_k == kcg_c2->N_ITER_k);
  kcg_equ = kcg_equ & kcg_comp_P027V1_trackside_qdifflist_T_TM_baseline2(
      &kcg_c1->SECTIONS_q_diff,
      &kcg_c2->SECTIONS_q_diff);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER_n == kcg_c2->N_ITER_n);
  kcg_equ = kcg_equ & (kcg_c1->Q_FRONT == kcg_c2->Q_FRONT);
  kcg_equ = kcg_equ & (kcg_c1->V_STATIC == kcg_c2->V_STATIC);
  kcg_equ = kcg_equ & (kcg_c1->D_STATIC == kcg_c2->D_STATIC);
  kcg_equ = kcg_equ & (kcg_c1->Q_SCALE == kcg_c2->Q_SCALE);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P027V1_trackside_int_T_TM_baseline2 */

#ifdef kcg_use_P005_trackside_int_T_TM
kcg_bool kcg_comp_P005_trackside_int_T_TM(
  P005_trackside_int_T_TM *kcg_c1,
  P005_trackside_int_T_TM *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_P005_trackide_sectionlist_T_TM(
      &kcg_c1->SECTIONS,
      &kcg_c2->SECTIONS);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER == kcg_c2->N_ITER);
  kcg_equ = kcg_equ & (kcg_c1->Q_LOCACC == kcg_c2->Q_LOCACC);
  kcg_equ = kcg_equ & (kcg_c1->Q_LINKREACTION == kcg_c2->Q_LINKREACTION);
  kcg_equ = kcg_equ & (kcg_c1->Q_LINKORIENTATION == kcg_c2->Q_LINKORIENTATION);
  kcg_equ = kcg_equ & (kcg_c1->NID_BG == kcg_c2->NID_BG);
  kcg_equ = kcg_equ & (kcg_c1->NID_C == kcg_c2->NID_C);
  kcg_equ = kcg_equ & (kcg_c1->Q_NEWCOUNTRY == kcg_c2->Q_NEWCOUNTRY);
  kcg_equ = kcg_equ & (kcg_c1->D_LINK == kcg_c2->D_LINK);
  kcg_equ = kcg_equ & (kcg_c1->Q_SCALE == kcg_c2->Q_SCALE);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P005_trackside_int_T_TM */

#ifdef kcg_use_P015_trackside_int_T_TM
kcg_bool kcg_comp_P015_trackside_int_T_TM(
  P015_trackside_int_T_TM *kcg_c1,
  P015_trackside_int_T_TM *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->V_RELEASEOL == kcg_c2->V_RELEASEOL);
  kcg_equ = kcg_equ & (kcg_c1->D_OL == kcg_c2->D_OL);
  kcg_equ = kcg_equ & (kcg_c1->T_OL == kcg_c2->T_OL);
  kcg_equ = kcg_equ & (kcg_c1->D_STARTOL == kcg_c2->D_STARTOL);
  kcg_equ = kcg_equ & (kcg_c1->Q_OVERLAP == kcg_c2->Q_OVERLAP);
  kcg_equ = kcg_equ & (kcg_c1->V_RELEASEDP == kcg_c2->V_RELEASEDP);
  kcg_equ = kcg_equ & (kcg_c1->D_DP == kcg_c2->D_DP);
  kcg_equ = kcg_equ & (kcg_c1->Q_DANGERPOINT == kcg_c2->Q_DANGERPOINT);
  kcg_equ = kcg_equ & (kcg_c1->D_ENDTIMERSTARTLOC ==
      kcg_c2->D_ENDTIMERSTARTLOC);
  kcg_equ = kcg_equ & (kcg_c1->T_ENDTIMER == kcg_c2->T_ENDTIMER);
  kcg_equ = kcg_equ & (kcg_c1->Q_ENDTIMER == kcg_c2->Q_ENDTIMER);
  kcg_equ = kcg_equ & (kcg_c1->D_SECTIONTIMERSTOPLOC ==
      kcg_c2->D_SECTIONTIMERSTOPLOC);
  kcg_equ = kcg_equ & (kcg_c1->T_SECTIONTIMER == kcg_c2->T_SECTIONTIMER);
  kcg_equ = kcg_equ & (kcg_c1->Q_SECTIONTIMER == kcg_c2->Q_SECTIONTIMER);
  kcg_equ = kcg_equ & (kcg_c1->L_ENDSECTION == kcg_c2->L_ENDSECTION);
  kcg_equ = kcg_equ & kcg_comp_P015_trackide_sectionlist_T_TM(
      &kcg_c1->SECTIONS,
      &kcg_c2->SECTIONS);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER == kcg_c2->N_ITER);
  kcg_equ = kcg_equ & (kcg_c1->T_LOA == kcg_c2->T_LOA);
  kcg_equ = kcg_equ & (kcg_c1->V_LOA == kcg_c2->V_LOA);
  kcg_equ = kcg_equ & (kcg_c1->Q_SCALE == kcg_c2->Q_SCALE);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P015_trackside_int_T_TM */

#ifdef kcg_use_P003V1_trackside_int_T_TM_baseline2
kcg_bool kcg_comp_P003V1_trackside_int_T_TM_baseline2(
  P003V1_trackside_int_T_TM_baseline2 *kcg_c1,
  P003V1_trackside_int_T_TM_baseline2 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Q_NVDRIVER_ADHES == kcg_c2->Q_NVDRIVER_ADHES);
  kcg_equ = kcg_equ & (kcg_c1->D_NVSTFF == kcg_c2->D_NVSTFF);
  kcg_equ = kcg_equ & (kcg_c1->M_NVDERUN == kcg_c2->M_NVDERUN);
  kcg_equ = kcg_equ & (kcg_c1->T_NVCONTACT == kcg_c2->T_NVCONTACT);
  kcg_equ = kcg_equ & (kcg_c1->M_NVCONTACT == kcg_c2->M_NVCONTACT);
  kcg_equ = kcg_equ & (kcg_c1->D_NVPOTRP == kcg_c2->D_NVPOTRP);
  kcg_equ = kcg_equ & (kcg_c1->T_NVOVTRP == kcg_c2->T_NVOVTRP);
  kcg_equ = kcg_equ & (kcg_c1->D_NVOVTRP == kcg_c2->D_NVOVTRP);
  kcg_equ = kcg_equ & (kcg_c1->V_NVSUPOVTRP == kcg_c2->V_NVSUPOVTRP);
  kcg_equ = kcg_equ & (kcg_c1->V_NVALLOWOVTRP == kcg_c2->V_NVALLOWOVTRP);
  kcg_equ = kcg_equ & (kcg_c1->Q_NVEMRRLS == kcg_c2->Q_NVEMRRLS);
  kcg_equ = kcg_equ & (kcg_c1->Q_NVSRBKTRG == kcg_c2->Q_NVSRBKTRG);
  kcg_equ = kcg_equ & (kcg_c1->D_NVROLL == kcg_c2->D_NVROLL);
  kcg_equ = kcg_equ & (kcg_c1->V_NVREL == kcg_c2->V_NVREL);
  kcg_equ = kcg_equ & (kcg_c1->V_NVUNFIT == kcg_c2->V_NVUNFIT);
  kcg_equ = kcg_equ & (kcg_c1->V_NVONSIGHT == kcg_c2->V_NVONSIGHT);
  kcg_equ = kcg_equ & (kcg_c1->V_NVSTFF == kcg_c2->V_NVSTFF);
  kcg_equ = kcg_equ & (kcg_c1->V_NVSHUNT == kcg_c2->V_NVSHUNT);
  kcg_equ = kcg_equ & kcg_comp_P003V1_trackide_sectionlist_T_TM_baseline2(
      &kcg_c1->SECTIONS,
      &kcg_c2->SECTIONS);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER == kcg_c2->N_ITER);
  kcg_equ = kcg_equ & (kcg_c1->D_VALIDNV == kcg_c2->D_VALIDNV);
  kcg_equ = kcg_equ & (kcg_c1->Q_SCALE == kcg_c2->Q_SCALE);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P003V1_trackside_int_T_TM_baseline2 */

#ifdef kcg_use_P041_trackside_int_T_TM
kcg_bool kcg_comp_P041_trackside_int_T_TM(
  P041_trackside_int_T_TM *kcg_c1,
  P041_trackside_int_T_TM *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_P041_trackide_sectionlist_T_TM(
      &kcg_c1->SECTIONS,
      &kcg_c2->SECTIONS);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER == kcg_c2->N_ITER);
  kcg_equ = kcg_equ & (kcg_c1->L_ACKLEVELTR == kcg_c2->L_ACKLEVELTR);
  kcg_equ = kcg_equ & (kcg_c1->NID_NTC == kcg_c2->NID_NTC);
  kcg_equ = kcg_equ & (kcg_c1->M_LEVELTR == kcg_c2->M_LEVELTR);
  kcg_equ = kcg_equ & (kcg_c1->D_LEVELTR == kcg_c2->D_LEVELTR);
  kcg_equ = kcg_equ & (kcg_c1->Q_SCALE == kcg_c2->Q_SCALE);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P041_trackside_int_T_TM */

#ifdef kcg_use_BaliseTelegramHeader_int_T_TM
kcg_bool kcg_comp_BaliseTelegramHeader_int_T_TM(
  BaliseTelegramHeader_int_T_TM *kcg_c1,
  BaliseTelegramHeader_int_T_TM *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->q_link == kcg_c2->q_link);
  kcg_equ = kcg_equ & (kcg_c1->nid_bg == kcg_c2->nid_bg);
  kcg_equ = kcg_equ & (kcg_c1->nid_c == kcg_c2->nid_c);
  kcg_equ = kcg_equ & (kcg_c1->m_mcount == kcg_c2->m_mcount);
  kcg_equ = kcg_equ & (kcg_c1->m_dup == kcg_c2->m_dup);
  kcg_equ = kcg_equ & (kcg_c1->n_total == kcg_c2->n_total);
  kcg_equ = kcg_equ & (kcg_c1->n_pig == kcg_c2->n_pig);
  kcg_equ = kcg_equ & (kcg_c1->q_media == kcg_c2->q_media);
  kcg_equ = kcg_equ & (kcg_c1->m_version == kcg_c2->m_version);
  kcg_equ = kcg_equ & (kcg_c1->q_updown == kcg_c2->q_updown);
  return kcg_equ;
}
#endif /* kcg_use_BaliseTelegramHeader_int_T_TM */

#ifdef kcg_use_trainData_T_TIU_Types_Pkg
kcg_bool kcg_comp_trainData_T_TIU_Types_Pkg(
  trainData_T_TIU_Types_Pkg *kcg_c1,
  trainData_T_TIU_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_aTractionIdentity_T_Packet_TrainTypes_Pkg(
      &kcg_c1->tractionSystem,
      &kcg_c2->tractionSystem);
  kcg_equ = kcg_equ & (kcg_c1->numberTractionSystems ==
      kcg_c2->numberTractionSystems);
  kcg_equ = kcg_equ & kcg_comp_aNID_NTC_T_Packet_TrainTypes_Pkg(
      &kcg_c1->nationSystems,
      &kcg_c2->nationSystems);
  kcg_equ = kcg_equ & (kcg_c1->numberNationalSystems ==
      kcg_c2->numberNationalSystems);
  kcg_equ = kcg_equ & (kcg_c1->axleNumber == kcg_c2->axleNumber);
  kcg_equ = kcg_equ & (kcg_c1->airtightSystem == kcg_c2->airtightSystem);
  kcg_equ = kcg_equ & (kcg_c1->axleLoadCategory == kcg_c2->axleLoadCategory);
  kcg_equ = kcg_equ & (kcg_c1->loadingGauge == kcg_c2->loadingGauge);
  kcg_equ = kcg_equ & (kcg_c1->maxTrainSpeed == kcg_c2->maxTrainSpeed);
  kcg_equ = kcg_equ & (kcg_c1->brakePerctage == kcg_c2->brakePerctage);
  kcg_equ = kcg_equ & (kcg_c1->trainLength == kcg_c2->trainLength);
  kcg_equ = kcg_equ & (kcg_c1->cantDeficientcy == kcg_c2->cantDeficientcy);
  kcg_equ = kcg_equ & (kcg_c1->trainCategory == kcg_c2->trainCategory);
  kcg_equ = kcg_equ & (kcg_c1->acknowledgedByDriver ==
      kcg_c2->acknowledgedByDriver);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_trainData_T_TIU_Types_Pkg */

#ifdef kcg_use_EVC_to_DMI_Message_T_API_DMI_Pkg
kcg_bool kcg_comp_EVC_to_DMI_Message_T_API_DMI_Pkg(
  EVC_to_DMI_Message_T_API_DMI_Pkg *kcg_c1,
  EVC_to_DMI_Message_T_API_DMI_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(
      &kcg_c1->iconRequest,
      &kcg_c2->iconRequest);
  kcg_equ = kcg_equ &
    kcg_comp_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(
      &kcg_c1->adhesionFactor,
      &kcg_c2->adhesionFactor);
  kcg_equ = kcg_equ & kcg_comp_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
      &kcg_c1->trainData,
      &kcg_c2->trainData);
  kcg_equ = kcg_equ &
    kcg_comp_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
      &kcg_c1->trainRunningNumber,
      &kcg_c2->trainRunningNumber);
  kcg_equ = kcg_equ &
    kcg_comp_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
      &kcg_c1->driverIdentifier,
      &kcg_c2->driverIdentifier);
  kcg_equ = kcg_equ &
    kcg_comp_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
      &kcg_c1->EVC_radioNetData,
      &kcg_c2->EVC_radioNetData);
  kcg_equ = kcg_equ & kcg_comp_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
      &kcg_c1->EVC_levelData,
      &kcg_c2->EVC_levelData);
  kcg_equ = kcg_equ &
    kcg_comp_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg(
      &kcg_c1->displayControl,
      &kcg_c2->displayControl);
  kcg_equ = kcg_equ & kcg_comp_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg(
      &kcg_c1->systemVersion,
      &kcg_c2->systemVersion);
  kcg_equ = kcg_equ &
    kcg_comp_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      &kcg_c1->identifierRequest,
      &kcg_c2->identifierRequest);
  kcg_equ = kcg_equ &
    kcg_comp_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg(
      &kcg_c1->trackDescription,
      &kcg_c2->trackDescription);
  kcg_equ = kcg_equ & kcg_comp_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
      &kcg_c1->textMessage,
      &kcg_c2->textMessage);
  kcg_equ = kcg_equ &
    kcg_comp_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
      &kcg_c1->evc_coded_train_data,
      &kcg_c2->evc_coded_train_data);
  kcg_equ = kcg_equ & kcg_comp_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      &kcg_c1->entry_request,
      &kcg_c2->entry_request);
  kcg_equ = kcg_equ & kcg_comp_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
      &kcg_c1->menu_request,
      &kcg_c2->menu_request);
  kcg_equ = kcg_equ & kcg_comp_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg(
      &kcg_c1->dynamic,
      &kcg_c2->dynamic);
  kcg_equ = kcg_equ & (kcg_c1->present == kcg_c2->present);
  return kcg_equ;
}
#endif /* kcg_use_EVC_to_DMI_Message_T_API_DMI_Pkg */

#ifdef kcg_use_DMI_to_EVC_Message_T_API_DMI_Pkg
kcg_bool kcg_comp_DMI_to_EVC_Message_T_API_DMI_Pkg(
  DMI_to_EVC_Message_T_API_DMI_Pkg *kcg_c1,
  DMI_to_EVC_Message_T_API_DMI_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(
      &kcg_c1->selectedLevel,
      &kcg_c2->selectedLevel);
  kcg_equ = kcg_equ & kcg_comp_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &kcg_c1->iconAck,
      &kcg_c2->iconAck);
  kcg_equ = kcg_equ &
    kcg_comp_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(
      &kcg_c1->adhesionFactor,
      &kcg_c2->adhesionFactor);
  kcg_equ = kcg_equ & kcg_comp_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
      &kcg_c1->trainData,
      &kcg_c2->trainData);
  kcg_equ = kcg_equ & kcg_comp_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &kcg_c1->trainDataAck,
      &kcg_c2->trainDataAck);
  kcg_equ = kcg_equ &
    kcg_comp_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &kcg_c1->textMessageAck,
      &kcg_c2->textMessageAck);
  kcg_equ = kcg_equ & kcg_comp_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg(
      &kcg_c1->radioNetData,
      &kcg_c2->radioNetData);
  kcg_equ = kcg_equ &
    kcg_comp_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
      &kcg_c1->trainRunningNumber,
      &kcg_c2->trainRunningNumber);
  kcg_equ = kcg_equ &
    kcg_comp_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
      &kcg_c1->driverIdentifier,
      &kcg_c2->driverIdentifier);
  kcg_equ = kcg_equ & kcg_comp_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
      &kcg_c1->driverRequest,
      &kcg_c2->driverRequest);
  kcg_equ = kcg_equ & kcg_comp_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(
      &kcg_c1->identifier,
      &kcg_c2->identifier);
  kcg_equ = kcg_equ & kcg_comp_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg(
      &kcg_c1->status,
      &kcg_c2->status);
  kcg_equ = kcg_equ & (kcg_c1->present == kcg_c2->present);
  return kcg_equ;
}
#endif /* kcg_use_DMI_to_EVC_Message_T_API_DMI_Pkg */

#ifdef kcg_use_DMI_Available_Menu_T_DMI_Types_Pkg
kcg_bool kcg_comp_DMI_Available_Menu_T_DMI_Types_Pkg(
  DMI_Available_Menu_T_DMI_Types_Pkg *kcg_c1,
  DMI_Available_Menu_T_DMI_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Menu_button_Remove_VBC ==
      kcg_c2->Menu_button_Remove_VBC);
  kcg_equ = kcg_equ & (kcg_c1->Menu_button_Set_VBC ==
      kcg_c2->Menu_button_Set_VBC);
  kcg_equ = kcg_equ & (kcg_c1->Fix_train_data_entry ==
      kcg_c2->Fix_train_data_entry);
  kcg_equ = kcg_equ & (kcg_c1->Button_switch_for_train_data ==
      kcg_c2->Button_switch_for_train_data);
  kcg_equ = kcg_equ & (kcg_c1->Menu_button_contact_last_RBC ==
      kcg_c2->Menu_button_contact_last_RBC);
  kcg_equ = kcg_equ & (kcg_c1->Menu_button_radio_network_ID ==
      kcg_c2->Menu_button_radio_network_ID);
  kcg_equ = kcg_equ & (kcg_c1->Menu_button_enter_RBC_data ==
      kcg_c2->Menu_button_enter_RBC_data);
  kcg_equ = kcg_equ & (kcg_c1->Menu_button_use_short_number ==
      kcg_c2->Menu_button_use_short_number);
  kcg_equ = kcg_equ & (kcg_c1->Show_hourglass == kcg_c2->Show_hourglass);
  kcg_equ = kcg_equ & (kcg_c1->Menu_button_isolation ==
      kcg_c2->Menu_button_isolation);
  kcg_equ = kcg_equ & (kcg_c1->Menu_button_train_integrity ==
      kcg_c2->Menu_button_train_integrity);
  kcg_equ = kcg_equ & (kcg_c1->Menu_button_luminance ==
      kcg_c2->Menu_button_luminance);
  kcg_equ = kcg_equ & (kcg_c1->Menu_button_volume ==
      kcg_c2->Menu_button_volume);
  kcg_equ = kcg_equ & (kcg_c1->Menu_button_system_version ==
      kcg_c2->Menu_button_system_version);
  kcg_equ = kcg_equ & (kcg_c1->Menu_button_adhesion_factor ==
      kcg_c2->Menu_button_adhesion_factor);
  kcg_equ = kcg_equ & (kcg_c1->Menu_button_override_route_suitability ==
      kcg_c2->Menu_button_override_route_suitability);
  kcg_equ = kcg_equ & (kcg_c1->Menu_button_override_EOA ==
      kcg_c2->Menu_button_override_EOA);
  kcg_equ = kcg_equ & (kcg_c1->Menu_button_language_selection ==
      kcg_c2->Menu_button_language_selection);
  kcg_equ = kcg_equ & (kcg_c1->Menu_button_staff_responsible_data ==
      kcg_c2->Menu_button_staff_responsible_data);
  kcg_equ = kcg_equ & (kcg_c1->Menu_button_train_data_view ==
      kcg_c2->Menu_button_train_data_view);
  kcg_equ = kcg_equ & (kcg_c1->Menu_button_train_data_modification ==
      kcg_c2->Menu_button_train_data_modification);
  kcg_equ = kcg_equ & (kcg_c1->Menu_button_ETCS_level ==
      kcg_c2->Menu_button_ETCS_level);
  kcg_equ = kcg_equ & (kcg_c1->Menu_button_train_running_number ==
      kcg_c2->Menu_button_train_running_number);
  kcg_equ = kcg_equ & (kcg_c1->Menu_button_driver_ID ==
      kcg_c2->Menu_button_driver_ID);
  kcg_equ = kcg_equ & (kcg_c1->Menu_button_maintain_shunting ==
      kcg_c2->Menu_button_maintain_shunting);
  kcg_equ = kcg_equ & (kcg_c1->Menu_button_exit_non_leading ==
      kcg_c2->Menu_button_exit_non_leading);
  kcg_equ = kcg_equ & (kcg_c1->Menu_button_non_leading ==
      kcg_c2->Menu_button_non_leading);
  kcg_equ = kcg_equ & (kcg_c1->Menu_button_shunting_exit ==
      kcg_c2->Menu_button_shunting_exit);
  kcg_equ = kcg_equ & (kcg_c1->Menu_button_shunting ==
      kcg_c2->Menu_button_shunting);
  kcg_equ = kcg_equ & (kcg_c1->Menu_button_start_of_mission ==
      kcg_c2->Menu_button_start_of_mission);
  return kcg_equ;
}
#endif /* kcg_use_DMI_Available_Menu_T_DMI_Types_Pkg */

#ifdef kcg_use_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg
kcg_bool kcg_comp_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg(
  DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c1,
  DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->distanceIndicationPoint ==
      kcg_c2->distanceIndicationPoint);
  kcg_equ = kcg_equ & (kcg_c1->radioConnectionStatus ==
      kcg_c2->radioConnectionStatus);
  kcg_equ = kcg_equ & (kcg_c1->distance_to_TSA == kcg_c2->distance_to_TSA);
  kcg_equ = kcg_equ & (kcg_c1->distance_KP_Balise ==
      kcg_c2->distance_KP_Balise);
  kcg_equ = kcg_equ & (kcg_c1->location_KP_Balise_Track ==
      kcg_c2->location_KP_Balise_Track);
  kcg_equ = kcg_equ & (kcg_c1->v_LOA == kcg_c2->v_LOA);
  kcg_equ = kcg_equ & (kcg_c1->location_LOA == kcg_c2->location_LOA);
  kcg_equ = kcg_equ & (kcg_c1->sup_status == kcg_c2->sup_status);
  kcg_equ = kcg_equ & (kcg_c1->m_warning == kcg_c2->m_warning);
  kcg_equ = kcg_equ & (kcg_c1->nid_c_valid == kcg_c2->nid_c_valid);
  kcg_equ = kcg_equ & (kcg_c1->nid_c == kcg_c2->nid_c);
  kcg_equ = kcg_equ & kcg_comp_DMI_level_T_DMI_Types_Pkg(
      &kcg_c1->level,
      &kcg_c2->level);
  kcg_equ = kcg_equ & (kcg_c1->mode == kcg_c2->mode);
  kcg_equ = kcg_equ & (kcg_c1->v_intervention == kcg_c2->v_intervention);
  kcg_equ = kcg_equ & (kcg_c1->location_brake_curve_starting_point ==
      kcg_c2->location_brake_curve_starting_point);
  kcg_equ = kcg_equ & (kcg_c1->v_release == kcg_c2->v_release);
  kcg_equ = kcg_equ & (kcg_c1->v_permitted == kcg_c2->v_permitted);
  kcg_equ = kcg_equ & (kcg_c1->v_target == kcg_c2->v_target);
  kcg_equ = kcg_equ & (kcg_c1->location_brake_target ==
      kcg_c2->location_brake_target);
  kcg_equ = kcg_equ & (kcg_c1->location_front_train ==
      kcg_c2->location_front_train);
  kcg_equ = kcg_equ & (kcg_c1->v_train == kcg_c2->v_train);
  kcg_equ = kcg_equ & (kcg_c1->system_clock == kcg_c2->system_clock);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifdef kcg_use_Brake_inhibition_command_T_TIU_Types_Pkg
kcg_bool kcg_comp_Brake_inhibition_command_T_TIU_Types_Pkg(
  Brake_inhibition_command_T_TIU_Types_Pkg *kcg_c1,
  Brake_inhibition_command_T_TIU_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_magneticshoebrake_cm ==
      kcg_c2->m_magneticshoebrake_cm);
  kcg_equ = kcg_equ & (kcg_c1->m_eddycurrentbrake_cm ==
      kcg_c2->m_eddycurrentbrake_cm);
  kcg_equ = kcg_equ & (kcg_c1->m_regenerativebrake_cm ==
      kcg_c2->m_regenerativebrake_cm);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_Brake_inhibition_command_T_TIU_Types_Pkg */

#ifdef kcg_use_RBC_Communication_T_ProvidePositionReport_Pkg
kcg_bool kcg_comp_RBC_Communication_T_ProvidePositionReport_Pkg(
  RBC_Communication_T_ProvidePositionReport_Pkg *kcg_c1,
  RBC_Communication_T_ProvidePositionReport_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->newSessionEstablished ==
      kcg_c2->newSessionEstablished);
  return kcg_equ;
}
#endif /* kcg_use_RBC_Communication_T_ProvidePositionReport_Pkg */

#ifdef kcg_use_T_Data_To_DMI_Level_And_Mode_Types_Pkg
kcg_bool kcg_comp_T_Data_To_DMI_Level_And_Mode_Types_Pkg(
  T_Data_To_DMI_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Data_To_DMI_Level_And_Mode_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->SH_Refused_By_RBC == kcg_c2->SH_Refused_By_RBC);
  kcg_equ = kcg_equ & (kcg_c1->Ack_UN == kcg_c2->Ack_UN);
  kcg_equ = kcg_equ & (kcg_c1->Ack_TR == kcg_c2->Ack_TR);
  kcg_equ = kcg_equ & (kcg_c1->Ack_SR == kcg_c2->Ack_SR);
  kcg_equ = kcg_equ & (kcg_c1->Ack_SN == kcg_c2->Ack_SN);
  kcg_equ = kcg_equ & (kcg_c1->Ack_SH == kcg_c2->Ack_SH);
  kcg_equ = kcg_equ & (kcg_c1->Ack_RV == kcg_c2->Ack_RV);
  kcg_equ = kcg_equ & (kcg_c1->Ack_OS == kcg_c2->Ack_OS);
  kcg_equ = kcg_equ & (kcg_c1->Ack_LS == kcg_c2->Ack_LS);
  return kcg_equ;
}
#endif /* kcg_use_T_Data_To_DMI_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_TargetIteratorAkku_TargetLimits_Pkg
kcg_bool kcg_comp_TargetIteratorAkku_TargetLimits_Pkg(
  TargetIteratorAkku_TargetLimits_Pkg *kcg_c1,
  TargetIteratorAkku_TargetLimits_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->V_P_MRDT_index == kcg_c2->V_P_MRDT_index);
  kcg_equ = kcg_equ & (kcg_c1->V_P_MRDT_ebd == kcg_c2->V_P_MRDT_ebd);
  kcg_equ = kcg_equ & (kcg_c1->V_ura == kcg_c2->V_ura);
  kcg_equ = kcg_equ & kcg_comp_T_trac_t_TargetLimits_Pkg(
      &kcg_c1->T,
      &kcg_c2->T);
  kcg_equ = kcg_equ & (kcg_c1->V_est == kcg_c2->V_est);
  kcg_equ = kcg_equ & kcg_comp_bec_t_TargetLimits_Pkg(
      &kcg_c1->bec,
      &kcg_c2->bec);
  kcg_equ = kcg_equ & (kcg_c1->ttype == kcg_c2->ttype);
  kcg_equ = kcg_equ & (kcg_c1->index == kcg_c2->index);
  kcg_equ = kcg_equ & (kcg_c1->SBI2 == kcg_c2->SBI2);
  return kcg_equ;
}
#endif /* kcg_use_TargetIteratorAkku_TargetLimits_Pkg */

#ifdef kcg_use_DMI_EVC_status_T_DMI_Types_Pkg
kcg_bool kcg_comp_DMI_EVC_status_T_DMI_Types_Pkg(
  DMI_EVC_status_T_DMI_Types_Pkg *kcg_c1,
  DMI_EVC_status_T_DMI_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(
      &kcg_c1->DMI_Identifier,
      &kcg_c2->DMI_Identifier);
  kcg_equ = kcg_equ & (kcg_c1->DMI_StartReceived == kcg_c2->DMI_StartReceived);
  kcg_equ = kcg_equ & (kcg_c1->DMI_TrainDataValidated ==
      kcg_c2->DMI_TrainDataValidated);
  kcg_equ = kcg_equ & (kcg_c1->DMI_TrainRunningNumberValidated ==
      kcg_c2->DMI_TrainRunningNumberValidated);
  kcg_equ = kcg_equ & (kcg_c1->DMI_TrainRunningNumberFirstValidation ==
      kcg_c2->DMI_TrainRunningNumberFirstValidation);
  kcg_equ = kcg_equ & (kcg_c1->DMI_LevelSelectedByDirver ==
      kcg_c2->DMI_LevelSelectedByDirver);
  kcg_equ = kcg_equ & (kcg_c1->DMI_DriverIdValidated ==
      kcg_c2->DMI_DriverIdValidated);
  kcg_equ = kcg_equ & (kcg_c1->DMI_Error == kcg_c2->DMI_Error);
  kcg_equ = kcg_equ & (kcg_c1->DMI_Active == kcg_c2->DMI_Active);
  return kcg_equ;
}
#endif /* kcg_use_DMI_EVC_status_T_DMI_Types_Pkg */

#ifdef kcg_use_DMI_TXT_MSG_status_T_DMI_Types_Pkg
kcg_bool kcg_comp_DMI_TXT_MSG_status_T_DMI_Types_Pkg(
  DMI_TXT_MSG_status_T_DMI_Types_Pkg *kcg_c1,
  DMI_TXT_MSG_status_T_DMI_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->whichMode == kcg_c2->whichMode);
  kcg_equ = kcg_equ & (kcg_c1->whichLevel == kcg_c2->whichLevel);
  kcg_equ = kcg_equ & (kcg_c1->nid_textmessage == kcg_c2->nid_textmessage);
  kcg_equ = kcg_equ & (kcg_c1->context == kcg_c2->context);
  kcg_equ = kcg_equ & (kcg_c1->textReport == kcg_c2->textReport);
  kcg_equ = kcg_equ & (kcg_c1->timeStamp == kcg_c2->timeStamp);
  kcg_equ = kcg_equ & (kcg_c1->dmi_textMessageID == kcg_c2->dmi_textMessageID);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_DMI_TXT_MSG_status_T_DMI_Types_Pkg */

#ifdef kcg_use_BGCollector_T_Receive_TrackSide_Msg_Pkg
kcg_bool kcg_comp_BGCollector_T_Receive_TrackSide_Msg_Pkg(
  BGCollector_T_Receive_TrackSide_Msg_Pkg *kcg_c1,
  BGCollector_T_Receive_TrackSide_Msg_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->totalTelegrams == kcg_c2->totalTelegrams);
  kcg_equ = kcg_equ & (kcg_c1->collectedTelegrams ==
      kcg_c2->collectedTelegrams);
  kcg_equ = kcg_equ & kcg_comp_centerOfBalisePosition_T_BG_Types_Pkg(
      &kcg_c1->positionFirstContact,
      &kcg_c2->positionFirstContact);
  kcg_equ = kcg_equ & kcg_comp_centerOfBalisePosition_T_BG_Types_Pkg(
      &kcg_c1->balisePosition,
      &kcg_c2->balisePosition);
  kcg_equ = kcg_equ & (kcg_c1->BG_ID == kcg_c2->BG_ID);
  kcg_equ = kcg_equ & (kcg_c1->C_ID == kcg_c2->C_ID);
  kcg_equ = kcg_equ & (kcg_c1->BGMessageSent == kcg_c2->BGMessageSent);
  kcg_equ = kcg_equ & (kcg_c1->badBaliseFlag == kcg_c2->badBaliseFlag);
  return kcg_equ;
}
#endif /* kcg_use_BGCollector_T_Receive_TrackSide_Msg_Pkg */

#ifdef kcg_use_filterRelatedEvents_T_Common_Types_Pkg
kcg_bool kcg_comp_filterRelatedEvents_T_Common_Types_Pkg(
  filterRelatedEvents_T_Common_Types_Pkg *kcg_c1,
  filterRelatedEvents_T_Common_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->MACoverNotFullLength ==
      kcg_c2->MACoverNotFullLength);
  kcg_equ = kcg_equ & (kcg_c1->SPPAndGradientOnBoard ==
      kcg_c2->SPPAndGradientOnBoard);
  kcg_equ = kcg_equ & (kcg_c1->pendingNTCTransition ==
      kcg_c2->pendingNTCTransition);
  kcg_equ = kcg_equ & (kcg_c1->lastAckTextMessageId ==
      kcg_c2->lastAckTextMessageId);
  kcg_equ = kcg_equ & (kcg_c1->emergencyStopAccepted ==
      kcg_c2->emergencyStopAccepted);
  kcg_equ = kcg_equ & (kcg_c1->pendingAckOfTrainDataFromRBC ==
      kcg_c2->pendingAckOfTrainDataFromRBC);
  kcg_equ = kcg_equ & (kcg_c1->pendingL12L3Transition ==
      kcg_c2->pendingL12L3Transition);
  kcg_equ = kcg_equ & (kcg_c1->pendingL1Transition ==
      kcg_c2->pendingL1Transition);
  return kcg_equ;
}
#endif /* kcg_use_filterRelatedEvents_T_Common_Types_Pkg */

#ifdef kcg_use_dataCollectionForLevelTransition_T_xdebugSupport_Pkg
kcg_bool kcg_comp_dataCollectionForLevelTransition_T_xdebugSupport_Pkg(
  dataCollectionForLevelTransition_T_xdebugSupport_Pkg *kcg_c1,
  dataCollectionForLevelTransition_T_xdebugSupport_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->referenceLocation == kcg_c2->referenceLocation);
  kcg_equ = kcg_equ & (kcg_c1->LRBG == kcg_c2->LRBG);
  kcg_equ = kcg_equ & (kcg_c1->p27_received == kcg_c2->p27_received);
  kcg_equ = kcg_equ & (kcg_c1->p21_received == kcg_c2->p21_received);
  kcg_equ = kcg_equ & (kcg_c1->p15_received == kcg_c2->p15_received);
  kcg_equ = kcg_equ & (kcg_c1->p12_received == kcg_c2->p12_received);
  kcg_equ = kcg_equ &
    kcg_comp_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg(
      &kcg_c1->p46,
      &kcg_c2->p46);
  kcg_equ = kcg_equ & kcg_comp_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
      &kcg_c1->p41,
      &kcg_c2->p41);
  return kcg_equ;
}
#endif /* kcg_use_dataCollectionForLevelTransition_T_xdebugSupport_Pkg */

#ifdef kcg_use_MSG_Errors_T_Common_Types_Pkg
kcg_bool kcg_comp_MSG_Errors_T_Common_Types_Pkg(
  MSG_Errors_T_Common_Types_Pkg *kcg_c1,
  MSG_Errors_T_Common_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_errorbg == kcg_c2->nid_errorbg);
  kcg_equ = kcg_equ & (kcg_c1->nid_c == kcg_c2->nid_c);
  kcg_equ = kcg_equ & (kcg_c1->radioMessageConsistencyError ==
      kcg_c2->radioMessageConsistencyError);
  kcg_equ = kcg_equ & (kcg_c1->otherTimingError == kcg_c2->otherTimingError);
  kcg_equ = kcg_equ & (kcg_c1->tNvContactError == kcg_c2->tNvContactError);
  kcg_equ = kcg_equ & (kcg_c1->radioSequenceError ==
      kcg_c2->radioSequenceError);
  kcg_equ = kcg_equ & (kcg_c1->BG_versionIncompatible ==
      kcg_c2->BG_versionIncompatible);
  kcg_equ = kcg_equ & (kcg_c1->unlinkedBGError == kcg_c2->unlinkedBGError);
  kcg_equ = kcg_equ & (kcg_c1->linkedBGError == kcg_c2->linkedBGError);
  return kcg_equ;
}
#endif /* kcg_use_MSG_Errors_T_Common_Types_Pkg */

#ifdef kcg_use_P058_OBU_T_TM
kcg_bool kcg_comp_P058_OBU_T_TM(P058_OBU_T_TM *kcg_c1, P058_OBU_T_TM *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_P058_OBU_sectionlist_enum_T_TM(
      &kcg_c1->sections,
      &kcg_c2->sections);
  kcg_equ = kcg_equ & (kcg_c1->n_iter == kcg_c2->n_iter);
  kcg_equ = kcg_equ & (kcg_c1->m_loc == kcg_c2->m_loc);
  kcg_equ = kcg_equ & (kcg_c1->d_cycloc == kcg_c2->d_cycloc);
  kcg_equ = kcg_equ & (kcg_c1->t_cycloc == kcg_c2->t_cycloc);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P058_OBU_T_TM */

#ifdef kcg_use_mobileConnectionCmd_T_RCM_Types_Pkg
kcg_bool kcg_comp_mobileConnectionCmd_T_RCM_Types_Pkg(
  mobileConnectionCmd_T_RCM_Types_Pkg *kcg_c1,
  mobileConnectionCmd_T_RCM_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_radio == kcg_c2->nid_radio);
  kcg_equ = kcg_equ & (kcg_c1->action == kcg_c2->action);
  kcg_equ = kcg_equ & (kcg_c1->mobileDeviceNo == kcg_c2->mobileDeviceNo);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_mobileConnectionCmd_T_RCM_Types_Pkg */

#ifdef kcg_use_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg
kcg_bool kcg_comp_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg(
  P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg *kcg_c1,
  P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_SSPArray_T_Packet_Types_Pkg(
      &kcg_c1->SSPArray,
      &kcg_c2->SSPArray);
  kcg_equ = kcg_equ & kcg_comp_DiffArray_T_Packet_Types_Pkg(
      &kcg_c1->diffArray,
      &kcg_c2->diffArray);
  kcg_equ = kcg_equ & (kcg_c1->q_front == kcg_c2->q_front);
  kcg_equ = kcg_equ & (kcg_c1->v_static == kcg_c2->v_static);
  kcg_equ = kcg_equ & (kcg_c1->d_static == kcg_c2->d_static);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg */

#ifdef kcg_use_P80_ModeProfile_T_Packet_Types_Pkg
kcg_bool kcg_comp_P80_ModeProfile_T_Packet_Types_Pkg(
  P80_ModeProfile_T_Packet_Types_Pkg *kcg_c1,
  P80_ModeProfile_T_Packet_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->q_mamode == kcg_c2->q_mamode);
  kcg_equ = kcg_equ & (kcg_c1->l_ackmamode == kcg_c2->l_ackmamode);
  kcg_equ = kcg_equ & (kcg_c1->l_mamode == kcg_c2->l_mamode);
  kcg_equ = kcg_equ & (kcg_c1->v_mamode == kcg_c2->v_mamode);
  kcg_equ = kcg_equ & (kcg_c1->m_mamode == kcg_c2->m_mamode);
  kcg_equ = kcg_equ & (kcg_c1->d_mamode == kcg_c2->d_mamode);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P80_ModeProfile_T_Packet_Types_Pkg */

#ifdef kcg_use_M_147_T_TM_radio_messages
kcg_bool kcg_comp_M_147_T_TM_radio_messages(
  M_147_T_TM_radio_messages *kcg_c1,
  M_147_T_TM_radio_messages *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->q_emergencystop == kcg_c2->q_emergencystop);
  kcg_equ = kcg_equ & (kcg_c1->nid_em == kcg_c2->nid_em);
  kcg_equ = kcg_equ & (kcg_c1->nid_engine == kcg_c2->nid_engine);
  kcg_equ = kcg_equ & (kcg_c1->t_train == kcg_c2->t_train);
  kcg_equ = kcg_equ & (kcg_c1->l_message == kcg_c2->l_message);
  kcg_equ = kcg_equ & (kcg_c1->nid_message == kcg_c2->nid_message);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_M_147_T_TM_radio_messages */

#ifdef kcg_use_positionErrors_T_TrainPosition_Types_Pck
kcg_bool kcg_comp_positionErrors_T_TrainPosition_Types_Pck(
  positionErrors_T_TrainPosition_Types_Pck *kcg_c1,
  positionErrors_T_TrainPosition_Types_Pck *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_positionedBG_T_TrainPosition_Types_Pck(
      &kcg_c1->bg,
      &kcg_c2->bg);
  kcg_equ = kcg_equ & (kcg_c1->doubleRepositioningError ==
      kcg_c2->doubleRepositioningError);
  kcg_equ = kcg_equ & (kcg_c1->twoConsecutiveLinkedBGs_missed ==
      kcg_c2->twoConsecutiveLinkedBGs_missed);
  kcg_equ = kcg_equ & (kcg_c1->BG_LinkingConsistencyError ==
      kcg_c2->BG_LinkingConsistencyError);
  kcg_equ = kcg_equ & (kcg_c1->BGpassedInUnexpectedDirection ==
      kcg_c2->BGpassedInUnexpectedDirection);
  kcg_equ = kcg_equ & (kcg_c1->linkedBGMissed == kcg_c2->linkedBGMissed);
  kcg_equ = kcg_equ & (kcg_c1->positionCalculation_inconsistent ==
      kcg_c2->positionCalculation_inconsistent);
  kcg_equ = kcg_equ & (kcg_c1->passedBG_foundNotWhereExpected ==
      kcg_c2->passedBG_foundNotWhereExpected);
  kcg_equ = kcg_equ & (kcg_c1->outOfMemSpace == kcg_c2->outOfMemSpace);
  return kcg_equ;
}
#endif /* kcg_use_positionErrors_T_TrainPosition_Types_Pck */

#ifdef kcg_use_P005_section_enum_T_TM
kcg_bool kcg_comp_P005_section_enum_T_TM(
  P005_section_enum_T_TM *kcg_c1,
  P005_section_enum_T_TM *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->q_locacc == kcg_c2->q_locacc);
  kcg_equ = kcg_equ & (kcg_c1->q_linkreaction == kcg_c2->q_linkreaction);
  kcg_equ = kcg_equ & (kcg_c1->q_linkorientation == kcg_c2->q_linkorientation);
  kcg_equ = kcg_equ & (kcg_c1->nid_bg == kcg_c2->nid_bg);
  kcg_equ = kcg_equ & (kcg_c1->nid_c == kcg_c2->nid_c);
  kcg_equ = kcg_equ & (kcg_c1->q_newcountry == kcg_c2->q_newcountry);
  kcg_equ = kcg_equ & (kcg_c1->d_link == kcg_c2->d_link);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P005_section_enum_T_TM */

#ifdef kcg_use_struct_172264
kcg_bool kcg_comp_struct_172264(struct_172264 *kcg_c1, struct_172264 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array_170182(
      &kcg_c1->n_iter_k_m_list,
      &kcg_c2->n_iter_k_m_list);
  kcg_equ = kcg_equ & (kcg_c1->n_iter_k_m == kcg_c2->n_iter_k_m);
  kcg_equ = kcg_equ & (kcg_c1->m_nvkvint_k_23 == kcg_c2->m_nvkvint_k_23);
  kcg_equ = kcg_equ & (kcg_c1->m_nvkvint_k_12 == kcg_c2->m_nvkvint_k_12);
  kcg_equ = kcg_equ & (kcg_c1->v_nvkvint_k == kcg_c2->v_nvkvint_k);
  kcg_equ = kcg_equ & (kcg_c1->a_nvp23_k == kcg_c2->a_nvp23_k);
  kcg_equ = kcg_equ & (kcg_c1->a_nvp12_k == kcg_c2->a_nvp12_k);
  kcg_equ = kcg_equ & (kcg_c1->q_nvkvintset_k == kcg_c2->q_nvkvintset_k);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_struct_172264 */

#ifdef kcg_use_struct_172277
kcg_bool kcg_comp_struct_172277(struct_172277 *kcg_c1, struct_172277 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->q_sleepsession == kcg_c2->q_sleepsession);
  kcg_equ = kcg_equ & (kcg_c1->nid_radio == kcg_c2->nid_radio);
  kcg_equ = kcg_equ & (kcg_c1->nid_rbc == kcg_c2->nid_rbc);
  kcg_equ = kcg_equ & (kcg_c1->nid_c == kcg_c2->nid_c);
  kcg_equ = kcg_equ & (kcg_c1->d_rbctr == kcg_c2->d_rbctr);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_struct_172277 */

#ifdef kcg_use_positionedBG_T_TrainPosition_Types_Pck
kcg_bool kcg_comp_positionedBG_T_TrainPosition_Types_Pck(
  positionedBG_T_TrainPosition_Types_Pck *kcg_c1,
  positionedBG_T_TrainPosition_Types_Pck *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->missed == kcg_c2->missed);
  kcg_equ = kcg_equ & kcg_comp_passedBG_T_BG_Types_Pkg(
      &kcg_c1->infoFromPassing,
      &kcg_c2->infoFromPassing);
  kcg_equ = kcg_equ & kcg_comp_infoFromLinking_T_TrainPosition_Types_Pck(
      &kcg_c1->infoFromLinking,
      &kcg_c2->infoFromLinking);
  kcg_equ = kcg_equ & (kcg_c1->seqNoOnTrack == kcg_c2->seqNoOnTrack);
  kcg_equ = kcg_equ & kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &kcg_c1->location,
      &kcg_c2->location);
  kcg_equ = kcg_equ & (kcg_c1->q_link == kcg_c2->q_link);
  kcg_equ = kcg_equ & (kcg_c1->nid_bg == kcg_c2->nid_bg);
  kcg_equ = kcg_equ & (kcg_c1->nid_c == kcg_c2->nid_c);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_positionedBG_T_TrainPosition_Types_Pck */

#ifdef kcg_use_P42_SessionManagement_T_Packet_Types_Pkg
kcg_bool kcg_comp_P42_SessionManagement_T_Packet_Types_Pkg(
  P42_SessionManagement_T_Packet_Types_Pkg *kcg_c1,
  P42_SessionManagement_T_Packet_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->q_sleepsession == kcg_c2->q_sleepsession);
  kcg_equ = kcg_equ & (kcg_c1->nid_radio == kcg_c2->nid_radio);
  kcg_equ = kcg_equ & (kcg_c1->nid_rbc == kcg_c2->nid_rbc);
  kcg_equ = kcg_equ & (kcg_c1->nid_c == kcg_c2->nid_c);
  kcg_equ = kcg_equ & (kcg_c1->q_rbc == kcg_c2->q_rbc);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P42_SessionManagement_T_Packet_Types_Pkg */

#ifdef kcg_use_p42_sessionManagement_T_RCM_MsgTypes_Pkg
kcg_bool kcg_comp_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
  p42_sessionManagement_T_RCM_MsgTypes_Pkg *kcg_c1,
  p42_sessionManagement_T_RCM_MsgTypes_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_RBC_Id_T_Common_Types_Pkg(
      &kcg_c1->origin,
      &kcg_c2->origin);
  kcg_equ = kcg_equ & (kcg_c1->q_sleepsession == kcg_c2->q_sleepsession);
  kcg_equ = kcg_equ & (kcg_c1->nid_radio == kcg_c2->nid_radio);
  kcg_equ = kcg_equ & (kcg_c1->nid_RBC == kcg_c2->nid_RBC);
  kcg_equ = kcg_equ & (kcg_c1->nid_c == kcg_c2->nid_c);
  kcg_equ = kcg_equ & (kcg_c1->q_rbc == kcg_c2->q_rbc);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->msgSrc == kcg_c2->msgSrc);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_p42_sessionManagement_T_RCM_MsgTypes_Pkg */

#ifdef kcg_use_RadioMetadata_T_Common_Types_Pkg
kcg_bool kcg_comp_RadioMetadata_T_Common_Types_Pkg(
  RadioMetadata_T_Common_Types_Pkg *kcg_c1,
  RadioMetadata_T_Common_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_version == kcg_c2->m_version);
  kcg_equ = kcg_equ & (kcg_c1->d_emergencystop == kcg_c2->d_emergencystop);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->d_ref == kcg_c2->d_ref);
  kcg_equ = kcg_equ & (kcg_c1->t_sh_rqst == kcg_c2->t_sh_rqst);
  kcg_equ = kcg_equ & (kcg_c1->d_sr == kcg_c2->d_sr);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->nid_em == kcg_c2->nid_em);
  kcg_equ = kcg_equ & (kcg_c1->t_train_reference == kcg_c2->t_train_reference);
  return kcg_equ;
}
#endif /* kcg_use_RadioMetadata_T_Common_Types_Pkg */

#ifdef kcg_use_odometry_T_Obu_BasicTypes_Pkg
kcg_bool kcg_comp_odometry_T_Obu_BasicTypes_Pkg(
  odometry_T_Obu_BasicTypes_Pkg *kcg_c1,
  odometry_T_Obu_BasicTypes_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->motionDirection == kcg_c2->motionDirection);
  kcg_equ = kcg_equ & (kcg_c1->motionState == kcg_c2->motionState);
  kcg_equ = kcg_equ & (kcg_c1->acceleration == kcg_c2->acceleration);
  kcg_equ = kcg_equ & kcg_comp_OdometrySpeeds_T_Obu_BasicTypes_Pkg(
      &kcg_c1->speed,
      &kcg_c2->speed);
  kcg_equ = kcg_equ & kcg_comp_OdometryLocations_T_Obu_BasicTypes_Pkg(
      &kcg_c1->odo,
      &kcg_c2->odo);
  kcg_equ = kcg_equ & (kcg_c1->timestamp == kcg_c2->timestamp);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_odometry_T_Obu_BasicTypes_Pkg */

#ifdef kcg_use_M_TrainTrack_MessageHd_T_TM_radio_messages
kcg_bool kcg_comp_M_TrainTrack_MessageHd_T_TM_radio_messages(
  M_TrainTrack_MessageHd_T_TM_radio_messages *kcg_c1,
  M_TrainTrack_MessageHd_T_TM_radio_messages *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->field3 == kcg_c2->field3);
  kcg_equ = kcg_equ & (kcg_c1->field2 == kcg_c2->field2);
  kcg_equ = kcg_equ & (kcg_c1->field1 == kcg_c2->field1);
  kcg_equ = kcg_equ & (kcg_c1->nid_engine == kcg_c2->nid_engine);
  kcg_equ = kcg_equ & (kcg_c1->t_train == kcg_c2->t_train);
  kcg_equ = kcg_equ & (kcg_c1->l_message == kcg_c2->l_message);
  kcg_equ = kcg_equ & (kcg_c1->nid_message == kcg_c2->nid_message);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_M_TrainTrack_MessageHd_T_TM_radio_messages */

#ifdef kcg_use_struct_172356
kcg_bool kcg_comp_struct_172356(struct_172356 *kcg_c1, struct_172356 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->xNID_TEXTMESSAGE == kcg_c2->xNID_TEXTMESSAGE);
  kcg_equ = kcg_equ & (kcg_c1->xQ_EMERGENCYSTOP == kcg_c2->xQ_EMERGENCYSTOP);
  kcg_equ = kcg_equ & (kcg_c1->xNID_EM == kcg_c2->xNID_EM);
  kcg_equ = kcg_equ & (kcg_c1->xT_TRAIN == kcg_c2->xT_TRAIN);
  kcg_equ = kcg_equ & (kcg_c1->xQ_MARQSTREASON == kcg_c2->xQ_MARQSTREASON);
  kcg_equ = kcg_equ & (kcg_c1->nid_engine == kcg_c2->nid_engine);
  kcg_equ = kcg_equ & (kcg_c1->t_train == kcg_c2->t_train);
  kcg_equ = kcg_equ & (kcg_c1->nid_message == kcg_c2->nid_message);
  kcg_equ = kcg_equ & (kcg_c1->present == kcg_c2->present);
  return kcg_equ;
}
#endif /* kcg_use_struct_172356 */

#ifdef kcg_use_M_002_T_TM_radio_messages
kcg_bool kcg_comp_M_002_T_TM_radio_messages(
  M_002_T_TM_radio_messages *kcg_c1,
  M_002_T_TM_radio_messages *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->d_sr == kcg_c2->d_sr);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->nid_lrbg == kcg_c2->nid_lrbg);
  kcg_equ = kcg_equ & (kcg_c1->m_ack == kcg_c2->m_ack);
  kcg_equ = kcg_equ & (kcg_c1->t_train == kcg_c2->t_train);
  kcg_equ = kcg_equ & (kcg_c1->l_message == kcg_c2->l_message);
  kcg_equ = kcg_equ & (kcg_c1->nid_message == kcg_c2->nid_message);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_M_002_T_TM_radio_messages */

#ifdef kcg_use_M_045_T_TM_radio_messages
kcg_bool kcg_comp_M_045_T_TM_radio_messages(
  M_045_T_TM_radio_messages *kcg_c1,
  M_045_T_TM_radio_messages *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->q_orientation == kcg_c2->q_orientation);
  kcg_equ = kcg_equ & (kcg_c1->nid_lrbg == kcg_c2->nid_lrbg);
  kcg_equ = kcg_equ & (kcg_c1->m_ack == kcg_c2->m_ack);
  kcg_equ = kcg_equ & (kcg_c1->t_train == kcg_c2->t_train);
  kcg_equ = kcg_equ & (kcg_c1->l_message == kcg_c2->l_message);
  kcg_equ = kcg_equ & (kcg_c1->nid_message == kcg_c2->nid_message);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_M_045_T_TM_radio_messages */

#ifdef kcg_use_M_033_T_TM_radio_messages
kcg_bool kcg_comp_M_033_T_TM_radio_messages(
  M_033_T_TM_radio_messages *kcg_c1,
  M_033_T_TM_radio_messages *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->d_ref == kcg_c2->d_ref);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->nid_lrbg == kcg_c2->nid_lrbg);
  kcg_equ = kcg_equ & (kcg_c1->m_ack == kcg_c2->m_ack);
  kcg_equ = kcg_equ & (kcg_c1->t_train == kcg_c2->t_train);
  kcg_equ = kcg_equ & (kcg_c1->l_message == kcg_c2->l_message);
  kcg_equ = kcg_equ & (kcg_c1->nid_message == kcg_c2->nid_message);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_M_033_T_TM_radio_messages */

#ifdef kcg_use_M_032_T_TM_radio_messages
kcg_bool kcg_comp_M_032_T_TM_radio_messages(
  M_032_T_TM_radio_messages *kcg_c1,
  M_032_T_TM_radio_messages *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_version == kcg_c2->m_version);
  kcg_equ = kcg_equ & (kcg_c1->nid_lrbg == kcg_c2->nid_lrbg);
  kcg_equ = kcg_equ & (kcg_c1->m_ack == kcg_c2->m_ack);
  kcg_equ = kcg_equ & (kcg_c1->t_train == kcg_c2->t_train);
  kcg_equ = kcg_equ & (kcg_c1->l_message == kcg_c2->l_message);
  kcg_equ = kcg_equ & (kcg_c1->nid_message == kcg_c2->nid_message);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_M_032_T_TM_radio_messages */

#ifdef kcg_use_P042_trackside_int_T_TM
kcg_bool kcg_comp_P042_trackside_int_T_TM(
  P042_trackside_int_T_TM *kcg_c1,
  P042_trackside_int_T_TM *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Q_SLEEPSESSION == kcg_c2->Q_SLEEPSESSION);
  kcg_equ = kcg_equ & (kcg_c1->NID_RADIO == kcg_c2->NID_RADIO);
  kcg_equ = kcg_equ & (kcg_c1->NID_RBC == kcg_c2->NID_RBC);
  kcg_equ = kcg_equ & (kcg_c1->NID_C == kcg_c2->NID_C);
  kcg_equ = kcg_equ & (kcg_c1->Q_RBC == kcg_c2->Q_RBC);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P042_trackside_int_T_TM */

#ifdef kcg_use_P046_trackside_int_T_TM
kcg_bool kcg_comp_P046_trackside_int_T_TM(
  P046_trackside_int_T_TM *kcg_c1,
  P046_trackside_int_T_TM *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_P046_trackide_sectionlist_T_TM(
      &kcg_c1->SECTIONS,
      &kcg_c2->SECTIONS);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER == kcg_c2->N_ITER);
  kcg_equ = kcg_equ & (kcg_c1->NID_NTC == kcg_c2->NID_NTC);
  kcg_equ = kcg_equ & (kcg_c1->M_LEVELTR == kcg_c2->M_LEVELTR);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P046_trackside_int_T_TM */

#ifdef kcg_use_Mode_control_and_train_status_T_TIU_Types_Pkg
kcg_bool kcg_comp_Mode_control_and_train_status_T_TIU_Types_Pkg(
  Mode_control_and_train_status_T_TIU_Types_Pkg *kcg_c1,
  Mode_control_and_train_status_T_TIU_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_traction_st == kcg_c2->m_traction_st);
  kcg_equ = kcg_equ & (kcg_c1->m_trainintegrity_st ==
      kcg_c2->m_trainintegrity_st);
  kcg_equ = kcg_equ & (kcg_c1->m_directioncontroller_st ==
      kcg_c2->m_directioncontroller_st);
  kcg_equ = kcg_equ & (kcg_c1->m_cab_st == kcg_c2->m_cab_st);
  kcg_equ = kcg_equ & (kcg_c1->m_nonleading_st == kcg_c2->m_nonleading_st);
  kcg_equ = kcg_equ & (kcg_c1->m_passiveshunting_st ==
      kcg_c2->m_passiveshunting_st);
  kcg_equ = kcg_equ & (kcg_c1->m_sleeping_st == kcg_c2->m_sleeping_st);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_Mode_control_and_train_status_T_TIU_Types_Pkg */

#ifdef kcg_use_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg
kcg_bool kcg_comp_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
  DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c1,
  DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_DMI_loadingGauge_T_DMI_Types_Pkg(
      &kcg_c1->mLoadingGauge,
      &kcg_c2->mLoadingGauge);
  kcg_equ = kcg_equ & kcg_comp_DMI_airtightSystem_T_DMI_Types_Pkg(
      &kcg_c1->airTightSystem,
      &kcg_c2->airTightSystem);
  kcg_equ = kcg_equ & (kcg_c1->mAxleLoad == kcg_c2->mAxleLoad);
  kcg_equ = kcg_equ & kcg_comp_DMI_vMax_id_T_DMI_Types_Pkg(
      &kcg_c1->vmax,
      &kcg_c2->vmax);
  kcg_equ = kcg_equ & kcg_comp_DMI_brakeModel_id_T_DMI_Types_Pkg(
      &kcg_c1->brakeModel,
      &kcg_c2->brakeModel);
  kcg_equ = kcg_equ & kcg_comp_DMI_train_length_T_DMI_Types_Pkg(
      &kcg_c1->trainLength,
      &kcg_c2->trainLength);
  kcg_equ = kcg_equ & kcg_comp_DMI_train_id_T_DMI_Types_Pkg(
      &kcg_c1->trainID,
      &kcg_c2->trainID);
  kcg_equ = kcg_equ & (kcg_c1->system_clock == kcg_c2->system_clock);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifdef kcg_use_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg
kcg_bool kcg_comp_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(
  DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c1,
  DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->DMI_nid_icon_identifier ==
      kcg_c2->DMI_nid_icon_identifier);
  kcg_equ = kcg_equ & (kcg_c1->DMI_nid_area_rank == kcg_c2->DMI_nid_area_rank);
  kcg_equ = kcg_equ & (kcg_c1->DMI_nid_area_group ==
      kcg_c2->DMI_nid_area_group);
  kcg_equ = kcg_equ & (kcg_c1->DMI_nid_icon_rank == kcg_c2->DMI_nid_icon_rank);
  kcg_equ = kcg_equ & (kcg_c1->DMI_nid_icon_group ==
      kcg_c2->DMI_nid_icon_group);
  kcg_equ = kcg_equ & (kcg_c1->DMI_m_icon_flashing_freq ==
      kcg_c2->DMI_m_icon_flashing_freq);
  kcg_equ = kcg_equ & (kcg_c1->DMI_m_icon_control_flag ==
      kcg_c2->DMI_m_icon_control_flag);
  kcg_equ = kcg_equ & (kcg_c1->system_clock == kcg_c2->system_clock);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifdef kcg_use_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg
kcg_bool kcg_comp_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(
  DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c1,
  DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_version == kcg_c2->m_version);
  kcg_equ = kcg_equ & kcg_comp_DMI_TEXT_DMI_Types_Pkg(
      &kcg_c1->DMI_name,
      &kcg_c2->DMI_name);
  kcg_equ = kcg_equ & (kcg_c1->l_name == kcg_c2->l_name);
  kcg_equ = kcg_equ & (kcg_c1->Cabin_Identifier == kcg_c2->Cabin_Identifier);
  kcg_equ = kcg_equ & (kcg_c1->DMI_Identifier == kcg_c2->DMI_Identifier);
  kcg_equ = kcg_equ & (kcg_c1->systemTime == kcg_c2->systemTime);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg */

#ifdef kcg_use_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg
kcg_bool kcg_comp_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
  DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *kcg_c1,
  DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_loadingGauge == kcg_c2->m_loadingGauge);
  kcg_equ = kcg_equ & (kcg_c1->m_airTight == kcg_c2->m_airTight);
  kcg_equ = kcg_equ & (kcg_c1->m_axleLoad == kcg_c2->m_axleLoad);
  kcg_equ = kcg_equ & (kcg_c1->v_maxTrain == kcg_c2->v_maxTrain);
  kcg_equ = kcg_equ & (kcg_c1->m_brakeperct == kcg_c2->m_brakeperct);
  kcg_equ = kcg_equ & (kcg_c1->l_train == kcg_c2->l_train);
  kcg_equ = kcg_equ & (kcg_c1->trainCategory == kcg_c2->trainCategory);
  kcg_equ = kcg_equ & (kcg_c1->systemTime == kcg_c2->systemTime);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg */

#ifdef kcg_use_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg
kcg_bool kcg_comp_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c1,
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->q_textConfirm == kcg_c2->q_textConfirm);
  kcg_equ = kcg_equ & (kcg_c1->q_textClass == kcg_c2->q_textClass);
  kcg_equ = kcg_equ & kcg_comp_DMI_TEXT_DMI_Types_Pkg(
      &kcg_c1->x_text,
      &kcg_c2->x_text);
  kcg_equ = kcg_equ & (kcg_c1->l_text == kcg_c2->l_text);
  kcg_equ = kcg_equ & (kcg_c1->q_text == kcg_c2->q_text);
  kcg_equ = kcg_equ & (kcg_c1->textMessage_ID == kcg_c2->textMessage_ID);
  kcg_equ = kcg_equ & (kcg_c1->system_clock == kcg_c2->system_clock);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifdef kcg_use_trainProperties_T_TrainPosition_Types_Pck
kcg_bool kcg_comp_trainProperties_T_TrainPosition_Types_Pck(
  trainProperties_T_TrainPosition_Types_Pck *kcg_c1,
  trainProperties_T_TrainPosition_Types_Pck *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &kcg_c1->centerDetectionAcc_DefaultValue,
      &kcg_c2->centerDetectionAcc_DefaultValue);
  kcg_equ = kcg_equ & kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &kcg_c1->locationAccuracy_DefaultValue,
      &kcg_c2->locationAccuracy_DefaultValue);
  kcg_equ = kcg_equ & kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &kcg_c1->d_frontend_2_rearend,
      &kcg_c2->d_frontend_2_rearend);
  kcg_equ = kcg_equ & kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &kcg_c1->d_baliseAntenna_2_frontend,
      &kcg_c2->d_baliseAntenna_2_frontend);
  kcg_equ = kcg_equ & (kcg_c1->l_train == kcg_c2->l_train);
  kcg_equ = kcg_equ & (kcg_c1->nid_operational == kcg_c2->nid_operational);
  kcg_equ = kcg_equ & (kcg_c1->nid_engine == kcg_c2->nid_engine);
  return kcg_equ;
}
#endif /* kcg_use_trainProperties_T_TrainPosition_Types_Pck */

#ifdef kcg_use_p131_q_rbcTransitionOrder_T_Handover_Pkg
kcg_bool kcg_comp_p131_q_rbcTransitionOrder_T_Handover_Pkg(
  p131_q_rbcTransitionOrder_T_Handover_Pkg *kcg_c1,
  p131_q_rbcTransitionOrder_T_Handover_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_P131_RBCTransitionOrder_T_Packet_Types_Pkg(
      &kcg_c1->order,
      &kcg_c2->order);
  kcg_equ = kcg_equ & (kcg_c1->useTheShortNumberStoredOnboard ==
      kcg_c2->useTheShortNumberStoredOnboard);
  kcg_equ = kcg_equ & (kcg_c1->contactLastKnownRBC ==
      kcg_c2->contactLastKnownRBC);
  kcg_equ = kcg_equ & kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &kcg_c1->location,
      &kcg_c2->location);
  kcg_equ = kcg_equ & (kcg_c1->nid_lrbg == kcg_c2->nid_lrbg);
  kcg_equ = kcg_equ & (kcg_c1->source == kcg_c2->source);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_p131_q_rbcTransitionOrder_T_Handover_Pkg */

#ifdef kcg_use_struct_172526
kcg_bool kcg_comp_struct_172526(struct_172526 *kcg_c1, struct_172526 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_RBC_Id_T_Common_Types_Pkg(
      &kcg_c1->sendingRBC,
      &kcg_c2->sendingRBC);
  kcg_equ = kcg_equ & kcg_comp_CompressedPackets_T_Common_Types_Pkg(
      &kcg_c1->packets,
      &kcg_c2->packets);
  kcg_equ = kcg_equ & kcg_comp_struct_171773(
      &kcg_c1->Radio_Common_Header,
      &kcg_c2->Radio_Common_Header);
  kcg_equ = kcg_equ & kcg_comp_BG_Header_T_BG_Types_Pkg(
      &kcg_c1->BG_Common_Header,
      &kcg_c2->BG_Common_Header);
  kcg_equ = kcg_equ & kcg_comp_RadioMetadata_T_Common_Types_Pkg(
      &kcg_c1->radioMetadata,
      &kcg_c2->radioMetadata);
  kcg_equ = kcg_equ & (kcg_c1->source == kcg_c2->source);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_struct_172526 */

#ifdef kcg_use_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg
kcg_bool kcg_comp_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg(
  Message_EVC_to_Train_Interface_T_TIU_Types_Pkg *kcg_c1,
  Message_EVC_to_Train_Interface_T_TIU_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ &
    kcg_comp_Change_of_allowed_current_consumption_T_TIU_Types_Pkg(
      &kcg_c1->change_of_allowed_current_consumption,
      &kcg_c2->change_of_allowed_current_consumption);
  kcg_equ = kcg_equ & kcg_comp_Passenger_door_control_info_T_TIU_Types_Pkg(
      &kcg_c1->passenger_door_control_info,
      &kcg_c2->passenger_door_control_info);
  kcg_equ = kcg_equ & kcg_comp_Change_traction_system_T_TIU_Types_Pkg(
      &kcg_c1->change_traction_system,
      &kcg_c2->change_traction_system);
  kcg_equ = kcg_equ & kcg_comp_Type_I_train_commands_T_TIU_Types_Pkg(
      &kcg_c1->type_I_train_commands,
      &kcg_c2->type_I_train_commands);
  kcg_equ = kcg_equ & kcg_comp_Brake_inhibition_command_T_TIU_Types_Pkg(
      &kcg_c1->brake_inhibition,
      &kcg_c2->brake_inhibition);
  kcg_equ = kcg_equ & kcg_comp_Brake_command_T_TIU_Types_Pkg(
      &kcg_c1->brake_command,
      &kcg_c2->brake_command);
  kcg_equ = kcg_equ & kcg_comp_Isolation_Status_T_TIU_Types_Pkg(
      &kcg_c1->isolation_status,
      &kcg_c2->isolation_status);
  return kcg_equ;
}
#endif /* kcg_use_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg */

#ifdef kcg_use_outPackets_T_Common_Types_Pkg
kcg_bool kcg_comp_outPackets_T_Common_Types_Pkg(
  outPackets_T_Common_Types_Pkg *kcg_c1,
  outPackets_T_Common_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(
      &kcg_c1->p11,
      &kcg_c2->p11);
  kcg_equ = kcg_equ &
    kcg_comp_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg(
      &kcg_c1->p9,
      &kcg_c2->p9);
  kcg_equ = kcg_equ & kcg_comp_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(
      &kcg_c1->p5,
      &kcg_c2->p5);
  kcg_equ = kcg_equ & kcg_comp_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(
      &kcg_c1->p4,
      &kcg_c2->p4);
  kcg_equ = kcg_equ &
    kcg_comp_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(
      &kcg_c1->p3,
      &kcg_c2->p3);
  kcg_equ = kcg_equ & kcg_comp_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
      &kcg_c1->p1,
      &kcg_c2->p1);
  kcg_equ = kcg_equ & kcg_comp_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
      &kcg_c1->p0,
      &kcg_c2->p0);
  return kcg_equ;
}
#endif /* kcg_use_outPackets_T_Common_Types_Pkg */

#ifdef kcg_use_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg
kcg_bool kcg_comp_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
  DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c1,
  DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_request == kcg_c2->m_request);
  kcg_equ = kcg_equ & (kcg_c1->systemTime == kcg_c2->systemTime);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg */

#ifdef kcg_use_PosRepParams_T
kcg_bool kcg_comp_PosRepParams_T(PosRepParams_T *kcg_c1, PosRepParams_T *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array_169739(
      &kcg_c1->m_IncrementalDistancesAndQualifiers,
      &kcg_c2->m_IncrementalDistancesAndQualifiers);
  kcg_equ = kcg_equ & (kcg_c1->m_NumberOfIncrementalDistancesAndQualifiers ==
      kcg_c2->m_NumberOfIncrementalDistancesAndQualifiers);
  kcg_equ = kcg_equ & (kcg_c1->m_loc == kcg_c2->m_loc);
  kcg_equ = kcg_equ & (kcg_c1->d_cycloc == kcg_c2->d_cycloc);
  kcg_equ = kcg_equ & (kcg_c1->t_cycloc == kcg_c2->t_cycloc);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  return kcg_equ;
}
#endif /* kcg_use_PosRepParams_T */

#ifdef kcg_use_P255_trackside_int_T_TM
kcg_bool kcg_comp_P255_trackside_int_T_TM(
  P255_trackside_int_T_TM *kcg_c1,
  P255_trackside_int_T_TM *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P255_trackside_int_T_TM */

#ifdef kcg_use_Brake_pressure_value_T_TIU_Types_Pkg
kcg_bool kcg_comp_Brake_pressure_value_T_TIU_Types_Pkg(
  Brake_pressure_value_T_TIU_Types_Pkg *kcg_c1,
  Brake_pressure_value_T_TIU_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->pressure == kcg_c2->pressure);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_Brake_pressure_value_T_TIU_Types_Pkg */

#ifdef kcg_use_P63_BaliseInSRAuthority_T_Packet_Types_Pkg
kcg_bool kcg_comp_P63_BaliseInSRAuthority_T_Packet_Types_Pkg(
  P63_BaliseInSRAuthority_T_Packet_Types_Pkg *kcg_c1,
  P63_BaliseInSRAuthority_T_Packet_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_bg == kcg_c2->nid_bg);
  kcg_equ = kcg_equ & (kcg_c1->nid_c == kcg_c2->nid_c);
  kcg_equ = kcg_equ & (kcg_c1->q_newcountry == kcg_c2->q_newcountry);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P63_BaliseInSRAuthority_T_Packet_Types_Pkg */

#ifdef kcg_use_Clock_T
kcg_bool kcg_comp_Clock_T(Clock_T *kcg_c1, Clock_T *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_Value == kcg_c2->m_Value);
  return kcg_equ;
}
#endif /* kcg_use_Clock_T */

#ifdef kcg_use_LocWithInAcc_T_Obu_BasicTypes_Pkg
kcg_bool kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg(
  LocWithInAcc_T_Obu_BasicTypes_Pkg *kcg_c1,
  LocWithInAcc_T_Obu_BasicTypes_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->d_max == kcg_c2->d_max);
  kcg_equ = kcg_equ & (kcg_c1->d_min == kcg_c2->d_min);
  kcg_equ = kcg_equ & (kcg_c1->nominal == kcg_c2->nominal);
  return kcg_equ;
}
#endif /* kcg_use_LocWithInAcc_T_Obu_BasicTypes_Pkg */

#ifdef kcg_use_TrainPosRaw_T_InfraLib
kcg_bool kcg_comp_TrainPosRaw_T_InfraLib(
  TrainPosRaw_T_InfraLib *kcg_c1,
  TrainPosRaw_T_InfraLib *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->TrainPosCalibrated ==
      kcg_c2->TrainPosCalibrated);
  kcg_equ = kcg_equ & (kcg_c1->OffsetTotal == kcg_c2->OffsetTotal);
  kcg_equ = kcg_equ & (kcg_c1->TrainPos_in == kcg_c2->TrainPos_in);
  return kcg_equ;
}
#endif /* kcg_use_TrainPosRaw_T_InfraLib */

#ifdef kcg_use_DataForDMI_t_TrackAtlasTypes
kcg_bool kcg_comp_DataForDMI_t_TrackAtlasTypes(
  DataForDMI_t_TrackAtlasTypes *kcg_c1,
  DataForDMI_t_TrackAtlasTypes *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->MRSP_updated == kcg_c2->MRSP_updated);
  kcg_equ = kcg_equ & kcg_comp_MRSP_Profile_t_TrackAtlasTypes(
      &kcg_c1->MRSP,
      &kcg_c2->MRSP);
  kcg_equ = kcg_equ & (kcg_c1->Gradient_profile_updated ==
      kcg_c2->Gradient_profile_updated);
  kcg_equ = kcg_equ & kcg_comp_GradientProfile_for_DMI_t_TrackAtlasTypes(
      &kcg_c1->GradientProfile,
      &kcg_c2->GradientProfile);
  return kcg_equ;
}
#endif /* kcg_use_DataForDMI_t_TrackAtlasTypes */

#ifdef kcg_use_Brake_status_T_TIU_Types_Pkg
kcg_bool kcg_comp_Brake_status_T_TIU_Types_Pkg(
  Brake_status_T_TIU_Types_Pkg *kcg_c1,
  Brake_status_T_TIU_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_additionalbrake_st ==
      kcg_c2->m_additionalbrake_st);
  kcg_equ = kcg_equ & (kcg_c1->m_electropneumaticbrake_st ==
      kcg_c2->m_electropneumaticbrake_st);
  kcg_equ = kcg_equ & (kcg_c1->m_magneticshoebrake_st ==
      kcg_c2->m_magneticshoebrake_st);
  kcg_equ = kcg_equ & (kcg_c1->m_eddycurrentbrake_st ==
      kcg_c2->m_eddycurrentbrake_st);
  kcg_equ = kcg_equ & (kcg_c1->m_regenerativebrake_st ==
      kcg_c2->m_regenerativebrake_st);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_Brake_status_T_TIU_Types_Pkg */

#ifdef kcg_use_T_LevelTransition_Level_And_Mode_Types_Pkg
kcg_bool kcg_comp_T_LevelTransition_Level_And_Mode_Types_Pkg(
  T_LevelTransition_Level_And_Mode_Types_Pkg *kcg_c1,
  T_LevelTransition_Level_And_Mode_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->referenceLocation == kcg_c2->referenceLocation);
  kcg_equ = kcg_equ & (kcg_c1->LRBG == kcg_c2->LRBG);
  kcg_equ = kcg_equ & kcg_comp_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg(
      &kcg_c1->transition,
      &kcg_c2->transition);
  kcg_equ = kcg_equ & (kcg_c1->is_set == kcg_c2->is_set);
  return kcg_equ;
}
#endif /* kcg_use_T_LevelTransition_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store
kcg_bool kcg_comp_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(
  NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store *kcg_c1,
  NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nfree == kcg_c2->nfree);
  kcg_equ = kcg_equ & (kcg_c1->nid_em == kcg_c2->nid_em);
  kcg_equ = kcg_equ & (kcg_c1->handled == kcg_c2->handled);
  return kcg_equ;
}
#endif /* kcg_use_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store */

#ifdef kcg_use_LocationBasedEvents_T_ProvidePositionReport_Pkg
kcg_bool kcg_comp_LocationBasedEvents_T_ProvidePositionReport_Pkg(
  LocationBasedEvents_T_ProvidePositionReport_Pkg *kcg_c1,
  LocationBasedEvents_T_ProvidePositionReport_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->maxSafeFrontEndPassed ==
      kcg_c2->maxSafeFrontEndPassed);
  kcg_equ = kcg_equ & (kcg_c1->minSafeRearEndPassed ==
      kcg_c2->minSafeRearEndPassed);
  return kcg_equ;
}
#endif /* kcg_use_LocationBasedEvents_T_ProvidePositionReport_Pkg */

#ifdef kcg_use_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg
kcg_bool kcg_comp_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg(
  T_ERTMS_capabilities_Level_And_Mode_Types_Pkg *kcg_c1,
  T_ERTMS_capabilities_Level_And_Mode_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->L3 == kcg_c2->L3);
  kcg_equ = kcg_equ & (kcg_c1->L2 == kcg_c2->L2);
  kcg_equ = kcg_equ & (kcg_c1->L1 == kcg_c2->L1);
  kcg_equ = kcg_equ & (kcg_c1->L0 == kcg_c2->L0);
  kcg_equ = kcg_equ & (kcg_c1->NTC == kcg_c2->NTC);
  return kcg_equ;
}
#endif /* kcg_use_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg
kcg_bool kcg_comp_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg(
  m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg *kcg_c1,
  m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->lrbg == kcg_c2->lrbg);
  kcg_equ = kcg_equ & kcg_comp_RBC_Id_T_Common_Types_Pkg(
      &kcg_c1->origin,
      &kcg_c2->origin);
  kcg_equ = kcg_equ & (kcg_c1->msgSrc == kcg_c2->msgSrc);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg */

#ifdef kcg_use_odometryFactors_T_Toolbox
kcg_bool kcg_comp_odometryFactors_T_Toolbox(
  odometryFactors_T_Toolbox *kcg_c1,
  odometryFactors_T_Toolbox *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->o_max == kcg_c2->o_max);
  kcg_equ = kcg_equ & (kcg_c1->o_min == kcg_c2->o_min);
  kcg_equ = kcg_equ & (kcg_c1->o_nominal == kcg_c2->o_nominal);
  return kcg_equ;
}
#endif /* kcg_use_odometryFactors_T_Toolbox */

#ifdef kcg_use_StaticSpeedSection_t_TrackAtlasTypes
kcg_bool kcg_comp_StaticSpeedSection_t_TrackAtlasTypes(
  StaticSpeedSection_t_TrackAtlasTypes *kcg_c1,
  StaticSpeedSection_t_TrackAtlasTypes *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->v_static == kcg_c2->v_static);
  kcg_equ = kcg_equ & (kcg_c1->q_train_length_corr ==
      kcg_c2->q_train_length_corr);
  kcg_equ = kcg_equ & (kcg_c1->d_static_LRBG == kcg_c2->d_static_LRBG);
  kcg_equ = kcg_equ & (kcg_c1->d_static_abs == kcg_c2->d_static_abs);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_StaticSpeedSection_t_TrackAtlasTypes */

#ifdef kcg_use_P003_permanent_data_T_TM_baseline2
kcg_bool kcg_comp_P003_permanent_data_T_TM_baseline2(
  P003_permanent_data_T_TM_baseline2 *kcg_c1,
  P003_permanent_data_T_TM_baseline2 *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->v_nvlimsuperv == kcg_c2->v_nvlimsuperv);
  kcg_equ = kcg_equ & (kcg_c1->q_nvlocacc == kcg_c2->q_nvlocacc);
  return kcg_equ;
}
#endif /* kcg_use_P003_permanent_data_T_TM_baseline2 */

#ifdef kcg_use_P015_section_int_T_TM
kcg_bool kcg_comp_P015_section_int_T_TM(
  P015_section_int_T_TM *kcg_c1,
  P015_section_int_T_TM *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->D_SECTIONTIMERSTOPLOC ==
      kcg_c2->D_SECTIONTIMERSTOPLOC);
  kcg_equ = kcg_equ & (kcg_c1->T_SECTIONTIMER == kcg_c2->T_SECTIONTIMER);
  kcg_equ = kcg_equ & (kcg_c1->Q_SECTIONTIMER == kcg_c2->Q_SECTIONTIMER);
  kcg_equ = kcg_equ & (kcg_c1->L_SECTION == kcg_c2->L_SECTION);
  return kcg_equ;
}
#endif /* kcg_use_P015_section_int_T_TM */

#ifdef kcg_use_P45_RadioNetworkRegistration_T_Packet_Types_Pkg
kcg_bool kcg_comp_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg *kcg_c1,
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_mn == kcg_c2->nid_mn);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P45_RadioNetworkRegistration_T_Packet_Types_Pkg */

#ifdef kcg_use_DMI_train_id_T_DMI_Types_Pkg
kcg_bool kcg_comp_DMI_train_id_T_DMI_Types_Pkg(
  DMI_train_id_T_DMI_Types_Pkg *kcg_c1,
  DMI_train_id_T_DMI_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->dig5 == kcg_c2->dig5);
  kcg_equ = kcg_equ & (kcg_c1->dig4 == kcg_c2->dig4);
  kcg_equ = kcg_equ & (kcg_c1->dig3 == kcg_c2->dig3);
  kcg_equ = kcg_equ & (kcg_c1->dig2 == kcg_c2->dig2);
  kcg_equ = kcg_equ & (kcg_c1->dig1 == kcg_c2->dig1);
  kcg_equ = kcg_equ & (kcg_c1->number == kcg_c2->number);
  return kcg_equ;
}
#endif /* kcg_use_DMI_train_id_T_DMI_Types_Pkg */

#ifdef kcg_use_radioManagementMessage_T_Common_Types_Pkg
kcg_bool kcg_comp_radioManagementMessage_T_Common_Types_Pkg(
  radioManagementMessage_T_Common_Types_Pkg *kcg_c1,
  radioManagementMessage_T_Common_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_RBC_Id_T_Common_Types_Pkg(
      &kcg_c1->sendingRBC,
      &kcg_c2->sendingRBC);
  kcg_equ = kcg_equ & kcg_comp_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
      &kcg_c1->p45,
      &kcg_c2->p45);
  kcg_equ = kcg_equ & kcg_comp_P42_SessionManagement_T_Packet_Types_Pkg(
      &kcg_c1->p42,
      &kcg_c2->p42);
  kcg_equ = kcg_equ & kcg_comp_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
      &kcg_c1->Radio_Common_Header,
      &kcg_c2->Radio_Common_Header);
  kcg_equ = kcg_equ & (kcg_c1->messageSource == kcg_c2->messageSource);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_radioManagementMessage_T_Common_Types_Pkg */

#ifdef kcg_use_RadioMessage_T_Radio_Types_Pkg
kcg_bool kcg_comp_RadioMessage_T_Radio_Types_Pkg(
  RadioMessage_T_Radio_Types_Pkg *kcg_c1,
  RadioMessage_T_Radio_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_RBC_Id_T_Common_Types_Pkg(
      &kcg_c1->sendingRBC,
      &kcg_c2->sendingRBC);
  kcg_equ = kcg_equ & kcg_comp_CompressedPackets_T_Common_Types_Pkg(
      &kcg_c1->packets,
      &kcg_c2->packets);
  kcg_equ = kcg_equ & kcg_comp_RadioMetadata_T_Common_Types_Pkg(
      &kcg_c1->radioMetadata,
      &kcg_c2->radioMetadata);
  kcg_equ = kcg_equ & kcg_comp_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
      &kcg_c1->header,
      &kcg_c2->header);
  kcg_equ = kcg_equ & (kcg_c1->consistencyError == kcg_c2->consistencyError);
  kcg_equ = kcg_equ & (kcg_c1->present == kcg_c2->present);
  return kcg_equ;
}
#endif /* kcg_use_RadioMessage_T_Radio_Types_Pkg */

#ifdef kcg_use_infoFromLinking_T_TrainPosition_Types_Pck
kcg_bool kcg_comp_infoFromLinking_T_TrainPosition_Types_Pck(
  infoFromLinking_T_TrainPosition_Types_Pck *kcg_c1,
  infoFromLinking_T_TrainPosition_Types_Pck *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_LinkedBG_T_BG_Types_Pkg(
      &kcg_c1->linkingInfo,
      &kcg_c2->linkingInfo);
  kcg_equ = kcg_equ & kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &kcg_c1->d_link,
      &kcg_c2->d_link);
  kcg_equ = kcg_equ & kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &kcg_c1->expectedLocation,
      &kcg_c2->expectedLocation);
  kcg_equ = kcg_equ & (kcg_c1->nid_c_fromLinkingBG ==
      kcg_c2->nid_c_fromLinkingBG);
  kcg_equ = kcg_equ & (kcg_c1->nid_bg_fromLinkingBG ==
      kcg_c2->nid_bg_fromLinkingBG);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_infoFromLinking_T_TrainPosition_Types_Pck */

#ifdef kcg_use_API_TrackSideInput_T_API_Msg_Pkg
kcg_bool kcg_comp_API_TrackSideInput_T_API_Msg_Pkg(
  API_TrackSideInput_T_API_Msg_Pkg *kcg_c1,
  API_TrackSideInput_T_API_Msg_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_CompressedPackets_T_Common_Types_Pkg(
      &kcg_c1->packets,
      &kcg_c2->packets);
  kcg_equ = kcg_equ & kcg_comp_API_RadioMsgHeader_T_API_Msg_Pkg(
      &kcg_c1->rtm_msg,
      &kcg_c2->rtm_msg);
  kcg_equ = kcg_equ & kcg_comp_API_TelegramHeader_T_API_Msg_Pkg(
      &kcg_c1->btm_msg,
      &kcg_c2->btm_msg);
  kcg_equ = kcg_equ & (kcg_c1->msg_type == kcg_c2->msg_type);
  kcg_equ = kcg_equ & (kcg_c1->systemTimeMsgReceived ==
      kcg_c2->systemTimeMsgReceived);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_API_TrackSideInput_T_API_Msg_Pkg */

#ifdef kcg_use_RBC_Data_T_RBC_DataBus_Pkg
kcg_bool kcg_comp_RBC_Data_T_RBC_DataBus_Pkg(
  RBC_Data_T_RBC_DataBus_Pkg *kcg_c1,
  RBC_Data_T_RBC_DataBus_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_CompressedRadioMessage_TM(
      &kcg_c1->lastSentTrackTrainMessage,
      &kcg_c2->lastSentTrackTrainMessage);
  kcg_equ = kcg_equ & kcg_comp_Clock_T(&kcg_c1->clockk, &kcg_c2->clockk);
  kcg_equ = kcg_equ & kcg_comp_RadioTrackTrainMessageQueue_T(
      &kcg_c1->messageQueue,
      &kcg_c2->messageQueue);
  kcg_equ = kcg_equ & kcg_comp_array_169103(
      &kcg_c1->diagnostic,
      &kcg_c2->diagnostic);
  kcg_equ = kcg_equ & kcg_comp_DynamicConfig_T(
      &kcg_c1->config,
      &kcg_c2->config);
  kcg_equ = kcg_equ & kcg_comp_SessionManagement_T(
      &kcg_c1->session,
      &kcg_c2->session);
  return kcg_equ;
}
#endif /* kcg_use_RBC_Data_T_RBC_DataBus_Pkg */

#ifdef kcg_use_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg
kcg_bool kcg_comp_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg *kcg_c1,
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ &
    kcg_comp_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg(
      &kcg_c1->type_I_train_and_brake_inhibition,
      &kcg_c2->type_I_train_and_brake_inhibition);
  kcg_equ = kcg_equ & kcg_comp_trainData_T_TIU_Types_Pkg(
      &kcg_c1->train_data_info,
      &kcg_c2->train_data_info);
  kcg_equ = kcg_equ & (kcg_c1->train_data_entry_type ==
      kcg_c2->train_data_entry_type);
  kcg_equ = kcg_equ & kcg_comp_Brake_pressure_value_T_TIU_Types_Pkg(
      &kcg_c1->brake_pressure,
      &kcg_c2->brake_pressure);
  kcg_equ = kcg_equ & kcg_comp_Brake_status_T_TIU_Types_Pkg(
      &kcg_c1->brake_status,
      &kcg_c2->brake_status);
  kcg_equ = kcg_equ & kcg_comp_Mode_control_and_train_status_T_TIU_Types_Pkg(
      &kcg_c1->train_status,
      &kcg_c2->train_status);
  return kcg_equ;
}
#endif /* kcg_use_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg */

#ifdef kcg_use_RBC_Id_T_Common_Types_Pkg
kcg_bool kcg_comp_RBC_Id_T_Common_Types_Pkg(
  RBC_Id_T_Common_Types_Pkg *kcg_c1,
  RBC_Id_T_Common_Types_Pkg *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->device_id == kcg_c2->device_id);
  kcg_equ = kcg_equ & (kcg_c1->rbc_id == kcg_c2->rbc_id);
  kcg_equ = kcg_equ & (kcg_c1->nid_c == kcg_c2->nid_c);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_RBC_Id_T_Common_Types_Pkg */

#ifdef kcg_use_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store
kcg_bool kcg_comp_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
  NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store *kcg_c1,
  NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store *kcg_c2)
{
  static kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array_170353(&kcg_c1->items, &kcg_c2->items);
  kcg_equ = kcg_equ & (kcg_c1->nfree == kcg_c2->nfree);
  return kcg_equ;
}
#endif /* kcg_use_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store */

/* $**************** KCG Version 6.4 (build i21) ****************
** kcg_types.c
** Generation date: 2015-11-20T14:27:47
*************************************************************$ */

