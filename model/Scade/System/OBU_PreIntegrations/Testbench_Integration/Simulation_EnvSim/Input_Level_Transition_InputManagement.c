/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Input_Level_Transition_InputManagement.h"

/* InputManagement::Input_Level_Transition */
void Input_Level_Transition_InputManagement(
  /* InputManagement::Input_Level_Transition::Data_From_Track_Packets */T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg *Data_From_Track_Packets,
  /* InputManagement::Input_Level_Transition::conditional_transition */T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg *conditional_transition,
  /* InputManagement::Input_Level_Transition::level_transition_priority_table */T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg *level_transition_priority_table)
{
  static kcg_int i;
  
  for (i = 0; i < 7; i++) {
    /* NormalTransition */
    NormalTransition_InputManagement(
      (*Data_From_Track_Packets).LRBG,
      (*Data_From_Track_Packets).referenceLocation,
      &(*Data_From_Track_Packets).P_41[i],
      &(*level_transition_priority_table)[i]);
    /* ConditionnalTransition */
    ConditionnalTransition_InputManagement(
      (*Data_From_Track_Packets).LRBG,
      (*Data_From_Track_Packets).referenceLocation,
      &(*Data_From_Track_Packets).P_46[i],
      &(*conditional_transition)[i]);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Input_Level_Transition_InputManagement.c
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

