/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "manageDMI_Input_manage_DMI_Input_Pkg.h"

void manageDMI_Input_init_manage_DMI_Input_Pkg(
  outC_manageDMI_Input_manage_DMI_Input_Pkg *outC)
{
  int i;
  
  outC->init = kcg_true;
  outC->forModesAndLevel.LevelAck = kcg_true;
  outC->forModesAndLevel.DriverRequest.ETCS_Isolated = kcg_true;
  outC->forModesAndLevel.DriverRequest.Req_Start = kcg_true;
  outC->forModesAndLevel.DriverRequest.Req_SH = kcg_true;
  outC->forModesAndLevel.DriverRequest.Req_Override = kcg_true;
  outC->forModesAndLevel.DriverRequest.Req_NL = kcg_true;
  outC->forModesAndLevel.DriverRequest.Req_Exit_SH = kcg_true;
  outC->forModesAndLevel.DriverRequest.valid = kcg_true;
  outC->forModesAndLevel.DriverAck.acknowledgement = kcg_true;
  outC->forModesAndLevel.DriverAck.whichMode = M_MODE_Full_Supervision;
  outC->forModesAndLevel.DriverAck.valid = kcg_true;
  outC->forModesAndLevel.valid = kcg_true;
  outC->fromDMI_AdhesionFactor.adhesionFactor = M_ADHESION_Slippery_rail;
  outC->fromDMI_AdhesionFactor.systemTime = 0;
  outC->fromDMI_AdhesionFactor.valid = kcg_true;
  outC->updatedTrainData.axleNumber = 0;
  outC->updatedTrainData.airtightSystem = M_AIRTIGHT_Not_fitted;
  outC->updatedTrainData.axleLoadCategory = M_AXLELOADCAT_A;
  outC->updatedTrainData.loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->updatedTrainData.maxTrainSpeed = 0;
  outC->updatedTrainData.brakePerctage = 0;
  outC->updatedTrainData.trainLength = 0;
  outC->updatedTrainData.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->updatedTrainData.acknowledgedByDriver = kcg_true;
  outC->updatedTrainData.valid = kcg_true;
  outC->fromDMI_Icon_Ack.DMI_nid_icon_identifier = 0;
  outC->fromDMI_Icon_Ack.systemTime = 0;
  outC->fromDMI_Icon_Ack.valid = kcg_true;
  outC->fromDMI_TextMessage_Ack.acknowledged = kcg_true;
  outC->fromDMI_TextMessage_Ack.messageIdentifier = 0;
  outC->fromDMI_TextMessage_Ack.systemTime = 0;
  outC->fromDMI_TextMessage_Ack.valid = kcg_true;
  outC->fromDMI_RadioNetData.systemTime = 0;
  outC->fromDMI_RadioNetData.valid = kcg_true;
  outC->fromDMI_TrainRunningNumber.trainRunningNumber = 0;
  outC->fromDMI_TrainRunningNumber.systemTime = 0;
  outC->fromDMI_TrainRunningNumber.valid = kcg_true;
  for (i = 0; i < 9; i++) {
    outC->fromDMI_DriverIdentifier.driverIdentifier[i] = ' ';
  }
  outC->fromDMI_DriverIdentifier.systemTime = 0;
  outC->fromDMI_DriverIdentifier.valid = kcg_true;
  outC->fromDMI_DriverRequest.m_request = Start_of_mission_DMI_Types_Pkg;
  outC->fromDMI_DriverRequest.systemTime = 0;
  outC->fromDMI_DriverRequest.valid = kcg_true;
  outC->fromDMI_Identifier.M_VERSION =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i = 0; i < 255; i++) {
    outC->fromDMI_Identifier.DMI_name[i] = ' ';
  }
  outC->fromDMI_Identifier.l_name = 0;
  outC->fromDMI_Identifier.Cabin_Identifier = cabin_A_DMI_Types_Pkg;
  outC->fromDMI_Identifier.DMI_Identifier = DMI_1_DMI_Types_Pkg;
  outC->fromDMI_Identifier.systemTime = 0;
  outC->fromDMI_Identifier.valid = kcg_true;
  outC->fromDMI_Status.nAlive = 0;
  outC->fromDMI_Status.statusSet = Running_state_DMI_Types_Pkg;
  outC->fromDMI_Status.systemTime = 0;
  outC->fromDMI_Status.valid = kcg_true;
  outC->fromDMI_MessageReceived = kcg_true;
  outC->currentDMIStatus.DMI_Identifier.M_VERSION =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i = 0; i < 255; i++) {
    outC->currentDMIStatus.DMI_Identifier.DMI_name[i] = ' ';
  }
  outC->currentDMIStatus.DMI_Identifier.l_name = 0;
  outC->currentDMIStatus.DMI_Identifier.Cabin_Identifier =
    cabin_A_DMI_Types_Pkg;
  outC->currentDMIStatus.DMI_Identifier.DMI_Identifier = DMI_1_DMI_Types_Pkg;
  outC->currentDMIStatus.DMI_Identifier.systemTime = 0;
  outC->currentDMIStatus.DMI_Identifier.valid = kcg_true;
  outC->currentDMIStatus.DMI_StartReceived = kcg_true;
  outC->currentDMIStatus.DMI_TrainDataValidated = kcg_true;
  outC->currentDMIStatus.DMI_TrainRunningNumberValidated = kcg_true;
  outC->currentDMIStatus.DMI_TrainRunningNumberFirstValidation = kcg_true;
  outC->currentDMIStatus.DMI_DriverIdValidated = kcg_true;
  outC->currentDMIStatus.DMI_Error = kcg_true;
  outC->currentDMIStatus.DMI_Active = kcg_true;
}


void manageDMI_Input_reset_manage_DMI_Input_Pkg(
  outC_manageDMI_Input_manage_DMI_Input_Pkg *outC)
{
  outC->init = kcg_true;
}

/* manage_DMI_Input_Pkg::manageDMI_Input */
void manageDMI_Input_manage_DMI_Input_Pkg(
  /* manage_DMI_Input_Pkg::manageDMI_Input::fromDMI */ DMI_to_EVC_Message_T_API_DMI_Pkg *fromDMI,
  /* manage_DMI_Input_Pkg::manageDMI_Input::dmiStatusReset */ kcg_bool dmiStatusReset,
  outC_manageDMI_Input_manage_DMI_Input_Pkg *outC)
{
  /* manage_DMI_Input_Pkg::manageDMI_Input::IfBlock1 */ kcg_bool IfBlock1_clock;
  /* manage_DMI_Input_Pkg::manageDMI_Input::_L14 */ DMI_EVC_status_T_DMI_Types_Pkg _L14;
  
  if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
      &_L14,
      (DMI_EVC_status_T_DMI_Types_Pkg *)
        &cDMI_EVC_Status_Default_manage_DMI_Input_Pkg);
  }
  else {
    kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(&_L14, &outC->currentDMIStatus);
  }
  IfBlock1_clock = (*fromDMI).present & !dmiStatusReset;
  if (IfBlock1_clock) {
    /* 2 */
    updateDMIStatus_manage_DMI_Input_Pkg(
      &_L14,
      fromDMI,
      _L14.DMI_TrainRunningNumberFirstValidation,
      &outC->currentDMIStatus);
    outC->fromDMI_MessageReceived = (*fromDMI).present;
    kcg_copy_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->fromDMI_Status,
      &(*fromDMI).status);
    kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->fromDMI_Identifier,
      &(*fromDMI).identifier);
    kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->fromDMI_DriverRequest,
      &(*fromDMI).driverRequest);
    kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
      &outC->fromDMI_DriverIdentifier,
      &(*fromDMI).driverIdentifier);
    kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
      &outC->fromDMI_TrainRunningNumber,
      &(*fromDMI).trainRunningNumber);
    kcg_copy_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->fromDMI_RadioNetData,
      &(*fromDMI).radioNetData);
    kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->fromDMI_TextMessage_Ack,
      &(*fromDMI).textMessageAck);
    kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->fromDMI_Icon_Ack,
      &(*fromDMI).iconAck);
    /* 1 */
    receiveTrainData_manage_DMI_Input_Pkg(
      &(*fromDMI).trainData,
      &outC->currentDMIStatus,
      &outC->updatedTrainData);
    kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(
      &outC->fromDMI_AdhesionFactor,
      &(*fromDMI).adhesionFactor);
    /* 1 */
    setOutputToModesAndLevel_manage_DMI_Input_Pkg(
      &(*fromDMI).iconAck,
      &outC->forModesAndLevel);
  }
  else {
    kcg_copy_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->fromDMI_Status,
      (DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg *)
        &cDMIStatusDefault_manage_DMI_Input_Pkg);
    kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->fromDMI_Identifier,
      (DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg *)
        &cDMIIdentifierDefault_manage_DMI_Input_Pkg);
    kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->fromDMI_DriverRequest,
      (DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg *)
        &cDMIDriverRequestDefault_manage_DMI_Input_Pkg);
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
    kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->fromDMI_TextMessage_Ack,
      (DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *)
        &cDMITextMessageAckDefault_manage_DMI_Input_Pkg);
    kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->fromDMI_Icon_Ack,
      (DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *)
        &cDMIIconAckDefault_manage_DMI_Input_Pkg);
    kcg_copy_trainData_T_TIU_Types_Pkg(
      &outC->updatedTrainData,
      (trainData_T_TIU_Types_Pkg *) &cEVCTrainData_manage_DMI_Input_Pkg);
    kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(
      &outC->fromDMI_AdhesionFactor,
      (DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg *)
        &cDMIAdhesionFactorDefault_manage_DMI_Input_Pkg);
    kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(
      &outC->forModesAndLevel,
      (DMI_To_Modes_T_DMI_Types_Pkg *)
        &cAckModesAndLevels_manage_DMI_Input_Pkg);
    if (dmiStatusReset) {
      outC->fromDMI_MessageReceived = kcg_false;
      kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
        &outC->currentDMIStatus,
        (DMI_EVC_status_T_DMI_Types_Pkg *)
          &cDMI_EVC_Status_Default_manage_DMI_Input_Pkg);
    }
    else {
      outC->fromDMI_MessageReceived = kcg_false;
      kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(&outC->currentDMIStatus, &_L14);
    }
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** manageDMI_Input_manage_DMI_Input_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

