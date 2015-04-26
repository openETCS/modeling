/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */

#include "kcg_types.h"

#ifdef kcg_use_DMI_SpeedProfileArray_T_DMI_Types_Pkg
kcg_bool kcg_comp_DMI_SpeedProfileArray_T_DMI_Types_Pkg(
  DMI_SpeedProfileArray_T_DMI_Types_Pkg *kcg_c1,
  DMI_SpeedProfileArray_T_DMI_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 4; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_DMI_speedProfileElement_T_DMI_Types_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_DMI_SpeedProfileArray_T_DMI_Types_Pkg */

#ifdef kcg_use_aNID_NTC_T_Packet_TrainTypes_Pkg
kcg_bool kcg_comp_aNID_NTC_T_Packet_TrainTypes_Pkg(
  aNID_NTC_T_Packet_TrainTypes_Pkg *kcg_c1,
  aNID_NTC_T_Packet_TrainTypes_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 3; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_aNID_NTC_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_TractionDeltaTriple_TargetLimits_Pkg
kcg_bool kcg_comp_TractionDeltaTriple_TargetLimits_Pkg(
  TractionDeltaTriple_TargetLimits_Pkg *kcg_c1,
  TractionDeltaTriple_TargetLimits_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 3; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_TractionDeltaTriple_TargetLimits_Pkg */

#ifdef kcg_use_linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg
kcg_bool kcg_comp_linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *kcg_c1,
  linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 8; kcg_ci++) {
    kcg_equ = kcg_equ &
      kcg_comp_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg */

#ifdef kcg_use_MetadataTruthtable_T
kcg_bool kcg_comp_MetadataTruthtable_T(
  MetadataTruthtable_T *kcg_c1,
  MetadataTruthtable_T *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 46; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_array_bool_256(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_MetadataTruthtable_T */

#ifdef kcg_use_IterPacket58List_T_Packet_Types_Pkg
kcg_bool kcg_comp_IterPacket58List_T_Packet_Types_Pkg(
  IterPacket58List_T_Packet_Types_Pkg *kcg_c1,
  IterPacket58List_T_Packet_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 2; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_IterPacket58_T_Packet_Types_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_IterPacket58List_T_Packet_Types_Pkg */

#ifdef kcg_use_array_int_494
kcg_bool kcg_comp_array_int_494(array_int_494 *kcg_c1, array_int_494 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 494; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_494 */

#ifdef kcg_use_DMI_TEXT_DMI_Types_Pkg
kcg_bool kcg_comp_DMI_TEXT_DMI_Types_Pkg(
  DMI_TEXT_DMI_Types_Pkg *kcg_c1,
  DMI_TEXT_DMI_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 255; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_DMI_TEXT_DMI_Types_Pkg */

#ifdef kcg_use_array_bool_1
kcg_bool kcg_comp_array_bool_1(array_bool_1 *kcg_c1, array_bool_1 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 1; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_bool_1 */

#ifdef kcg_use_array_int_1
kcg_bool kcg_comp_array_int_1(array_int_1 *kcg_c1, array_int_1 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 1; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_1 */

#ifdef kcg_use_array_real_1
kcg_bool kcg_comp_array_real_1(array_real_1 *kcg_c1, array_real_1 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 1; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_real_1 */

#ifdef kcg_use_LevelDecisionTableType_DataDictionary_Pkg
kcg_bool kcg_comp_LevelDecisionTableType_DataDictionary_Pkg(
  LevelDecisionTableType_DataDictionary_Pkg *kcg_c1,
  LevelDecisionTableType_DataDictionary_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 256; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_array_61199(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_LevelDecisionTableType_DataDictionary_Pkg */

#ifdef kcg_use_nidCArray_T_Packet_Types_Pkg
kcg_bool kcg_comp_nidCArray_T_Packet_Types_Pkg(
  nidCArray_T_Packet_Types_Pkg *kcg_c1,
  nidCArray_T_Packet_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 7; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_nidC_T_Packet_Types_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_nidCArray_T_Packet_Types_Pkg */

#ifdef kcg_use_MyArray_SDM_Commands_Pkg
kcg_bool kcg_comp_MyArray_SDM_Commands_Pkg(
  MyArray_SDM_Commands_Pkg *kcg_c1,
  MyArray_SDM_Commands_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 14; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_MyArray_SDM_Commands_Pkg */

#ifdef kcg_use_ModeDecisionTableType_DataDictionary_Pkg
kcg_bool kcg_comp_ModeDecisionTableType_DataDictionary_Pkg(
  ModeDecisionTableType_DataDictionary_Pkg *kcg_c1,
  ModeDecisionTableType_DataDictionary_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 256; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_array_61224(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_ModeDecisionTableType_DataDictionary_Pkg */

#ifdef kcg_use_array_int_492
kcg_bool kcg_comp_array_int_492(array_int_492 *kcg_c1, array_int_492 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 492; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_492 */

#ifdef kcg_use_TM_P041Es_T
kcg_bool kcg_comp_TM_P041Es_T(TM_P041Es_T *kcg_c1, TM_P041Es_T *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 1; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_TM_P041E_T(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_TM_P041Es_T */

#ifdef kcg_use_array_bool_12
kcg_bool kcg_comp_array_bool_12(array_bool_12 *kcg_c1, array_bool_12 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 12; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_bool_12 */

#ifdef kcg_use_Target_list_MRSP_real_T_TargetManagement_types
kcg_bool kcg_comp_Target_list_MRSP_real_T_TargetManagement_types(
  Target_list_MRSP_real_T_TargetManagement_types *kcg_c1,
  Target_list_MRSP_real_T_TargetManagement_types *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 200; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_Target_real_T_TargetManagement_types(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_Target_list_MRSP_real_T_TargetManagement_types */

#ifdef kcg_use_MRSP_Profile_t
kcg_bool kcg_comp_MRSP_Profile_t(MRSP_Profile_t *kcg_c1, MRSP_Profile_t *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 200; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_MRSP_section_t(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_MRSP_Profile_t */

#ifdef kcg_use_MRSP_internal_T_TargetManagement_types
kcg_bool kcg_comp_MRSP_internal_T_TargetManagement_types(
  MRSP_internal_T_TargetManagement_types *kcg_c1,
  MRSP_internal_T_TargetManagement_types *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 200; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_MRSP_internal_section_T_TargetManagement_types(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_MRSP_internal_T_TargetManagement_types */

#ifdef kcg_use_array_real_12
kcg_bool kcg_comp_array_real_12(array_real_12 *kcg_c1, array_real_12 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
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
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 12; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_char_12 */

#ifdef kcg_use_ParabolaCurveValid_T_CalcBrakingCurves_types
kcg_bool kcg_comp_ParabolaCurveValid_T_CalcBrakingCurves_types(
  ParabolaCurveValid_T_CalcBrakingCurves_types *kcg_c1,
  ParabolaCurveValid_T_CalcBrakingCurves_types *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 25; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_ParabolaCurveValid_T_CalcBrakingCurves_types */

#ifdef kcg_use_array_real_25
kcg_bool kcg_comp_array_real_25(array_real_25 *kcg_c1, array_real_25 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 25; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_real_25 */

#ifdef kcg_use_array_bool_10
kcg_bool kcg_comp_array_bool_10(array_bool_10 *kcg_c1, array_bool_10 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 10; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_bool_10 */

#ifdef kcg_use_ASafeSpeedDefinition_T_CalcBrakingCurves_types
kcg_bool kcg_comp_ASafeSpeedDefinition_T_CalcBrakingCurves_types(
  ASafeSpeedDefinition_T_CalcBrakingCurves_types *kcg_c1,
  ASafeSpeedDefinition_T_CalcBrakingCurves_types *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 10; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_ASafeSpeedDefinition_T_CalcBrakingCurves_types */

#ifdef kcg_use_aTractionIdentity_T_Packet_TrainTypes_Pkg
kcg_bool kcg_comp_aTractionIdentity_T_Packet_TrainTypes_Pkg(
  aTractionIdentity_T_Packet_TrainTypes_Pkg *kcg_c1,
  aTractionIdentity_T_Packet_TrainTypes_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 3; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_sTractionIdentity_T_Packet_TrainTypes_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_aTractionIdentity_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_array_int_8
kcg_bool kcg_comp_array_int_8(array_int_8 *kcg_c1, array_int_8 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 8; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_8 */

#ifdef kcg_use_aNID_RADIO_T_Packet_TrainTypes_Pkg
kcg_bool kcg_comp_aNID_RADIO_T_Packet_TrainTypes_Pkg(
  aNID_RADIO_T_Packet_TrainTypes_Pkg *kcg_c1,
  aNID_RADIO_T_Packet_TrainTypes_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 1; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_sNID_RADIO_T_Packet_TrainTypes_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_aNID_RADIO_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_Target_list_LOA_real_T_TargetManagement_types
kcg_bool kcg_comp_Target_list_LOA_real_T_TargetManagement_types(
  Target_list_LOA_real_T_TargetManagement_types *kcg_c1,
  Target_list_LOA_real_T_TargetManagement_types *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 10; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_Target_real_T_TargetManagement_types(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_Target_list_LOA_real_T_TargetManagement_types */

#ifdef kcg_use_nvkrintArray_T_Packet_Types_Pkg
kcg_bool kcg_comp_nvkrintArray_T_Packet_Types_Pkg(
  nvkrintArray_T_Packet_Types_Pkg *kcg_c1,
  nvkrintArray_T_Packet_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 7; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_nvkrint_T_Packet_Types_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_nvkrintArray_T_Packet_Types_Pkg */

#ifdef kcg_use_ParabolaCurve_list_LOA_T_CalcBrakingCurves_types
kcg_bool kcg_comp_ParabolaCurve_list_LOA_T_CalcBrakingCurves_types(
  ParabolaCurve_list_LOA_T_CalcBrakingCurves_types *kcg_c1,
  ParabolaCurve_list_LOA_T_CalcBrakingCurves_types *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 10; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_ParabolaCurve_T_CalcBrakingCurves_types(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_ParabolaCurve_list_LOA_T_CalcBrakingCurves_types */

#ifdef kcg_use_array_60427
kcg_bool kcg_comp_array_60427(array_60427 *kcg_c1, array_60427 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 7; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_positionedBG_T_TrainPosition_Types_Pck(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_60427 */

#ifdef kcg_use_TelegramArray_T_BG_Types_Pkg
kcg_bool kcg_comp_TelegramArray_T_BG_Types_Pkg(
  TelegramArray_T_BG_Types_Pkg *kcg_c1,
  TelegramArray_T_BG_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 4; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_Telegram_T_BG_Types_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_TelegramArray_T_BG_Types_Pkg */

#ifdef kcg_use_array_int_6
kcg_bool kcg_comp_array_int_6(array_int_6 *kcg_c1, array_int_6 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 6; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_6 */

#ifdef kcg_use_array_bool_4
kcg_bool kcg_comp_array_bool_4(array_bool_4 *kcg_c1, array_bool_4 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 4; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_bool_4 */

#ifdef kcg_use_Array4
kcg_bool kcg_comp_Array4(Array4 *kcg_c1, Array4 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 4; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_Array4 */

#ifdef kcg_use_array_char_243
kcg_bool kcg_comp_array_char_243(array_char_243 *kcg_c1, array_char_243 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 243; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_char_243 */

#ifdef kcg_use_array_bool_256
kcg_bool kcg_comp_array_bool_256(array_bool_256 *kcg_c1, array_bool_256 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 256; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_bool_256 */

#ifdef kcg_use_nvkvintsetArray_T_Packet_Types_Pkg
kcg_bool kcg_comp_nvkvintsetArray_T_Packet_Types_Pkg(
  nvkvintsetArray_T_Packet_Types_Pkg *kcg_c1,
  nvkvintsetArray_T_Packet_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 7; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_nvkvintset_T_Packet_Types_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_nvkvintsetArray_T_Packet_Types_Pkg */

#ifdef kcg_use_TM_P046Es_T
kcg_bool kcg_comp_TM_P046Es_T(TM_P046Es_T *kcg_c1, TM_P046Es_T *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 1; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_TM_P046E_T(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_TM_P046Es_T */

#ifdef kcg_use_MAs_t
kcg_bool kcg_comp_MAs_t(MAs_t *kcg_c1, MAs_t *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 10; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_MA_section_t(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_MAs_t */

#ifdef kcg_use_MAs_real_T_TargetManagement_types
kcg_bool kcg_comp_MAs_real_T_TargetManagement_types(
  MAs_real_T_TargetManagement_types *kcg_c1,
  MAs_real_T_TargetManagement_types *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 10; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_MA_section_real_T_TargetManagement_types(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_MAs_real_T_TargetManagement_types */

#ifdef kcg_use_array_int_2
kcg_bool kcg_comp_array_int_2(array_int_2 *kcg_c1, array_int_2 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 2; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_2 */

#ifdef kcg_use_array_bool_30
kcg_bool kcg_comp_array_bool_30(array_bool_30 *kcg_c1, array_bool_30 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 30; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_bool_30 */

#ifdef kcg_use_array_int_30
kcg_bool kcg_comp_array_int_30(array_int_30 *kcg_c1, array_int_30 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 30; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_30 */

#ifdef kcg_use_array_bool_15
kcg_bool kcg_comp_array_bool_15(array_bool_15 *kcg_c1, array_bool_15 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 15; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_bool_15 */

#ifdef kcg_use_telephoneNumber_T_Packet_TrainTypes_Pkg
kcg_bool kcg_comp_telephoneNumber_T_Packet_TrainTypes_Pkg(
  telephoneNumber_T_Packet_TrainTypes_Pkg *kcg_c1,
  telephoneNumber_T_Packet_TrainTypes_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 15; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_telephoneNumber_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_array_real_15
kcg_bool kcg_comp_array_real_15(array_real_15 *kcg_c1, array_real_15 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 15; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_real_15 */

#ifdef kcg_use_array_int_493
kcg_bool kcg_comp_array_int_493(array_int_493 *kcg_c1, array_int_493 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 493; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_493 */

#ifdef kcg_use_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types
kcg_bool kcg_comp_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types(
  ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types *kcg_c1,
  ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 200; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_ParabolaCurve_T_CalcBrakingCurves_types(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types */

#ifdef kcg_use_array_61059
kcg_bool kcg_comp_array_61059(array_61059 *kcg_c1, array_61059 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 199; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_Target_real_T_TargetManagement_types(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_61059 */

#ifdef kcg_use_array_61081
kcg_bool kcg_comp_array_61081(array_61081 *kcg_c1, array_61081 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 1; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_positionedBG_T_TrainPosition_Types_Pck(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_61081 */

#ifdef kcg_use_Array_DMI_List_Entry_Request
kcg_bool kcg_comp_Array_DMI_List_Entry_Request(
  Array_DMI_List_Entry_Request *kcg_c1,
  Array_DMI_List_Entry_Request *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 15; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_Array_DMI_List_Entry_Request */

#ifdef kcg_use_TM_P005_array_T
kcg_bool kcg_comp_TM_P005_array_T(
  TM_P005_array_T *kcg_c1,
  TM_P005_array_T *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 39; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_TM_P005_array_T */

#ifdef kcg_use_ASafe_Data_T_CalcBrakingCurves_types
kcg_bool kcg_comp_ASafe_Data_T_CalcBrakingCurves_types(
  ASafe_Data_T_CalcBrakingCurves_types *kcg_c1,
  ASafe_Data_T_CalcBrakingCurves_types *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 10; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_ASafeRow_T_CalcBrakingCurves_types(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_ASafe_Data_T_CalcBrakingCurves_types */

#ifdef kcg_use_Array_DMI_Q_Text
kcg_bool kcg_comp_Array_DMI_Q_Text(
  Array_DMI_Q_Text *kcg_c1,
  Array_DMI_Q_Text *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 27; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_Array_DMI_Q_Text */

#ifdef kcg_use_array_bool_24
kcg_bool kcg_comp_array_bool_24(array_bool_24 *kcg_c1, array_bool_24 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 24; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_bool_24 */

#ifdef kcg_use_Buffer_DataDictionary_Pkg
kcg_bool kcg_comp_Buffer_DataDictionary_Pkg(
  Buffer_DataDictionary_Pkg *kcg_c1,
  Buffer_DataDictionary_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 3; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_ReceivedMessage_T_Common_Types_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_Buffer_DataDictionary_Pkg */

#ifdef kcg_use_array_real_24
kcg_bool kcg_comp_array_real_24(array_real_24 *kcg_c1, array_real_24 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 24; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_real_24 */

#ifdef kcg_use_array_61175
kcg_bool kcg_comp_array_61175(array_61175 *kcg_c1, array_61175 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 1; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_Target_real_T_TargetManagement_types(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_61175 */

#ifdef kcg_use_array_61199
kcg_bool kcg_comp_array_61199(array_61199 *kcg_c1, array_61199 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 5; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_61199 */

#ifdef kcg_use_array_int_9
kcg_bool kcg_comp_array_int_9(array_int_9 *kcg_c1, array_int_9 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 9; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_9 */

#ifdef kcg_use_driverIdentifier_T_DMI_Messages_Bothways_Pkg
kcg_bool kcg_comp_driverIdentifier_T_DMI_Messages_Bothways_Pkg(
  driverIdentifier_T_DMI_Messages_Bothways_Pkg *kcg_c1,
  driverIdentifier_T_DMI_Messages_Bothways_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 9; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_driverIdentifier_T_DMI_Messages_Bothways_Pkg */

#ifdef kcg_use_array_61224
kcg_bool kcg_comp_array_61224(array_61224 *kcg_c1, array_61224 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 17; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_61224 */

#ifdef kcg_use_Metadata_T_Common_Types_Pkg
kcg_bool kcg_comp_Metadata_T_Common_Types_Pkg(
  Metadata_T_Common_Types_Pkg *kcg_c1,
  Metadata_T_Common_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 30; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_MetadataElement_T_Common_Types_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_Metadata_T_Common_Types_Pkg */

#ifdef kcg_use_DMI_level_array_T_DMI_Types_Pkg
kcg_bool kcg_comp_DMI_level_array_T_DMI_Types_Pkg(
  DMI_level_array_T_DMI_Types_Pkg *kcg_c1,
  DMI_level_array_T_DMI_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 4; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_DMI_level_T_DMI_Types_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_DMI_level_array_T_DMI_Types_Pkg */

#ifdef kcg_use_nvkvintArray_T_Packet_Types_Pkg
kcg_bool kcg_comp_nvkvintArray_T_Packet_Types_Pkg(
  nvkvintArray_T_Packet_Types_Pkg *kcg_c1,
  nvkvintArray_T_Packet_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 7; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_nvkvint_T_Packet_Types_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_nvkvintArray_T_Packet_Types_Pkg */

#ifdef kcg_use_array_61256
kcg_bool kcg_comp_array_61256(array_61256 *kcg_c1, array_61256 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 9; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_Target_real_T_TargetManagement_types(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_61256 */

#ifdef kcg_use_CompressedPacketData_T_Common_Types_Pkg
kcg_bool kcg_comp_CompressedPacketData_T_Common_Types_Pkg(
  CompressedPacketData_T_Common_Types_Pkg *kcg_c1,
  CompressedPacketData_T_Common_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 500; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_CompressedPacketData_T_Common_Types_Pkg */

#ifdef kcg_use_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck
kcg_bool kcg_comp_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck(
  linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck *kcg_c1,
  linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 4; kcg_ci++) {
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
  for (kcg_ci = 0; kcg_ci < 4; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_LinkedBG_T_BG_Types_Pkg(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_LinkedBGs_T_BG_Types_Pkg */

#ifdef kcg_use_TM_P005E_array_T
kcg_bool kcg_comp_TM_P005E_array_T(
  TM_P005E_array_T *kcg_c1,
  TM_P005E_array_T *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 7; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_TM_P005E_array_T */

#ifdef kcg_use_positionedBGs_T_TrainPosition_Types_Pck
kcg_bool kcg_comp_positionedBGs_T_TrainPosition_Types_Pck(
  positionedBGs_T_TrainPosition_Types_Pck *kcg_c1,
  positionedBGs_T_TrainPosition_Types_Pck *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 8; kcg_ci++) {
    kcg_equ = kcg_equ & kcg_comp_positionedBG_T_TrainPosition_Types_Pck(
        &(*kcg_c1)[kcg_ci],
        &(*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_positionedBGs_T_TrainPosition_Types_Pck */

#ifdef kcg_use_array_int_498
kcg_bool kcg_comp_array_int_498(array_int_498 *kcg_c1, array_int_498 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 498; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_498 */

#ifdef kcg_use_array_int_5
kcg_bool kcg_comp_array_int_5(array_int_5 *kcg_c1, array_int_5 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 5; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}
#endif /* kcg_use_array_int_5 */

#ifdef kcg_use_TM_CompressedBaliseMessage
kcg_bool kcg_comp_TM_CompressedBaliseMessage(
  TM_CompressedBaliseMessage *kcg_c1,
  TM_CompressedBaliseMessage *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_CompressedPackets_T_Common_Types_Pkg(
      &kcg_c1->Messages,
      &kcg_c2->Messages);
  kcg_equ = kcg_equ & kcg_comp_TM_BaliseTelegramHeader_int_T(
      &kcg_c1->Header,
      &kcg_c2->Header);
  return kcg_equ;
}
#endif /* kcg_use_TM_CompressedBaliseMessage */

#ifdef kcg_use_TM_CompressedRadioMessage
kcg_bool kcg_comp_TM_CompressedRadioMessage(
  TM_CompressedRadioMessage *kcg_c1,
  TM_CompressedRadioMessage *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_CompressedPackets_T_Common_Types_Pkg(
      &kcg_c1->Messages,
      &kcg_c2->Messages);
  kcg_equ = kcg_equ & kcg_comp_TM_Radio_TrackTrain_Header_T(
      &kcg_c1->Header,
      &kcg_c2->Header);
  return kcg_equ;
}
#endif /* kcg_use_TM_CompressedRadioMessage */

#ifdef kcg_use_mobileSWCmd_Type_MoRC_Pck
kcg_bool kcg_comp_mobileSWCmd_Type_MoRC_Pck(
  mobileSWCmd_Type_MoRC_Pck *kcg_c1,
  mobileSWCmd_Type_MoRC_Pck *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->radioNetworkID == kcg_c2->radioNetworkID);
  kcg_equ = kcg_equ & (kcg_c1->action == kcg_c2->action);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_mobileSWCmd_Type_MoRC_Pck */

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

#ifdef kcg_use_Target_T_TargetManagement_types
kcg_bool kcg_comp_Target_T_TargetManagement_types(
  Target_T_TargetManagement_types *kcg_c1,
  Target_T_TargetManagement_types *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  kcg_equ = kcg_equ & (kcg_c1->speed == kcg_c2->speed);
  kcg_equ = kcg_equ & (kcg_c1->distance == kcg_c2->distance);
  kcg_equ = kcg_equ & (kcg_c1->targetType == kcg_c2->targetType);
  return kcg_equ;
}
#endif /* kcg_use_Target_T_TargetManagement_types */

#ifdef kcg_use_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg
kcg_bool kcg_comp_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg(
  DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c1,
  DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->system_version == kcg_c2->system_version);
  kcg_equ = kcg_equ & (kcg_c1->system_clock == kcg_c2->system_clock);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifdef kcg_use_P45_RadioNetworkRegistration_T_Packet_Types_Pkg
kcg_bool kcg_comp_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg *kcg_c1,
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_mn == kcg_c2->nid_mn);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_P45_RadioNetworkRegistration_T_Packet_Types_Pkg */

#ifdef kcg_use_m32e_RBC_or_RIU_System_Version_T_MoRC_Pck_Coder_Pkg
kcg_bool kcg_comp_m32e_RBC_or_RIU_System_Version_T_MoRC_Pck_Coder_Pkg(
  m32e_RBC_or_RIU_System_Version_T_MoRC_Pck_Coder_Pkg *kcg_c1,
  m32e_RBC_or_RIU_System_Version_T_MoRC_Pck_Coder_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->systemVersionFromTracksideSupported ==
      kcg_c2->systemVersionFromTracksideSupported);
  kcg_equ = kcg_equ & (kcg_c1->version == kcg_c2->version);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_m32e_RBC_or_RIU_System_Version_T_MoRC_Pck_Coder_Pkg */

#ifdef kcg_use_Target_real_T_TargetManagement_types
kcg_bool kcg_comp_Target_real_T_TargetManagement_types(
  Target_real_T_TargetManagement_types *kcg_c1,
  Target_real_T_TargetManagement_types *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  kcg_equ = kcg_equ & (kcg_c1->speed == kcg_c2->speed);
  kcg_equ = kcg_equ & (kcg_c1->distance == kcg_c2->distance);
  kcg_equ = kcg_equ & (kcg_c1->targetType == kcg_c2->targetType);
  return kcg_equ;
}
#endif /* kcg_use_Target_real_T_TargetManagement_types */

#ifdef kcg_use_struct_60012
kcg_bool kcg_comp_struct_60012(struct_60012 *kcg_c1, struct_60012 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array_bool_10(&kcg_c1->items, &kcg_c2->items);
  kcg_equ = kcg_equ & (kcg_c1->idx == kcg_c2->idx);
  return kcg_equ;
}
#endif /* kcg_use_struct_60012 */

#ifdef kcg_use_TrainLocations_real_T_SDM_Types_Pkg
kcg_bool kcg_comp_TrainLocations_real_T_SDM_Types_Pkg(
  TrainLocations_real_T_SDM_Types_Pkg *kcg_c1,
  TrainLocations_real_T_SDM_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->d_antenna2frontend ==
      kcg_c2->d_antenna2frontend);
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

#ifdef kcg_use_ParabolaCurve_T_CalcBrakingCurves_types
kcg_bool kcg_comp_ParabolaCurve_T_CalcBrakingCurves_types(
  ParabolaCurve_T_CalcBrakingCurves_types *kcg_c1,
  ParabolaCurve_T_CalcBrakingCurves_types *kcg_c2)
{
  kcg_bool kcg_equ;
  
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

#ifdef kcg_use_mobileHWCmd_Type_MoRC_Pck
kcg_bool kcg_comp_mobileHWCmd_Type_MoRC_Pck(
  mobileHWCmd_Type_MoRC_Pck *kcg_c1,
  mobileHWCmd_Type_MoRC_Pck *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->radioNetworkID == kcg_c2->radioNetworkID);
  kcg_equ = kcg_equ & (kcg_c1->action == kcg_c2->action);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_mobileHWCmd_Type_MoRC_Pck */

#ifdef kcg_use_TrainToTrackStatus_T_BG_Types_Pkg
kcg_bool kcg_comp_TrainToTrackStatus_T_BG_Types_Pkg(
  TrainToTrackStatus_T_BG_Types_Pkg *kcg_c1,
  TrainToTrackStatus_T_BG_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->q_length == kcg_c2->q_length);
  kcg_equ = kcg_equ & (kcg_c1->nid_ntc == kcg_c2->nid_ntc);
  return kcg_equ;
}
#endif /* kcg_use_TrainToTrackStatus_T_BG_Types_Pkg */

#ifdef kcg_use_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg
kcg_bool kcg_comp_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
  DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c1,
  DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->acknowledged == kcg_c2->acknowledged);
  kcg_equ = kcg_equ & (kcg_c1->messageIdentifier == kcg_c2->messageIdentifier);
  kcg_equ = kcg_equ & (kcg_c1->systemTime == kcg_c2->systemTime);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg */

#ifdef kcg_use_Radio_TrainTrack_Header_T_Radio_Types_Pkg
kcg_bool kcg_comp_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
  Radio_TrainTrack_Header_T_Radio_Types_Pkg *kcg_c1,
  Radio_TrainTrack_Header_T_Radio_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->xT_TRAIN == kcg_c2->xT_TRAIN);
  kcg_equ = kcg_equ & (kcg_c1->xQ_MARQSTREASON == kcg_c2->xQ_MARQSTREASON);
  kcg_equ = kcg_equ & (kcg_c1->nid_engine == kcg_c2->nid_engine);
  kcg_equ = kcg_equ & (kcg_c1->t_train == kcg_c2->t_train);
  kcg_equ = kcg_equ & (kcg_c1->nid_message == kcg_c2->nid_message);
  kcg_equ = kcg_equ & (kcg_c1->present == kcg_c2->present);
  return kcg_equ;
}
#endif /* kcg_use_Radio_TrainTrack_Header_T_Radio_Types_Pkg */

#ifdef kcg_use_PresentxMLOC_T_ProvidePositionReport_Pkg
kcg_bool kcg_comp_PresentxMLOC_T_ProvidePositionReport_Pkg(
  PresentxMLOC_T_ProvidePositionReport_Pkg *kcg_c1,
  PresentxMLOC_T_ProvidePositionReport_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_loc == kcg_c2->m_loc);
  kcg_equ = kcg_equ & (kcg_c1->present == kcg_c2->present);
  return kcg_equ;
}
#endif /* kcg_use_PresentxMLOC_T_ProvidePositionReport_Pkg */

#ifdef kcg_use_dmiOutputs_T_manage_DMI_Output_Pkg
kcg_bool kcg_comp_dmiOutputs_T_manage_DMI_Output_Pkg(
  dmiOutputs_T_manage_DMI_Output_Pkg *kcg_c1,
  dmiOutputs_T_manage_DMI_Output_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->secondValidationRequested ==
      kcg_c2->secondValidationRequested);
  kcg_equ = kcg_equ & (kcg_c1->NO_initrequestSent ==
      kcg_c2->NO_initrequestSent);
  return kcg_equ;
}
#endif /* kcg_use_dmiOutputs_T_manage_DMI_Output_Pkg */

#ifdef kcg_use_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg
kcg_bool kcg_comp_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
  DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg *kcg_c1,
  DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->trainRunningNumber ==
      kcg_c2->trainRunningNumber);
  kcg_equ = kcg_equ & (kcg_c1->systemTime == kcg_c2->systemTime);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg */

#ifdef kcg_use_DMI_gradientProfile_T_DMI_Types_Pkg
kcg_bool kcg_comp_DMI_gradientProfile_T_DMI_Types_Pkg(
  DMI_gradientProfile_T_DMI_Types_Pkg *kcg_c1,
  DMI_gradientProfile_T_DMI_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_DMI_SpeedProfileArray_T_DMI_Types_Pkg(
      &kcg_c1->gradientProfiles,
      &kcg_c2->gradientProfiles);
  kcg_equ = kcg_equ & (kcg_c1->nIter == kcg_c2->nIter);
  return kcg_equ;
}
#endif /* kcg_use_DMI_gradientProfile_T_DMI_Types_Pkg */

#ifdef kcg_use_struct_60136
kcg_bool kcg_comp_struct_60136(struct_60136 *kcg_c1, struct_60136 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_DMI_SpeedProfileArray_T_DMI_Types_Pkg(
      &kcg_c1->speedProfiles,
      &kcg_c2->speedProfiles);
  kcg_equ = kcg_equ & (kcg_c1->nIter == kcg_c2->nIter);
  return kcg_equ;
}
#endif /* kcg_use_struct_60136 */

#ifdef kcg_use_morePositions_T_DMI_Types_Pkg
kcg_bool kcg_comp_morePositions_T_DMI_Types_Pkg(
  morePositions_T_DMI_Types_Pkg *kcg_c1,
  morePositions_T_DMI_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->distance_to_TSA == kcg_c2->distance_to_TSA);
  kcg_equ = kcg_equ & (kcg_c1->distance_KP_Balise ==
      kcg_c2->distance_KP_Balise);
  kcg_equ = kcg_equ & (kcg_c1->location_KP_Balise_Track ==
      kcg_c2->location_KP_Balise_Track);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_morePositions_T_DMI_Types_Pkg */

#ifdef kcg_use_Brake_pressure_value_T_TIU_Types_Pkg
kcg_bool kcg_comp_Brake_pressure_value_T_TIU_Types_Pkg(
  Brake_pressure_value_T_TIU_Types_Pkg *kcg_c1,
  Brake_pressure_value_T_TIU_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->pressure == kcg_c2->pressure);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_Brake_pressure_value_T_TIU_Types_Pkg */

#ifdef kcg_use_EOA_t
kcg_bool kcg_comp_EOA_t(EOA_t *kcg_c1, EOA_t *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Timer == kcg_c2->Timer);
  kcg_equ = kcg_equ & (kcg_c1->TargetSpeed == kcg_c2->TargetSpeed);
  kcg_equ = kcg_equ & (kcg_c1->Location == kcg_c2->Location);
  return kcg_equ;
}
#endif /* kcg_use_EOA_t */

#ifdef kcg_use_movementAuthorityForDMI_T_DMI_Types_Pkg
kcg_bool kcg_comp_movementAuthorityForDMI_T_DMI_Types_Pkg(
  movementAuthorityForDMI_T_DMI_Types_Pkg *kcg_c1,
  movementAuthorityForDMI_T_DMI_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->v_LOA == kcg_c2->v_LOA);
  kcg_equ = kcg_equ & (kcg_c1->location_LOA == kcg_c2->location_LOA);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_movementAuthorityForDMI_T_DMI_Types_Pkg */

#ifdef kcg_use_M_current_T_TIU_Types_Pkg
kcg_bool kcg_comp_M_current_T_TIU_Types_Pkg(
  M_current_T_TIU_Types_Pkg *kcg_c1,
  M_current_T_TIU_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->restriction == kcg_c2->restriction);
  kcg_equ = kcg_equ & (kcg_c1->no_restriction == kcg_c2->no_restriction);
  return kcg_equ;
}
#endif /* kcg_use_M_current_T_TIU_Types_Pkg */

#ifdef kcg_use_M_voltage_T_TIU_Types_Pkg
kcg_bool kcg_comp_M_voltage_T_TIU_Types_Pkg(
  M_voltage_T_TIU_Types_Pkg *kcg_c1,
  M_voltage_T_TIU_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->NID_ctraction == kcg_c2->NID_ctraction);
  kcg_equ = kcg_equ & (kcg_c1->voltage_type == kcg_c2->voltage_type);
  return kcg_equ;
}
#endif /* kcg_use_M_voltage_T_TIU_Types_Pkg */

#ifdef kcg_use_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg
kcg_bool kcg_comp_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
  DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c1,
  DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->acknowledged == kcg_c2->acknowledged);
  kcg_equ = kcg_equ & (kcg_c1->systemTime == kcg_c2->systemTime);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg */

#ifdef kcg_use_TM_P045
kcg_bool kcg_comp_TM_P045(TM_P045 *kcg_c1, TM_P045 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_mn == kcg_c2->nid_mn);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_TM_P045 */

#ifdef kcg_use_TSM_revokeCond_T_SDM_Commands_Pkg
kcg_bool kcg_comp_TSM_revokeCond_T_SDM_Commands_Pkg(
  TSM_revokeCond_T_SDM_Commands_Pkg *kcg_c1,
  TSM_revokeCond_T_SDM_Commands_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->r3 == kcg_c2->r3);
  kcg_equ = kcg_equ & (kcg_c1->r2 == kcg_c2->r2);
  kcg_equ = kcg_equ & (kcg_c1->r1 == kcg_c2->r1);
  kcg_equ = kcg_equ & (kcg_c1->r0 == kcg_c2->r0);
  return kcg_equ;
}
#endif /* kcg_use_TSM_revokeCond_T_SDM_Commands_Pkg */

#ifdef kcg_use_safeRadioConnectionStatusValid_Type_MoRC_Pck
kcg_bool kcg_comp_safeRadioConnectionStatusValid_Type_MoRC_Pck(
  safeRadioConnectionStatusValid_Type_MoRC_Pck *kcg_c1,
  safeRadioConnectionStatusValid_Type_MoRC_Pck *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->status == kcg_c2->status);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_safeRadioConnectionStatusValid_Type_MoRC_Pck */

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

#ifdef kcg_use_ModeAndLevelStatus_T_BG_Types_Pkg
kcg_bool kcg_comp_ModeAndLevelStatus_T_BG_Types_Pkg(
  ModeAndLevelStatus_T_BG_Types_Pkg *kcg_c1,
  ModeAndLevelStatus_T_BG_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_leveltr == kcg_c2->m_leveltr);
  kcg_equ = kcg_equ & (kcg_c1->m_level == kcg_c2->m_level);
  kcg_equ = kcg_equ & (kcg_c1->m_mode == kcg_c2->m_mode);
  return kcg_equ;
}
#endif /* kcg_use_ModeAndLevelStatus_T_BG_Types_Pkg */

#ifdef kcg_use_CurveCollection_T_CalcBrakingCurves_types
kcg_bool kcg_comp_CurveCollection_T_CalcBrakingCurves_types(
  CurveCollection_T_CalcBrakingCurves_types *kcg_c1,
  CurveCollection_T_CalcBrakingCurves_types *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->GUI_curve_enabled == kcg_c2->GUI_curve_enabled);
  kcg_equ = kcg_equ & kcg_comp_ParabolaCurve_T_CalcBrakingCurves_types(
      &kcg_c1->GUI_curve,
      &kcg_c2->GUI_curve);
  kcg_equ = kcg_equ & kcg_comp_ParabolaCurve_T_CalcBrakingCurves_types(
      &kcg_c1->SvL_EBD_curve,
      &kcg_c2->SvL_EBD_curve);
  kcg_equ = kcg_equ & kcg_comp_ParabolaCurve_T_CalcBrakingCurves_types(
      &kcg_c1->EOA_SBD_curve,
      &kcg_c2->EOA_SBD_curve);
  kcg_equ = kcg_equ & kcg_comp_ParabolaCurve_list_LOA_T_CalcBrakingCurves_types(
      &kcg_c1->LOA_EBD_curves,
      &kcg_c2->LOA_EBD_curves);
  kcg_equ = kcg_equ &
    kcg_comp_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types(
      &kcg_c1->MRSP_EBD_curves,
      &kcg_c2->MRSP_EBD_curves);
  return kcg_equ;
}
#endif /* kcg_use_CurveCollection_T_CalcBrakingCurves_types */

#ifdef kcg_use_ASafe_T_CalcBrakingCurves_types
kcg_bool kcg_comp_ASafe_T_CalcBrakingCurves_types(
  ASafe_T_CalcBrakingCurves_types *kcg_c1,
  ASafe_T_CalcBrakingCurves_types *kcg_c2)
{
  kcg_bool kcg_equ;
  
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

#ifdef kcg_use_DMI_DriverRequest_T_DMI_Types_Pkg
kcg_bool kcg_comp_DMI_DriverRequest_T_DMI_Types_Pkg(
  DMI_DriverRequest_T_DMI_Types_Pkg *kcg_c1,
  DMI_DriverRequest_T_DMI_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
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

#ifdef kcg_use_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg
kcg_bool kcg_comp_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
  DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c1,
  DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
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

#ifdef kcg_use_struct_60288
kcg_bool kcg_comp_struct_60288(struct_60288 *kcg_c1, struct_60288 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->o_max == kcg_c2->o_max);
  kcg_equ = kcg_equ & (kcg_c1->o_min == kcg_c2->o_min);
  kcg_equ = kcg_equ & (kcg_c1->o_nominal == kcg_c2->o_nominal);
  return kcg_equ;
}
#endif /* kcg_use_struct_60288 */

#ifdef kcg_use_RadioManagement_T_API_RadioCommunication_Pkg
kcg_bool kcg_comp_RadioManagement_T_API_RadioCommunication_Pkg(
  RadioManagement_T_API_RadioCommunication_Pkg *kcg_c1,
  RadioManagement_T_API_RadioCommunication_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->networkID == kcg_c2->networkID);
  kcg_equ = kcg_equ & (kcg_c1->cmd == kcg_c2->cmd);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_RadioManagement_T_API_RadioCommunication_Pkg */

#ifdef kcg_use_nvkrint_T_Packet_Types_Pkg
kcg_bool kcg_comp_nvkrint_T_Packet_Types_Pkg(
  nvkrint_T_Packet_Types_Pkg *kcg_c1,
  nvkrint_T_Packet_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_nvkrint == kcg_c2->m_nvkrint);
  kcg_equ = kcg_equ & (kcg_c1->l_nvkrint == kcg_c2->l_nvkrint);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_nvkrint_T_Packet_Types_Pkg */

#ifdef kcg_use_nvkvint_T_Packet_Types_Pkg
kcg_bool kcg_comp_nvkvint_T_Packet_Types_Pkg(
  nvkvint_T_Packet_Types_Pkg *kcg_c1,
  nvkvint_T_Packet_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_nvkvint23 == kcg_c2->m_nvkvint23);
  kcg_equ = kcg_equ & (kcg_c1->m_nvkvint12 == kcg_c2->m_nvkvint12);
  kcg_equ = kcg_equ & (kcg_c1->v_nvkvint == kcg_c2->v_nvkvint);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_nvkvint_T_Packet_Types_Pkg */

#ifdef kcg_use_MetadataElement_T_Common_Types_Pkg
kcg_bool kcg_comp_MetadataElement_T_Common_Types_Pkg(
  MetadataElement_T_Common_Types_Pkg *kcg_c1,
  MetadataElement_T_Common_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->endAddress == kcg_c2->endAddress);
  kcg_equ = kcg_equ & (kcg_c1->startAddress == kcg_c2->startAddress);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->nid_packet == kcg_c2->nid_packet);
  return kcg_equ;
}
#endif /* kcg_use_MetadataElement_T_Common_Types_Pkg */

#ifdef kcg_use_TrackSide_ForCheck_T_Common_Types_Pkg
kcg_bool kcg_comp_TrackSide_ForCheck_T_Common_Types_Pkg(
  TrackSide_ForCheck_T_Common_Types_Pkg *kcg_c1,
  TrackSide_ForCheck_T_Common_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
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

#ifdef kcg_use_RadioMessage_T_Radio_Types_Pkg
kcg_bool kcg_comp_RadioMessage_T_Radio_Types_Pkg(
  RadioMessage_T_Radio_Types_Pkg *kcg_c1,
  RadioMessage_T_Radio_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
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

#ifdef kcg_use_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg
kcg_bool kcg_comp_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *kcg_c1,
  refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
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

#ifdef kcg_use_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg
kcg_bool kcg_comp_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
  DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c1,
  DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_mn == kcg_c2->nid_mn);
  kcg_equ = kcg_equ & (kcg_c1->system_clock == kcg_c2->system_clock);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifdef kcg_use_API_TelegramHeader_T_API_Msg_Pkg
kcg_bool kcg_comp_API_TelegramHeader_T_API_Msg_Pkg(
  API_TelegramHeader_T_API_Msg_Pkg *kcg_c1,
  API_TelegramHeader_T_API_Msg_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
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

#ifdef kcg_use_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg
kcg_bool kcg_comp_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg(
  DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c1,
  DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
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

#ifdef kcg_use_radioManagementMessage_T_Common_Types_Pkg
kcg_bool kcg_comp_radioManagementMessage_T_Common_Types_Pkg(
  radioManagementMessage_T_Common_Types_Pkg *kcg_c1,
  radioManagementMessage_T_Common_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
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

#ifdef kcg_use_BCAccumulator_type_CalcBrakingCurves_Pkg
kcg_bool kcg_comp_BCAccumulator_type_CalcBrakingCurves_Pkg(
  BCAccumulator_type_CalcBrakingCurves_Pkg *kcg_c1,
  BCAccumulator_type_CalcBrakingCurves_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
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

#ifdef kcg_use_TargetCollection_T_TargetManagement_types
kcg_bool kcg_comp_TargetCollection_T_TargetManagement_types(
  TargetCollection_T_TargetManagement_types *kcg_c1,
  TargetCollection_T_TargetManagement_types *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_Target_real_T_TargetManagement_types(
      &kcg_c1->SvL_target,
      &kcg_c2->SvL_target);
  kcg_equ = kcg_equ & kcg_comp_Target_real_T_TargetManagement_types(
      &kcg_c1->EOA_target,
      &kcg_c2->EOA_target);
  kcg_equ = kcg_equ & kcg_comp_Target_list_MRSP_real_T_TargetManagement_types(
      &kcg_c1->MRSP_targetList,
      &kcg_c2->MRSP_targetList);
  kcg_equ = kcg_equ & kcg_comp_Target_list_LOA_real_T_TargetManagement_types(
      &kcg_c1->LOA_targetList,
      &kcg_c2->LOA_targetList);
  kcg_equ = kcg_equ & (kcg_c1->updatedTargetList == kcg_c2->updatedTargetList);
  return kcg_equ;
}
#endif /* kcg_use_TargetCollection_T_TargetManagement_types */

#ifdef kcg_use_MRSP_section_t
kcg_bool kcg_comp_MRSP_section_t(MRSP_section_t *kcg_c1, MRSP_section_t *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->MRS == kcg_c2->MRS);
  kcg_equ = kcg_equ & (kcg_c1->Loc_LRBG == kcg_c2->Loc_LRBG);
  kcg_equ = kcg_equ & (kcg_c1->Loc_Abs == kcg_c2->Loc_Abs);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_MRSP_section_t */

#ifdef kcg_use_nothing_to_resume_profile_follow_T_TIU_Types_Pkg
kcg_bool kcg_comp_nothing_to_resume_profile_follow_T_TIU_Types_Pkg(
  nothing_to_resume_profile_follow_T_TIU_Types_Pkg *kcg_c1,
  nothing_to_resume_profile_follow_T_TIU_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
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

#ifdef kcg_use_passedBG_T_BG_Types_Pkg
kcg_bool kcg_comp_passedBG_T_BG_Types_Pkg(
  passedBG_T_BG_Types_Pkg *kcg_c1,
  passedBG_T_BG_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
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

#ifdef kcg_use_PositionReportParameter_T_Common_Types_Pkg
kcg_bool kcg_comp_PositionReportParameter_T_Common_Types_Pkg(
  PositionReportParameter_T_Common_Types_Pkg *kcg_c1,
  PositionReportParameter_T_Common_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_P58_PositionReportParameters_T_Packet_Types_Pkg(
      &kcg_c1->packet58,
      &kcg_c2->packet58);
  kcg_equ = kcg_equ & (kcg_c1->bgLocation == kcg_c2->bgLocation);
  kcg_equ = kcg_equ & (kcg_c1->nidBG == kcg_c2->nidBG);
  kcg_equ = kcg_equ & (kcg_c1->present == kcg_c2->present);
  return kcg_equ;
}
#endif /* kcg_use_PositionReportParameter_T_Common_Types_Pkg */

#ifdef kcg_use_API_RadioMsgHeader_T_API_Msg_Pkg
kcg_bool kcg_comp_API_RadioMsgHeader_T_API_Msg_Pkg(
  API_RadioMsgHeader_T_API_Msg_Pkg *kcg_c1,
  API_RadioMsgHeader_T_API_Msg_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
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

#ifdef kcg_use_API_EuroRadioOutput_T_API_RadioCommunication_Pkg
kcg_bool kcg_comp_API_EuroRadioOutput_T_API_RadioCommunication_Pkg(
  API_EuroRadioOutput_T_API_RadioCommunication_Pkg *kcg_c1,
  API_EuroRadioOutput_T_API_RadioCommunication_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_RadioManagement_T_API_RadioCommunication_Pkg(
      &kcg_c1->radioEVCtoUnit,
      &kcg_c2->radioEVCtoUnit);
  kcg_equ = kcg_equ & kcg_comp_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &kcg_c1->thirdOutput,
      &kcg_c2->thirdOutput);
  kcg_equ = kcg_equ & kcg_comp_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &kcg_c1->secondOutput,
      &kcg_c2->secondOutput);
  kcg_equ = kcg_equ & kcg_comp_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &kcg_c1->firstOutput,
      &kcg_c2->firstOutput);
  return kcg_equ;
}
#endif /* kcg_use_API_EuroRadioOutput_T_API_RadioCommunication_Pkg */

#ifdef kcg_use_TM_P041E_T
kcg_bool kcg_comp_TM_P041E_T(TM_P041E_T *kcg_c1, TM_P041E_T *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->l_acklevel == kcg_c2->l_acklevel);
  kcg_equ = kcg_equ & (kcg_c1->nid_stm == kcg_c2->nid_stm);
  return kcg_equ;
}
#endif /* kcg_use_TM_P041E_T */

#ifdef kcg_use_TelegramStore_T_Receive_TrackSide_Msg_Pkg
kcg_bool kcg_comp_TelegramStore_T_Receive_TrackSide_Msg_Pkg(
  TelegramStore_T_Receive_TrackSide_Msg_Pkg *kcg_c1,
  TelegramStore_T_Receive_TrackSide_Msg_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
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

#ifdef kcg_use_radioNetWorkIDs_T_MoRC_Pck
kcg_bool kcg_comp_radioNetWorkIDs_T_MoRC_Pck(
  radioNetWorkIDs_T_MoRC_Pck *kcg_c1,
  radioNetWorkIDs_T_MoRC_Pck *kcg_c2)
{
  kcg_bool kcg_equ;
  
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

#ifdef kcg_use_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg
kcg_bool kcg_comp_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg(
  Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg *kcg_c1,
  Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
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

#ifdef kcg_use_Change_traction_system_T_TIU_Types_Pkg
kcg_bool kcg_comp_Change_traction_system_T_TIU_Types_Pkg(
  Change_traction_system_T_TIU_Types_Pkg *kcg_c1,
  Change_traction_system_T_TIU_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
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
  kcg_bool kcg_equ;
  
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

#ifdef kcg_use_DMI_train_length_T_DMI_Types_Pkg
kcg_bool kcg_comp_DMI_train_length_T_DMI_Types_Pkg(
  DMI_train_length_T_DMI_Types_Pkg *kcg_c1,
  DMI_train_length_T_DMI_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->dig4 == kcg_c2->dig4);
  kcg_equ = kcg_equ & (kcg_c1->dig3 == kcg_c2->dig3);
  kcg_equ = kcg_equ & (kcg_c1->dig2 == kcg_c2->dig2);
  kcg_equ = kcg_equ & (kcg_c1->dig1 == kcg_c2->dig1);
  kcg_equ = kcg_equ & (kcg_c1->number == kcg_c2->number);
  return kcg_equ;
}
#endif /* kcg_use_DMI_train_length_T_DMI_Types_Pkg */

#ifdef kcg_use_TM_P041_T
kcg_bool kcg_comp_TM_P041_T(TM_P041_T *kcg_c1, TM_P041_T *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_TM_P041Es_T(
      &kcg_c1->sections,
      &kcg_c2->sections);
  kcg_equ = kcg_equ & (kcg_c1->n_iter == kcg_c2->n_iter);
  kcg_equ = kcg_equ & (kcg_c1->m_level == kcg_c2->m_level);
  kcg_equ = kcg_equ & (kcg_c1->d_level == kcg_c2->d_level);
  kcg_equ = kcg_equ & (kcg_c1->q_scale == kcg_c2->q_scale);
  kcg_equ = kcg_equ & (kcg_c1->l_packet == kcg_c2->l_packet);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_TM_P041_T */

#ifdef kcg_use_TM_P042_T
kcg_bool kcg_comp_TM_P042_T(TM_P042_T *kcg_c1, TM_P042_T *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->q_sleepsession == kcg_c2->q_sleepsession);
  kcg_equ = kcg_equ & (kcg_c1->nid_radio == kcg_c2->nid_radio);
  kcg_equ = kcg_equ & (kcg_c1->nid_rbc == kcg_c2->nid_rbc);
  kcg_equ = kcg_equ & (kcg_c1->nid_c == kcg_c2->nid_c);
  kcg_equ = kcg_equ & (kcg_c1->m_level == kcg_c2->m_level);
  kcg_equ = kcg_equ & (kcg_c1->l_packet == kcg_c2->l_packet);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_TM_P042_T */

#ifdef kcg_use_BGCollector_T_Receive_TrackSide_Msg_Pkg
kcg_bool kcg_comp_BGCollector_T_Receive_TrackSide_Msg_Pkg(
  BGCollector_T_Receive_TrackSide_Msg_Pkg *kcg_c1,
  BGCollector_T_Receive_TrackSide_Msg_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
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

#ifdef kcg_use_positionErrors_T_TrainPosition_Types_Pck
kcg_bool kcg_comp_positionErrors_T_TrainPosition_Types_Pck(
  positionErrors_T_TrainPosition_Types_Pck *kcg_c1,
  positionErrors_T_TrainPosition_Types_Pck *kcg_c2)
{
  kcg_bool kcg_equ;
  
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

#ifdef kcg_use_DMI_train_id_T_DMI_Types_Pkg
kcg_bool kcg_comp_DMI_train_id_T_DMI_Types_Pkg(
  DMI_train_id_T_DMI_Types_Pkg *kcg_c1,
  DMI_train_id_T_DMI_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
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

#ifdef kcg_use_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg
kcg_bool kcg_comp_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
  DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c1,
  DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_DMI_LevelList_T_DMI_Types_Pkg(
      &kcg_c1->levelList,
      &kcg_c2->levelList);
  kcg_equ = kcg_equ & (kcg_c1->system_clock == kcg_c2->system_clock);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifdef kcg_use_RadioMetadata_T_Common_Types_Pkg
kcg_bool kcg_comp_RadioMetadata_T_Common_Types_Pkg(
  RadioMetadata_T_Common_Types_Pkg *kcg_c1,
  RadioMetadata_T_Common_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
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

#ifdef kcg_use_Mode_control_and_train_status_T_TIU_Types_Pkg
kcg_bool kcg_comp_Mode_control_and_train_status_T_TIU_Types_Pkg(
  Mode_control_and_train_status_T_TIU_Types_Pkg *kcg_c1,
  Mode_control_and_train_status_T_TIU_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
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
  kcg_bool kcg_equ;
  
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

#ifdef kcg_use_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg
kcg_bool kcg_comp_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c1,
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->q_textConfirm == kcg_c2->q_textConfirm);
  kcg_equ = kcg_equ & (kcg_c1->q_textClass == kcg_c2->q_textClass);
  kcg_equ = kcg_equ & kcg_comp_DMI_TEXT_DMI_Types_Pkg(
      &kcg_c1->x_text,
      &kcg_c2->x_text);
  kcg_equ = kcg_equ & (kcg_c1->l_text == kcg_c2->l_text);
  kcg_equ = kcg_equ & (kcg_c1->q_text == kcg_c2->q_text);
  kcg_equ = kcg_equ & (kcg_c1->nid_message == kcg_c2->nid_message);
  kcg_equ = kcg_equ & (kcg_c1->system_clock == kcg_c2->system_clock);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifdef kcg_use_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg
kcg_bool kcg_comp_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(
  DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c1,
  DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
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

#ifdef kcg_use_P42_SessionManagement_T_Packet_Types_Pkg
kcg_bool kcg_comp_P42_SessionManagement_T_Packet_Types_Pkg(
  P42_SessionManagement_T_Packet_Types_Pkg *kcg_c1,
  P42_SessionManagement_T_Packet_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
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

#ifdef kcg_use_DMI_EVC_status_T_DMI_Types_Pkg
kcg_bool kcg_comp_DMI_EVC_status_T_DMI_Types_Pkg(
  DMI_EVC_status_T_DMI_Types_Pkg *kcg_c1,
  DMI_EVC_status_T_DMI_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
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
  kcg_equ = kcg_equ & (kcg_c1->DMI_DriverIdValidated ==
      kcg_c2->DMI_DriverIdValidated);
  kcg_equ = kcg_equ & (kcg_c1->DMI_Error == kcg_c2->DMI_Error);
  kcg_equ = kcg_equ & (kcg_c1->DMI_Active == kcg_c2->DMI_Active);
  return kcg_equ;
}
#endif /* kcg_use_DMI_EVC_status_T_DMI_Types_Pkg */

#ifdef kcg_use_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg
kcg_bool kcg_comp_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(
  DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c1,
  DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->M_VERSION == kcg_c2->M_VERSION);
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
  kcg_bool kcg_equ;
  
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

#ifdef kcg_use_speedSupervisionForDMI_T_DMI_Types_Pkg
kcg_bool kcg_comp_speedSupervisionForDMI_T_DMI_Types_Pkg(
  speedSupervisionForDMI_T_DMI_Types_Pkg *kcg_c1,
  speedSupervisionForDMI_T_DMI_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
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

#ifdef kcg_use_odometry_T_Obu_BasicTypes_Pkg
kcg_bool kcg_comp_odometry_T_Obu_BasicTypes_Pkg(
  odometry_T_Obu_BasicTypes_Pkg *kcg_c1,
  odometry_T_Obu_BasicTypes_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
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

#ifdef kcg_use_MA_section_real_T_TargetManagement_types
kcg_bool kcg_comp_MA_section_real_T_TargetManagement_types(
  MA_section_real_T_TargetManagement_types *kcg_c1,
  MA_section_real_T_TargetManagement_types *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->ReleaseSpeed == kcg_c2->ReleaseSpeed);
  kcg_equ = kcg_equ & (kcg_c1->ReleaseSpeedValid == kcg_c2->ReleaseSpeedValid);
  kcg_equ = kcg_equ & kcg_comp_Overlap_real_T_TargetManagement_types(
      &kcg_c1->Overlap,
      &kcg_c2->Overlap);
  kcg_equ = kcg_equ & (kcg_c1->OL_valid == kcg_c2->OL_valid);
  kcg_equ = kcg_equ & (kcg_c1->DangerPoint == kcg_c2->DangerPoint);
  kcg_equ = kcg_equ & (kcg_c1->DP_valid == kcg_c2->DP_valid);
  kcg_equ = kcg_equ & kcg_comp_EOA_real_T_TargetManagement_types(
      &kcg_c1->EOA,
      &kcg_c2->EOA);
  kcg_equ = kcg_equ & (kcg_c1->EndSection == kcg_c2->EndSection);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_MA_section_real_T_TargetManagement_types */

#ifdef kcg_use_Odometry_real_T_SDM_Types_Pkg
kcg_bool kcg_comp_Odometry_real_T_SDM_Types_Pkg(
  Odometry_real_T_SDM_Types_Pkg *kcg_c1,
  Odometry_real_T_SDM_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->motionDirection == kcg_c2->motionDirection);
  kcg_equ = kcg_equ & (kcg_c1->motionState == kcg_c2->motionState);
  kcg_equ = kcg_equ & (kcg_c1->acceleration == kcg_c2->acceleration);
  kcg_equ = kcg_equ & kcg_comp_OdometrySpeeds_real_T_SDM_Types_Pkg(
      &kcg_c1->speed,
      &kcg_c2->speed);
  kcg_equ = kcg_equ & kcg_comp_OdometryLocations_real_T_SDM_Types_Pkg(
      &kcg_c1->odo,
      &kcg_c2->odo);
  kcg_equ = kcg_equ & (kcg_c1->timestamp == kcg_c2->timestamp);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_Odometry_real_T_SDM_Types_Pkg */

#ifdef kcg_use_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg
kcg_bool kcg_comp_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg(
  Message_EVC_to_Train_Interface_T_TIU_Types_Pkg *kcg_c1,
  Message_EVC_to_Train_Interface_T_TIU_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
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

#ifdef kcg_use_trainProperties_T_TrainPosition_Types_Pck
kcg_bool kcg_comp_trainProperties_T_TrainPosition_Types_Pck(
  trainProperties_T_TrainPosition_Types_Pck *kcg_c1,
  trainProperties_T_TrainPosition_Types_Pck *kcg_c2)
{
  kcg_bool kcg_equ;
  
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

#ifdef kcg_use_LocationBasedEvents_T_ProvidePositionReport_Pkg
kcg_bool kcg_comp_LocationBasedEvents_T_ProvidePositionReport_Pkg(
  LocationBasedEvents_T_ProvidePositionReport_Pkg *kcg_c1,
  LocationBasedEvents_T_ProvidePositionReport_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->levelTransitionBorderPassed ==
      kcg_c2->levelTransitionBorderPassed);
  kcg_equ = kcg_equ & (kcg_c1->maxSafeFrontEndPassed ==
      kcg_c2->maxSafeFrontEndPassed);
  kcg_equ = kcg_equ & (kcg_c1->minSafeRearEndPassed ==
      kcg_c2->minSafeRearEndPassed);
  return kcg_equ;
}
#endif /* kcg_use_LocationBasedEvents_T_ProvidePositionReport_Pkg */

#ifdef kcg_use_mobileHWStatus_Type_MoRC_Pck
kcg_bool kcg_comp_mobileHWStatus_Type_MoRC_Pck(
  mobileHWStatus_Type_MoRC_Pck *kcg_c1,
  mobileHWStatus_Type_MoRC_Pck *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->settingUpConnectionHasFailed ==
      kcg_c2->settingUpConnectionHasFailed);
  kcg_equ = kcg_equ & (kcg_c1->connectionStatus == kcg_c2->connectionStatus);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_mobileHWStatus_Type_MoRC_Pck */

#ifdef kcg_use_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg
kcg_bool kcg_comp_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg(
  DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c1,
  DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->systemTime == kcg_c2->systemTime);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg */

#ifdef kcg_use_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg
kcg_bool kcg_comp_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(
  PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg *kcg_c1,
  PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_aNID_RADIO_T_Packet_TrainTypes_Pkg(
      &kcg_c1->aNID_RADIO,
      &kcg_c2->aNID_RADIO);
  kcg_equ = kcg_equ & (kcg_c1->number == kcg_c2->number);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg
kcg_bool kcg_comp_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg *kcg_c1,
  BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->BGFound == kcg_c2->BGFound);
  kcg_equ = kcg_equ & (kcg_c1->noOfFoundBGs == kcg_c2->noOfFoundBGs);
  kcg_equ = kcg_equ & (kcg_c1->index == kcg_c2->index);
  return kcg_equ;
}
#endif /* kcg_use_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg */

#ifdef kcg_use_IterPacket58_T_Packet_Types_Pkg
kcg_bool kcg_comp_IterPacket58_T_Packet_Types_Pkg(
  IterPacket58_T_Packet_Types_Pkg *kcg_c1,
  IterPacket58_T_Packet_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->q_lgtloc == kcg_c2->q_lgtloc);
  kcg_equ = kcg_equ & (kcg_c1->d_loc == kcg_c2->d_loc);
  return kcg_equ;
}
#endif /* kcg_use_IterPacket58_T_Packet_Types_Pkg */

#ifdef kcg_use_struct_60783
kcg_bool kcg_comp_struct_60783(struct_60783 *kcg_c1, struct_60783 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Or_Line == kcg_c2->Or_Line);
  kcg_equ = kcg_equ & (kcg_c1->Or_BG == kcg_c2->Or_BG);
  kcg_equ = kcg_equ & (kcg_c1->Pos == kcg_c2->Pos);
  kcg_equ = kcg_equ & (kcg_c1->NID_BG == kcg_c2->NID_BG);
  kcg_equ = kcg_equ & (kcg_c1->NID_C == kcg_c2->NID_C);
  return kcg_equ;
}
#endif /* kcg_use_struct_60783 */

#ifdef kcg_use_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg
kcg_bool kcg_comp_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(
  PT5_TrainRunningNumber_Packet_TrainTypes_Pkg *kcg_c1,
  PT5_TrainRunningNumber_Packet_TrainTypes_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->TrainRunningNumber ==
      kcg_c2->TrainRunningNumber);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg */

#ifdef kcg_use_TM_P255_T
kcg_bool kcg_comp_TM_P255_T(TM_P255_T *kcg_c1, TM_P255_T *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->packet_ID == kcg_c2->packet_ID);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_TM_P255_T */

#ifdef kcg_use_sTractionIdentity_T_Packet_TrainTypes_Pkg
kcg_bool kcg_comp_sTractionIdentity_T_Packet_TrainTypes_Pkg(
  sTractionIdentity_T_Packet_TrainTypes_Pkg *kcg_c1,
  sTractionIdentity_T_Packet_TrainTypes_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_ctraction == kcg_c2->nid_ctraction);
  kcg_equ = kcg_equ & (kcg_c1->m_voltage == kcg_c2->m_voltage);
  return kcg_equ;
}
#endif /* kcg_use_sTractionIdentity_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg
kcg_bool kcg_comp_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(
  PT4_ErrorReporting_T_Packet_TrainTypes_Pkg *kcg_c1,
  PT4_ErrorReporting_T_Packet_TrainTypes_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->M_ERROR == kcg_c2->M_ERROR);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_struct_60820
kcg_bool kcg_comp_struct_60820(struct_60820 *kcg_c1, struct_60820 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->distance == kcg_c2->distance);
  kcg_equ = kcg_equ & (kcg_c1->now == kcg_c2->now);
  return kcg_equ;
}
#endif /* kcg_use_struct_60820 */

#ifdef kcg_use_Isolation_Status_T_TIU_Types_Pkg
kcg_bool kcg_comp_Isolation_Status_T_TIU_Types_Pkg(
  Isolation_Status_T_TIU_Types_Pkg *kcg_c1,
  Isolation_Status_T_TIU_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->isolation_status == kcg_c2->isolation_status);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_Isolation_Status_T_TIU_Types_Pkg */

#ifdef kcg_use_Brake_inhibition_command_T_TIU_Types_Pkg
kcg_bool kcg_comp_Brake_inhibition_command_T_TIU_Types_Pkg(
  Brake_inhibition_command_T_TIU_Types_Pkg *kcg_c1,
  Brake_inhibition_command_T_TIU_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
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

#ifdef kcg_use_DMI_DriverAck_T_DMI_Types_Pkg
kcg_bool kcg_comp_DMI_DriverAck_T_DMI_Types_Pkg(
  DMI_DriverAck_T_DMI_Types_Pkg *kcg_c1,
  DMI_DriverAck_T_DMI_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->acknowledgement == kcg_c2->acknowledgement);
  kcg_equ = kcg_equ & (kcg_c1->whichMode == kcg_c2->whichMode);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_DMI_DriverAck_T_DMI_Types_Pkg */

#ifdef kcg_use_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg
kcg_bool kcg_comp_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
  DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c1,
  DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->entry_request == kcg_c2->entry_request);
  kcg_equ = kcg_equ & (kcg_c1->system_clock == kcg_c2->system_clock);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifdef kcg_use_EOA_real_T_TargetManagement_types
kcg_bool kcg_comp_EOA_real_T_TargetManagement_types(
  EOA_real_T_TargetManagement_types *kcg_c1,
  EOA_real_T_TargetManagement_types *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Timer == kcg_c2->Timer);
  kcg_equ = kcg_equ & (kcg_c1->TargetSpeed == kcg_c2->TargetSpeed);
  kcg_equ = kcg_equ & (kcg_c1->Location == kcg_c2->Location);
  return kcg_equ;
}
#endif /* kcg_use_EOA_real_T_TargetManagement_types */

#ifdef kcg_use_mobileSWStatus_Type_MoRC_Pck
kcg_bool kcg_comp_mobileSWStatus_Type_MoRC_Pck(
  mobileSWStatus_Type_MoRC_Pck *kcg_c1,
  mobileSWStatus_Type_MoRC_Pck *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->settingUpConnectionHasFailed ==
      kcg_c2->settingUpConnectionHasFailed);
  kcg_equ = kcg_equ & (kcg_c1->registeredRadioNetworkID ==
      kcg_c2->registeredRadioNetworkID);
  kcg_equ = kcg_equ & (kcg_c1->connectionStatus == kcg_c2->connectionStatus);
  kcg_equ = kcg_equ & (kcg_c1->mobileHW_available ==
      kcg_c2->mobileHW_available);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_mobileSWStatus_Type_MoRC_Pck */

#ifdef kcg_use_TIU_trainStatus_T_TIU_Types_Pkg
kcg_bool kcg_comp_TIU_trainStatus_T_TIU_Types_Pkg(
  TIU_trainStatus_T_TIU_Types_Pkg *kcg_c1,
  TIU_trainStatus_T_TIU_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->ownCab == kcg_c2->ownCab);
  kcg_equ = kcg_equ & (kcg_c1->deskOpen == kcg_c2->deskOpen);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_TIU_trainStatus_T_TIU_Types_Pkg */

#ifdef kcg_use_TIU_Input_msg_API_TIU_Pkg
kcg_bool kcg_comp_TIU_Input_msg_API_TIU_Pkg(
  TIU_Input_msg_API_TIU_Pkg *kcg_c1,
  TIU_Input_msg_API_TIU_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(
      &kcg_c1->info,
      &kcg_c2->info);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_TIU_Input_msg_API_TIU_Pkg */

#ifdef kcg_use_TIU_Output_msg_API_TIU_Pkg
kcg_bool kcg_comp_TIU_Output_msg_API_TIU_Pkg(
  TIU_Output_msg_API_TIU_Pkg *kcg_c1,
  TIU_Output_msg_API_TIU_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg(
      &kcg_c1->info,
      &kcg_c2->info);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_TIU_Output_msg_API_TIU_Pkg */

#ifdef kcg_use_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg
kcg_bool kcg_comp_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *kcg_c1,
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ &
    kcg_comp_Position_Report_based_on_two_balise_groups_TrainToTrack(
      &kcg_c1->packet1,
      &kcg_c2->packet1);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_PT0_PositionReport_T_Packet_TrainTypes_Pkg
kcg_bool kcg_comp_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
  PT0_PositionReport_T_Packet_TrainTypes_Pkg *kcg_c1,
  PT0_PositionReport_T_Packet_TrainTypes_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_Position_Report_TrainToTrack(
      &kcg_c1->packet0,
      &kcg_c2->packet0);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_PT0_PositionReport_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_sNID_RADIO_T_Packet_TrainTypes_Pkg
kcg_bool kcg_comp_sNID_RADIO_T_Packet_TrainTypes_Pkg(
  sNID_RADIO_T_Packet_TrainTypes_Pkg *kcg_c1,
  sNID_RADIO_T_Packet_TrainTypes_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_telephoneNumber_T_Packet_TrainTypes_Pkg(
      &kcg_c1->telephoneNumber,
      &kcg_c2->telephoneNumber);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_sNID_RADIO_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_ReceivedMessage_T_Common_Types_Pkg
kcg_bool kcg_comp_ReceivedMessage_T_Common_Types_Pkg(
  ReceivedMessage_T_Common_Types_Pkg *kcg_c1,
  ReceivedMessage_T_Common_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_CompressedPackets_T_Common_Types_Pkg(
      &kcg_c1->packets,
      &kcg_c2->packets);
  kcg_equ = kcg_equ & kcg_comp_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
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
#endif /* kcg_use_ReceivedMessage_T_Common_Types_Pkg */

#ifdef kcg_use_API_TrackSideInput_T_API_Msg_Pkg
kcg_bool kcg_comp_API_TrackSideInput_T_API_Msg_Pkg(
  API_TrackSideInput_T_API_Msg_Pkg *kcg_c1,
  API_TrackSideInput_T_API_Msg_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
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

#ifdef kcg_use_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg
kcg_bool kcg_comp_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg *kcg_c1,
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
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

#ifdef kcg_use_outPackets_T_Common_Types_Pkg
kcg_bool kcg_comp_outPackets_T_Common_Types_Pkg(
  outPackets_T_Common_Types_Pkg *kcg_c1,
  outPackets_T_Common_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(
      &kcg_c1->p11,
      &kcg_c2->p11);
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

#ifdef kcg_use_TM_P046E_T
kcg_bool kcg_comp_TM_P046E_T(TM_P046E_T *kcg_c1, TM_P046E_T *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_stm == kcg_c2->nid_stm);
  kcg_equ = kcg_equ & (kcg_c1->m_leveltr == kcg_c2->m_leveltr);
  return kcg_equ;
}
#endif /* kcg_use_TM_P046E_T */

#ifdef kcg_use_extractTargetsLOAACC_TargetManagement_pkg
kcg_bool kcg_comp_extractTargetsLOAACC_TargetManagement_pkg(
  extractTargetsLOAACC_TargetManagement_pkg *kcg_c1,
  extractTargetsLOAACC_TargetManagement_pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->lastInsertedTargetIndex ==
      kcg_c2->lastInsertedTargetIndex);
  kcg_equ = kcg_equ & kcg_comp_Target_list_LOA_real_T_TargetManagement_types(
      &kcg_c1->targetList,
      &kcg_c2->targetList);
  return kcg_equ;
}
#endif /* kcg_use_extractTargetsLOAACC_TargetManagement_pkg */

#ifdef kcg_use_NationalValues_real_T_SDM_Types_Pkg
kcg_bool kcg_comp_NationalValues_real_T_SDM_Types_Pkg(
  NationalValues_real_T_SDM_Types_Pkg *kcg_c1,
  NationalValues_real_T_SDM_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->q_nvinhsmicperm == kcg_c2->q_nvinhsmicperm);
  kcg_equ = kcg_equ & (kcg_c1->q_nvsbfbperm == kcg_c2->q_nvsbfbperm);
  kcg_equ = kcg_equ & (kcg_c1->q_nvemrrls == kcg_c2->q_nvemrrls);
  kcg_equ = kcg_equ & (kcg_c1->q_nvsbtsmperm == kcg_c2->q_nvsbtsmperm);
  kcg_equ = kcg_equ & (kcg_c1->v_nvrel == kcg_c2->v_nvrel);
  return kcg_equ;
}
#endif /* kcg_use_NationalValues_real_T_SDM_Types_Pkg */

#ifdef kcg_use_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg
kcg_bool kcg_comp_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
  DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c1,
  DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_request == kcg_c2->m_request);
  kcg_equ = kcg_equ & (kcg_c1->systemTime == kcg_c2->systemTime);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg */

#ifdef kcg_use_DMI_speedProfileElement_T_DMI_Types_Pkg
kcg_bool kcg_comp_DMI_speedProfileElement_T_DMI_Types_Pkg(
  DMI_speedProfileElement_T_DMI_Types_Pkg *kcg_c1,
  DMI_speedProfileElement_T_DMI_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->v_static == kcg_c2->v_static);
  kcg_equ = kcg_equ & (kcg_c1->d_static == kcg_c2->d_static);
  return kcg_equ;
}
#endif /* kcg_use_DMI_speedProfileElement_T_DMI_Types_Pkg */

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
  kcg_bool kcg_equ;
  
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

#ifdef kcg_use_ErrorMessage_T_ProvidePositionReport_Pkg
kcg_bool kcg_comp_ErrorMessage_T_ProvidePositionReport_Pkg(
  ErrorMessage_T_ProvidePositionReport_Pkg *kcg_c1,
  ErrorMessage_T_ProvidePositionReport_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->errorType == kcg_c2->errorType);
  kcg_equ = kcg_equ & (kcg_c1->present == kcg_c2->present);
  return kcg_equ;
}
#endif /* kcg_use_ErrorMessage_T_ProvidePositionReport_Pkg */

#ifdef kcg_use_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg
kcg_bool kcg_comp_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg(
  DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c1,
  DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->system_clock == kcg_c2->system_clock);
  kcg_equ = kcg_equ & (kcg_c1->cab_is_active == kcg_c2->cab_is_active);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifdef kcg_use_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg
kcg_bool kcg_comp_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
  DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg *kcg_c1,
  DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_driverIdentifier_T_DMI_Messages_Bothways_Pkg(
      &kcg_c1->driverIdentifier,
      &kcg_c2->driverIdentifier);
  kcg_equ = kcg_equ & (kcg_c1->systemTime == kcg_c2->systemTime);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg */

#ifdef kcg_use_Brake_status_T_TIU_Types_Pkg
kcg_bool kcg_comp_Brake_status_T_TIU_Types_Pkg(
  Brake_status_T_TIU_Types_Pkg *kcg_c1,
  Brake_status_T_TIU_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
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

#ifdef kcg_use_ParabolaArc_T_CalcBrakingCurves_types
kcg_bool kcg_comp_ParabolaArc_T_CalcBrakingCurves_types(
  ParabolaArc_T_CalcBrakingCurves_types *kcg_c1,
  ParabolaArc_T_CalcBrakingCurves_types *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->acceleration == kcg_c2->acceleration);
  kcg_equ = kcg_equ & (kcg_c1->speed == kcg_c2->speed);
  kcg_equ = kcg_equ & (kcg_c1->distance == kcg_c2->distance);
  return kcg_equ;
}
#endif /* kcg_use_ParabolaArc_T_CalcBrakingCurves_types */

#ifdef kcg_use_extractTargetsMRSPACC_TargetManagement_pkg
kcg_bool kcg_comp_extractTargetsMRSPACC_TargetManagement_pkg(
  extractTargetsMRSPACC_TargetManagement_pkg *kcg_c1,
  extractTargetsMRSPACC_TargetManagement_pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->lastInsertedTargetIndex ==
      kcg_c2->lastInsertedTargetIndex);
  kcg_equ = kcg_equ & kcg_comp_Target_list_MRSP_real_T_TargetManagement_types(
      &kcg_c1->targetList,
      &kcg_c2->targetList);
  return kcg_equ;
}
#endif /* kcg_use_extractTargetsMRSPACC_TargetManagement_pkg */

#ifdef kcg_use_p42_order_T_MoRC_Pck_Coder_Pkg
kcg_bool kcg_comp_p42_order_T_MoRC_Pck_Coder_Pkg(
  p42_order_T_MoRC_Pck_Coder_Pkg *kcg_c1,
  p42_order_T_MoRC_Pck_Coder_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_P42_SessionManagement_T_Packet_Types_Pkg(
      &kcg_c1->p42,
      &kcg_c2->p42);
  kcg_equ = kcg_equ &
    (kcg_c1->establishOrderDoesNotRequestToContactAnAcceptingRBC ==
      kcg_c2->establishOrderDoesNotRequestToContactAnAcceptingRBC);
  kcg_equ = kcg_equ & (kcg_c1->source == kcg_c2->source);
  return kcg_equ;
}
#endif /* kcg_use_p42_order_T_MoRC_Pck_Coder_Pkg */

#ifdef kcg_use_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg
kcg_bool kcg_comp_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
  DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c1,
  DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_DMI_Available_Menu_T_DMI_Types_Pkg(
      &kcg_c1->available_menu,
      &kcg_c2->available_menu);
  kcg_equ = kcg_equ & (kcg_c1->system_clock == kcg_c2->system_clock);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifdef kcg_use_Radio_TrainTrack_Message_T_Radio_Types_Pkg
kcg_bool kcg_comp_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
  Radio_TrainTrack_Message_T_Radio_Types_Pkg *kcg_c1,
  Radio_TrainTrack_Message_T_Radio_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_outPackets_T_Common_Types_Pkg(
      &kcg_c1->packets,
      &kcg_c2->packets);
  kcg_equ = kcg_equ & kcg_comp_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
      &kcg_c1->header,
      &kcg_c2->header);
  kcg_equ = kcg_equ & (kcg_c1->present == kcg_c2->present);
  return kcg_equ;
}
#endif /* kcg_use_Radio_TrainTrack_Message_T_Radio_Types_Pkg */

#ifdef kcg_use_OdometrySpeeds_real_T_SDM_Types_Pkg
kcg_bool kcg_comp_OdometrySpeeds_real_T_SDM_Types_Pkg(
  OdometrySpeeds_real_T_SDM_Types_Pkg *kcg_c1,
  OdometrySpeeds_real_T_SDM_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->v_upper == kcg_c2->v_upper);
  kcg_equ = kcg_equ & (kcg_c1->v_lower == kcg_c2->v_lower);
  kcg_equ = kcg_equ & (kcg_c1->v_rawNominal == kcg_c2->v_rawNominal);
  kcg_equ = kcg_equ & (kcg_c1->v_safeNominal == kcg_c2->v_safeNominal);
  return kcg_equ;
}
#endif /* kcg_use_OdometrySpeeds_real_T_SDM_Types_Pkg */

#ifdef kcg_use_TM_P046_T
kcg_bool kcg_comp_TM_P046_T(TM_P046_T *kcg_c1, TM_P046_T *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_TM_P046Es_T(
      &kcg_c1->sections,
      &kcg_c2->sections);
  kcg_equ = kcg_equ & (kcg_c1->n_iter == kcg_c2->n_iter);
  kcg_equ = kcg_equ & (kcg_c1->m_level == kcg_c2->m_level);
  kcg_equ = kcg_equ & (kcg_c1->l_packet == kcg_c2->l_packet);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_TM_P046_T */

#ifdef kcg_use_Overlap_real_T_TargetManagement_types
kcg_bool kcg_comp_Overlap_real_T_TargetManagement_types(
  Overlap_real_T_TargetManagement_types *kcg_c1,
  Overlap_real_T_TargetManagement_types *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Timer == kcg_c2->Timer);
  kcg_equ = kcg_equ & (kcg_c1->Location == kcg_c2->Location);
  return kcg_equ;
}
#endif /* kcg_use_Overlap_real_T_TargetManagement_types */

#ifdef kcg_use_struct_61106
kcg_bool kcg_comp_struct_61106(struct_61106 *kcg_c1, struct_61106 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->dig3 == kcg_c2->dig3);
  kcg_equ = kcg_equ & (kcg_c1->dig2 == kcg_c2->dig2);
  kcg_equ = kcg_equ & (kcg_c1->dig1 == kcg_c2->dig1);
  kcg_equ = kcg_equ & (kcg_c1->number == kcg_c2->number);
  return kcg_equ;
}
#endif /* kcg_use_struct_61106 */

#ifdef kcg_use_DMI_LevelList_T_DMI_Types_Pkg
kcg_bool kcg_comp_DMI_LevelList_T_DMI_Types_Pkg(
  DMI_LevelList_T_DMI_Types_Pkg *kcg_c1,
  DMI_LevelList_T_DMI_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_DMI_level_array_T_DMI_Types_Pkg(
      &kcg_c1->levelList,
      &kcg_c2->levelList);
  return kcg_equ;
}
#endif /* kcg_use_DMI_LevelList_T_DMI_Types_Pkg */

#ifdef kcg_use_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg
kcg_bool kcg_comp_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(
  DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg *kcg_c1,
  DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->adhesionFactor == kcg_c2->adhesionFactor);
  kcg_equ = kcg_equ & (kcg_c1->systemTime == kcg_c2->systemTime);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg */

#ifdef kcg_use_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg
kcg_bool kcg_comp_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg *kcg_c1,
  BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
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

#ifdef kcg_use_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg
kcg_bool kcg_comp_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *kcg_c1,
  linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->subsequentLinkedBG_idx ==
      kcg_c2->subsequentLinkedBG_idx);
  kcg_equ = kcg_equ & (kcg_c1->currentIndex == kcg_c2->currentIndex);
  kcg_equ = kcg_equ & (kcg_c1->previousLinkedBG_idx ==
      kcg_c2->previousLinkedBG_idx);
  return kcg_equ;
}
#endif /* kcg_use_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg */

#ifdef kcg_use_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg
kcg_bool kcg_comp_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
  DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c1,
  DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->DMI_nid_icon_identifier ==
      kcg_c2->DMI_nid_icon_identifier);
  kcg_equ = kcg_equ & (kcg_c1->systemTime == kcg_c2->systemTime);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg */

#ifdef kcg_use_TargetIteratorAkku_TargetLimits_Pkg
kcg_bool kcg_comp_TargetIteratorAkku_TargetLimits_Pkg(
  TargetIteratorAkku_TargetLimits_Pkg *kcg_c1,
  TargetIteratorAkku_TargetLimits_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->MRTType == kcg_c2->MRTType);
  kcg_equ = kcg_equ & (kcg_c1->MRTIndex == kcg_c2->MRTIndex);
  kcg_equ = kcg_equ & (kcg_c1->MRTSBI2 == kcg_c2->MRTSBI2);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_TargetIteratorAkku_TargetLimits_Pkg */

#ifdef kcg_use_nationValuesForDMI_T_DMI_Types_Pkg
kcg_bool kcg_comp_nationValuesForDMI_T_DMI_Types_Pkg(
  nationValuesForDMI_T_DMI_Types_Pkg *kcg_c1,
  nationValuesForDMI_T_DMI_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_c_valid == kcg_c2->nid_c_valid);
  kcg_equ = kcg_equ & (kcg_c1->nid_c == kcg_c2->nid_c);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_nationValuesForDMI_T_DMI_Types_Pkg */

#ifdef kcg_use_Type_I_train_commands_T_TIU_Types_Pkg
kcg_bool kcg_comp_Type_I_train_commands_T_TIU_Types_Pkg(
  Type_I_train_commands_T_TIU_Types_Pkg *kcg_c1,
  Type_I_train_commands_T_TIU_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
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

#ifdef kcg_use_struct_61193
kcg_bool kcg_comp_struct_61193(struct_61193 *kcg_c1, struct_61193 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_array_bool_4(&kcg_c1->items, &kcg_c2->items);
  kcg_equ = kcg_equ & (kcg_c1->idx == kcg_c2->idx);
  return kcg_equ;
}
#endif /* kcg_use_struct_61193 */

#ifdef kcg_use_DMI_To_Modes_T_DMI_Types_Pkg
kcg_bool kcg_comp_DMI_To_Modes_T_DMI_Types_Pkg(
  DMI_To_Modes_T_DMI_Types_Pkg *kcg_c1,
  DMI_To_Modes_T_DMI_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
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

#ifdef kcg_use_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg
kcg_bool kcg_comp_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg(
  DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c1,
  DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nAlive == kcg_c2->nAlive);
  kcg_equ = kcg_equ & (kcg_c1->statusSet == kcg_c2->statusSet);
  kcg_equ = kcg_equ & (kcg_c1->systemTime == kcg_c2->systemTime);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg */

#ifdef kcg_use_nvkvintset_T_Packet_Types_Pkg
kcg_bool kcg_comp_nvkvintset_T_Packet_Types_Pkg(
  nvkvintset_T_Packet_Types_Pkg *kcg_c1,
  nvkvintset_T_Packet_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
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

#ifdef kcg_use_OdometrySpeeds_T_Obu_BasicTypes_Pkg
kcg_bool kcg_comp_OdometrySpeeds_T_Obu_BasicTypes_Pkg(
  OdometrySpeeds_T_Obu_BasicTypes_Pkg *kcg_c1,
  OdometrySpeeds_T_Obu_BasicTypes_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->v_upper == kcg_c2->v_upper);
  kcg_equ = kcg_equ & (kcg_c1->v_lower == kcg_c2->v_lower);
  kcg_equ = kcg_equ & (kcg_c1->v_rawNominal == kcg_c2->v_rawNominal);
  kcg_equ = kcg_equ & (kcg_c1->v_safeNominal == kcg_c2->v_safeNominal);
  return kcg_equ;
}
#endif /* kcg_use_OdometrySpeeds_T_Obu_BasicTypes_Pkg */

#ifdef kcg_use_RBC_Communication_T_ProvidePositionReport_Pkg
kcg_bool kcg_comp_RBC_Communication_T_ProvidePositionReport_Pkg(
  RBC_Communication_T_ProvidePositionReport_Pkg *kcg_c1,
  RBC_Communication_T_ProvidePositionReport_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->newSessionEstablished ==
      kcg_c2->newSessionEstablished);
  return kcg_equ;
}
#endif /* kcg_use_RBC_Communication_T_ProvidePositionReport_Pkg */

#ifdef kcg_use_TM_P003_T
kcg_bool kcg_comp_TM_P003_T(TM_P003_T *kcg_c1, TM_P003_T *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Q_NVDRIVER == kcg_c2->Q_NVDRIVER);
  kcg_equ = kcg_equ & (kcg_c1->D_NVSTFF == kcg_c2->D_NVSTFF);
  kcg_equ = kcg_equ & (kcg_c1->M_DVDERUN == kcg_c2->M_DVDERUN);
  kcg_equ = kcg_equ & (kcg_c1->T_NVCONTACT == kcg_c2->T_NVCONTACT);
  kcg_equ = kcg_equ & (kcg_c1->M_NVCONTACT == kcg_c2->M_NVCONTACT);
  kcg_equ = kcg_equ & (kcg_c1->D_NVOTRP == kcg_c2->D_NVOTRP);
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
  kcg_equ = kcg_equ & (kcg_c1->NID_C == kcg_c2->NID_C);
  kcg_equ = kcg_equ & (kcg_c1->N_ITER == kcg_c2->N_ITER);
  kcg_equ = kcg_equ & (kcg_c1->D_VALIDNV == kcg_c2->D_VALIDNV);
  kcg_equ = kcg_equ & (kcg_c1->Q_SCALE == kcg_c2->Q_SCALE);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->Q_DIR == kcg_c2->Q_DIR);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_TM_P003_T */

#ifdef kcg_use_TM_BaliseTelegramHeader_int_T
kcg_bool kcg_comp_TM_BaliseTelegramHeader_int_T(
  TM_BaliseTelegramHeader_int_T *kcg_c1,
  TM_BaliseTelegramHeader_int_T *kcg_c2)
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
#endif /* kcg_use_TM_BaliseTelegramHeader_int_T */

#ifdef kcg_use_trainPositionInfo_T_TrainPosition_Types_Pck
kcg_bool kcg_comp_trainPositionInfo_T_TrainPosition_Types_Pck(
  trainPositionInfo_T_TrainPosition_Types_Pck *kcg_c1,
  trainPositionInfo_T_TrainPosition_Types_Pck *kcg_c2)
{
  kcg_bool kcg_equ;
  
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

#ifdef kcg_use_TM_Radio_TrackTrain_Header_T
kcg_bool kcg_comp_TM_Radio_TrackTrain_Header_T(
  TM_Radio_TrackTrain_Header_T *kcg_c1,
  TM_Radio_TrackTrain_Header_T *kcg_c2)
{
  kcg_bool kcg_equ;
  
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
#endif /* kcg_use_TM_Radio_TrackTrain_Header_T */

#ifdef kcg_use_P58_PositionReportParameters_T_Packet_Types_Pkg
kcg_bool kcg_comp_P58_PositionReportParameters_T_Packet_Types_Pkg(
  P58_PositionReportParameters_T_Packet_Types_Pkg *kcg_c1,
  P58_PositionReportParameters_T_Packet_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
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

#ifdef kcg_use_p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg
kcg_bool kcg_comp_p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg(
  p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg *kcg_c1,
  p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_radio == kcg_c2->nid_radio);
  kcg_equ = kcg_equ & (kcg_c1->nid_rbc == kcg_c2->nid_rbc);
  kcg_equ = kcg_equ & (kcg_c1->nid_c == kcg_c2->nid_c);
  kcg_equ = kcg_equ & (kcg_c1->q_rbc == kcg_c2->q_rbc);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->source == kcg_c2->source);
  kcg_equ = kcg_equ &
    (kcg_c1->establishOrderDoesNotRequestToContactAnAcceptingRBC ==
      kcg_c2->establishOrderDoesNotRequestToContactAnAcceptingRBC);
  kcg_equ = kcg_equ & (kcg_c1->useTheShortNumberStoredOnboard ==
      kcg_c2->useTheShortNumberStoredOnboard);
  kcg_equ = kcg_equ & (kcg_c1->contactLastKnownRBC ==
      kcg_c2->contactLastKnownRBC);
  kcg_equ = kcg_equ & (kcg_c1->terminate == kcg_c2->terminate);
  kcg_equ = kcg_equ & (kcg_c1->establish == kcg_c2->establish);
  return kcg_equ;
}
#endif /* kcg_use_p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg */

#ifdef kcg_use_TelegramHeader_T_BG_Types_Pkg
kcg_bool kcg_comp_TelegramHeader_T_BG_Types_Pkg(
  TelegramHeader_T_BG_Types_Pkg *kcg_c1,
  TelegramHeader_T_BG_Types_Pkg *kcg_c2)
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
#endif /* kcg_use_TelegramHeader_T_BG_Types_Pkg */

#ifdef kcg_use_obuEventsAndPhases_T_MoRC_Pck
kcg_bool kcg_comp_obuEventsAndPhases_T_MoRC_Pck(
  obuEventsAndPhases_T_MoRC_Pck *kcg_c1,
  obuEventsAndPhases_T_MoRC_Pck *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->errorConditionRequiringTerminationDetected ==
      kcg_c2->errorConditionRequiringTerminationDetected);
  kcg_equ = kcg_equ & (kcg_c1->isInCommunicationSessionWithAnRIU ==
      kcg_c2->isInCommunicationSessionWithAnRIU);
  kcg_equ = kcg_equ & (kcg_c1->OBU_hasToEstablishANewSession ==
      kcg_c2->OBU_hasToEstablishANewSession);
  kcg_equ = kcg_equ & (kcg_c1->trainFrontReachesEndOfAnnouncedRadioHole ==
      kcg_c2->trainFrontReachesEndOfAnnouncedRadioHole);
  kcg_equ = kcg_equ & (kcg_c1->trainFrontInsideInAnAnnouncedRadioHole ==
      kcg_c2->trainFrontInsideInAnAnnouncedRadioHole);
  kcg_equ = kcg_equ & (kcg_c1->modeChangeHasToBeReportedToRBC ==
      kcg_c2->modeChangeHasToBeReportedToRBC);
  kcg_equ = kcg_equ & (kcg_c1->trainExitedFromAnRBCArea ==
      kcg_c2->trainExitedFromAnRBCArea);
  kcg_equ = kcg_equ & (kcg_c1->trainPassesA_RBC_RBC_border_WithItsFrontEnd ==
      kcg_c2->trainPassesA_RBC_RBC_border_WithItsFrontEnd);
  kcg_equ = kcg_equ & (kcg_c1->trainPassesALevelTransitionBorder ==
      kcg_c2->trainPassesALevelTransitionBorder);
  kcg_equ = kcg_equ & (kcg_c1->isPartOfAnOngoingStartOfMissionProcedure ==
      kcg_c2->isPartOfAnOngoingStartOfMissionProcedure);
  kcg_equ = kcg_equ & (kcg_c1->triggerDecisionThatNoRadioNetworkIDAvailable ==
      kcg_c2->triggerDecisionThatNoRadioNetworkIDAvailable);
  kcg_equ = kcg_equ & (kcg_c1->afterDriverEntryOfANewRadioNetworkID ==
      kcg_c2->afterDriverEntryOfANewRadioNetworkID);
  kcg_equ = kcg_equ & (kcg_c1->driverHasManuallyChangedLevel ==
      kcg_c2->driverHasManuallyChangedLevel);
  kcg_equ = kcg_equ & (kcg_c1->driverClosesTheDeskduringStartOfMission ==
      kcg_c2->driverClosesTheDeskduringStartOfMission);
  kcg_equ = kcg_equ & (kcg_c1->endOfMissionIsExecuted ==
      kcg_c2->endOfMissionIsExecuted);
  kcg_equ = kcg_equ & (kcg_c1->trainIsRejectedByRBC_duringStartOfMission ==
      kcg_c2->trainIsRejectedByRBC_duringStartOfMission);
  kcg_equ = kcg_equ & (kcg_c1->startOfMissionProcedureCompleted ==
      kcg_c2->startOfMissionProcedureCompleted);
  kcg_equ = kcg_equ & (kcg_c1->startOfMissionProcedureIsGoingOn ==
      kcg_c2->startOfMissionProcedureIsGoingOn);
  kcg_equ = kcg_equ & (kcg_c1->atStartOfMission == kcg_c2->atStartOfMission);
  kcg_equ = kcg_equ & (kcg_c1->atPowerUp == kcg_c2->atPowerUp);
  kcg_equ = kcg_equ & (kcg_c1->atPowerDown == kcg_c2->atPowerDown);
  return kcg_equ;
}
#endif /* kcg_use_obuEventsAndPhases_T_MoRC_Pck */

#ifdef kcg_use_EVC_to_DMI_Message_T_API_DMI_Pkg
kcg_bool kcg_comp_EVC_to_DMI_Message_T_API_DMI_Pkg(
  EVC_to_DMI_Message_T_API_DMI_Pkg *kcg_c1,
  EVC_to_DMI_Message_T_API_DMI_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
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

#ifdef kcg_use_DMI_Available_Menu_T_DMI_Types_Pkg
kcg_bool kcg_comp_DMI_Available_Menu_T_DMI_Types_Pkg(
  DMI_Available_Menu_T_DMI_Types_Pkg *kcg_c1,
  DMI_Available_Menu_T_DMI_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
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
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
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

#ifdef kcg_use_Radio_TrackTrain_Header_T_Radio_Types_Pkg
kcg_bool kcg_comp_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
  Radio_TrackTrain_Header_T_Radio_Types_Pkg *kcg_c1,
  Radio_TrackTrain_Header_T_Radio_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
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
#endif /* kcg_use_Radio_TrackTrain_Header_T_Radio_Types_Pkg */

#ifdef kcg_use_DMI_to_EVC_Message_T_API_DMI_Pkg
kcg_bool kcg_comp_DMI_to_EVC_Message_T_API_DMI_Pkg(
  DMI_to_EVC_Message_T_API_DMI_Pkg *kcg_c1,
  DMI_to_EVC_Message_T_API_DMI_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
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

#ifdef kcg_use_trainData_T_TIU_Types_Pkg
kcg_bool kcg_comp_trainData_T_TIU_Types_Pkg(
  trainData_T_TIU_Types_Pkg *kcg_c1,
  trainData_T_TIU_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->axleNumber == kcg_c2->axleNumber);
  kcg_equ = kcg_equ & (kcg_c1->airtightSystem == kcg_c2->airtightSystem);
  kcg_equ = kcg_equ & (kcg_c1->axleLoadCategory == kcg_c2->axleLoadCategory);
  kcg_equ = kcg_equ & (kcg_c1->loadingGauge == kcg_c2->loadingGauge);
  kcg_equ = kcg_equ & (kcg_c1->maxTrainSpeed == kcg_c2->maxTrainSpeed);
  kcg_equ = kcg_equ & (kcg_c1->brakePerctage == kcg_c2->brakePerctage);
  kcg_equ = kcg_equ & (kcg_c1->trainLength == kcg_c2->trainLength);
  kcg_equ = kcg_equ & (kcg_c1->trainCategory == kcg_c2->trainCategory);
  kcg_equ = kcg_equ & (kcg_c1->acknowledgedByDriver ==
      kcg_c2->acknowledgedByDriver);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_trainData_T_TIU_Types_Pkg */

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
  kcg_equ = kcg_equ & (kcg_c1->qscale == kcg_c2->qscale);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_Position_Report_based_on_two_balise_groups_TrainToTrack */

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
  kcg_equ = kcg_equ & (kcg_c1->qscale == kcg_c2->qscale);
  kcg_equ = kcg_equ & (kcg_c1->L_PACKET == kcg_c2->L_PACKET);
  kcg_equ = kcg_equ & (kcg_c1->NID_PACKET == kcg_c2->NID_PACKET);
  return kcg_equ;
}
#endif /* kcg_use_Position_Report_TrainToTrack */

#ifdef kcg_use_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg
kcg_bool kcg_comp_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(
  PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg *kcg_c1,
  PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
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
  kcg_equ = kcg_equ & (kcg_c1->NC_TRAIN == kcg_c2->NC_TRAIN);
  kcg_equ = kcg_equ & (kcg_c1->NC_CDTRAIN == kcg_c2->NC_CDTRAIN);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_TSM_triggerCond_T_SDM_Commands_Pkg
kcg_bool kcg_comp_TSM_triggerCond_T_SDM_Commands_Pkg(
  TSM_triggerCond_T_SDM_Commands_Pkg *kcg_c1,
  TSM_triggerCond_T_SDM_Commands_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
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

#ifdef kcg_use_Speeds_T_SDM_Types_Pkg
kcg_bool kcg_comp_Speeds_T_SDM_Types_Pkg(
  Speeds_T_SDM_Types_Pkg *kcg_c1,
  Speeds_T_SDM_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->dV_ebi_V_target == kcg_c2->dV_ebi_V_target);
  kcg_equ = kcg_equ & (kcg_c1->dV_ebi_V_MRSP == kcg_c2->dV_ebi_V_MRSP);
  kcg_equ = kcg_equ & (kcg_c1->dV_sbi_V_target == kcg_c2->dV_sbi_V_target);
  kcg_equ = kcg_equ & (kcg_c1->dV_sbi_V_MRSP == kcg_c2->dV_sbi_V_MRSP);
  kcg_equ = kcg_equ & (kcg_c1->dV_warning_V_target ==
      kcg_c2->dV_warning_V_target);
  kcg_equ = kcg_equ & (kcg_c1->dV_warning_V_MRSP == kcg_c2->dV_warning_V_MRSP);
  kcg_equ = kcg_equ & (kcg_c1->v_FLOI == kcg_c2->v_FLOI);
  kcg_equ = kcg_equ & (kcg_c1->v_sbi_mrdt == kcg_c2->v_sbi_mrdt);
  kcg_equ = kcg_equ & (kcg_c1->v_p_mrdt == kcg_c2->v_p_mrdt);
  kcg_equ = kcg_equ & (kcg_c1->V_target == kcg_c2->V_target);
  kcg_equ = kcg_equ & (kcg_c1->V_release == kcg_c2->V_release);
  kcg_equ = kcg_equ & (kcg_c1->V_MRSP == kcg_c2->V_MRSP);
  kcg_equ = kcg_equ & (kcg_c1->V_est == kcg_c2->V_est);
  return kcg_equ;
}
#endif /* kcg_use_Speeds_T_SDM_Types_Pkg */

#ifdef kcg_use_SDM_Commands_real_T_SDM_Types_Pkg
kcg_bool kcg_comp_SDM_Commands_real_T_SDM_Types_Pkg(
  SDM_Commands_real_T_SDM_Types_Pkg *kcg_c1,
  SDM_Commands_real_T_SDM_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
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
#endif /* kcg_use_SDM_Commands_real_T_SDM_Types_Pkg */

#ifdef kcg_use_trainPosition_T_TrainPosition_Types_Pck
kcg_bool kcg_comp_trainPosition_T_TrainPosition_Types_Pck(
  trainPosition_T_TrainPosition_Types_Pck *kcg_c1,
  trainPosition_T_TrainPosition_Types_Pck *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
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

#ifdef kcg_use_BG_Header_T_BG_Types_Pkg
kcg_bool kcg_comp_BG_Header_T_BG_Types_Pkg(
  BG_Header_T_BG_Types_Pkg *kcg_c1,
  BG_Header_T_BG_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
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
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->nid_LRBG == kcg_c2->nid_LRBG);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_LinkedBG_T_BG_Types_Pkg */

#ifdef kcg_use_P3_NationalValues_T_Packet_Types_Pkg
kcg_bool kcg_comp_P3_NationalValues_T_Packet_Types_Pkg(
  P3_NationalValues_T_Packet_Types_Pkg *kcg_c1,
  P3_NationalValues_T_Packet_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
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

#ifdef kcg_use_MA_section_t
kcg_bool kcg_comp_MA_section_t(MA_section_t *kcg_c1, MA_section_t *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_SectionTimer_t(
      &kcg_c1->EndOfSectionTimer,
      &kcg_c2->EndOfSectionTimer);
  kcg_equ = kcg_equ & (kcg_c1->EST_valid == kcg_c2->EST_valid);
  kcg_equ = kcg_equ & kcg_comp_SectionTimer_t(
      &kcg_c1->SectionTimer,
      &kcg_c2->SectionTimer);
  kcg_equ = kcg_equ & (kcg_c1->ST_valid == kcg_c2->ST_valid);
  kcg_equ = kcg_equ & (kcg_c1->ReleaseSpeed == kcg_c2->ReleaseSpeed);
  kcg_equ = kcg_equ & (kcg_c1->ReleaseSpeedvald == kcg_c2->ReleaseSpeedvald);
  kcg_equ = kcg_equ & kcg_comp_Overlap_t(&kcg_c1->Overlap, &kcg_c2->Overlap);
  kcg_equ = kcg_equ & (kcg_c1->OL_valid == kcg_c2->OL_valid);
  kcg_equ = kcg_equ & (kcg_c1->DangerPoint == kcg_c2->DangerPoint);
  kcg_equ = kcg_equ & (kcg_c1->DP_valid == kcg_c2->DP_valid);
  kcg_equ = kcg_equ & kcg_comp_EOA_t(&kcg_c1->EOA, &kcg_c2->EOA);
  kcg_equ = kcg_equ & (kcg_c1->EndSection == kcg_c2->EndSection);
  kcg_equ = kcg_equ & (kcg_c1->MA_section_valid == kcg_c2->MA_section_valid);
  return kcg_equ;
}
#endif /* kcg_use_MA_section_t */

#ifdef kcg_use_SDM_Locations_T_SDM_Types_Pkg
kcg_bool kcg_comp_SDM_Locations_T_SDM_Types_Pkg(
  SDM_Locations_T_SDM_Types_Pkg *kcg_c1,
  SDM_Locations_T_SDM_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
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
  kcg_equ = kcg_equ & (kcg_c1->d_P_of_V_target == kcg_c2->d_P_of_V_target);
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

#ifdef kcg_use_SDM_Commands_T_SDM_Types_Pkg
kcg_bool kcg_comp_SDM_Commands_T_SDM_Types_Pkg(
  SDM_Commands_T_SDM_Types_Pkg *kcg_c1,
  SDM_Commands_T_SDM_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
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

#ifdef kcg_use_TM_P137_T
kcg_bool kcg_comp_TM_P137_T(TM_P137_T *kcg_c1, TM_P137_T *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->q_srstop == kcg_c2->q_srstop);
  kcg_equ = kcg_equ & (kcg_c1->l_packet == kcg_c2->l_packet);
  kcg_equ = kcg_equ & (kcg_c1->q_dir == kcg_c2->q_dir);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_TM_P137_T */

#ifdef kcg_use_nidC_T_Packet_Types_Pkg
kcg_bool kcg_comp_nidC_T_Packet_Types_Pkg(
  nidC_T_Packet_Types_Pkg *kcg_c1,
  nidC_T_Packet_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_c == kcg_c2->nid_c);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_nidC_T_Packet_Types_Pkg */

#ifdef kcg_use_struct_61816
kcg_bool kcg_comp_struct_61816(struct_61816 *kcg_c1, struct_61816 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Timer == kcg_c2->Timer);
  kcg_equ = kcg_equ & (kcg_c1->Location == kcg_c2->Location);
  return kcg_equ;
}
#endif /* kcg_use_struct_61816 */

#ifdef kcg_use_CompressedPackets_T_Common_Types_Pkg
kcg_bool kcg_comp_CompressedPackets_T_Common_Types_Pkg(
  CompressedPackets_T_Common_Types_Pkg *kcg_c1,
  CompressedPackets_T_Common_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
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

#ifdef kcg_use_MRSP_internal_section_T_TargetManagement_types
kcg_bool kcg_comp_MRSP_internal_section_T_TargetManagement_types(
  MRSP_internal_section_T_TargetManagement_types *kcg_c1,
  MRSP_internal_section_T_TargetManagement_types *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  kcg_equ = kcg_equ & (kcg_c1->MRS == kcg_c2->MRS);
  kcg_equ = kcg_equ & (kcg_c1->Loc_Abs == kcg_c2->Loc_Abs);
  return kcg_equ;
}
#endif /* kcg_use_MRSP_internal_section_T_TargetManagement_types */

#ifdef kcg_use_TIU_commandStatus_T_TIU_Types_Pkg
kcg_bool kcg_comp_TIU_commandStatus_T_TIU_Types_Pkg(
  TIU_commandStatus_T_TIU_Types_Pkg *kcg_c1,
  TIU_commandStatus_T_TIU_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->isolationStatus == kcg_c2->isolationStatus);
  kcg_equ = kcg_equ & (kcg_c1->emergencyBrakeActive ==
      kcg_c2->emergencyBrakeActive);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_TIU_commandStatus_T_TIU_Types_Pkg */

#ifdef kcg_use_Brake_command_T_TIU_Types_Pkg
kcg_bool kcg_comp_Brake_command_T_TIU_Types_Pkg(
  Brake_command_T_TIU_Types_Pkg *kcg_c1,
  Brake_command_T_TIU_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->m_emergencybrake_cm ==
      kcg_c2->m_emergencybrake_cm);
  kcg_equ = kcg_equ & (kcg_c1->m_servicebrake_cm == kcg_c2->m_servicebrake_cm);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_Brake_command_T_TIU_Types_Pkg */

#ifdef kcg_use_Passenger_door_control_info_T_TIU_Types_Pkg
kcg_bool kcg_comp_Passenger_door_control_info_T_TIU_Types_Pkg(
  Passenger_door_control_info_T_TIU_Types_Pkg *kcg_c1,
  Passenger_door_control_info_T_TIU_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->door_control_info == kcg_c2->door_control_info);
  kcg_equ = kcg_equ & (kcg_c1->valid == kcg_c2->valid);
  return kcg_equ;
}
#endif /* kcg_use_Passenger_door_control_info_T_TIU_Types_Pkg */

#ifdef kcg_use_centerOfBalisePosition_T_BG_Types_Pkg
kcg_bool kcg_comp_centerOfBalisePosition_T_BG_Types_Pkg(
  centerOfBalisePosition_T_BG_Types_Pkg *kcg_c1,
  centerOfBalisePosition_T_BG_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
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

#ifdef kcg_use_DMI_level_T_DMI_Types_Pkg
kcg_bool kcg_comp_DMI_level_T_DMI_Types_Pkg(
  DMI_level_T_DMI_Types_Pkg *kcg_c1,
  DMI_level_T_DMI_Types_Pkg *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->nid_stm == kcg_c2->nid_stm);
  kcg_equ = kcg_equ & (kcg_c1->level == kcg_c2->level);
  return kcg_equ;
}
#endif /* kcg_use_DMI_level_T_DMI_Types_Pkg */

/* $************* KCG Version 6.4 beta5 (build i13) *************
** kcg_types.c
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */

