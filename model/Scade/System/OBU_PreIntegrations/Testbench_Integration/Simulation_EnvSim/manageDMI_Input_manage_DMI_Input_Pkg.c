/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "manageDMI_Input_manage_DMI_Input_Pkg.h"

void manageDMI_Input_reset_manage_DMI_Input_Pkg(
  outC_manageDMI_Input_manage_DMI_Input_Pkg *outC)
{
  outC->init = kcg_true;
}

/* manage_DMI_Input_Pkg::manageDMI_Input */
void manageDMI_Input_manage_DMI_Input_Pkg(
  /* manage_DMI_Input_Pkg::manageDMI_Input::fromDMI */DMI_to_EVC_Message_int_T_API_DMI_Pkg *fromDMI,
  /* manage_DMI_Input_Pkg::manageDMI_Input::dmiStatusReset */kcg_bool dmiStatusReset,
  /* manage_DMI_Input_Pkg::manageDMI_Input::inStatusList */DMI_TXT_MSGList_status_T_DMI_Types_Pkg *inStatusList,
  /* manage_DMI_Input_Pkg::manageDMI_Input::inSystemTime */T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* manage_DMI_Input_Pkg::manageDMI_Input::lasttNTC */NID_STM_DMI_Types_Pkg lasttNTC,
  outC_manageDMI_Input_manage_DMI_Input_Pkg *outC)
{
  /* manage_DMI_Input_Pkg::manageDMI_Input::IfBlock1::then::_L54 */
  static DMI_to_EVC_Message_T_API_DMI_Pkg _L54_IfBlock1;
  /* manage_DMI_Input_Pkg::manageDMI_Input::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* manage_DMI_Input_Pkg::manageDMI_Input::_L14 */
  static DMI_EVC_status_T_DMI_Types_Pkg _L14;
  
  if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
      &_L14,
      (DMI_EVC_status_T_DMI_Types_Pkg *)
        &cDMI_EVC_Status_Default_DMI_Types_Pkg);
  }
  else {
    kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(&_L14, &outC->currentDMIStatus);
  }
  IfBlock1_clock = (1 == (*fromDMI)[0]) & !dmiStatusReset;
  if (IfBlock1_clock) {
    /* 2 */ Write_int_to_DMI_to_EVC_Messages(fromDMI, &_L54_IfBlock1);
    /* 1 */
    changeLevelByDiver_manage_DMI_Input_Pkg(
      &_L54_IfBlock1.selectedLevel,
      lasttNTC,
      &outC->ML_levelTransition,
      &outC->updatedNTC);
    /* 1 */
    receiveRequestsModesAndLevel_manage_DMI_Input_Pkg(
      &_L54_IfBlock1.driverRequest,
      &_L54_IfBlock1.iconAck,
      &_L54_IfBlock1.textMessageAck,
      inSystemTime,
      inStatusList,
      &outC->forModesAndLevel,
      &outC->outStatusList,
      &outC->outUpdateLevelsDMI);
    kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->fromDMI_Identifier,
      &_L54_IfBlock1.identifier);
    kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
      &outC->fromDMI_DriverIdentifier,
      &_L54_IfBlock1.driverIdentifier);
    kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
      &outC->fromDMI_TrainRunningNumber,
      &_L54_IfBlock1.trainRunningNumber);
    kcg_copy_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->fromDMI_RadioNetData,
      &_L54_IfBlock1.radioNetData);
    kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->fromDMI_Icon_Ack,
      &_L54_IfBlock1.iconAck);
    kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
      &outC->fromDMI_TrainData,
      &_L54_IfBlock1.trainData);
    kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->fromDMI_TrainDataAck,
      &_L54_IfBlock1.trainDataAck);
    kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(
      &outC->fromDMI_AdhesionFactor,
      &_L54_IfBlock1.adhesionFactor);
    /* 1 */
    triggerForMA_manage_DMI_Input_Pkg(
      &_L54_IfBlock1.driverRequest,
      &outC->outForMA);
    /* 2 */
    updateDMIStatus_manage_DMI_Input_Pkg(
      &_L14,
      &_L54_IfBlock1,
      _L14.DMI_TrainRunningNumberFirstValidation,
      &outC->currentDMIStatus);
    kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->outDriverRequest,
      &_L54_IfBlock1.driverRequest);
  }
  else {
    outC->outUpdateLevelsDMI = kcg_false;
    kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->fromDMI_Identifier,
      (DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg *)
        &cDMIIdentifierDefault_manage_DMI_Input_Pkg);
    kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
      &outC->fromDMI_DriverIdentifier,
      (DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg *)
        &cDMIDriverIdentifierDefault_manage_DMI_Input_Pkg);
    kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
      &outC->fromDMI_TrainRunningNumber,
      (DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg *)
        &cDMITrainRunningNumberDefault_manage_DMI_Input_Pkg);
    kcg_copy_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->fromDMI_RadioNetData,
      (DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg *)
        &cDMIRadioNetDataDefault_manage_DMI_Input_Pkg);
    kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->fromDMI_Icon_Ack,
      (DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *)
        &cDMIIconAckDefault_manage_DMI_Input_Pkg);
    kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
      &outC->fromDMI_TrainData,
      (DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *)
        &cDMITrainDataDefault_manage_DMI_Input_Pkg);
    kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->fromDMI_TrainDataAck,
      (DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *)
        &cDMITrainDataAckDefault_manage_DMI_Input_Pkg);
    kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(
      &outC->fromDMI_AdhesionFactor,
      (DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg *)
        &cDMIAdhesionFactorDefault_manage_DMI_Input_Pkg);
    kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(
      &outC->forModesAndLevel,
      (DMI_To_Modes_T_DMI_Types_Pkg *)
        &cAckModesAndLevels_manage_DMI_Input_Pkg);
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &outC->ML_levelTransition,
      (T_LevelTransition_Level_And_Mode_Types_Pkg *)
        &M_Default_Transition_Level_And_Mode_Types_Pkg);
    if (dmiStatusReset) {
      kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
        &outC->outStatusList,
        (DMI_TXT_MSGList_status_T_DMI_Types_Pkg *)
          &cEmptyTestStatusList_DMI_Types_Pkg);
      outC->updatedNTC = lasttNTC;
      kcg_copy_Driver2MAR_T_MA_Request(
        &outC->outForMA,
        (Driver2MAR_T_MA_Request *) &cNoMATrigger_manage_DMI_Input_Pkg);
      kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
        &outC->currentDMIStatus,
        (DMI_EVC_status_T_DMI_Types_Pkg *)
          &cDMI_EVC_Status_Default_DMI_Types_Pkg);
      kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
        &outC->outDriverRequest,
        (DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg *)
          &cDMIDriverRequestDefault_manage_DMI_Input_Pkg);
    }
    else {
      kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
        &outC->outStatusList,
        inStatusList);
      outC->updatedNTC = lasttNTC;
      kcg_copy_Driver2MAR_T_MA_Request(
        &outC->outForMA,
        (Driver2MAR_T_MA_Request *) &cNoMATrigger_manage_DMI_Input_Pkg);
      kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(&outC->currentDMIStatus, &_L14);
      kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
        &outC->outDriverRequest,
        (DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg *)
          &cDMIDriverRequestDefault_manage_DMI_Input_Pkg);
    }
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** manageDMI_Input_manage_DMI_Input_Pkg.c
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

