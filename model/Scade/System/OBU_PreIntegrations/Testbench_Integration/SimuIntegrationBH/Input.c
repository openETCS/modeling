/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Input.h"

/* Input */
void Input(
  /* Input::Data_From_DMI */ DMI_To_Modes_T_DMI_Types_Pkg *Data_From_DMI,
  /* Input::Data_From_TIU */ Message_Train_Interface_to_EVC_T_TIU_Types_Pkg *Data_From_TIU,
  /* Input::Data_From_Track_Messages */ T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg *Data_From_Track_Messages,
  /* Input::Data_From_Track_Packets */ T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg *Data_From_Track_Packets,
  /* Input::Data_From_STM */ T_Data_From_STM_Level_And_Mode_Types_Pkg *Data_From_STM,
  /* Input::Data_From_Localisation */ T_Data_From_Localisation_Level_And_Mode_Types_Pkg *Data_From_Localisation,
  /* Input::Data_From_Speed_and_Supervision */ T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg *Data_From_Speed_and_Supervision,
  /* Input::Data_From_F2_Functions */ T_Data_From_F2_functions_Level_And_Mode_Types_Pkg *Data_From_F2_Functions,
  /* Input::Cab_In */ cab_ID_T_TIU_Types_Pkg Cab_In,
  /* Input::driver_level_transition_In */ T_LevelTransition_Level_And_Mode_Types_Pkg *driver_level_transition_In,
  /* Input::ERTMS_capabilities_In */ T_ERTMS_capabilities_Level_And_Mode_Types_Pkg *ERTMS_capabilities_In,
  /* Input::Data_From_Track_MASSPGradient */ T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg *Data_From_Track_MASSPGradient,
  /* Input::MemorizedLevelIn */ M_LEVEL MemorizedLevelIn,
  /* Input::train_standstill */ kcg_bool *train_standstill,
  /* Input::driver_level_transition */ T_LevelTransition_Level_And_Mode_Types_Pkg *driver_level_transition,
  /* Input::levelAck */ kcg_bool *levelAck,
  /* Input::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* Input::ERTMS_capabilities */ T_ERTMS_capabilities_Level_And_Mode_Types_Pkg *ERTMS_capabilities,
  /* Input::Data_From_Track_to_Level */ T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg *Data_From_Track_to_Level,
  /* Input::MemorizedLevel */ M_LEVEL *MemorizedLevel,
  /* Input::Cab */ cab_ID_T_TIU_Types_Pkg *Cab,
  /* Input::Data_From_DMI_To_Mode */ T_Data_From_DMI_Level_And_Mode_Types_Pkg *Data_From_DMI_To_Mode,
  /* Input::Data_From_F2_Functions_to_Mode */ T_Data_From_F2_functions_Level_And_Mode_Types_Pkg *Data_From_F2_Functions_to_Mode,
  /* Input::Data_From_Localisation_To_Mode */ T_Data_From_Localisation_Level_And_Mode_Types_Pkg *Data_From_Localisation_To_Mode,
  /* Input::Data_From_Speed_and_Supervision_To_Mode */ T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg *Data_From_Speed_and_Supervision_To_Mode,
  /* Input::Data_From_STM_to_Mode */ T_Data_From_STM_Level_And_Mode_Types_Pkg *Data_From_STM_to_Mode,
  /* Input::Data_From_TIU_To_Mode */ Message_Train_Interface_to_EVC_T_TIU_Types_Pkg *Data_From_TIU_To_Mode,
  /* Input::Data_From_Track_To_Mode */ T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg *Data_From_Track_To_Mode)
{
  /* Input::_L48 */
  static Message_Train_Interface_to_EVC_T_TIU_Types_Pkg _L48;
  /* Input::_L49 */
  static cab_ID_T_TIU_Types_Pkg _L49;
  /* Input::_L57 */
  static T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg _L57;
  /* Input::_L64 */
  static T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg _L64;
  /* Input::_L65 */
  static T_Data_From_Localisation_Level_And_Mode_Types_Pkg _L65;
  /* Input::_L66 */
  static trainPosition_T_TrainPosition_Types_Pck _L66;
  /* Input::_L67 */
  static kcg_bool _L67;
  /* Input::_L68 */
  static T_Data_From_Localisation_Level_And_Mode_Types_Pkg _L68;
  /* Input::_L69 */
  static DMI_To_Modes_T_DMI_Types_Pkg _L69;
  /* Input::_L70 */
  static T_Data_From_DMI_Level_And_Mode_Types_Pkg _L70;
  /* Input::_L71 */
  static kcg_bool _L71;
  /* Input::_L72 */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _L72;
  /* Input::_L74 */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _L74;
  /* Input::_L76 */
  static T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg _L76;
  /* Input::_L84 */
  static T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg _L84;
  /* Input::_L85 */
  static T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg _L85;
  /* Input::_L90 */
  static T_ERTMS_capabilities_Level_And_Mode_Types_Pkg _L90;
  /* Input::_L95 */
  static T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg _L95;
  /* Input::_L96 */
  static T_Data_From_F2_functions_Level_And_Mode_Types_Pkg _L96;
  /* Input::_L97 */
  static T_Data_From_STM_Level_And_Mode_Types_Pkg _L97;
  /* Input::_L100 */
  static T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg _L100;
  /* Input::_L101 */
  static M_LEVEL _L101;
  
  kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(&_L69, Data_From_DMI);
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &_L74,
    driver_level_transition_In);
  /* 1 */ InputDMI_InputManagement(&_L69, &_L74, &_L72, &_L71, &_L70);
  kcg_copy_T_Data_From_Localisation_Level_And_Mode_Types_Pkg(
    &_L68,
    Data_From_Localisation);
  /* 1 */ InputLocalisation_InputManagement(&_L68, &_L67, &_L66, &_L65);
  kcg_copy_T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg(
    &_L64,
    Data_From_Speed_and_Supervision);
  /* 1 */ InputSpeedAndSupervision_InputManagement(&_L64, &_L57);
  kcg_copy_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg(
    &_L85,
    Data_From_Track_Packets);
  kcg_copy_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg(
    &_L84,
    Data_From_Track_Messages);
  kcg_copy_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg(
    &_L95,
    Data_From_Track_MASSPGradient);
  /* 1 */
  InputTrackManagement_InputManagement(&_L85, &_L84, &_L95, &_L76, &_L100);
  *train_standstill = _L67;
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    driver_level_transition,
    &_L72);
  *levelAck = _L71;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(trainPosition, &_L66);
  kcg_copy_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg(
    &_L90,
    ERTMS_capabilities_In);
  kcg_copy_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg(
    ERTMS_capabilities,
    &_L90);
  _L49 = Cab_In;
  *Cab = _L49;
  kcg_copy_T_Data_From_DMI_Level_And_Mode_Types_Pkg(
    Data_From_DMI_To_Mode,
    &_L70);
  kcg_copy_T_Data_From_Localisation_Level_And_Mode_Types_Pkg(
    Data_From_Localisation_To_Mode,
    &_L65);
  kcg_copy_T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg(
    Data_From_Speed_and_Supervision_To_Mode,
    &_L57);
  kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(&_L48, Data_From_TIU);
  kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(
    Data_From_TIU_To_Mode,
    &_L48);
  kcg_copy_T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg(
    Data_From_Track_To_Mode,
    &_L76);
  kcg_copy_T_Data_From_F2_functions_Level_And_Mode_Types_Pkg(
    &_L96,
    Data_From_F2_Functions);
  kcg_copy_T_Data_From_STM_Level_And_Mode_Types_Pkg(&_L97, Data_From_STM);
  kcg_copy_T_Data_From_F2_functions_Level_And_Mode_Types_Pkg(
    Data_From_F2_Functions_to_Mode,
    &_L96);
  kcg_copy_T_Data_From_STM_Level_And_Mode_Types_Pkg(
    Data_From_STM_to_Mode,
    &_L97);
  kcg_copy_T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg(
    Data_From_Track_to_Level,
    &_L100);
  _L101 = MemorizedLevelIn;
  *MemorizedLevel = _L101;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Input.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

