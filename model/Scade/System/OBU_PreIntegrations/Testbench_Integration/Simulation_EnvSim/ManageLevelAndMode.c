/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ManageLevelAndMode.h"

void ManageLevelAndMode_reset(outC_ManageLevelAndMode *outC)
{
  /* 1 */ Output_reset(&outC->Context_1);
  /* 1 */ ManageModes_reset(&outC->_1_Context_1);
  /* 1 */ ManageLevels_reset(&outC->_2_Context_1);
}

/* ManageLevelAndMode */
void ManageLevelAndMode(
  /* ManageLevelAndMode::Data_From_DMI */DMI_To_Modes_T_DMI_Types_Pkg *Data_From_DMI,
  /* ManageLevelAndMode::Data_From_Localisation */T_Data_From_Localisation_Level_And_Mode_Types_Pkg *Data_From_Localisation,
  /* ManageLevelAndMode::Data_From_TIU */Message_Train_Interface_to_EVC_T_TIU_Types_Pkg *Data_From_TIU,
  /* ManageLevelAndMode::Data_From_Track_Messages */T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg *Data_From_Track_Messages,
  /* ManageLevelAndMode::Data_From_Track_Packets */T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg *Data_From_Track_Packets,
  /* ManageLevelAndMode::Data_From_Speed_and_Supervision */T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg *Data_From_Speed_and_Supervision,
  /* ManageLevelAndMode::Cab_In */cab_ID_T_TIU_Types_Pkg Cab_In,
  /* ManageLevelAndMode::driver_level_transition_In */T_LevelTransition_Level_And_Mode_Types_Pkg *driver_level_transition_In,
  /* ManageLevelAndMode::ERTMS_capabilities_In */T_ERTMS_capabilities_Level_And_Mode_Types_Pkg *ERTMS_capabilities_In,
  /* ManageLevelAndMode::Data_from_Track_MASSPGradient */T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg *Data_from_Track_MASSPGradient,
  /* ManageLevelAndMode::Data_From_F2_Functions */T_Data_From_F2_functions_Level_And_Mode_Types_Pkg *Data_From_F2_Functions,
  /* ManageLevelAndMode::Data_From_STM */T_Data_From_STM_Level_And_Mode_Types_Pkg *Data_From_STM,
  /* ManageLevelAndMode::MemorizedLevelIn */M_LEVEL MemorizedLevelIn,
  outC_ManageLevelAndMode *outC)
{
  static kcg_bool tmp;
  /* ManageLevelAndMode::_L25 */
  static kcg_bool _L25;
  /* ManageLevelAndMode::_L28 */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _L28;
  /* ManageLevelAndMode::_L30 */
  static trainPosition_T_TrainPosition_Types_Pck _L30;
  /* ManageLevelAndMode::_L33 */
  static T_ERTMS_capabilities_Level_And_Mode_Types_Pkg _L33;
  /* ManageLevelAndMode::_L37 */
  static cab_ID_T_TIU_Types_Pkg _L37;
  /* ManageLevelAndMode::_L40 */
  static T_Data_From_DMI_Level_And_Mode_Types_Pkg _L40;
  /* ManageLevelAndMode::_L41 */
  static T_Data_From_Localisation_Level_And_Mode_Types_Pkg _L41;
  /* ManageLevelAndMode::_L42 */
  static T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg _L42;
  /* ManageLevelAndMode::_L43 */
  static Message_Train_Interface_to_EVC_T_TIU_Types_Pkg _L43;
  /* ManageLevelAndMode::_L44 */
  static T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg _L44;
  /* ManageLevelAndMode::_L94 */
  static T_Data_From_STM_Level_And_Mode_Types_Pkg _L94;
  /* ManageLevelAndMode::_L95 */
  static T_Data_From_F2_functions_Level_And_Mode_Types_Pkg _L95;
  /* ManageLevelAndMode::_L96 */
  static T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg _L96;
  /* ManageLevelAndMode::_L108 */
  static M_LEVEL _L108;
  
  /* 1 */
  Input(
    Data_From_DMI,
    Data_From_TIU,
    Data_From_Track_Messages,
    Data_From_Track_Packets,
    Data_From_STM,
    Data_From_Localisation,
    Data_From_Speed_and_Supervision,
    Data_From_F2_Functions,
    Cab_In,
    driver_level_transition_In,
    ERTMS_capabilities_In,
    Data_from_Track_MASSPGradient,
    MemorizedLevelIn,
    &_L25,
    &_L28,
    &tmp,
    &_L30,
    &_L33,
    &_L96,
    &_L108,
    &_L37,
    &_L40,
    &_L95,
    &_L41,
    &_L42,
    &_L94,
    &_L43,
    &_L44);
  /* 1 */
  ManageLevels(
    _L25,
    &_L28,
    tmp,
    &_L30,
    &_L33,
    &_L96,
    _L108,
    &outC->_2_Context_1);
  /* 1 */
  ManageModes(
    outC->_2_Context_1.nextLevel,
    _L37,
    &_L40,
    &_L95,
    &_L41,
    &_L42,
    &_L94,
    &_L43,
    &_L44,
    outC->_2_Context_1.TripTrainRequested,
    &outC->_1_Context_1);
  /* 1 */
  Output(
    outC->_2_Context_1.nextLevel,
    outC->_2_Context_1.needsAckFromDriver,
    &outC->_2_Context_1.announcedLevelTransition,
    outC->_2_Context_1.serviceBrakeRequested,
    outC->_2_Context_1.connectionToRBCRequested,
    outC->_2_Context_1.positionReportNeeded,
    outC->_2_Context_1.levelIsNew,
    outC->_2_Context_1.isAvailableForUse,
    outC->_1_Context_1.currentMode,
    outC->_1_Context_1.EB_Requested,
    outC->_1_Context_1.Service_Brake_Command,
    &outC->_1_Context_1.Data_To_DMI,
    &outC->_1_Context_1.Data_To_BG_Management,
    /* 1 */
    CheckLevelAndMode(
      outC->_2_Context_1.nextLevel,
      outC->_1_Context_1.currentMode),
    &outC->Context_1);
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &outC->Compatible_Mode_And_Level,
    &outC->Context_1.Compatible_Mode_And_Level);
  kcg_copy_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg(
    &outC->Data_To_BG_Management,
    &outC->Context_1.Data_To_BG_Management);
  outC->Service_Brake_Command = outC->Context_1.Service_Brake_Command;
  outC->EB_Requested = outC->Context_1.EB_Requested;
  kcg_copy_T_AnnouncedLevel_Level_And_Mode_Types_Pkg(
    &outC->announcedLevel,
    &outC->Context_1.announcedLevel);
  kcg_copy_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg(
    &outC->Data_To_DMI_Ack,
    &outC->Context_1.Data_To_DMI_Ack);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ManageLevelAndMode.c
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

