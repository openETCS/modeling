/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */
#ifndef _Input_H_
#define _Input_H_

#include "kcg_types.h"
#include "InputDMI_InputManagement.h"
#include "InputLocalisation_InputManagement.h"
#include "InputSpeedAndSupervision_InputManagement.h"
#include "InputTrackManagement_InputManagement.h"

/* =====================  no input structure  ====================== */


/* Input */
extern void Input(
  /* Input::Data_From_DMI */DMI_To_Modes_T_DMI_Types_Pkg *Data_From_DMI,
  /* Input::Data_From_TIU */Message_Train_Interface_to_EVC_T_TIU_Types_Pkg *Data_From_TIU,
  /* Input::Data_From_Track_Messages */T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg *Data_From_Track_Messages,
  /* Input::Data_From_Track_Packets */T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg *Data_From_Track_Packets,
  /* Input::Data_From_STM */T_Data_From_STM_Level_And_Mode_Types_Pkg *Data_From_STM,
  /* Input::Data_From_Localisation */T_Data_From_Localisation_Level_And_Mode_Types_Pkg *Data_From_Localisation,
  /* Input::Data_From_Speed_and_Supervision */T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg *Data_From_Speed_and_Supervision,
  /* Input::Data_From_F2_Functions */T_Data_From_F2_functions_Level_And_Mode_Types_Pkg *Data_From_F2_Functions,
  /* Input::Cab_In */cab_ID_T_TIU_Types_Pkg Cab_In,
  /* Input::driver_level_transition_In */T_LevelTransition_Level_And_Mode_Types_Pkg *driver_level_transition_In,
  /* Input::ERTMS_capabilities_In */T_ERTMS_capabilities_Level_And_Mode_Types_Pkg *ERTMS_capabilities_In,
  /* Input::Data_From_Track_MASSPGradient */T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg *Data_From_Track_MASSPGradient,
  /* Input::MemorizedLevelIn */M_LEVEL MemorizedLevelIn,
  /* Input::train_standstill */kcg_bool *train_standstill,
  /* Input::driver_level_transition */T_LevelTransition_Level_And_Mode_Types_Pkg *driver_level_transition,
  /* Input::levelAck */kcg_bool *levelAck,
  /* Input::trainPosition */trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* Input::ERTMS_capabilities */T_ERTMS_capabilities_Level_And_Mode_Types_Pkg *ERTMS_capabilities,
  /* Input::Data_From_Track_to_Level */T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg *Data_From_Track_to_Level,
  /* Input::MemorizedLevel */M_LEVEL *MemorizedLevel,
  /* Input::Cab */cab_ID_T_TIU_Types_Pkg *Cab,
  /* Input::Data_From_DMI_To_Mode */T_Data_From_DMI_Level_And_Mode_Types_Pkg *Data_From_DMI_To_Mode,
  /* Input::Data_From_F2_Functions_to_Mode */T_Data_From_F2_functions_Level_And_Mode_Types_Pkg *Data_From_F2_Functions_to_Mode,
  /* Input::Data_From_Localisation_To_Mode */T_Data_From_Localisation_Level_And_Mode_Types_Pkg *Data_From_Localisation_To_Mode,
  /* Input::Data_From_Speed_and_Supervision_To_Mode */T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg *Data_From_Speed_and_Supervision_To_Mode,
  /* Input::Data_From_STM_to_Mode */T_Data_From_STM_Level_And_Mode_Types_Pkg *Data_From_STM_to_Mode,
  /* Input::Data_From_TIU_To_Mode */Message_Train_Interface_to_EVC_T_TIU_Types_Pkg *Data_From_TIU_To_Mode,
  /* Input::Data_From_Track_To_Mode */T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg *Data_From_Track_To_Mode);

#endif /* _Input_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Input.h
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */

