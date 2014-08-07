/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/040_Model/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/TrainPosition/CalculateTrainPosition/KCG/config.txt
** Generation date: 2014-08-07T09:21:25
*************************************************************$ */

#include "kcg_types.h"

#ifdef kcg_use_AVar111_TrainToTrack
kcg_bool kcg_comp_AVar111_TrainToTrack(
  AVar111_TrainToTrack *kcg_c1,
  AVar111_TrainToTrack *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_Var111_TrainToTrack(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_AVar111_TrainToTrack */

#ifdef kcg_use_AVar34_TrackToTrain
kcg_bool kcg_comp_AVar34_TrackToTrain(
  AVar34_TrackToTrain *kcg_c1,
  AVar34_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_Var34_TrackToTrain(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_AVar34_TrackToTrain */

#ifdef kcg_use_TelegramHeaderArray_T_BG_Types_Pkg
kcg_bool kcg_comp_TelegramHeaderArray_T_BG_Types_Pkg(
  TelegramHeaderArray_T_BG_Types_Pkg *kcg_c1,
  TelegramHeaderArray_T_BG_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 8; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_TelegramHeaderFlag_T_BG_Types_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_TelegramHeaderArray_T_BG_Types_Pkg */

#ifdef kcg_use_array_10288
kcg_bool kcg_comp_array_10288(array_10288 *kcg_c1, array_10288 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct_10441(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_10288 */

#ifdef kcg_use_AVar110_TrainToTrack
kcg_bool kcg_comp_AVar110_TrainToTrack(
  AVar110_TrainToTrack *kcg_c1,
  AVar110_TrainToTrack *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_Var110_TrainToTrack(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_AVar110_TrainToTrack */

#ifdef kcg_use_ListOfBG_BG_Types_Pkg
kcg_bool kcg_comp_ListOfBG_BG_Types_Pkg(
  ListOfBG_BG_Types_Pkg *kcg_c1,
  ListOfBG_BG_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 20; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_CurrentLRBG_BG_Types_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_ListOfBG_BG_Types_Pkg */

#ifdef kcg_use_AVar30_TrackToTrain
kcg_bool kcg_comp_AVar30_TrackToTrain(
  AVar30_TrackToTrain *kcg_c1,
  AVar30_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_Var30_TrackToTrain(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_AVar30_TrackToTrain */

#ifdef kcg_use_positionedBGs_T_TrainPosition_Types_Pck
kcg_bool kcg_comp_positionedBGs_T_TrainPosition_Types_Pck(
  positionedBGs_T_TrainPosition_Types_Pck *kcg_c1,
  positionedBGs_T_TrainPosition_Types_Pck *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 64; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_positionedBG_T_TrainPosition_Types_Pck(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_positionedBGs_T_TrainPosition_Types_Pck */

#ifdef kcg_use_AVar580_TrackToTrain
kcg_bool kcg_comp_AVar580_TrackToTrain(
  AVar580_TrackToTrain *kcg_c1,
  AVar580_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_Var580_TrackToTrain(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_AVar580_TrackToTrain */

#ifdef kcg_use_AVar130_TrackToTrain
kcg_bool kcg_comp_AVar130_TrackToTrain(
  AVar130_TrackToTrain *kcg_c1,
  AVar130_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_Var130_TrackToTrain(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_AVar130_TrackToTrain */

#ifdef kcg_use_array_10739
kcg_bool kcg_comp_array_10739(array_10739 *kcg_c1, array_10739 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct_11039(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_10739 */

#ifdef kcg_use_array_10743
kcg_bool kcg_comp_array_10743(array_10743 *kcg_c1, array_10743 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct_11012(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_10743 */

#ifdef kcg_use_AVar690_TrackToTrain
kcg_bool kcg_comp_AVar690_TrackToTrain(
  AVar690_TrackToTrain *kcg_c1,
  AVar690_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_Var690_TrackToTrain(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_AVar690_TrackToTrain */

#ifdef kcg_use_AVar670_TrackToTrain
kcg_bool kcg_comp_AVar670_TrackToTrain(
  AVar670_TrackToTrain *kcg_c1,
  AVar670_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_Var670_TrackToTrain(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_AVar670_TrackToTrain */

#ifdef kcg_use_AVar50_TrackToTrain
kcg_bool kcg_comp_AVar50_TrackToTrain(
  AVar50_TrackToTrain *kcg_c1,
  AVar50_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_Var50_TrackToTrain(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_AVar50_TrackToTrain */

#ifdef kcg_use_AVar30_TrainToTrack
kcg_bool kcg_comp_AVar30_TrainToTrack(
  AVar30_TrainToTrack *kcg_c1,
  AVar30_TrainToTrack *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_Var30_TrainToTrack(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_AVar30_TrainToTrack */

#ifdef kcg_use_array_11035
kcg_bool kcg_comp_array_11035(array_11035 *kcg_c1, array_11035 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct_10421(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_11035 */

#ifdef kcg_use_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck
kcg_bool kcg_comp_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck(
  linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck *kcg_c1,
  linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_positionedBG_T_TrainPosition_Types_Pck(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck */

#ifdef kcg_use_LinkedBGs_T_BG_Types_Pkg
kcg_bool kcg_comp_LinkedBGs_T_BG_Types_Pkg(
  LinkedBGs_T_BG_Types_Pkg *kcg_c1,
  LinkedBGs_T_BG_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 32; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_LinkedBG_T_BG_Types_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_LinkedBGs_T_BG_Types_Pkg */

#ifdef kcg_use_AVar680_TrackToTrain
kcg_bool kcg_comp_AVar680_TrackToTrain(
  AVar680_TrackToTrain *kcg_c1,
  AVar680_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_Var680_TrackToTrain(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_AVar680_TrackToTrain */

#ifdef kcg_use_AVar32_TrackToTrain
kcg_bool kcg_comp_AVar32_TrackToTrain(
  AVar32_TrackToTrain *kcg_c1,
  AVar32_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_Var32_TrackToTrain(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_AVar32_TrackToTrain */

#ifdef kcg_use_AVar520_TrackToTrain
kcg_bool kcg_comp_AVar520_TrackToTrain(
  AVar520_TrackToTrain *kcg_c1,
  AVar520_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_Var520_TrackToTrain(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_AVar520_TrackToTrain */

#ifdef kcg_use_AVar700_TrackToTrain
kcg_bool kcg_comp_AVar700_TrackToTrain(
  AVar700_TrackToTrain *kcg_c1,
  AVar700_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_Var700_TrackToTrain(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_AVar700_TrackToTrain */

#ifdef kcg_use_AVar790_TrackToTrain
kcg_bool kcg_comp_AVar790_TrackToTrain(
  AVar790_TrackToTrain *kcg_c1,
  AVar790_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_Var790_TrackToTrain(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_AVar790_TrackToTrain */

#ifdef kcg_use_AVar800_TrackToTrain
kcg_bool kcg_comp_AVar800_TrackToTrain(
  AVar800_TrackToTrain *kcg_c1,
  AVar800_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_Var800_TrackToTrain(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_AVar800_TrackToTrain */

#ifdef kcg_use_AVar271_TrackToTrain
kcg_bool kcg_comp_AVar271_TrackToTrain(
  AVar271_TrackToTrain *kcg_c1,
  AVar271_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_Var271_TrackToTrain(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_AVar271_TrackToTrain */

#ifdef kcg_use_AVar511_TrackToTrain
kcg_bool kcg_comp_AVar511_TrackToTrain(
  AVar511_TrackToTrain *kcg_c1,
  AVar511_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_Var511_TrackToTrain(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_AVar511_TrackToTrain */

#ifdef kcg_use_AVar410_TrackToTrain
kcg_bool kcg_comp_AVar410_TrackToTrain(
  AVar410_TrackToTrain *kcg_c1,
  AVar410_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_Var410_TrackToTrain(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_AVar410_TrackToTrain */

#ifdef kcg_use_array_11277
kcg_bool kcg_comp_array_11277(array_11277 *kcg_c1, array_11277 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_struct_11020(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_11277 */

#ifdef kcg_use_AVar460_TrackToTrain
kcg_bool kcg_comp_AVar460_TrackToTrain(
  AVar460_TrackToTrain *kcg_c1,
  AVar460_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_Var460_TrackToTrain(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_AVar460_TrackToTrain */

#ifdef kcg_use_AVar210_TrackToTrain
kcg_bool kcg_comp_AVar210_TrackToTrain(
  AVar210_TrackToTrain *kcg_c1,
  AVar210_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 33; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_Var210_TrackToTrain(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_AVar210_TrackToTrain */

#ifdef kcg_use_Var790_TrackToTrain
kcg_bool kcg_comp_Var790_TrackToTrain(
  Var790_TrackToTrain *kcg_c1,
  Var790_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->M_POSITION == kcg_c2->M_POSITION);
  kcg_equ = kcg_equ & (kcg_c1->Q_MPOSITION == kcg_c2->Q_MPOSITION);
  kcg_equ = kcg_equ & (kcg_c1->D_POSOFF == kcg_c2->D_POSOFF);
  kcg_equ = kcg_equ & (kcg_c1->NID_BG == kcg_c2->NID_BG);
  kcg_equ = kcg_equ & (kcg_c1->NID_C == kcg_c2->NID_C);
  kcg_equ = kcg_equ & (kcg_c1->Q_NEWCOUNTRY == kcg_c2->Q_NEWCOUNTRY);
  return kcg_equ;
}
#endif /* kcg_use_Var790_TrackToTrain */

#ifdef kcg_use_Data_used_by_applications_outside_the_ERTMS_or_ETCS_system_TrainToTrack
kcg_bool kcg_comp_Data_used_by_applications_outside_the_ERTMS_or_ETCS_system_TrainToTrack(
  Data_used_by_applications_outside_the_ERTMS_or_ETCS_system_TrainToTrack *kcg_c1,
  Data_used_by_applications_outside_the_ERTMS_or_ETCS_system_TrainToTrack *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Other_data_depending_on__NID_XUSER ==
      kcg_c2->Other_data_depending_on__NID_XUSER);
  kcg_equ = kcg_equ & (kcg_c1->NID_XUSER == kcg_c2->NID_XUSER);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_Data_used_by_applications_outside_the_ERTMS_or_ETCS_system_TrainToTrack */

#ifdef kcg_use_LocWithInAcc_T_Obu_BasicTypes_Pkg
kcg_bool kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg(
  LocWithInAcc_T_Obu_BasicTypes_Pkg *kcg_c1,
  LocWithInAcc_T_Obu_BasicTypes_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->d_max == kcg_c2->d_max);
  kcg_equ = kcg_equ & (kcg_c1->d_min == kcg_c2->d_min);
  kcg_equ = kcg_equ & (kcg_c1->nominal == kcg_c2->nominal);
  return kcg_equ;
}
#endif /* kcg_use_LocWithInAcc_T_Obu_BasicTypes_Pkg */

#ifdef kcg_use_Var30_TrackToTrain
kcg_bool kcg_comp_Var30_TrackToTrain(
  Var30_TrackToTrain *kcg_c1,
  Var30_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->NID_C == kcg_c2->NID_C);
  return kcg_equ;
}
#endif /* kcg_use_Var30_TrackToTrain */

#ifdef kcg_use_odometry_T_Obu_BasicTypes_Pkg
kcg_bool kcg_comp_odometry_T_Obu_BasicTypes_Pkg(
  odometry_T_Obu_BasicTypes_Pkg *kcg_c1,
  odometry_T_Obu_BasicTypes_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->speed == kcg_c2->speed);
  kcg_equ = kcg_equ & kcg_comp_OdometryLocations_T_Obu_BasicTypes_Pkg(
      &kcg_c1->odo,
      &kcg_c2->odo);
  kcg_equ = kcg_equ & (kcg_c1->timestamp == kcg_c2->timestamp);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_odometry_T_Obu_BasicTypes_Pkg */

#ifdef kcg_use_Level_23_transition_information_TrainToTrack
kcg_bool kcg_comp_Level_23_transition_information_TrainToTrack(
  Level_23_transition_information_TrainToTrack *kcg_c1,
  Level_23_transition_information_TrainToTrack *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->NID_LTRBG == kcg_c2->NID_LTRBG);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_Level_23_transition_information_TrainToTrack */

#ifdef kcg_use_RBCReport_T_BG_Types_Pkg
kcg_bool kcg_comp_RBCReport_T_BG_Types_Pkg(
  RBCReport_T_BG_Types_Pkg *kcg_c1,
  RBCReport_T_BG_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_Train_Position_Report_Radio_TrainToTrack(
      &kcg_c1->train_position_report,
      &kcg_c2->train_position_report);
  return kcg_equ;
}
#endif /* kcg_use_RBCReport_T_BG_Types_Pkg */

#ifdef kcg_use_RBCOrientationReport_T_BG_Types_Pkg
kcg_bool kcg_comp_RBCOrientationReport_T_BG_Types_Pkg(
  RBCOrientationReport_T_BG_Types_Pkg *kcg_c1,
  RBCOrientationReport_T_BG_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ &
    kcg_comp_Assignment_of_coordinate_system_Radio_TrackToTrain(
      &kcg_c1->assignment_of_coordinate_system,
      &kcg_c2->assignment_of_coordinate_system);
  return kcg_equ;
}
#endif /* kcg_use_RBCOrientationReport_T_BG_Types_Pkg */

#ifdef kcg_use_End_of_Information_BothWays
kcg_bool kcg_comp_End_of_Information_BothWays(
  End_of_Information_BothWays *kcg_c1,
  End_of_Information_BothWays *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_End_of_Information_BothWays */

#ifdef kcg_use_Request_for_Shunting_Radio_TrainToTrack
kcg_bool kcg_comp_Request_for_Shunting_Radio_TrainToTrack(
  Request_for_Shunting_Radio_TrainToTrack *kcg_c1,
  Request_for_Shunting_Radio_TrainToTrack *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Request_for_Shunting_OptionalPackets ==
      kcg_c2->Request_for_Shunting_OptionalPackets);
  kcg_equ = kcg_equ & (kcg_c1->PADDING1 == kcg_c2->PADDING1);
  kcg_equ = kcg_equ & (kcg_c1->NID_ENGINE == kcg_c2->NID_ENGINE);
  kcg_equ = kcg_equ & (kcg_c1->T_TRAIN == kcg_c2->T_TRAIN);
  kcg_equ = kcg_equ & (kcg_c1->L_MESSAGE == kcg_c2->L_MESSAGE);
  kcg_equ = kcg_equ & (kcg_c1->NID_MESSAGE == kcg_c2->NID_MESSAGE);
  return kcg_equ;
}
#endif /* kcg_use_Request_for_Shunting_Radio_TrainToTrack */

#ifdef kcg_use_SVar32_TrackToTrain
kcg_bool kcg_comp_SVar32_TrackToTrain(
  SVar32_TrackToTrain *kcg_c1,
  SVar32_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_AVar32_TrackToTrain(
      &kcg_c1->Array,
      &kcg_c2->Array);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER == kcg_c2->N_ITER);
  return kcg_equ;
}
#endif /* kcg_use_SVar32_TrackToTrain */

#ifdef kcg_use_struct_10297
kcg_bool kcg_comp_struct_10297(struct_10297 *kcg_c1, struct_10297 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array_11035(&kcg_c1->Array, &kcg_c2->Array);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER == kcg_c2->N_ITER);
  return kcg_equ;
}
#endif /* kcg_use_struct_10297 */

#ifdef kcg_use_SVar34_TrackToTrain
kcg_bool kcg_comp_SVar34_TrackToTrain(
  SVar34_TrackToTrain *kcg_c1,
  SVar34_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_AVar34_TrackToTrain(
      &kcg_c1->Array,
      &kcg_c2->Array);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER == kcg_c2->N_ITER);
  return kcg_equ;
}
#endif /* kcg_use_SVar34_TrackToTrain */

#ifdef kcg_use_SVar50_TrackToTrain
kcg_bool kcg_comp_SVar50_TrackToTrain(
  SVar50_TrackToTrain *kcg_c1,
  SVar50_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_AVar50_TrackToTrain(
      &kcg_c1->Array,
      &kcg_c2->Array);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER == kcg_c2->N_ITER);
  return kcg_equ;
}
#endif /* kcg_use_SVar50_TrackToTrain */

#ifdef kcg_use_SVar130_TrackToTrain
kcg_bool kcg_comp_SVar130_TrackToTrain(
  SVar130_TrackToTrain *kcg_c1,
  SVar130_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_AVar130_TrackToTrain(
      &kcg_c1->Array,
      &kcg_c2->Array);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER == kcg_c2->N_ITER);
  return kcg_equ;
}
#endif /* kcg_use_SVar130_TrackToTrain */

#ifdef kcg_use_struct_10318
kcg_bool kcg_comp_struct_10318(struct_10318 *kcg_c1, struct_10318 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array_10739(&kcg_c1->Array, &kcg_c2->Array);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER == kcg_c2->N_ITER);
  return kcg_equ;
}
#endif /* kcg_use_struct_10318 */

#ifdef kcg_use_SVar210_TrackToTrain
kcg_bool kcg_comp_SVar210_TrackToTrain(
  SVar210_TrackToTrain *kcg_c1,
  SVar210_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_AVar210_TrackToTrain(
      &kcg_c1->Array,
      &kcg_c2->Array);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER == kcg_c2->N_ITER);
  return kcg_equ;
}
#endif /* kcg_use_SVar210_TrackToTrain */

#ifdef kcg_use_SVar271_TrackToTrain
kcg_bool kcg_comp_SVar271_TrackToTrain(
  SVar271_TrackToTrain *kcg_c1,
  SVar271_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_AVar271_TrackToTrain(
      &kcg_c1->Array,
      &kcg_c2->Array);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER == kcg_c2->N_ITER);
  return kcg_equ;
}
#endif /* kcg_use_SVar271_TrackToTrain */

#ifdef kcg_use_struct_10334
kcg_bool kcg_comp_struct_10334(struct_10334 *kcg_c1, struct_10334 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array_10743(&kcg_c1->Array, &kcg_c2->Array);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER == kcg_c2->N_ITER);
  return kcg_equ;
}
#endif /* kcg_use_struct_10334 */

#ifdef kcg_use_SVar410_TrackToTrain
kcg_bool kcg_comp_SVar410_TrackToTrain(
  SVar410_TrackToTrain *kcg_c1,
  SVar410_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_AVar410_TrackToTrain(
      &kcg_c1->Array,
      &kcg_c2->Array);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER == kcg_c2->N_ITER);
  return kcg_equ;
}
#endif /* kcg_use_SVar410_TrackToTrain */

#ifdef kcg_use_SVar460_TrackToTrain
kcg_bool kcg_comp_SVar460_TrackToTrain(
  SVar460_TrackToTrain *kcg_c1,
  SVar460_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_AVar460_TrackToTrain(
      &kcg_c1->Array,
      &kcg_c2->Array);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER == kcg_c2->N_ITER);
  return kcg_equ;
}
#endif /* kcg_use_SVar460_TrackToTrain */

#ifdef kcg_use_SVar511_TrackToTrain
kcg_bool kcg_comp_SVar511_TrackToTrain(
  SVar511_TrackToTrain *kcg_c1,
  SVar511_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_AVar511_TrackToTrain(
      &kcg_c1->Array,
      &kcg_c2->Array);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER == kcg_c2->N_ITER);
  return kcg_equ;
}
#endif /* kcg_use_SVar511_TrackToTrain */

#ifdef kcg_use_struct_10355
kcg_bool kcg_comp_struct_10355(struct_10355 *kcg_c1, struct_10355 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array_11277(&kcg_c1->Array, &kcg_c2->Array);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER == kcg_c2->N_ITER);
  return kcg_equ;
}
#endif /* kcg_use_struct_10355 */

#ifdef kcg_use_SVar520_TrackToTrain
kcg_bool kcg_comp_SVar520_TrackToTrain(
  SVar520_TrackToTrain *kcg_c1,
  SVar520_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_AVar520_TrackToTrain(
      &kcg_c1->Array,
      &kcg_c2->Array);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER == kcg_c2->N_ITER);
  return kcg_equ;
}
#endif /* kcg_use_SVar520_TrackToTrain */

#ifdef kcg_use_SVar580_TrackToTrain
kcg_bool kcg_comp_SVar580_TrackToTrain(
  SVar580_TrackToTrain *kcg_c1,
  SVar580_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_AVar580_TrackToTrain(
      &kcg_c1->Array,
      &kcg_c2->Array);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER == kcg_c2->N_ITER);
  return kcg_equ;
}
#endif /* kcg_use_SVar580_TrackToTrain */

#ifdef kcg_use_struct_10371
kcg_bool kcg_comp_struct_10371(struct_10371 *kcg_c1, struct_10371 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array_10288(&kcg_c1->Array, &kcg_c2->Array);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER == kcg_c2->N_ITER);
  return kcg_equ;
}
#endif /* kcg_use_struct_10371 */

#ifdef kcg_use_SVar670_TrackToTrain
kcg_bool kcg_comp_SVar670_TrackToTrain(
  SVar670_TrackToTrain *kcg_c1,
  SVar670_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_AVar670_TrackToTrain(
      &kcg_c1->Array,
      &kcg_c2->Array);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER == kcg_c2->N_ITER);
  return kcg_equ;
}
#endif /* kcg_use_SVar670_TrackToTrain */

#ifdef kcg_use_SVar680_TrackToTrain
kcg_bool kcg_comp_SVar680_TrackToTrain(
  SVar680_TrackToTrain *kcg_c1,
  SVar680_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_AVar680_TrackToTrain(
      &kcg_c1->Array,
      &kcg_c2->Array);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER == kcg_c2->N_ITER);
  return kcg_equ;
}
#endif /* kcg_use_SVar680_TrackToTrain */

#ifdef kcg_use_SVar690_TrackToTrain
kcg_bool kcg_comp_SVar690_TrackToTrain(
  SVar690_TrackToTrain *kcg_c1,
  SVar690_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_AVar690_TrackToTrain(
      &kcg_c1->Array,
      &kcg_c2->Array);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER == kcg_c2->N_ITER);
  return kcg_equ;
}
#endif /* kcg_use_SVar690_TrackToTrain */

#ifdef kcg_use_SVar700_TrackToTrain
kcg_bool kcg_comp_SVar700_TrackToTrain(
  SVar700_TrackToTrain *kcg_c1,
  SVar700_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_AVar700_TrackToTrain(
      &kcg_c1->Array,
      &kcg_c2->Array);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER == kcg_c2->N_ITER);
  return kcg_equ;
}
#endif /* kcg_use_SVar700_TrackToTrain */

#ifdef kcg_use_SVar790_TrackToTrain
kcg_bool kcg_comp_SVar790_TrackToTrain(
  SVar790_TrackToTrain *kcg_c1,
  SVar790_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_AVar790_TrackToTrain(
      &kcg_c1->Array,
      &kcg_c2->Array);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER == kcg_c2->N_ITER);
  return kcg_equ;
}
#endif /* kcg_use_SVar790_TrackToTrain */

#ifdef kcg_use_SVar800_TrackToTrain
kcg_bool kcg_comp_SVar800_TrackToTrain(
  SVar800_TrackToTrain *kcg_c1,
  SVar800_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_AVar800_TrackToTrain(
      &kcg_c1->Array,
      &kcg_c2->Array);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER == kcg_c2->N_ITER);
  return kcg_equ;
}
#endif /* kcg_use_SVar800_TrackToTrain */

#ifdef kcg_use_SVar110_TrainToTrack
kcg_bool kcg_comp_SVar110_TrainToTrack(
  SVar110_TrainToTrack *kcg_c1,
  SVar110_TrainToTrack *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_AVar110_TrainToTrack(
      &kcg_c1->Array,
      &kcg_c2->Array);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER == kcg_c2->N_ITER);
  return kcg_equ;
}
#endif /* kcg_use_SVar110_TrainToTrack */

#ifdef kcg_use_Var30_TrainToTrack
kcg_bool kcg_comp_Var30_TrainToTrack(
  Var30_TrainToTrack *kcg_c1,
  Var30_TrainToTrack *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->NID_RADIO == kcg_c2->NID_RADIO);
  return kcg_equ;
}
#endif /* kcg_use_Var30_TrainToTrack */

#ifdef kcg_use_CurrentLRBG_BG_Types_Pkg
kcg_bool kcg_comp_CurrentLRBG_BG_Types_Pkg(
  CurrentLRBG_BG_Types_Pkg *kcg_c1,
  CurrentLRBG_BG_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->position == kcg_c2->position);
  kcg_equ = kcg_equ & kcg_comp_FilteredBGMessage_T_BG_Types_Pkg(
      &kcg_c1->filteredBGMessage,
      &kcg_c2->filteredBGMessage);
  return kcg_equ;
}
#endif /* kcg_use_CurrentLRBG_BG_Types_Pkg */

#ifdef kcg_use_struct_10421
kcg_bool kcg_comp_struct_10421(struct_10421 *kcg_c1, struct_10421 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->M_NVKVINT == kcg_c2->M_NVKVINT);
  kcg_equ = kcg_equ & (kcg_c1->V_NVKVINT == kcg_c2->V_NVKVINT);
  return kcg_equ;
}
#endif /* kcg_use_struct_10421 */

#ifdef kcg_use_LutIndex_lut
kcg_bool kcg_comp_LutIndex_lut(LutIndex_lut *kcg_c1, LutIndex_lut *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->f == kcg_c2->f);
  kcg_equ = kcg_equ & (kcg_c1->k == kcg_c2->k);
  return kcg_equ;
}
#endif /* kcg_use_LutIndex_lut */

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

#ifdef kcg_use_struct_10441
kcg_bool kcg_comp_struct_10441(struct_10441 *kcg_c1, struct_10441 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->NID_BG == kcg_c2->NID_BG);
  kcg_equ = kcg_equ & (kcg_c1->NID_C == kcg_c2->NID_C);
  kcg_equ = kcg_equ & (kcg_c1->Q_NEWCOUNTRY == kcg_c2->Q_NEWCOUNTRY);
  return kcg_equ;
}
#endif /* kcg_use_struct_10441 */

#ifdef kcg_use_Danger_for_Shunting_information_TrackToTrain
kcg_bool kcg_comp_Danger_for_Shunting_information_TrackToTrain(
  Danger_for_Shunting_information_TrackToTrain *kcg_c1,
  Danger_for_Shunting_information_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Q_ASPECT == kcg_c2->Q_ASPECT);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_Danger_for_Shunting_information_TrackToTrain */

#ifdef kcg_use_Request_to_shorten_MA_is_granted_Radio_TrainToTrack
kcg_bool kcg_comp_Request_to_shorten_MA_is_granted_Radio_TrainToTrack(
  Request_to_shorten_MA_is_granted_Radio_TrainToTrack *kcg_c1,
  Request_to_shorten_MA_is_granted_Radio_TrainToTrack *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ &
    (kcg_c1->Request_to_shorten_MA_is_granted_OptionalPackets ==
      kcg_c2->Request_to_shorten_MA_is_granted_OptionalPackets);
  kcg_equ = kcg_equ & (kcg_c1->PADDING4 == kcg_c2->PADDING4);
  kcg_equ = kcg_equ & (kcg_c1->NID_ENGINE == kcg_c2->NID_ENGINE);
  kcg_equ = kcg_equ & (kcg_c1->T_TRAIN == kcg_c2->T_TRAIN);
  kcg_equ = kcg_equ & (kcg_c1->L_MESSAGE == kcg_c2->L_MESSAGE);
  kcg_equ = kcg_equ & (kcg_c1->NID_MESSAGE == kcg_c2->NID_MESSAGE);
  return kcg_equ;
}
#endif /* kcg_use_Request_to_shorten_MA_is_granted_Radio_TrainToTrack */

#ifdef kcg_use_struct_10470
kcg_bool kcg_comp_struct_10470(struct_10470 *kcg_c1, struct_10470 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->NID_BG == kcg_c2->NID_BG);
  kcg_equ = kcg_equ & (kcg_c1->NID_C == kcg_c2->NID_C);
  kcg_equ = kcg_equ & (kcg_c1->Q_NEWCOUNTRY == kcg_c2->Q_NEWCOUNTRY);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_struct_10470 */

#ifdef kcg_use_Stop_if_in_Staff_Responsible_TrackToTrain
kcg_bool kcg_comp_Stop_if_in_Staff_Responsible_TrackToTrain(
  Stop_if_in_Staff_Responsible_TrackToTrain *kcg_c1,
  Stop_if_in_Staff_Responsible_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Q_SRSTOP == kcg_c2->Q_SRSTOP);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_Stop_if_in_Staff_Responsible_TrackToTrain */

#ifdef kcg_use_OdometryLocations_T_Obu_BasicTypes_Pkg
kcg_bool kcg_comp_OdometryLocations_T_Obu_BasicTypes_Pkg(
  OdometryLocations_T_Obu_BasicTypes_Pkg *kcg_c1,
  OdometryLocations_T_Obu_BasicTypes_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->o_max == kcg_c2->o_max);
  kcg_equ = kcg_equ & (kcg_c1->o_min == kcg_c2->o_min);
  kcg_equ = kcg_equ & (kcg_c1->o_nominal == kcg_c2->o_nominal);
  return kcg_equ;
}
#endif /* kcg_use_OdometryLocations_T_Obu_BasicTypes_Pkg */

#ifdef kcg_use_System_Version_order_TrackToTrain
kcg_bool kcg_comp_System_Version_order_TrackToTrain(
  System_Version_order_TrackToTrain *kcg_c1,
  System_Version_order_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->M_VERSION == kcg_c2->M_VERSION);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_System_Version_order_TrackToTrain */

#ifdef kcg_use_struct_10503
kcg_bool kcg_comp_struct_10503(struct_10503 *kcg_c1, struct_10503 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_struct_10503 */

#ifdef kcg_use_Var34_TrackToTrain
kcg_bool kcg_comp_Var34_TrackToTrain(
  Var34_TrackToTrain *kcg_c1,
  Var34_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->M_NVKRINT == kcg_c2->M_NVKRINT);
  kcg_equ = kcg_equ & (kcg_c1->L_NVKRINT == kcg_c2->L_NVKRINT);
  return kcg_equ;
}
#endif /* kcg_use_Var34_TrackToTrain */

#ifdef kcg_use_Radio_Network_registration_TrackToTrain
kcg_bool kcg_comp_Radio_Network_registration_TrackToTrain(
  Radio_Network_registration_TrackToTrain *kcg_c1,
  Radio_Network_registration_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->NID_MN == kcg_c2->NID_MN);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_Radio_Network_registration_TrackToTrain */

#ifdef kcg_use_Var50_TrackToTrain
kcg_bool kcg_comp_Var50_TrackToTrain(
  Var50_TrackToTrain *kcg_c1,
  Var50_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
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
#endif /* kcg_use_Var50_TrackToTrain */

#ifdef kcg_use_Virtual_Balise_Cover_order_TrackToTrain
kcg_bool kcg_comp_Virtual_Balise_Cover_order_TrackToTrain(
  Virtual_Balise_Cover_order_TrackToTrain *kcg_c1,
  Virtual_Balise_Cover_order_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->T_VBC == kcg_c2->T_VBC);
  kcg_equ = kcg_equ & (kcg_c1->NID_C == kcg_c2->NID_C);
  kcg_equ = kcg_equ & (kcg_c1->NID_VBCMK == kcg_c2->NID_VBCMK);
  kcg_equ = kcg_equ & (kcg_c1->Q_VBCO == kcg_c2->Q_VBCO);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_Virtual_Balise_Cover_order_TrackToTrain */

#ifdef kcg_use_Track_Condition_Change_of_traction_system_TrackToTrain
kcg_bool kcg_comp_Track_Condition_Change_of_traction_system_TrackToTrain(
  Track_Condition_Change_of_traction_system_TrackToTrain *kcg_c1,
  Track_Condition_Change_of_traction_system_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->NID_CTRACTION == kcg_c2->NID_CTRACTION);
  kcg_equ = kcg_equ & (kcg_c1->M_VOLTAGE == kcg_c2->M_VOLTAGE);
  kcg_equ = kcg_equ & (kcg_c1->D_TRACTION == kcg_c2->D_TRACTION);
  kcg_equ = kcg_equ & (kcg_c1->Q_SCALE == kcg_c2->Q_SCALE);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_Track_Condition_Change_of_traction_system_TrackToTrain */

#ifdef kcg_use_Adhesion_factor_TrackToTrain
kcg_bool kcg_comp_Adhesion_factor_TrackToTrain(
  Adhesion_factor_TrackToTrain *kcg_c1,
  Adhesion_factor_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->M_ADHESION == kcg_c2->M_ADHESION);
  kcg_equ = kcg_equ & (kcg_c1->L_ADHESION == kcg_c2->L_ADHESION);
  kcg_equ = kcg_equ & (kcg_c1->D_ADHESION == kcg_c2->D_ADHESION);
  kcg_equ = kcg_equ & (kcg_c1->Q_SCALE == kcg_c2->Q_SCALE);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_Adhesion_factor_TrackToTrain */

#ifdef kcg_use_Session_Management_with_neighbouring_Radio_Infill_Unit_TrackToTrain
kcg_bool kcg_comp_Session_Management_with_neighbouring_Radio_Infill_Unit_TrackToTrain(
  Session_Management_with_neighbouring_Radio_Infill_Unit_TrackToTrain *kcg_c1,
  Session_Management_with_neighbouring_Radio_Infill_Unit_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->NID_RADIO == kcg_c2->NID_RADIO);
  kcg_equ = kcg_equ & (kcg_c1->NID_RIU == kcg_c2->NID_RIU);
  kcg_equ = kcg_equ & (kcg_c1->NID_C == kcg_c2->NID_C);
  kcg_equ = kcg_equ & (kcg_c1->Q_RIU == kcg_c2->Q_RIU);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_Session_Management_with_neighbouring_Radio_Infill_Unit_TrackToTrain */

#ifdef kcg_use_MA_Request_Radio_TrainToTrack
kcg_bool kcg_comp_MA_Request_Radio_TrainToTrack(
  MA_Request_Radio_TrainToTrack *kcg_c1,
  MA_Request_Radio_TrainToTrack *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->MA_Request_OptionalPackets ==
      kcg_c2->MA_Request_OptionalPackets);
  kcg_equ = kcg_equ & (kcg_c1->PADDING2 == kcg_c2->PADDING2);
  kcg_equ = kcg_equ & (kcg_c1->Q_MARQSTREASON == kcg_c2->Q_MARQSTREASON);
  kcg_equ = kcg_equ & (kcg_c1->NID_ENGINE == kcg_c2->NID_ENGINE);
  kcg_equ = kcg_equ & (kcg_c1->T_TRAIN == kcg_c2->T_TRAIN);
  kcg_equ = kcg_equ & (kcg_c1->L_MESSAGE == kcg_c2->L_MESSAGE);
  kcg_equ = kcg_equ & (kcg_c1->NID_MESSAGE == kcg_c2->NID_MESSAGE);
  return kcg_equ;
}
#endif /* kcg_use_MA_Request_Radio_TrainToTrack */

#ifdef kcg_use_Acknowledgement_of_Emergency_Stop_Radio_TrainToTrack
kcg_bool kcg_comp_Acknowledgement_of_Emergency_Stop_Radio_TrainToTrack(
  Acknowledgement_of_Emergency_Stop_Radio_TrainToTrack *kcg_c1,
  Acknowledgement_of_Emergency_Stop_Radio_TrainToTrack *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ &
    (kcg_c1->Acknowledgement_of_Emergency_Stop_OptionalPackets ==
      kcg_c2->Acknowledgement_of_Emergency_Stop_OptionalPackets);
  kcg_equ = kcg_equ & (kcg_c1->Q_EMERGENCYSTOP == kcg_c2->Q_EMERGENCYSTOP);
  kcg_equ = kcg_equ & (kcg_c1->NID_EM == kcg_c2->NID_EM);
  kcg_equ = kcg_equ & (kcg_c1->NID_ENGINE == kcg_c2->NID_ENGINE);
  kcg_equ = kcg_equ & (kcg_c1->T_TRAIN == kcg_c2->T_TRAIN);
  kcg_equ = kcg_equ & (kcg_c1->L_MESSAGE == kcg_c2->L_MESSAGE);
  kcg_equ = kcg_equ & (kcg_c1->NID_MESSAGE == kcg_c2->NID_MESSAGE);
  return kcg_equ;
}
#endif /* kcg_use_Acknowledgement_of_Emergency_Stop_Radio_TrainToTrack */

#ifdef kcg_use_SoM_Position_Report_Radio_TrainToTrack
kcg_bool kcg_comp_SoM_Position_Report_Radio_TrainToTrack(
  SoM_Position_Report_Radio_TrainToTrack *kcg_c1,
  SoM_Position_Report_Radio_TrainToTrack *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->SoM_Position_Report_OptionalPackets ==
      kcg_c2->SoM_Position_Report_OptionalPackets);
  kcg_equ = kcg_equ & (kcg_c1->PADDING9 == kcg_c2->PADDING9);
  kcg_equ = kcg_equ & (kcg_c1->Q_STATUS == kcg_c2->Q_STATUS);
  kcg_equ = kcg_equ & (kcg_c1->NID_ENGINE == kcg_c2->NID_ENGINE);
  kcg_equ = kcg_equ & (kcg_c1->T_TRAIN == kcg_c2->T_TRAIN);
  kcg_equ = kcg_equ & (kcg_c1->L_MESSAGE == kcg_c2->L_MESSAGE);
  kcg_equ = kcg_equ & (kcg_c1->NID_MESSAGE == kcg_c2->NID_MESSAGE);
  return kcg_equ;
}
#endif /* kcg_use_SoM_Position_Report_Radio_TrainToTrack */

#ifdef kcg_use_Text_message_acknowledged_by_driver_Radio_TrainToTrack
kcg_bool kcg_comp_Text_message_acknowledged_by_driver_Radio_TrainToTrack(
  Text_message_acknowledged_by_driver_Radio_TrainToTrack *kcg_c1,
  Text_message_acknowledged_by_driver_Radio_TrainToTrack *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ &
    (kcg_c1->Text_message_acknowledged_by_driver_OptionalPackets ==
      kcg_c2->Text_message_acknowledged_by_driver_OptionalPackets);
  kcg_equ = kcg_equ & (kcg_c1->PADDING10 == kcg_c2->PADDING10);
  kcg_equ = kcg_equ & (kcg_c1->NID_TEXTMESSAGE == kcg_c2->NID_TEXTMESSAGE);
  kcg_equ = kcg_equ & (kcg_c1->NID_ENGINE == kcg_c2->NID_ENGINE);
  kcg_equ = kcg_equ & (kcg_c1->T_TRAIN == kcg_c2->T_TRAIN);
  kcg_equ = kcg_equ & (kcg_c1->L_MESSAGE == kcg_c2->L_MESSAGE);
  kcg_equ = kcg_equ & (kcg_c1->NID_MESSAGE == kcg_c2->NID_MESSAGE);
  return kcg_equ;
}
#endif /* kcg_use_Text_message_acknowledged_by_driver_Radio_TrainToTrack */

#ifdef kcg_use_Movement_Authority_Radio_TrackToTrain
kcg_bool kcg_comp_Movement_Authority_Radio_TrackToTrain(
  Movement_Authority_Radio_TrackToTrain *kcg_c1,
  Movement_Authority_Radio_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Movement_Authority_OptionalPackets ==
      kcg_c2->Movement_Authority_OptionalPackets);
  kcg_equ = kcg_equ & (kcg_c1->PADDING13 == kcg_c2->PADDING13);
  kcg_equ = kcg_equ & (kcg_c1->NID_LRBG == kcg_c2->NID_LRBG);
  kcg_equ = kcg_equ & (kcg_c1->M_ACK == kcg_c2->M_ACK);
  kcg_equ = kcg_equ & (kcg_c1->T_TRAIN == kcg_c2->T_TRAIN);
  kcg_equ = kcg_equ & (kcg_c1->L_MESSAGE == kcg_c2->L_MESSAGE);
  kcg_equ = kcg_equ & (kcg_c1->NID_MESSAGE == kcg_c2->NID_MESSAGE);
  return kcg_equ;
}
#endif /* kcg_use_Movement_Authority_Radio_TrackToTrain */

#ifdef kcg_use_Request_to_Shorten_MA_Radio_TrackToTrain
kcg_bool kcg_comp_Request_to_Shorten_MA_Radio_TrackToTrain(
  Request_to_Shorten_MA_Radio_TrackToTrain *kcg_c1,
  Request_to_Shorten_MA_Radio_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Request_to_Shorten_MA_OptionalPackets ==
      kcg_c2->Request_to_Shorten_MA_OptionalPackets);
  kcg_equ = kcg_equ & (kcg_c1->PADDING14 == kcg_c2->PADDING14);
  kcg_equ = kcg_equ & (kcg_c1->NID_LRBG == kcg_c2->NID_LRBG);
  kcg_equ = kcg_equ & (kcg_c1->M_ACK == kcg_c2->M_ACK);
  kcg_equ = kcg_equ & (kcg_c1->T_TRAIN == kcg_c2->T_TRAIN);
  kcg_equ = kcg_equ & (kcg_c1->L_MESSAGE == kcg_c2->L_MESSAGE);
  kcg_equ = kcg_equ & (kcg_c1->NID_MESSAGE == kcg_c2->NID_MESSAGE);
  return kcg_equ;
}
#endif /* kcg_use_Request_to_Shorten_MA_Radio_TrackToTrain */

#ifdef kcg_use_General_message_Radio_TrackToTrain
kcg_bool kcg_comp_General_message_Radio_TrackToTrain(
  General_message_Radio_TrackToTrain *kcg_c1,
  General_message_Radio_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->General_message_OptionalPackets ==
      kcg_c2->General_message_OptionalPackets);
  kcg_equ = kcg_equ & (kcg_c1->PADDING15 == kcg_c2->PADDING15);
  kcg_equ = kcg_equ & (kcg_c1->NID_LRBG == kcg_c2->NID_LRBG);
  kcg_equ = kcg_equ & (kcg_c1->M_ACK == kcg_c2->M_ACK);
  kcg_equ = kcg_equ & (kcg_c1->T_TRAIN == kcg_c2->T_TRAIN);
  kcg_equ = kcg_equ & (kcg_c1->L_MESSAGE == kcg_c2->L_MESSAGE);
  kcg_equ = kcg_equ & (kcg_c1->NID_MESSAGE == kcg_c2->NID_MESSAGE);
  return kcg_equ;
}
#endif /* kcg_use_General_message_Radio_TrackToTrain */

#ifdef kcg_use_Infill_MA_Radio_TrackToTrain
kcg_bool kcg_comp_Infill_MA_Radio_TrackToTrain(
  Infill_MA_Radio_TrackToTrain *kcg_c1,
  Infill_MA_Radio_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Infill_MA_OptionalPackets ==
      kcg_c2->Infill_MA_OptionalPackets);
  kcg_equ = kcg_equ & (kcg_c1->PADDING18 == kcg_c2->PADDING18);
  kcg_equ = kcg_equ & (kcg_c1->NID_LRBG == kcg_c2->NID_LRBG);
  kcg_equ = kcg_equ & (kcg_c1->M_ACK == kcg_c2->M_ACK);
  kcg_equ = kcg_equ & (kcg_c1->T_TRAIN == kcg_c2->T_TRAIN);
  kcg_equ = kcg_equ & (kcg_c1->L_MESSAGE == kcg_c2->L_MESSAGE);
  kcg_equ = kcg_equ & (kcg_c1->NID_MESSAGE == kcg_c2->NID_MESSAGE);
  return kcg_equ;
}
#endif /* kcg_use_Infill_MA_Radio_TrackToTrain */

#ifdef kcg_use_Data_used_by_applications_outside_the_ERTMSETCS_system_TrackToTrain
kcg_bool kcg_comp_Data_used_by_applications_outside_the_ERTMSETCS_system_TrackToTrain(
  Data_used_by_applications_outside_the_ERTMSETCS_system_TrackToTrain *kcg_c1,
  Data_used_by_applications_outside_the_ERTMSETCS_system_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Other_data_depending_on__NID_XUSER ==
      kcg_c2->Other_data_depending_on__NID_XUSER);
  kcg_equ = kcg_equ & (kcg_c1->NID_NTC == kcg_c2->NID_NTC);
  kcg_equ = kcg_equ & (kcg_c1->NID_XUSER == kcg_c2->NID_XUSER);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_Data_used_by_applications_outside_the_ERTMSETCS_system_TrackToTrain */

#ifdef kcg_use_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg
kcg_bool kcg_comp_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg(
  positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg *kcg_c1,
  positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->overrun == kcg_c2->overrun);
  kcg_equ = kcg_equ & kcg_comp_positionedBGs_T_TrainPosition_Types_Pck(
      &kcg_c1->BGs,
      &kcg_c2->BGs);
  return kcg_equ;
}
#endif /* kcg_use_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg */

#ifdef kcg_use_Var130_TrackToTrain
kcg_bool kcg_comp_Var130_TrackToTrain(
  Var130_TrackToTrain *kcg_c1,
  Var130_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->D_SR == kcg_c2->D_SR);
  kcg_equ = kcg_equ & (kcg_c1->NID_BG == kcg_c2->NID_BG);
  kcg_equ = kcg_equ & (kcg_c1->NID_C == kcg_c2->NID_C);
  kcg_equ = kcg_equ & (kcg_c1->Q_NEWCOUNTRY == kcg_c2->Q_NEWCOUNTRY);
  return kcg_equ;
}
#endif /* kcg_use_Var130_TrackToTrain */

#ifdef kcg_use_SVar30_TrackToTrain
kcg_bool kcg_comp_SVar30_TrackToTrain(
  SVar30_TrackToTrain *kcg_c1,
  SVar30_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_AVar30_TrackToTrain(
      &kcg_c1->Array,
      &kcg_c2->Array);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER == kcg_c2->N_ITER);
  return kcg_equ;
}
#endif /* kcg_use_SVar30_TrackToTrain */

#ifdef kcg_use_SVar30_TrainToTrack
kcg_bool kcg_comp_SVar30_TrainToTrack(
  SVar30_TrainToTrack *kcg_c1,
  SVar30_TrainToTrack *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_AVar30_TrainToTrack(
      &kcg_c1->Array,
      &kcg_c2->Array);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER == kcg_c2->N_ITER);
  return kcg_equ;
}
#endif /* kcg_use_SVar30_TrainToTrack */

#ifdef kcg_use_SVar111_TrainToTrack
kcg_bool kcg_comp_SVar111_TrainToTrack(
  SVar111_TrainToTrack *kcg_c1,
  SVar111_TrainToTrack *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_AVar111_TrainToTrack(
      &kcg_c1->Array,
      &kcg_c2->Array);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER == kcg_c2->N_ITER);
  return kcg_equ;
}
#endif /* kcg_use_SVar111_TrainToTrack */

#ifdef kcg_use_BG_Message_T_BG_Types_Pkg
kcg_bool kcg_comp_BG_Message_T_BG_Types_Pkg(
  BG_Message_T_BG_Types_Pkg *kcg_c1,
  BG_Message_T_BG_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_centerOfBalisePosition_T_BG_Types_Pkg(
      &kcg_c1->centerOfBalisePosition,
      &kcg_c2->centerOfBalisePosition);
  kcg_equ = kcg_equ & (kcg_c1->numberBalises == kcg_c2->numberBalises);
  kcg_equ = kcg_equ & kcg_comp_AdditionalInformation_T_BG_Types_Pkg(
      &kcg_c1->AddInfo,
      &kcg_c2->AddInfo);
  kcg_equ = kcg_equ & kcg_comp_TelegramHeaderArray_T_BG_Types_Pkg(
      &kcg_c1->TelegramHeaders,
      &kcg_c2->TelegramHeaders);
  kcg_equ = kcg_equ & (kcg_c1->present == kcg_c2->present);
  return kcg_equ;
}
#endif /* kcg_use_BG_Message_T_BG_Types_Pkg */

#ifdef kcg_use_Virtual_Balise_Cover_marker_TrackToTrain
kcg_bool kcg_comp_Virtual_Balise_Cover_marker_TrackToTrain(
  Virtual_Balise_Cover_marker_TrackToTrain *kcg_c1,
  Virtual_Balise_Cover_marker_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->NID_VBCMK == kcg_c2->NID_VBCMK);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_Virtual_Balise_Cover_marker_TrackToTrain */

#ifdef kcg_use_Default_Gradient_for_Temporary_Speed_Restriction_TrackToTrain
kcg_bool kcg_comp_Default_Gradient_for_Temporary_Speed_Restriction_TrackToTrain(
  Default_Gradient_for_Temporary_Speed_Restriction_TrackToTrain *kcg_c1,
  Default_Gradient_for_Temporary_Speed_Restriction_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->G_TSR == kcg_c2->G_TSR);
  kcg_equ = kcg_equ & (kcg_c1->Q_GDIR == kcg_c2->Q_GDIR);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_Default_Gradient_for_Temporary_Speed_Restriction_TrackToTrain */

#ifdef kcg_use_TrainInfo_T_BG_Types_Pkg
kcg_bool kcg_comp_TrainInfo_T_BG_Types_Pkg(
  TrainInfo_T_BG_Types_Pkg *kcg_c1,
  TrainInfo_T_BG_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_mode == kcg_c2->m_mode);
  kcg_equ = kcg_equ & (kcg_c1->m_leveltr == kcg_c2->m_leveltr);
  return kcg_equ;
}
#endif /* kcg_use_TrainInfo_T_BG_Types_Pkg */

#ifdef kcg_use_struct_10720
kcg_bool kcg_comp_struct_10720(struct_10720 *kcg_c1, struct_10720 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->NID_LRBG == kcg_c2->NID_LRBG);
  kcg_equ = kcg_equ & (kcg_c1->M_ACK == kcg_c2->M_ACK);
  kcg_equ = kcg_equ & (kcg_c1->T_TRAIN == kcg_c2->T_TRAIN);
  kcg_equ = kcg_equ & (kcg_c1->L_MESSAGE == kcg_c2->L_MESSAGE);
  kcg_equ = kcg_equ & (kcg_c1->NID_MESSAGE == kcg_c2->NID_MESSAGE);
  return kcg_equ;
}
#endif /* kcg_use_struct_10720 */

#ifdef kcg_use_struct_10729
kcg_bool kcg_comp_struct_10729(struct_10729 *kcg_c1, struct_10729 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->NID_NTC == kcg_c2->NID_NTC);
  kcg_equ = kcg_equ & (kcg_c1->M_LEVELTEXTDISPLAY ==
      kcg_c2->M_LEVELTEXTDISPLAY);
  kcg_equ = kcg_equ & (kcg_c1->M_MODETEXTDISPLAY == kcg_c2->M_MODETEXTDISPLAY);
  return kcg_equ;
}
#endif /* kcg_use_struct_10729 */

#ifdef kcg_use_Train_running_number_TrainToTrack
kcg_bool kcg_comp_Train_running_number_TrainToTrack(
  Train_running_number_TrainToTrack *kcg_c1,
  Train_running_number_TrainToTrack *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->NID_OPERATIONAL == kcg_c2->NID_OPERATIONAL);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_Train_running_number_TrainToTrack */

#ifdef kcg_use_Var800_TrackToTrain
kcg_bool kcg_comp_Var800_TrackToTrain(
  Var800_TrackToTrain *kcg_c1,
  Var800_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Q_MAMODE == kcg_c2->Q_MAMODE);
  kcg_equ = kcg_equ & (kcg_c1->L_ACKMAMODE == kcg_c2->L_ACKMAMODE);
  kcg_equ = kcg_equ & (kcg_c1->L_MAMODE == kcg_c2->L_MAMODE);
  kcg_equ = kcg_equ & (kcg_c1->V_MAMODE == kcg_c2->V_MAMODE);
  kcg_equ = kcg_equ & (kcg_c1->M_MAMODE == kcg_c2->M_MAMODE);
  kcg_equ = kcg_equ & (kcg_c1->D_MAMODE == kcg_c2->D_MAMODE);
  return kcg_equ;
}
#endif /* kcg_use_Var800_TrackToTrain */

#ifdef kcg_use_Request_to_shorten_MA_is_rejected_Radio_TrainToTrack
kcg_bool kcg_comp_Request_to_shorten_MA_is_rejected_Radio_TrainToTrack(
  Request_to_shorten_MA_is_rejected_Radio_TrainToTrack *kcg_c1,
  Request_to_shorten_MA_is_rejected_Radio_TrainToTrack *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ &
    (kcg_c1->Request_to_shorten_MA_is_rejected_OptionalPackets ==
      kcg_c2->Request_to_shorten_MA_is_rejected_OptionalPackets);
  kcg_equ = kcg_equ & (kcg_c1->PADDING5 == kcg_c2->PADDING5);
  kcg_equ = kcg_equ & (kcg_c1->NID_ENGINE == kcg_c2->NID_ENGINE);
  kcg_equ = kcg_equ & (kcg_c1->T_TRAIN == kcg_c2->T_TRAIN);
  kcg_equ = kcg_equ & (kcg_c1->L_MESSAGE == kcg_c2->L_MESSAGE);
  kcg_equ = kcg_equ & (kcg_c1->NID_MESSAGE == kcg_c2->NID_MESSAGE);
  return kcg_equ;
}
#endif /* kcg_use_Request_to_shorten_MA_is_rejected_Radio_TrainToTrack */

#ifdef kcg_use_Onboard_telephone_numbers_TrainToTrack
kcg_bool kcg_comp_Onboard_telephone_numbers_TrainToTrack(
  Onboard_telephone_numbers_TrainToTrack *kcg_c1,
  Onboard_telephone_numbers_TrainToTrack *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_SVar30_TrainToTrack(
      &kcg_c1->Struct46,
      &kcg_c2->Struct46);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_Onboard_telephone_numbers_TrainToTrack */

#ifdef kcg_use_Validated_Train_Data_Radio_TrainToTrack
kcg_bool kcg_comp_Validated_Train_Data_Radio_TrainToTrack(
  Validated_Train_Data_Radio_TrainToTrack *kcg_c1,
  Validated_Train_Data_Radio_TrainToTrack *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Validated_Train_Data_OptionalPackets ==
      kcg_c2->Validated_Train_Data_OptionalPackets);
  kcg_equ = kcg_equ & (kcg_c1->PADDING0 == kcg_c2->PADDING0);
  kcg_equ = kcg_equ & (kcg_c1->NID_ENGINE == kcg_c2->NID_ENGINE);
  kcg_equ = kcg_equ & (kcg_c1->T_TRAIN == kcg_c2->T_TRAIN);
  kcg_equ = kcg_equ & (kcg_c1->L_MESSAGE == kcg_c2->L_MESSAGE);
  kcg_equ = kcg_equ & (kcg_c1->NID_MESSAGE == kcg_c2->NID_MESSAGE);
  return kcg_equ;
}
#endif /* kcg_use_Validated_Train_Data_Radio_TrainToTrack */

#ifdef kcg_use_Staff_Responsible_distance_Information_from_loop_TrackToTrain
kcg_bool kcg_comp_Staff_Responsible_distance_Information_from_loop_TrackToTrain(
  Staff_Responsible_distance_Information_from_loop_TrackToTrain *kcg_c1,
  Staff_Responsible_distance_Information_from_loop_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_SVar130_TrackToTrain(
      &kcg_c1->Struct13,
      &kcg_c2->Struct13);
  kcg_equ = kcg_equ & (kcg_c1->D_SR == kcg_c2->D_SR);
  kcg_equ = kcg_equ & kcg_comp_Var137_TrackToTrain(
      &kcg_c1->Struct12,
      &kcg_c2->Struct12);
  kcg_equ = kcg_equ & kcg_comp_Var137_TrackToTrain(
      &kcg_c1->Struct9,
      &kcg_c2->Struct9);
  kcg_equ = kcg_equ & (kcg_c1->Q_SCALE == kcg_c2->Q_SCALE);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_Staff_Responsible_distance_Information_from_loop_TrackToTrain */

#ifdef kcg_use_Gradient_Profile_TrackToTrain
kcg_bool kcg_comp_Gradient_Profile_TrackToTrain(
  Gradient_Profile_TrackToTrain *kcg_c1,
  Gradient_Profile_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_SVar210_TrackToTrain(
      &kcg_c1->Struct15,
      &kcg_c2->Struct15);
  kcg_equ = kcg_equ & (kcg_c1->G_A == kcg_c2->G_A);
  kcg_equ = kcg_equ & (kcg_c1->Q_GDIR == kcg_c2->Q_GDIR);
  kcg_equ = kcg_equ & (kcg_c1->D_GRADIENT == kcg_c2->D_GRADIENT);
  kcg_equ = kcg_equ & (kcg_c1->Q_SCALE == kcg_c2->Q_SCALE);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_Gradient_Profile_TrackToTrain */

#ifdef kcg_use_International_Static_Speed_Profile_TrackToTrain
kcg_bool kcg_comp_International_Static_Speed_Profile_TrackToTrain(
  International_Static_Speed_Profile_TrackToTrain *kcg_c1,
  International_Static_Speed_Profile_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_SVar271_TrackToTrain(
      &kcg_c1->Struct17,
      &kcg_c2->Struct17);
  kcg_equ = kcg_equ & kcg_comp_SVar270_TrackToTrain(
      &kcg_c1->Struct16,
      &kcg_c2->Struct16);
  kcg_equ = kcg_equ & (kcg_c1->Q_FRONT == kcg_c2->Q_FRONT);
  kcg_equ = kcg_equ & (kcg_c1->V_STATIC == kcg_c2->V_STATIC);
  kcg_equ = kcg_equ & (kcg_c1->D_STATIC == kcg_c2->D_STATIC);
  kcg_equ = kcg_equ & (kcg_c1->Q_SCALE == kcg_c2->Q_SCALE);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_International_Static_Speed_Profile_TrackToTrain */

#ifdef kcg_use_Level_Transition_Order_TrackToTrain
kcg_bool kcg_comp_Level_Transition_Order_TrackToTrain(
  Level_Transition_Order_TrackToTrain *kcg_c1,
  Level_Transition_Order_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_SVar410_TrackToTrain(
      &kcg_c1->Struct19,
      &kcg_c2->Struct19);
  kcg_equ = kcg_equ & (kcg_c1->L_ACKLEVELTR == kcg_c2->L_ACKLEVELTR);
  kcg_equ = kcg_equ & (kcg_c1->NID_NTC == kcg_c2->NID_NTC);
  kcg_equ = kcg_equ & (kcg_c1->M_LEVELTR == kcg_c2->M_LEVELTR);
  kcg_equ = kcg_equ & (kcg_c1->D_LEVELTR == kcg_c2->D_LEVELTR);
  kcg_equ = kcg_equ & (kcg_c1->Q_SCALE == kcg_c2->Q_SCALE);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_Level_Transition_Order_TrackToTrain */

#ifdef kcg_use_Session_Management_TrackToTrain
kcg_bool kcg_comp_Session_Management_TrackToTrain(
  Session_Management_TrackToTrain *kcg_c1,
  Session_Management_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Q_SLEEPSESSION == kcg_c2->Q_SLEEPSESSION);
  kcg_equ = kcg_equ & (kcg_c1->NID_RADIO == kcg_c2->NID_RADIO);
  kcg_equ = kcg_equ & (kcg_c1->NID_RBC == kcg_c2->NID_RBC);
  kcg_equ = kcg_equ & (kcg_c1->NID_C == kcg_c2->NID_C);
  kcg_equ = kcg_equ & (kcg_c1->Q_RBC == kcg_c2->Q_RBC);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_Session_Management_TrackToTrain */

#ifdef kcg_use_Position_Report_Parameters_TrackToTrain
kcg_bool kcg_comp_Position_Report_Parameters_TrackToTrain(
  Position_Report_Parameters_TrackToTrain *kcg_c1,
  Position_Report_Parameters_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_SVar580_TrackToTrain(
      &kcg_c1->Struct26,
      &kcg_c2->Struct26);
  kcg_equ = kcg_equ & (kcg_c1->m_loc == kcg_c2->m_loc);
  kcg_equ = kcg_equ & (kcg_c1->D_CYCLOC == kcg_c2->D_CYCLOC);
  kcg_equ = kcg_equ & (kcg_c1->T_CYCLOC == kcg_c2->T_CYCLOC);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_Position_Report_Parameters_TrackToTrain */

#ifdef kcg_use_Temporary_Speed_Restriction_TrackToTrain
kcg_bool kcg_comp_Temporary_Speed_Restriction_TrackToTrain(
  Temporary_Speed_Restriction_TrackToTrain *kcg_c1,
  Temporary_Speed_Restriction_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
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
  return kcg_equ;
}
#endif /* kcg_use_Temporary_Speed_Restriction_TrackToTrain */

#ifdef kcg_use_RBC_transition_order_TrackToTrain
kcg_bool kcg_comp_RBC_transition_order_TrackToTrain(
  RBC_transition_order_TrackToTrain *kcg_c1,
  RBC_transition_order_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Q_SLEEPSESSION == kcg_c2->Q_SLEEPSESSION);
  kcg_equ = kcg_equ & (kcg_c1->NID_RADIO == kcg_c2->NID_RADIO);
  kcg_equ = kcg_equ & (kcg_c1->NID_RBC == kcg_c2->NID_RBC);
  kcg_equ = kcg_equ & (kcg_c1->NID_C == kcg_c2->NID_C);
  kcg_equ = kcg_equ & (kcg_c1->D_RBCTR == kcg_c2->D_RBCTR);
  kcg_equ = kcg_equ & (kcg_c1->Q_SCALE == kcg_c2->Q_SCALE);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_RBC_transition_order_TrackToTrain */

#ifdef kcg_use_EOLM_Packet_TrackToTrain
kcg_bool kcg_comp_EOLM_Packet_TrackToTrain(
  EOLM_Packet_TrackToTrain *kcg_c1,
  EOLM_Packet_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Q_SSCODE == kcg_c2->Q_SSCODE);
  kcg_equ = kcg_equ & (kcg_c1->Q_LOOPDIR == kcg_c2->Q_LOOPDIR);
  kcg_equ = kcg_equ & (kcg_c1->L_LOOP == kcg_c2->L_LOOP);
  kcg_equ = kcg_equ & (kcg_c1->D_LOOP == kcg_c2->D_LOOP);
  kcg_equ = kcg_equ & (kcg_c1->NID_LOOP == kcg_c2->NID_LOOP);
  kcg_equ = kcg_equ & (kcg_c1->Q_SCALE == kcg_c2->Q_SCALE);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_EOLM_Packet_TrackToTrain */

#ifdef kcg_use_Radio_infill_request_Radio_TrainToTrack
kcg_bool kcg_comp_Radio_infill_request_Radio_TrainToTrack(
  Radio_infill_request_Radio_TrainToTrack *kcg_c1,
  Radio_infill_request_Radio_TrainToTrack *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Radio_infill_request_OptionalPackets ==
      kcg_c2->Radio_infill_request_OptionalPackets);
  kcg_equ = kcg_equ & (kcg_c1->PADDING8 == kcg_c2->PADDING8);
  kcg_equ = kcg_equ & (kcg_c1->Q_INFILL == kcg_c2->Q_INFILL);
  kcg_equ = kcg_equ & (kcg_c1->NID_BG == kcg_c2->NID_BG);
  kcg_equ = kcg_equ & (kcg_c1->NID_C == kcg_c2->NID_C);
  kcg_equ = kcg_equ & (kcg_c1->NID_ENGINE == kcg_c2->NID_ENGINE);
  kcg_equ = kcg_equ & (kcg_c1->T_TRAIN == kcg_c2->T_TRAIN);
  kcg_equ = kcg_equ & (kcg_c1->L_MESSAGE == kcg_c2->L_MESSAGE);
  kcg_equ = kcg_equ & (kcg_c1->NID_MESSAGE == kcg_c2->NID_MESSAGE);
  return kcg_equ;
}
#endif /* kcg_use_Radio_infill_request_Radio_TrainToTrack */

#ifdef kcg_use_SR_Authorisation_Radio_TrackToTrain
kcg_bool kcg_comp_SR_Authorisation_Radio_TrackToTrain(
  SR_Authorisation_Radio_TrackToTrain *kcg_c1,
  SR_Authorisation_Radio_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->SR_Authorisation_OptionalPackets ==
      kcg_c2->SR_Authorisation_OptionalPackets);
  kcg_equ = kcg_equ & (kcg_c1->PADDING12 == kcg_c2->PADDING12);
  kcg_equ = kcg_equ & (kcg_c1->D_SR == kcg_c2->D_SR);
  kcg_equ = kcg_equ & (kcg_c1->Q_SCALE == kcg_c2->Q_SCALE);
  kcg_equ = kcg_equ & (kcg_c1->NID_LRBG == kcg_c2->NID_LRBG);
  kcg_equ = kcg_equ & (kcg_c1->M_ACK == kcg_c2->M_ACK);
  kcg_equ = kcg_equ & (kcg_c1->T_TRAIN == kcg_c2->T_TRAIN);
  kcg_equ = kcg_equ & (kcg_c1->L_MESSAGE == kcg_c2->L_MESSAGE);
  kcg_equ = kcg_equ & (kcg_c1->NID_MESSAGE == kcg_c2->NID_MESSAGE);
  return kcg_equ;
}
#endif /* kcg_use_SR_Authorisation_Radio_TrackToTrain */

#ifdef kcg_use_SH_Authorised_Radio_TrackToTrain
kcg_bool kcg_comp_SH_Authorised_Radio_TrackToTrain(
  SH_Authorised_Radio_TrackToTrain *kcg_c1,
  SH_Authorised_Radio_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->SH_Authorised_OptionalPackets ==
      kcg_c2->SH_Authorised_OptionalPackets);
  kcg_equ = kcg_equ & (kcg_c1->PADDING16 == kcg_c2->PADDING16);
  kcg_equ = kcg_equ & (kcg_c1->T_TRAIN1 == kcg_c2->T_TRAIN1);
  kcg_equ = kcg_equ & (kcg_c1->NID_LRBG == kcg_c2->NID_LRBG);
  kcg_equ = kcg_equ & (kcg_c1->M_ACK == kcg_c2->M_ACK);
  kcg_equ = kcg_equ & (kcg_c1->T_TRAIN0 == kcg_c2->T_TRAIN0);
  kcg_equ = kcg_equ & (kcg_c1->L_MESSAGE == kcg_c2->L_MESSAGE);
  kcg_equ = kcg_equ & (kcg_c1->NID_MESSAGE == kcg_c2->NID_MESSAGE);
  return kcg_equ;
}
#endif /* kcg_use_SH_Authorised_Radio_TrackToTrain */

#ifdef kcg_use_MA_with_Shifted_Location_Reference_Radio_TrackToTrain
kcg_bool kcg_comp_MA_with_Shifted_Location_Reference_Radio_TrackToTrain(
  MA_with_Shifted_Location_Reference_Radio_TrackToTrain *kcg_c1,
  MA_with_Shifted_Location_Reference_Radio_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ &
    (kcg_c1->MA_with_Shifted_Location_Reference_OptionalPackets ==
      kcg_c2->MA_with_Shifted_Location_Reference_OptionalPackets);
  kcg_equ = kcg_equ & (kcg_c1->PADDING17 == kcg_c2->PADDING17);
  kcg_equ = kcg_equ & (kcg_c1->D_REF == kcg_c2->D_REF);
  kcg_equ = kcg_equ & (kcg_c1->Q_SCALE == kcg_c2->Q_SCALE);
  kcg_equ = kcg_equ & (kcg_c1->NID_LRBG == kcg_c2->NID_LRBG);
  kcg_equ = kcg_equ & (kcg_c1->M_ACK == kcg_c2->M_ACK);
  kcg_equ = kcg_equ & (kcg_c1->T_TRAIN == kcg_c2->T_TRAIN);
  kcg_equ = kcg_equ & (kcg_c1->L_MESSAGE == kcg_c2->L_MESSAGE);
  kcg_equ = kcg_equ & (kcg_c1->NID_MESSAGE == kcg_c2->NID_MESSAGE);
  return kcg_equ;
}
#endif /* kcg_use_MA_with_Shifted_Location_Reference_Radio_TrackToTrain */

#ifdef kcg_use_trainPositionInfo_T_TrainPosition_Types_Pck
kcg_bool kcg_comp_trainPositionInfo_T_TrainPosition_Types_Pck(
  trainPositionInfo_T_TrainPosition_Types_Pck *kcg_c1,
  trainPositionInfo_T_TrainPosition_Types_Pck *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->speed == kcg_c2->speed);
  kcg_equ = kcg_equ & kcg_comp_positionedBG_T_TrainPosition_Types_Pck(
      &kcg_c1->lastPassedUnlinkedBG,
      &kcg_c2->lastPassedUnlinkedBG);
  kcg_equ = kcg_equ & kcg_comp_positionedBG_T_TrainPosition_Types_Pck(
      &kcg_c1->lastPassedLinkedBG,
      &kcg_c2->lastPassedLinkedBG);
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

#ifdef kcg_use_positionedBG_T_TrainPosition_Types_Pck
kcg_bool kcg_comp_positionedBG_T_TrainPosition_Types_Pck(
  positionedBG_T_TrainPosition_Types_Pck *kcg_c1,
  positionedBG_T_TrainPosition_Types_Pck *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
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

#ifdef kcg_use_Temporary_Speed_Restriction_Revocation_TrackToTrain
kcg_bool kcg_comp_Temporary_Speed_Restriction_Revocation_TrackToTrain(
  Temporary_Speed_Restriction_Revocation_TrackToTrain *kcg_c1,
  Temporary_Speed_Restriction_Revocation_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->NID_TSR == kcg_c2->NID_TSR);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_Temporary_Speed_Restriction_Revocation_TrackToTrain */

#ifdef kcg_use_Track_Condition_Big_Metal_Masses_TrackToTrain
kcg_bool kcg_comp_Track_Condition_Big_Metal_Masses_TrackToTrain(
  Track_Condition_Big_Metal_Masses_TrackToTrain *kcg_c1,
  Track_Condition_Big_Metal_Masses_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_SVar670_TrackToTrain(
      &kcg_c1->Struct28,
      &kcg_c2->Struct28);
  kcg_equ = kcg_equ & (kcg_c1->L_TRACKCOND == kcg_c2->L_TRACKCOND);
  kcg_equ = kcg_equ & (kcg_c1->D_TRACKCOND == kcg_c2->D_TRACKCOND);
  kcg_equ = kcg_equ & (kcg_c1->Q_SCALE == kcg_c2->Q_SCALE);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_Track_Condition_Big_Metal_Masses_TrackToTrain */

#ifdef kcg_use_Session_Established_Radio_TrainToTrack
kcg_bool kcg_comp_Session_Established_Radio_TrainToTrack(
  Session_Established_Radio_TrainToTrack *kcg_c1,
  Session_Established_Radio_TrainToTrack *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Session_Established_OptionalPackets ==
      kcg_c2->Session_Established_OptionalPackets);
  kcg_equ = kcg_equ & (kcg_c1->PADDING11 == kcg_c2->PADDING11);
  kcg_equ = kcg_equ & (kcg_c1->NID_ENGINE == kcg_c2->NID_ENGINE);
  kcg_equ = kcg_equ & (kcg_c1->T_TRAIN == kcg_c2->T_TRAIN);
  kcg_equ = kcg_equ & (kcg_c1->L_MESSAGE == kcg_c2->L_MESSAGE);
  kcg_equ = kcg_equ & (kcg_c1->NID_MESSAGE == kcg_c2->NID_MESSAGE);
  return kcg_equ;
}
#endif /* kcg_use_Session_Established_Radio_TrainToTrack */

#ifdef kcg_use_Movement_Authority_Request_Parameters_TrackToTrain
kcg_bool kcg_comp_Movement_Authority_Request_Parameters_TrackToTrain(
  Movement_Authority_Request_Parameters_TrackToTrain *kcg_c1,
  Movement_Authority_Request_Parameters_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->T_CYCRQST == kcg_c2->T_CYCRQST);
  kcg_equ = kcg_equ & (kcg_c1->T_TIMEOUTRQST == kcg_c2->T_TIMEOUTRQST);
  kcg_equ = kcg_equ & (kcg_c1->T_MAR == kcg_c2->T_MAR);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_Movement_Authority_Request_Parameters_TrackToTrain */

#ifdef kcg_use_Error_reporting_TrainToTrack
kcg_bool kcg_comp_Error_reporting_TrainToTrack(
  Error_reporting_TrainToTrack *kcg_c1,
  Error_reporting_TrainToTrack *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->error == kcg_c2->error);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_Error_reporting_TrainToTrack */

#ifdef kcg_use_struct_11012
kcg_bool kcg_comp_struct_11012(struct_11012 *kcg_c1, struct_11012 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->V_DIFF == kcg_c2->V_DIFF);
  kcg_equ = kcg_equ & (kcg_c1->NC_DIFF == kcg_c2->NC_DIFF);
  kcg_equ = kcg_equ & (kcg_c1->NC_CDDIFF == kcg_c2->NC_CDDIFF);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIFF == kcg_c2->Q_DIFF);
  return kcg_equ;
}
#endif /* kcg_use_struct_11012 */

#ifdef kcg_use_struct_11020
kcg_bool kcg_comp_struct_11020(struct_11020 *kcg_c1, struct_11020 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->V_AXLELOAD == kcg_c2->V_AXLELOAD);
  kcg_equ = kcg_equ & (kcg_c1->M_AXLELOADCAT == kcg_c2->M_AXLELOADCAT);
  return kcg_equ;
}
#endif /* kcg_use_struct_11020 */

#ifdef kcg_use_Reversing_supervision_information_TrackToTrain
kcg_bool kcg_comp_Reversing_supervision_information_TrackToTrain(
  Reversing_supervision_information_TrackToTrain *kcg_c1,
  Reversing_supervision_information_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->V_REVERSE == kcg_c2->V_REVERSE);
  kcg_equ = kcg_equ & (kcg_c1->D_REVERSE == kcg_c2->D_REVERSE);
  kcg_equ = kcg_equ & (kcg_c1->Q_SCALE == kcg_c2->Q_SCALE);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_Reversing_supervision_information_TrackToTrain */

#ifdef kcg_use_struct_11039
kcg_bool kcg_comp_struct_11039(struct_11039 *kcg_c1, struct_11039 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->D_SECTIONTIMERSTOPLOC ==
      kcg_c2->D_SECTIONTIMERSTOPLOC);
  kcg_equ = kcg_equ & (kcg_c1->T_SECTIONTIMER == kcg_c2->T_SECTIONTIMER);
  kcg_equ = kcg_equ & (kcg_c1->Q_SECTIONTIMER == kcg_c2->Q_SECTIONTIMER);
  kcg_equ = kcg_equ & (kcg_c1->L_SECTION == kcg_c2->L_SECTION);
  return kcg_equ;
}
#endif /* kcg_use_struct_11039 */

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

#ifdef kcg_use_struct_11056
kcg_bool kcg_comp_struct_11056(struct_11056 *kcg_c1, struct_11056 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->NID_EM == kcg_c2->NID_EM);
  kcg_equ = kcg_equ & (kcg_c1->NID_LRBG == kcg_c2->NID_LRBG);
  kcg_equ = kcg_equ & (kcg_c1->M_ACK == kcg_c2->M_ACK);
  kcg_equ = kcg_equ & (kcg_c1->T_TRAIN == kcg_c2->T_TRAIN);
  kcg_equ = kcg_equ & (kcg_c1->L_MESSAGE == kcg_c2->L_MESSAGE);
  kcg_equ = kcg_equ & (kcg_c1->NID_MESSAGE == kcg_c2->NID_MESSAGE);
  return kcg_equ;
}
#endif /* kcg_use_struct_11056 */

#ifdef kcg_use_Var110_TrainToTrack
kcg_bool kcg_comp_Var110_TrainToTrack(
  Var110_TrainToTrack *kcg_c1,
  Var110_TrainToTrack *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->NID_CTRACTION == kcg_c2->NID_CTRACTION);
  kcg_equ = kcg_equ & (kcg_c1->M_VOLTAGE == kcg_c2->M_VOLTAGE);
  return kcg_equ;
}
#endif /* kcg_use_Var110_TrainToTrack */

#ifdef kcg_use_Var210_TrackToTrain
kcg_bool kcg_comp_Var210_TrackToTrain(
  Var210_TrackToTrain *kcg_c1,
  Var210_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->G_A == kcg_c2->G_A);
  kcg_equ = kcg_equ & (kcg_c1->Q_GDIR == kcg_c2->Q_GDIR);
  kcg_equ = kcg_equ & (kcg_c1->D_GRADIENT == kcg_c2->D_GRADIENT);
  return kcg_equ;
}
#endif /* kcg_use_Var210_TrackToTrain */

#ifdef kcg_use_Var690_TrackToTrain
kcg_bool kcg_comp_Var690_TrackToTrain(
  Var690_TrackToTrain *kcg_c1,
  Var690_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Q_PLATFORM == kcg_c2->Q_PLATFORM);
  kcg_equ = kcg_equ & (kcg_c1->M_PLATFORM == kcg_c2->M_PLATFORM);
  kcg_equ = kcg_equ & (kcg_c1->L_TRACKCOND == kcg_c2->L_TRACKCOND);
  kcg_equ = kcg_equ & (kcg_c1->D_TRACKCOND == kcg_c2->D_TRACKCOND);
  return kcg_equ;
}
#endif /* kcg_use_Var690_TrackToTrain */

#ifdef kcg_use_FilteredBGMessage_T_BG_Types_Pkg
kcg_bool kcg_comp_FilteredBGMessage_T_BG_Types_Pkg(
  FilteredBGMessage_T_BG_Types_Pkg *kcg_c1,
  FilteredBGMessage_T_BG_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_BG_Message_T_BG_Types_Pkg(
      &kcg_c1->checkedMessage,
      &kcg_c2->checkedMessage);
  kcg_equ = kcg_equ & (kcg_c1->q_dirlrbg == kcg_c2->q_dirlrbg);
  return kcg_equ;
}
#endif /* kcg_use_FilteredBGMessage_T_BG_Types_Pkg */

#ifdef kcg_use_TelegramHeaderFlag_T_BG_Types_Pkg
kcg_bool kcg_comp_TelegramHeaderFlag_T_BG_Types_Pkg(
  TelegramHeaderFlag_T_BG_Types_Pkg *kcg_c1,
  TelegramHeaderFlag_T_BG_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_TelegramHeader_T_BG_Types_Pkg(
      &kcg_c1->header,
      &kcg_c2->header);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_TelegramHeaderFlag_T_BG_Types_Pkg */

#ifdef kcg_use_AdditionalInformation_T_BG_Types_Pkg
kcg_bool kcg_comp_AdditionalInformation_T_BG_Types_Pkg(
  AdditionalInformation_T_BG_Types_Pkg *kcg_c1,
  AdditionalInformation_T_BG_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_LinkedBGs_T_BG_Types_Pkg(
      &kcg_c1->linkingPackets,
      &kcg_c2->linkingPackets);
  kcg_equ = kcg_equ & (kcg_c1->addInfo == kcg_c2->addInfo);
  return kcg_equ;
}
#endif /* kcg_use_AdditionalInformation_T_BG_Types_Pkg */

#ifdef kcg_use_Var32_TrackToTrain
kcg_bool kcg_comp_Var32_TrackToTrain(
  Var32_TrackToTrain *kcg_c1,
  Var32_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_SVar33_TrackToTrain(
      &kcg_c1->Struct51,
      &kcg_c2->Struct51);
  kcg_equ = kcg_equ & (kcg_c1->M_NVKVINT == kcg_c2->M_NVKVINT);
  kcg_equ = kcg_equ & (kcg_c1->V_NVKVINT == kcg_c2->V_NVKVINT);
  kcg_equ = kcg_equ & (kcg_c1->A_NVP23 == kcg_c2->A_NVP23);
  kcg_equ = kcg_equ & (kcg_c1->A_NVP12 == kcg_c2->A_NVP12);
  kcg_equ = kcg_equ & (kcg_c1->Q_NVKVINTSET == kcg_c2->Q_NVKVINTSET);
  return kcg_equ;
}
#endif /* kcg_use_Var32_TrackToTrain */

#ifdef kcg_use_Conditional_Level_Transition_Order_TrackToTrain
kcg_bool kcg_comp_Conditional_Level_Transition_Order_TrackToTrain(
  Conditional_Level_Transition_Order_TrackToTrain *kcg_c1,
  Conditional_Level_Transition_Order_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_SVar460_TrackToTrain(
      &kcg_c1->Struct20,
      &kcg_c2->Struct20);
  kcg_equ = kcg_equ & (kcg_c1->NID_NTC == kcg_c2->NID_NTC);
  kcg_equ = kcg_equ & (kcg_c1->M_LEVELTR == kcg_c2->M_LEVELTR);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_Conditional_Level_Transition_Order_TrackToTrain */

#ifdef kcg_use_infoFromLinking_T_TrainPosition_Types_Pck
kcg_bool kcg_comp_infoFromLinking_T_TrainPosition_Types_Pck(
  infoFromLinking_T_TrainPosition_Types_Pck *kcg_c1,
  infoFromLinking_T_TrainPosition_Types_Pck *kcg_c2)
{
  kcg_bool kcg_equ;
  
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

#ifdef kcg_use_Var580_TrackToTrain
kcg_bool kcg_comp_Var580_TrackToTrain(
  Var580_TrackToTrain *kcg_c1,
  Var580_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->q_lgtloc == kcg_c2->q_lgtloc);
  kcg_equ = kcg_equ & (kcg_c1->D_LOC == kcg_c2->D_LOC);
  return kcg_equ;
}
#endif /* kcg_use_Var580_TrackToTrain */

#ifdef kcg_use_End_of_Mission_Radio_TrainToTrack
kcg_bool kcg_comp_End_of_Mission_Radio_TrainToTrack(
  End_of_Mission_Radio_TrainToTrack *kcg_c1,
  End_of_Mission_Radio_TrainToTrack *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->End_of_Mission_OptionalPackets ==
      kcg_c2->End_of_Mission_OptionalPackets);
  kcg_equ = kcg_equ & (kcg_c1->PADDING7 == kcg_c2->PADDING7);
  kcg_equ = kcg_equ & (kcg_c1->NID_ENGINE == kcg_c2->NID_ENGINE);
  kcg_equ = kcg_equ & (kcg_c1->T_TRAIN == kcg_c2->T_TRAIN);
  kcg_equ = kcg_equ & (kcg_c1->L_MESSAGE == kcg_c2->L_MESSAGE);
  kcg_equ = kcg_equ & (kcg_c1->NID_MESSAGE == kcg_c2->NID_MESSAGE);
  return kcg_equ;
}
#endif /* kcg_use_End_of_Mission_Radio_TrainToTrack */

#ifdef kcg_use_Var410_TrackToTrain
kcg_bool kcg_comp_Var410_TrackToTrain(
  Var410_TrackToTrain *kcg_c1,
  Var410_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->L_ACKLEVELTR == kcg_c2->L_ACKLEVELTR);
  kcg_equ = kcg_equ & (kcg_c1->NID_NTC == kcg_c2->NID_NTC);
  kcg_equ = kcg_equ & (kcg_c1->M_LEVELTR == kcg_c2->M_LEVELTR);
  return kcg_equ;
}
#endif /* kcg_use_Var410_TrackToTrain */

#ifdef kcg_use_Telegram_T_BG_Types_Pkg
kcg_bool kcg_comp_Telegram_T_BG_Types_Pkg(
  Telegram_T_BG_Types_Pkg *kcg_c1,
  Telegram_T_BG_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_AdditionalInformation_T_BG_Types_Pkg(
      &kcg_c1->packets,
      &kcg_c2->packets);
  kcg_equ = kcg_equ & kcg_comp_TelegramHeader_T_BG_Types_Pkg(
      &kcg_c1->telegramheader,
      &kcg_c2->telegramheader);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  kcg_equ = kcg_equ & (kcg_c1->present == kcg_c2->present);
  return kcg_equ;
}
#endif /* kcg_use_Telegram_T_BG_Types_Pkg */

#ifdef kcg_use_Var271_TrackToTrain
kcg_bool kcg_comp_Var271_TrackToTrain(
  Var271_TrackToTrain *kcg_c1,
  Var271_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_SVar272_TrackToTrain(
      &kcg_c1->Struct62,
      &kcg_c2->Struct62);
  kcg_equ = kcg_equ & (kcg_c1->Q_FRONT == kcg_c2->Q_FRONT);
  kcg_equ = kcg_equ & (kcg_c1->V_STATIC == kcg_c2->V_STATIC);
  kcg_equ = kcg_equ & (kcg_c1->D_STATIC == kcg_c2->D_STATIC);
  return kcg_equ;
}
#endif /* kcg_use_Var271_TrackToTrain */

#ifdef kcg_use_List_of_balises_for_SH_Area_TrackToTrain
kcg_bool kcg_comp_List_of_balises_for_SH_Area_TrackToTrain(
  List_of_balises_for_SH_Area_TrackToTrain *kcg_c1,
  List_of_balises_for_SH_Area_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_SVar490_TrackToTrain(
      &kcg_c1->Struct21,
      &kcg_c2->Struct21);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_List_of_balises_for_SH_Area_TrackToTrain */

#ifdef kcg_use_Var511_TrackToTrain
kcg_bool kcg_comp_Var511_TrackToTrain(
  Var511_TrackToTrain *kcg_c1,
  Var511_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_SVar512_TrackToTrain(
      &kcg_c1->Struct68,
      &kcg_c2->Struct68);
  kcg_equ = kcg_equ & (kcg_c1->Q_FRONT == kcg_c2->Q_FRONT);
  kcg_equ = kcg_equ & (kcg_c1->L_AXLELOAD == kcg_c2->L_AXLELOAD);
  kcg_equ = kcg_equ & (kcg_c1->D_AXLELOAD == kcg_c2->D_AXLELOAD);
  return kcg_equ;
}
#endif /* kcg_use_Var511_TrackToTrain */

#ifdef kcg_use_List_of_Balises_in_SR_Authority_TrackToTrain
kcg_bool kcg_comp_List_of_Balises_in_SR_Authority_TrackToTrain(
  List_of_Balises_in_SR_Authority_TrackToTrain *kcg_c1,
  List_of_Balises_in_SR_Authority_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_SVar630_TrackToTrain(
      &kcg_c1->Struct27,
      &kcg_c2->Struct27);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_List_of_Balises_in_SR_Authority_TrackToTrain */

#ifdef kcg_use_Repositioning_Information_TrackToTrain
kcg_bool kcg_comp_Repositioning_Information_TrackToTrain(
  Repositioning_Information_TrackToTrain *kcg_c1,
  Repositioning_Information_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->L_SECTION == kcg_c2->L_SECTION);
  kcg_equ = kcg_equ & (kcg_c1->Q_SCALE == kcg_c2->Q_SCALE);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_Repositioning_Information_TrackToTrain */

#ifdef kcg_use_RBC_or_RIU_System_Version_Radio_TrackToTrain
kcg_bool kcg_comp_RBC_or_RIU_System_Version_Radio_TrackToTrain(
  RBC_or_RIU_System_Version_Radio_TrackToTrain *kcg_c1,
  RBC_or_RIU_System_Version_Radio_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->M_VERSION == kcg_c2->M_VERSION);
  kcg_equ = kcg_equ & (kcg_c1->NID_LRBG == kcg_c2->NID_LRBG);
  kcg_equ = kcg_equ & (kcg_c1->M_ACK == kcg_c2->M_ACK);
  kcg_equ = kcg_equ & (kcg_c1->T_TRAIN == kcg_c2->T_TRAIN);
  kcg_equ = kcg_equ & (kcg_c1->L_MESSAGE == kcg_c2->L_MESSAGE);
  kcg_equ = kcg_equ & (kcg_c1->NID_MESSAGE == kcg_c2->NID_MESSAGE);
  return kcg_equ;
}
#endif /* kcg_use_RBC_or_RIU_System_Version_Radio_TrackToTrain */

#ifdef kcg_use_Var680_TrackToTrain
kcg_bool kcg_comp_Var680_TrackToTrain(
  Var680_TrackToTrain *kcg_c1,
  Var680_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->M_TRACKCOND == kcg_c2->M_TRACKCOND);
  kcg_equ = kcg_equ & (kcg_c1->L_TRACKCOND == kcg_c2->L_TRACKCOND);
  kcg_equ = kcg_equ & (kcg_c1->D_TRACKCOND == kcg_c2->D_TRACKCOND);
  return kcg_equ;
}
#endif /* kcg_use_Var680_TrackToTrain */

#ifdef kcg_use_Reversing_area_information_TrackToTrain
kcg_bool kcg_comp_Reversing_area_information_TrackToTrain(
  Reversing_area_information_TrackToTrain *kcg_c1,
  Reversing_area_information_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->L_REVERSEAREA == kcg_c2->L_REVERSEAREA);
  kcg_equ = kcg_equ & (kcg_c1->D_STARTREVERSE == kcg_c2->D_STARTREVERSE);
  kcg_equ = kcg_equ & (kcg_c1->Q_SCALE == kcg_c2->Q_SCALE);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_Reversing_area_information_TrackToTrain */

#ifdef kcg_use_Var700_TrackToTrain
kcg_bool kcg_comp_Var700_TrackToTrain(
  Var700_TrackToTrain *kcg_c1,
  Var700_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->NID_CTRACTION == kcg_c2->NID_CTRACTION);
  kcg_equ = kcg_equ & (kcg_c1->M_VOLTAGE == kcg_c2->M_VOLTAGE);
  kcg_equ = kcg_equ & (kcg_c1->M_AXLELOADCAT == kcg_c2->M_AXLELOADCAT);
  kcg_equ = kcg_equ & (kcg_c1->M_LINEGAUGE == kcg_c2->M_LINEGAUGE);
  kcg_equ = kcg_equ & (kcg_c1->Q_SUITABILITY == kcg_c2->Q_SUITABILITY);
  kcg_equ = kcg_equ & (kcg_c1->D_SUITABILITY == kcg_c2->D_SUITABILITY);
  return kcg_equ;
}
#endif /* kcg_use_Var700_TrackToTrain */

#ifdef kcg_use_positionErrors_T_TrainPosition_Types_Pck
kcg_bool kcg_comp_positionErrors_T_TrainPosition_Types_Pck(
  positionErrors_T_TrainPosition_Types_Pck *kcg_c1,
  positionErrors_T_TrainPosition_Types_Pck *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->positionCalculation_inconsistent ==
      kcg_c2->positionCalculation_inconsistent);
  kcg_equ = kcg_equ & (kcg_c1->passedBG_notFoundWhereExpected ==
      kcg_c2->passedBG_notFoundWhereExpected);
  kcg_equ = kcg_equ & (kcg_c1->outOfMemSpace == kcg_c2->outOfMemSpace);
  return kcg_equ;
}
#endif /* kcg_use_positionErrors_T_TrainPosition_Types_Pck */

#ifdef kcg_use_Train_running_number_from_RBC_TrackToTrain
kcg_bool kcg_comp_Train_running_number_from_RBC_TrackToTrain(
  Train_running_number_from_RBC_TrackToTrain *kcg_c1,
  Train_running_number_from_RBC_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->NID_OPERATIONAL == kcg_c2->NID_OPERATIONAL);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_Train_running_number_from_RBC_TrackToTrain */

#ifdef kcg_use_Track_Condition_Change_of_allowed_current_consumption_TrackToTrain
kcg_bool kcg_comp_Track_Condition_Change_of_allowed_current_consumption_TrackToTrain(
  Track_Condition_Change_of_allowed_current_consumption_TrackToTrain *kcg_c1,
  Track_Condition_Change_of_allowed_current_consumption_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->M_CURRENT == kcg_c2->M_CURRENT);
  kcg_equ = kcg_equ & (kcg_c1->D_CURRENT == kcg_c2->D_CURRENT);
  kcg_equ = kcg_equ & (kcg_c1->Q_SCALE == kcg_c2->Q_SCALE);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_Track_Condition_Change_of_allowed_current_consumption_TrackToTrain */

#ifdef kcg_use_struct_11281
kcg_bool kcg_comp_struct_11281(struct_11281 *kcg_c1, struct_11281 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->T_TRAIN1 == kcg_c2->T_TRAIN1);
  kcg_equ = kcg_equ & (kcg_c1->NID_LRBG == kcg_c2->NID_LRBG);
  kcg_equ = kcg_equ & (kcg_c1->M_ACK == kcg_c2->M_ACK);
  kcg_equ = kcg_equ & (kcg_c1->T_TRAIN0 == kcg_c2->T_TRAIN0);
  kcg_equ = kcg_equ & (kcg_c1->L_MESSAGE == kcg_c2->L_MESSAGE);
  kcg_equ = kcg_equ & (kcg_c1->NID_MESSAGE == kcg_c2->NID_MESSAGE);
  return kcg_equ;
}
#endif /* kcg_use_struct_11281 */

#ifdef kcg_use_Var460_TrackToTrain
kcg_bool kcg_comp_Var460_TrackToTrain(
  Var460_TrackToTrain *kcg_c1,
  Var460_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->NID_NTC == kcg_c2->NID_NTC);
  kcg_equ = kcg_equ & (kcg_c1->M_LEVELTR == kcg_c2->M_LEVELTR);
  return kcg_equ;
}
#endif /* kcg_use_Var460_TrackToTrain */

#ifdef kcg_use_centerOfBalisePosition_T_BG_Types_Pkg
kcg_bool kcg_comp_centerOfBalisePosition_T_BG_Types_Pkg(
  centerOfBalisePosition_T_BG_Types_Pkg *kcg_c1,
  centerOfBalisePosition_T_BG_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->timestamp == kcg_c2->timestamp);
  kcg_equ = kcg_equ & kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &kcg_c1->BG_centerDetectionInaccuraccuracies,
      &kcg_c2->BG_centerDetectionInaccuraccuracies);
  kcg_equ = kcg_equ & kcg_comp_OdometryLocations_T_Obu_BasicTypes_Pkg(
      &kcg_c1->centerOfBalisePosition,
      &kcg_c2->centerOfBalisePosition);
  return kcg_equ;
}
#endif /* kcg_use_centerOfBalisePosition_T_BG_Types_Pkg */

#ifdef kcg_use_Var111_TrainToTrack
kcg_bool kcg_comp_Var111_TrainToTrack(
  Var111_TrainToTrack *kcg_c1,
  Var111_TrainToTrack *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->NID_NTC == kcg_c2->NID_NTC);
  return kcg_equ;
}
#endif /* kcg_use_Var111_TrainToTrack */

#ifdef kcg_use_Var520_TrackToTrain
kcg_bool kcg_comp_Var520_TrackToTrain(
  Var520_TrackToTrain *kcg_c1,
  Var520_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->L_PBDSR == kcg_c2->L_PBDSR);
  kcg_equ = kcg_equ & (kcg_c1->D_PBDSR == kcg_c2->D_PBDSR);
  kcg_equ = kcg_equ & (kcg_c1->Q_PBDSR == kcg_c2->Q_PBDSR);
  kcg_equ = kcg_equ & (kcg_c1->G_PBDSR == kcg_c2->G_PBDSR);
  kcg_equ = kcg_equ & (kcg_c1->Q_GDIR == kcg_c2->Q_GDIR);
  kcg_equ = kcg_equ & (kcg_c1->D_PBD == kcg_c2->D_PBD);
  return kcg_equ;
}
#endif /* kcg_use_Var520_TrackToTrain */

#ifdef kcg_use_struct_11318
kcg_bool kcg_comp_struct_11318(struct_11318 *kcg_c1, struct_11318 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->NID_ENGINE == kcg_c2->NID_ENGINE);
  kcg_equ = kcg_equ & (kcg_c1->T_TRAIN == kcg_c2->T_TRAIN);
  kcg_equ = kcg_equ & (kcg_c1->L_MESSAGE == kcg_c2->L_MESSAGE);
  kcg_equ = kcg_equ & (kcg_c1->NID_MESSAGE == kcg_c2->NID_MESSAGE);
  return kcg_equ;
}
#endif /* kcg_use_struct_11318 */

#ifdef kcg_use_Track_Ahead_Free_Granted_Radio_TrainToTrack
kcg_bool kcg_comp_Track_Ahead_Free_Granted_Radio_TrainToTrack(
  Track_Ahead_Free_Granted_Radio_TrainToTrack *kcg_c1,
  Track_Ahead_Free_Granted_Radio_TrainToTrack *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Track_Ahead_Free_Granted_OptionalPackets ==
      kcg_c2->Track_Ahead_Free_Granted_OptionalPackets);
  kcg_equ = kcg_equ & (kcg_c1->PADDING6 == kcg_c2->PADDING6);
  kcg_equ = kcg_equ & (kcg_c1->NID_ENGINE == kcg_c2->NID_ENGINE);
  kcg_equ = kcg_equ & (kcg_c1->T_TRAIN == kcg_c2->T_TRAIN);
  kcg_equ = kcg_equ & (kcg_c1->L_MESSAGE == kcg_c2->L_MESSAGE);
  kcg_equ = kcg_equ & (kcg_c1->NID_MESSAGE == kcg_c2->NID_MESSAGE);
  return kcg_equ;
}
#endif /* kcg_use_Track_Ahead_Free_Granted_Radio_TrainToTrack */

#ifdef kcg_use_National_Values_TrackToTrain
kcg_bool kcg_comp_National_Values_TrackToTrain(
  National_Values_TrackToTrain *kcg_c1,
  National_Values_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->M_NVKTINT == kcg_c2->M_NVKTINT);
  kcg_equ = kcg_equ & kcg_comp_SVar34_TrackToTrain(
      &kcg_c1->Struct4,
      &kcg_c2->Struct4);
  kcg_equ = kcg_equ & (kcg_c1->M_NVKRINT == kcg_c2->M_NVKRINT);
  kcg_equ = kcg_equ & (kcg_c1->L_NVKRINT == kcg_c2->L_NVKRINT);
  kcg_equ = kcg_equ & kcg_comp_SVar32_TrackToTrain(
      &kcg_c1->Struct2,
      &kcg_c2->Struct2);
  kcg_equ = kcg_equ & kcg_comp_SVar31_TrackToTrain(
      &kcg_c1->Struct1,
      &kcg_c2->Struct1);
  kcg_equ = kcg_equ & (kcg_c1->M_NVKVINT == kcg_c2->M_NVKVINT);
  kcg_equ = kcg_equ & (kcg_c1->V_NVKVINT == kcg_c2->V_NVKVINT);
  kcg_equ = kcg_equ & (kcg_c1->A_NVP23 == kcg_c2->A_NVP23);
  kcg_equ = kcg_equ & (kcg_c1->A_NVP12 == kcg_c2->A_NVP12);
  kcg_equ = kcg_equ & (kcg_c1->Q_NVKVINTSET == kcg_c2->Q_NVKVINTSET);
  kcg_equ = kcg_equ & (kcg_c1->Q_NVKINT == kcg_c2->Q_NVKINT);
  kcg_equ = kcg_equ & (kcg_c1->M_NVEBCL == kcg_c2->M_NVEBCL);
  kcg_equ = kcg_equ & (kcg_c1->M_NVAVADH == kcg_c2->M_NVAVADH);
  kcg_equ = kcg_equ & (kcg_c1->Q_NVLOCACC == kcg_c2->Q_NVLOCACC);
  kcg_equ = kcg_equ & (kcg_c1->A_NVMAXREDADH3 == kcg_c2->A_NVMAXREDADH3);
  kcg_equ = kcg_equ & (kcg_c1->A_NVMAXREDADH2 == kcg_c2->A_NVMAXREDADH2);
  kcg_equ = kcg_equ & (kcg_c1->A_NVMAXREDADH1 == kcg_c2->A_NVMAXREDADH1);
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
  kcg_equ = kcg_equ & (kcg_c1->Q_NVINHSMICPERM == kcg_c2->Q_NVINHSMICPERM);
  kcg_equ = kcg_equ & (kcg_c1->Q_NVSBFBPERM == kcg_c2->Q_NVSBFBPERM);
  kcg_equ = kcg_equ & (kcg_c1->Q_NVGUIPERM == kcg_c2->Q_NVGUIPERM);
  kcg_equ = kcg_equ & (kcg_c1->Q_NVEMRRLS == kcg_c2->Q_NVEMRRLS);
  kcg_equ = kcg_equ & (kcg_c1->Q_NVSBTSMPERM == kcg_c2->Q_NVSBTSMPERM);
  kcg_equ = kcg_equ & (kcg_c1->D_NVROLL == kcg_c2->D_NVROLL);
  kcg_equ = kcg_equ & (kcg_c1->V_NVREL == kcg_c2->V_NVREL);
  kcg_equ = kcg_equ & (kcg_c1->V_NVUNFIT == kcg_c2->V_NVUNFIT);
  kcg_equ = kcg_equ & (kcg_c1->V_NVLIMSUPERV == kcg_c2->V_NVLIMSUPERV);
  kcg_equ = kcg_equ & (kcg_c1->V_NVONSIGHT == kcg_c2->V_NVONSIGHT);
  kcg_equ = kcg_equ & (kcg_c1->V_NVSTFF == kcg_c2->V_NVSTFF);
  kcg_equ = kcg_equ & (kcg_c1->V_NVSHUNT == kcg_c2->V_NVSHUNT);
  kcg_equ = kcg_equ & kcg_comp_SVar30_TrackToTrain(
      &kcg_c1->Struct0,
      &kcg_c2->Struct0);
  kcg_equ = kcg_equ & (kcg_c1->NID_C == kcg_c2->NID_C);
  kcg_equ = kcg_equ & (kcg_c1->D_VALIDNV == kcg_c2->D_VALIDNV);
  kcg_equ = kcg_equ & (kcg_c1->Q_SCALE == kcg_c2->Q_SCALE);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_National_Values_TrackToTrain */

#ifdef kcg_use_Linking_TrackToTrain
kcg_bool kcg_comp_Linking_TrackToTrain(
  Linking_TrackToTrain *kcg_c1,
  Linking_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_SVar50_TrackToTrain(
      &kcg_c1->Struct5,
      &kcg_c2->Struct5);
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
  return kcg_equ;
}
#endif /* kcg_use_Linking_TrackToTrain */

#ifdef kcg_use_Level_1_Movement_Authority_TrackToTrain
kcg_bool kcg_comp_Level_1_Movement_Authority_TrackToTrain(
  Level_1_Movement_Authority_TrackToTrain *kcg_c1,
  Level_1_Movement_Authority_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
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
  kcg_equ = kcg_equ & kcg_comp_SVar120_TrackToTrain(
      &kcg_c1->Struct6,
      &kcg_c2->Struct6);
  kcg_equ = kcg_equ & (kcg_c1->T_LOA == kcg_c2->T_LOA);
  kcg_equ = kcg_equ & (kcg_c1->V_LOA == kcg_c2->V_LOA);
  kcg_equ = kcg_equ & (kcg_c1->V_MAIN == kcg_c2->V_MAIN);
  kcg_equ = kcg_equ & (kcg_c1->Q_SCALE == kcg_c2->Q_SCALE);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_Level_1_Movement_Authority_TrackToTrain */

#ifdef kcg_use_Level_23_Movement_Authority_TrackToTrain
kcg_bool kcg_comp_Level_23_Movement_Authority_TrackToTrain(
  Level_23_Movement_Authority_TrackToTrain *kcg_c1,
  Level_23_Movement_Authority_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
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
  kcg_equ = kcg_equ & kcg_comp_SVar150_TrackToTrain(
      &kcg_c1->Struct14,
      &kcg_c2->Struct14);
  kcg_equ = kcg_equ & (kcg_c1->T_LOA == kcg_c2->T_LOA);
  kcg_equ = kcg_equ & (kcg_c1->V_LOA == kcg_c2->V_LOA);
  kcg_equ = kcg_equ & (kcg_c1->Q_SCALE == kcg_c2->Q_SCALE);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_Level_23_Movement_Authority_TrackToTrain */

#ifdef kcg_use_Axle_Load_Speed_Profile_TrackToTrain
kcg_bool kcg_comp_Axle_Load_Speed_Profile_TrackToTrain(
  Axle_Load_Speed_Profile_TrackToTrain *kcg_c1,
  Axle_Load_Speed_Profile_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_SVar511_TrackToTrain(
      &kcg_c1->Struct23,
      &kcg_c2->Struct23);
  kcg_equ = kcg_equ & kcg_comp_SVar510_TrackToTrain(
      &kcg_c1->Struct22,
      &kcg_c2->Struct22);
  kcg_equ = kcg_equ & (kcg_c1->Q_FRONT == kcg_c2->Q_FRONT);
  kcg_equ = kcg_equ & (kcg_c1->L_AXLELOAD == kcg_c2->L_AXLELOAD);
  kcg_equ = kcg_equ & (kcg_c1->D_AXLELOAD == kcg_c2->D_AXLELOAD);
  kcg_equ = kcg_equ & (kcg_c1->D_TRACKINIT == kcg_c2->D_TRACKINIT);
  kcg_equ = kcg_equ & (kcg_c1->Q_TRACKINIT == kcg_c2->Q_TRACKINIT);
  kcg_equ = kcg_equ & (kcg_c1->Q_SCALE == kcg_c2->Q_SCALE);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_Axle_Load_Speed_Profile_TrackToTrain */

#ifdef kcg_use_Permitted_Braking_Distance_Information_TrackToTrain
kcg_bool kcg_comp_Permitted_Braking_Distance_Information_TrackToTrain(
  Permitted_Braking_Distance_Information_TrackToTrain *kcg_c1,
  Permitted_Braking_Distance_Information_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_SVar520_TrackToTrain(
      &kcg_c1->Struct25,
      &kcg_c2->Struct25);
  kcg_equ = kcg_equ & (kcg_c1->L_PBDSR == kcg_c2->L_PBDSR);
  kcg_equ = kcg_equ & (kcg_c1->D_PBDSR == kcg_c2->D_PBDSR);
  kcg_equ = kcg_equ & (kcg_c1->Q_PBDSR == kcg_c2->Q_PBDSR);
  kcg_equ = kcg_equ & (kcg_c1->G_PBDSR == kcg_c2->G_PBDSR);
  kcg_equ = kcg_equ & (kcg_c1->Q_GDIR == kcg_c2->Q_GDIR);
  kcg_equ = kcg_equ & (kcg_c1->D_PBD == kcg_c2->D_PBD);
  kcg_equ = kcg_equ & (kcg_c1->D_TRACKINIT == kcg_c2->D_TRACKINIT);
  kcg_equ = kcg_equ & (kcg_c1->Q_TRACKINIT == kcg_c2->Q_TRACKINIT);
  kcg_equ = kcg_equ & (kcg_c1->Q_SCALE == kcg_c2->Q_SCALE);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_Permitted_Braking_Distance_Information_TrackToTrain */

#ifdef kcg_use_Track_Condition_TrackToTrain
kcg_bool kcg_comp_Track_Condition_TrackToTrain(
  Track_Condition_TrackToTrain *kcg_c1,
  Track_Condition_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_SVar680_TrackToTrain(
      &kcg_c1->Struct29,
      &kcg_c2->Struct29);
  kcg_equ = kcg_equ & (kcg_c1->M_TRACKCOND == kcg_c2->M_TRACKCOND);
  kcg_equ = kcg_equ & (kcg_c1->L_TRACKCOND == kcg_c2->L_TRACKCOND);
  kcg_equ = kcg_equ & (kcg_c1->D_TRACKCOND == kcg_c2->D_TRACKCOND);
  kcg_equ = kcg_equ & (kcg_c1->D_TRACKINIT == kcg_c2->D_TRACKINIT);
  kcg_equ = kcg_equ & (kcg_c1->Q_TRACKINIT == kcg_c2->Q_TRACKINIT);
  kcg_equ = kcg_equ & (kcg_c1->Q_SCALE == kcg_c2->Q_SCALE);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_Track_Condition_TrackToTrain */

#ifdef kcg_use_Track_Condition_Station_Platforms_TrackToTrain
kcg_bool kcg_comp_Track_Condition_Station_Platforms_TrackToTrain(
  Track_Condition_Station_Platforms_TrackToTrain *kcg_c1,
  Track_Condition_Station_Platforms_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_SVar690_TrackToTrain(
      &kcg_c1->Struct30,
      &kcg_c2->Struct30);
  kcg_equ = kcg_equ & (kcg_c1->Q_PLATFORM == kcg_c2->Q_PLATFORM);
  kcg_equ = kcg_equ & (kcg_c1->M_PLATFORM == kcg_c2->M_PLATFORM);
  kcg_equ = kcg_equ & (kcg_c1->L_TRACKCOND == kcg_c2->L_TRACKCOND);
  kcg_equ = kcg_equ & (kcg_c1->D_TRACKCOND == kcg_c2->D_TRACKCOND);
  kcg_equ = kcg_equ & (kcg_c1->D_TRACKINIT == kcg_c2->D_TRACKINIT);
  kcg_equ = kcg_equ & (kcg_c1->Q_TRACKINIT == kcg_c2->Q_TRACKINIT);
  kcg_equ = kcg_equ & (kcg_c1->Q_SCALE == kcg_c2->Q_SCALE);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_Track_Condition_Station_Platforms_TrackToTrain */

#ifdef kcg_use_Route_Suitability_Data_TrackToTrain
kcg_bool kcg_comp_Route_Suitability_Data_TrackToTrain(
  Route_Suitability_Data_TrackToTrain *kcg_c1,
  Route_Suitability_Data_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_SVar700_TrackToTrain(
      &kcg_c1->Struct31,
      &kcg_c2->Struct31);
  kcg_equ = kcg_equ & (kcg_c1->NID_CTRACTION == kcg_c2->NID_CTRACTION);
  kcg_equ = kcg_equ & (kcg_c1->M_VOLTAGE == kcg_c2->M_VOLTAGE);
  kcg_equ = kcg_equ & (kcg_c1->M_AXLELOADCAT == kcg_c2->M_AXLELOADCAT);
  kcg_equ = kcg_equ & (kcg_c1->M_LINEGAUGE == kcg_c2->M_LINEGAUGE);
  kcg_equ = kcg_equ & (kcg_c1->Q_SUITABILITY == kcg_c2->Q_SUITABILITY);
  kcg_equ = kcg_equ & (kcg_c1->D_SUITABILITY == kcg_c2->D_SUITABILITY);
  kcg_equ = kcg_equ & (kcg_c1->D_TRACKINIT == kcg_c2->D_TRACKINIT);
  kcg_equ = kcg_equ & (kcg_c1->Q_TRACKINIT == kcg_c2->Q_TRACKINIT);
  kcg_equ = kcg_equ & (kcg_c1->Q_SCALE == kcg_c2->Q_SCALE);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_Route_Suitability_Data_TrackToTrain */

#ifdef kcg_use_Packet_for_sending_plain_text_messages_TrackToTrain
kcg_bool kcg_comp_Packet_for_sending_plain_text_messages_TrackToTrain(
  Packet_for_sending_plain_text_messages_TrackToTrain *kcg_c1,
  Packet_for_sending_plain_text_messages_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->X_TEXT == kcg_c2->X_TEXT);
  kcg_equ = kcg_equ & (kcg_c1->L_TEXT == kcg_c2->L_TEXT);
  kcg_equ = kcg_equ & (kcg_c1->NID_RBC == kcg_c2->NID_RBC);
  kcg_equ = kcg_equ & (kcg_c1->NID_C == kcg_c2->NID_C);
  kcg_equ = kcg_equ & (kcg_c1->NID_TEXTMESSAGE == kcg_c2->NID_TEXTMESSAGE);
  kcg_equ = kcg_equ & (kcg_c1->Q_TEXTREPORT == kcg_c2->Q_TEXTREPORT);
  kcg_equ = kcg_equ & (kcg_c1->Q_CONFTEXTDISPLAY == kcg_c2->Q_CONFTEXTDISPLAY);
  kcg_equ = kcg_equ & (kcg_c1->Q_TEXTCONFIRM == kcg_c2->Q_TEXTCONFIRM);
  kcg_equ = kcg_equ & kcg_comp_Var727_TrackToTrain(
      &kcg_c1->Struct37,
      &kcg_c2->Struct37);
  kcg_equ = kcg_equ & (kcg_c1->T_TEXTDISPLAY == kcg_c2->T_TEXTDISPLAY);
  kcg_equ = kcg_equ & (kcg_c1->L_TEXTDISPLAY == kcg_c2->L_TEXTDISPLAY);
  kcg_equ = kcg_equ & kcg_comp_Var727_TrackToTrain(
      &kcg_c1->Struct34,
      &kcg_c2->Struct34);
  kcg_equ = kcg_equ & (kcg_c1->D_TEXTDISPLAY == kcg_c2->D_TEXTDISPLAY);
  kcg_equ = kcg_equ & (kcg_c1->Q_TEXTDISPLAY == kcg_c2->Q_TEXTDISPLAY);
  kcg_equ = kcg_equ & (kcg_c1->Q_TEXTCLASS == kcg_c2->Q_TEXTCLASS);
  kcg_equ = kcg_equ & (kcg_c1->Q_SCALE == kcg_c2->Q_SCALE);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_Packet_for_sending_plain_text_messages_TrackToTrain */

#ifdef kcg_use_Packet_for_sending_fixed_text_messages_TrackToTrain
kcg_bool kcg_comp_Packet_for_sending_fixed_text_messages_TrackToTrain(
  Packet_for_sending_fixed_text_messages_TrackToTrain *kcg_c1,
  Packet_for_sending_fixed_text_messages_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Q_TEXT == kcg_c2->Q_TEXT);
  kcg_equ = kcg_equ & (kcg_c1->NID_RBC == kcg_c2->NID_RBC);
  kcg_equ = kcg_equ & (kcg_c1->NID_C == kcg_c2->NID_C);
  kcg_equ = kcg_equ & (kcg_c1->NID_TEXTMESSAGE == kcg_c2->NID_TEXTMESSAGE);
  kcg_equ = kcg_equ & (kcg_c1->Q_TEXTREPORT == kcg_c2->Q_TEXTREPORT);
  kcg_equ = kcg_equ & (kcg_c1->Q_CONFTEXTDISPLAY == kcg_c2->Q_CONFTEXTDISPLAY);
  kcg_equ = kcg_equ & (kcg_c1->Q_TEXTCONFIRM == kcg_c2->Q_TEXTCONFIRM);
  kcg_equ = kcg_equ & kcg_comp_Var767_TrackToTrain(
      &kcg_c1->Struct43,
      &kcg_c2->Struct43);
  kcg_equ = kcg_equ & (kcg_c1->T_TEXTDISPLAY == kcg_c2->T_TEXTDISPLAY);
  kcg_equ = kcg_equ & (kcg_c1->L_TEXTDISPLAY == kcg_c2->L_TEXTDISPLAY);
  kcg_equ = kcg_equ & kcg_comp_Var767_TrackToTrain(
      &kcg_c1->Struct40,
      &kcg_c2->Struct40);
  kcg_equ = kcg_equ & (kcg_c1->D_TEXTDISPLAY == kcg_c2->D_TEXTDISPLAY);
  kcg_equ = kcg_equ & (kcg_c1->Q_TEXTDISPLAY == kcg_c2->Q_TEXTDISPLAY);
  kcg_equ = kcg_equ & (kcg_c1->Q_TEXTCLASS == kcg_c2->Q_TEXTCLASS);
  kcg_equ = kcg_equ & (kcg_c1->Q_SCALE == kcg_c2->Q_SCALE);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_Packet_for_sending_fixed_text_messages_TrackToTrain */

#ifdef kcg_use_Geographical_Position_Information_TrackToTrain
kcg_bool kcg_comp_Geographical_Position_Information_TrackToTrain(
  Geographical_Position_Information_TrackToTrain *kcg_c1,
  Geographical_Position_Information_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_SVar790_TrackToTrain(
      &kcg_c1->Struct44,
      &kcg_c2->Struct44);
  kcg_equ = kcg_equ & (kcg_c1->M_POSITION == kcg_c2->M_POSITION);
  kcg_equ = kcg_equ & (kcg_c1->Q_MPOSITION == kcg_c2->Q_MPOSITION);
  kcg_equ = kcg_equ & (kcg_c1->D_POSOFF == kcg_c2->D_POSOFF);
  kcg_equ = kcg_equ & (kcg_c1->NID_BG == kcg_c2->NID_BG);
  kcg_equ = kcg_equ & (kcg_c1->NID_C == kcg_c2->NID_C);
  kcg_equ = kcg_equ & (kcg_c1->Q_NEWCOUNTRY == kcg_c2->Q_NEWCOUNTRY);
  kcg_equ = kcg_equ & (kcg_c1->Q_SCALE == kcg_c2->Q_SCALE);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_Geographical_Position_Information_TrackToTrain */

#ifdef kcg_use_Mode_profile_TrackToTrain
kcg_bool kcg_comp_Mode_profile_TrackToTrain(
  Mode_profile_TrackToTrain *kcg_c1,
  Mode_profile_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_SVar800_TrackToTrain(
      &kcg_c1->Struct45,
      &kcg_c2->Struct45);
  kcg_equ = kcg_equ & (kcg_c1->Q_MAMODE == kcg_c2->Q_MAMODE);
  kcg_equ = kcg_equ & (kcg_c1->L_ACKMAMODE == kcg_c2->L_ACKMAMODE);
  kcg_equ = kcg_equ & (kcg_c1->L_MAMODE == kcg_c2->L_MAMODE);
  kcg_equ = kcg_equ & (kcg_c1->V_MAMODE == kcg_c2->V_MAMODE);
  kcg_equ = kcg_equ & (kcg_c1->M_MAMODE == kcg_c2->M_MAMODE);
  kcg_equ = kcg_equ & (kcg_c1->D_MAMODE == kcg_c2->D_MAMODE);
  kcg_equ = kcg_equ & (kcg_c1->Q_SCALE == kcg_c2->Q_SCALE);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_Mode_profile_TrackToTrain */

#ifdef kcg_use_Level_Crossing_information_TrackToTrain
kcg_bool kcg_comp_Level_Crossing_information_TrackToTrain(
  Level_Crossing_information_TrackToTrain *kcg_c1,
  Level_Crossing_information_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->L_STOPLX == kcg_c2->L_STOPLX);
  kcg_equ = kcg_equ & (kcg_c1->Q_STOPLX == kcg_c2->Q_STOPLX);
  kcg_equ = kcg_equ & (kcg_c1->V_LX == kcg_c2->V_LX);
  kcg_equ = kcg_equ & (kcg_c1->Q_LXSTATUS == kcg_c2->Q_LXSTATUS);
  kcg_equ = kcg_equ & (kcg_c1->L_LX == kcg_c2->L_LX);
  kcg_equ = kcg_equ & (kcg_c1->D_LX == kcg_c2->D_LX);
  kcg_equ = kcg_equ & (kcg_c1->NID_LX == kcg_c2->NID_LX);
  kcg_equ = kcg_equ & (kcg_c1->Q_SCALE == kcg_c2->Q_SCALE);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_Level_Crossing_information_TrackToTrain */

#ifdef kcg_use_Radio_infill_area_information_TrackToTrain
kcg_bool kcg_comp_Radio_infill_area_information_TrackToTrain(
  Radio_infill_area_information_TrackToTrain *kcg_c1,
  Radio_infill_area_information_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->NID_BG == kcg_c2->NID_BG);
  kcg_equ = kcg_equ & (kcg_c1->D_INFILL == kcg_c2->D_INFILL);
  kcg_equ = kcg_equ & (kcg_c1->NID_RADIO == kcg_c2->NID_RADIO);
  kcg_equ = kcg_equ & (kcg_c1->NID_RIU == kcg_c2->NID_RIU);
  kcg_equ = kcg_equ & (kcg_c1->NID_C == kcg_c2->NID_C);
  kcg_equ = kcg_equ & (kcg_c1->Q_RIU == kcg_c2->Q_RIU);
  kcg_equ = kcg_equ & (kcg_c1->Q_SCALE == kcg_c2->Q_SCALE);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_Radio_infill_area_information_TrackToTrain */

#ifdef kcg_use_Position_Report_TrainToTrack
kcg_bool kcg_comp_Position_Report_TrainToTrack(
  Position_Report_TrainToTrack *kcg_c1,
  Position_Report_TrainToTrack *kcg_c2)
{
  kcg_bool kcg_equ;
  
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
  kcg_equ = kcg_equ & (kcg_c1->Q_SCALE == kcg_c2->Q_SCALE);
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
  kcg_bool kcg_equ;
  
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
  kcg_equ = kcg_equ & (kcg_c1->Q_SCALE == kcg_c2->Q_SCALE);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_Position_Report_based_on_two_balise_groups_TrainToTrack */

#ifdef kcg_use_Validated_train_data_TrainToTrack
kcg_bool kcg_comp_Validated_train_data_TrainToTrack(
  Validated_train_data_TrainToTrack *kcg_c1,
  Validated_train_data_TrainToTrack *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_SVar111_TrainToTrack(
      &kcg_c1->Struct48,
      &kcg_c2->Struct48);
  kcg_equ = kcg_equ & kcg_comp_SVar110_TrainToTrack(
      &kcg_c1->Struct47,
      &kcg_c2->Struct47);
  kcg_equ = kcg_equ & (kcg_c1->N_AXLE == kcg_c2->N_AXLE);
  kcg_equ = kcg_equ & (kcg_c1->M_AIRTIGHT == kcg_c2->M_AIRTIGHT);
  kcg_equ = kcg_equ & (kcg_c1->M_AXLELOADCAT == kcg_c2->M_AXLELOADCAT);
  kcg_equ = kcg_equ & (kcg_c1->M_LOADINGGAUGE == kcg_c2->M_LOADINGGAUGE);
  kcg_equ = kcg_equ & (kcg_c1->V_MAXTRAIN == kcg_c2->V_MAXTRAIN);
  kcg_equ = kcg_equ & (kcg_c1->L_TRAIN == kcg_c2->L_TRAIN);
  kcg_equ = kcg_equ & (kcg_c1->NC_TRAIN == kcg_c2->NC_TRAIN);
  kcg_equ = kcg_equ & (kcg_c1->NC_CDTRAIN == kcg_c2->NC_CDTRAIN);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_Validated_train_data_TrainToTrack */

#ifdef kcg_use_Conditional_Emergency_Stop_Radio_TrackToTrain
kcg_bool kcg_comp_Conditional_Emergency_Stop_Radio_TrackToTrain(
  Conditional_Emergency_Stop_Radio_TrackToTrain *kcg_c1,
  Conditional_Emergency_Stop_Radio_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->D_EMERGENCYSTOP == kcg_c2->D_EMERGENCYSTOP);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->D_REF == kcg_c2->D_REF);
  kcg_equ = kcg_equ & (kcg_c1->Q_SCALE == kcg_c2->Q_SCALE);
  kcg_equ = kcg_equ & (kcg_c1->NID_EM == kcg_c2->NID_EM);
  kcg_equ = kcg_equ & (kcg_c1->NID_LRBG == kcg_c2->NID_LRBG);
  kcg_equ = kcg_equ & (kcg_c1->M_ACK == kcg_c2->M_ACK);
  kcg_equ = kcg_equ & (kcg_c1->T_TRAIN == kcg_c2->T_TRAIN);
  kcg_equ = kcg_equ & (kcg_c1->L_MESSAGE == kcg_c2->L_MESSAGE);
  kcg_equ = kcg_equ & (kcg_c1->NID_MESSAGE == kcg_c2->NID_MESSAGE);
  return kcg_equ;
}
#endif /* kcg_use_Conditional_Emergency_Stop_Radio_TrackToTrain */

#ifdef kcg_use_Track_Ahead_Free_Request_Radio_TrackToTrain
kcg_bool kcg_comp_Track_Ahead_Free_Request_Radio_TrackToTrain(
  Track_Ahead_Free_Request_Radio_TrackToTrain *kcg_c1,
  Track_Ahead_Free_Request_Radio_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->L_TAFDISPLAY == kcg_c2->L_TAFDISPLAY);
  kcg_equ = kcg_equ & (kcg_c1->D_TAFDISPLAY == kcg_c2->D_TAFDISPLAY);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->D_REF == kcg_c2->D_REF);
  kcg_equ = kcg_equ & (kcg_c1->Q_SCALE == kcg_c2->Q_SCALE);
  kcg_equ = kcg_equ & (kcg_c1->NID_LRBG == kcg_c2->NID_LRBG);
  kcg_equ = kcg_equ & (kcg_c1->M_ACK == kcg_c2->M_ACK);
  kcg_equ = kcg_equ & (kcg_c1->T_TRAIN == kcg_c2->T_TRAIN);
  kcg_equ = kcg_equ & (kcg_c1->L_MESSAGE == kcg_c2->L_MESSAGE);
  kcg_equ = kcg_equ & (kcg_c1->NID_MESSAGE == kcg_c2->NID_MESSAGE);
  return kcg_equ;
}
#endif /* kcg_use_Track_Ahead_Free_Request_Radio_TrackToTrain */

#ifdef kcg_use_trainPosition_T_TrainPosition_Types_Pck
kcg_bool kcg_comp_trainPosition_T_TrainPosition_Types_Pck(
  trainPosition_T_TrainPosition_Types_Pck *kcg_c1,
  trainPosition_T_TrainPosition_Types_Pck *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->speed == kcg_c2->speed);
  kcg_equ = kcg_equ & (kcg_c1->trainRunningDirectionToLRBG ==
      kcg_c2->trainRunningDirectionToLRBG);
  kcg_equ = kcg_equ & (kcg_c1->trainOrientationToLRBG ==
      kcg_c2->trainOrientationToLRBG);
  kcg_equ = kcg_equ & (kcg_c1->nominalOrReverseToLRBG ==
      kcg_c2->nominalOrReverseToLRBG);
  kcg_equ = kcg_equ & (kcg_c1->nid_PrvLRB == kcg_c2->nid_PrvLRB);
  kcg_equ = kcg_equ & (kcg_c1->nid_LRBG == kcg_c2->nid_LRBG);
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

#ifdef kcg_use_passedBG_T_BG_Types_Pkg
kcg_bool kcg_comp_passedBG_T_BG_Types_Pkg(
  passedBG_T_BG_Types_Pkg *kcg_c1,
  passedBG_T_BG_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->passingSpeed == kcg_c2->passingSpeed);
  kcg_equ = kcg_equ & (kcg_c1->trainRunningDirectionToBG ==
      kcg_c2->trainRunningDirectionToBG);
  kcg_equ = kcg_equ & (kcg_c1->trainOrientationToBG ==
      kcg_c2->trainOrientationToBG);
  kcg_equ = kcg_equ & (kcg_c1->noCoordinateSystemHasBeenAssigned ==
      kcg_c2->noCoordinateSystemHasBeenAssigned);
  kcg_equ = kcg_equ & kcg_comp_LinkedBGs_T_BG_Types_Pkg(
      &kcg_c1->linkedBGs,
      &kcg_c2->linkedBGs);
  kcg_equ = kcg_equ & kcg_comp_BG_Header_T_BG_Types_Pkg(
      &kcg_c1->BG_Header,
      &kcg_c2->BG_Header);
  kcg_equ = kcg_equ & kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &kcg_c1->BG_centerDetectionInaccuraccuracies,
      &kcg_c2->BG_centerDetectionInaccuraccuracies);
  kcg_equ = kcg_equ & kcg_comp_OdometryLocations_T_Obu_BasicTypes_Pkg(
      &kcg_c1->odometrystamp,
      &kcg_c2->odometrystamp);
  kcg_equ = kcg_equ & (kcg_c1->timestamp == kcg_c2->timestamp);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_passedBG_T_BG_Types_Pkg */

#ifdef kcg_use_struct_11732
kcg_bool kcg_comp_struct_11732(struct_11732 *kcg_c1, struct_11732 *kcg_c2)
{
  kcg_bool kcg_equ;
  
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
#endif /* kcg_use_struct_11732 */

#ifdef kcg_use_LinkedBG_T_BG_Types_Pkg
kcg_bool kcg_comp_LinkedBG_T_BG_Types_Pkg(
  LinkedBG_T_BG_Types_Pkg *kcg_c1,
  LinkedBG_T_BG_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->q_locacc == kcg_c2->q_locacc);
  kcg_equ = kcg_equ & (kcg_c1->q_linkreaction == kcg_c2->q_linkreaction);
  kcg_equ = kcg_equ & (kcg_c1->q_linkorientation == kcg_c2->q_linkorientation);
  kcg_equ = kcg_equ & (kcg_c1->nid_bg == kcg_c2->nid_bg);
  kcg_equ = kcg_equ & (kcg_c1->nid_c == kcg_c2->nid_c);
  kcg_equ = kcg_equ & (kcg_c1->q_newcountry == kcg_c2->q_newcountry);
  kcg_equ = kcg_equ & (kcg_c1->d_link == kcg_c2->d_link);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->l_packet == kcg_c2->l_packet);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->nid_packet == kcg_c2->nid_packet);
  kcg_equ = kcg_equ & (kcg_c1->nid_LRBG == kcg_c2->nid_LRBG);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_LinkedBG_T_BG_Types_Pkg */

#ifdef kcg_use_Var670_TrackToTrain
kcg_bool kcg_comp_Var670_TrackToTrain(
  Var670_TrackToTrain *kcg_c1,
  Var670_TrackToTrain *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->L_TRACKCOND == kcg_c2->L_TRACKCOND);
  kcg_equ = kcg_equ & (kcg_c1->D_TRACKCOND == kcg_c2->D_TRACKCOND);
  return kcg_equ;
}
#endif /* kcg_use_Var670_TrackToTrain */

#ifdef kcg_use_trainProperties_T_TrainPosition_Types_Pck
kcg_bool kcg_comp_trainProperties_T_TrainPosition_Types_Pck(
  trainProperties_T_TrainPosition_Types_Pck *kcg_c1,
  trainProperties_T_TrainPosition_Types_Pck *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &kcg_c1->d_frontend_2_rearend,
      &kcg_c2->d_frontend_2_rearend);
  kcg_equ = kcg_equ & kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg(
      &kcg_c1->d_baliseAntenna_2_frontend,
      &kcg_c2->d_baliseAntenna_2_frontend);
  return kcg_equ;
}
#endif /* kcg_use_trainProperties_T_TrainPosition_Types_Pck */

/* $************* KCG Version 6.4 beta5 (build i13) *************
** kcg_types.c
** Generation date: 2014-08-07T09:21:25
*************************************************************$ */

