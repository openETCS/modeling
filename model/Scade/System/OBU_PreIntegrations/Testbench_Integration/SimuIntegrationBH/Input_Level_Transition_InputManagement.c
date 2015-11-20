/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Input_Level_Transition_InputManagement.h"

/* InputManagement::Input_Level_Transition */
void Input_Level_Transition_InputManagement(
  /* InputManagement::Input_Level_Transition::Data_From_Track_Packets */ T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg *Data_From_Track_Packets,
  /* InputManagement::Input_Level_Transition::conditional_transition */ T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg *conditional_transition,
  /* InputManagement::Input_Level_Transition::level_transition_priority_table */ T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg *level_transition_priority_table)
{
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  /* InputManagement::Input_Level_Transition::_L124 */
  static T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg _L124;
  /* InputManagement::Input_Level_Transition::_L126 */
  static array_int_7 _L126;
  /* InputManagement::Input_Level_Transition::_L127 */
  static array_int_7 _L127;
  /* InputManagement::Input_Level_Transition::_L129 */
  static T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg _L129;
  /* InputManagement::Input_Level_Transition::_L130 */
  static NID_LRBG _L130;
  /* InputManagement::Input_Level_Transition::_L131 */
  static Location_T_Obu_BasicTypes_Pkg _L131;
  /* InputManagement::Input_Level_Transition::_L132 */
  static P41_LevelTransistionOrders_T_Packet_Types_Pkg _L132;
  /* InputManagement::Input_Level_Transition::_L133 */
  static P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg _L133;
  /* InputManagement::Input_Level_Transition::_L134 */
  static T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg _L134;
  
  kcg_copy_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg(
    &_L134,
    Data_From_Track_Packets);
  _L130 = _L134.LRBG;
  /* pow */ for (i3 = 0; i3 < 7; i3++) {
    _L126[i3] = _L130;
  }
  _L131 = _L134.referenceLocation;
  /* pow */ for (i2 = 0; i2 < 7; i2++) {
    _L127[i2] = _L131;
  }
  kcg_copy_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg(
    &_L133,
    &_L134.P_46);
  /* 1 */ for (i1 = 0; i1 < 7; i1++) {
    /* ConditionnalTransition */
    ConditionnalTransition_InputManagement(
      _L126[i1],
      _L127[i1],
      &_L133[i1],
      &_L124[i1]);
  }
  kcg_copy_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg(
    conditional_transition,
    &_L124);
  kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(&_L132, &_L134.P_41);
  /* 2 */ for (i = 0; i < 7; i++) {
    /* NormalTransition */
    NormalTransition_InputManagement(_L126[i], _L127[i], &_L132[i], &_L129[i]);
  }
  kcg_copy_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg(
    level_transition_priority_table,
    &_L129);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Input_Level_Transition_InputManagement.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

