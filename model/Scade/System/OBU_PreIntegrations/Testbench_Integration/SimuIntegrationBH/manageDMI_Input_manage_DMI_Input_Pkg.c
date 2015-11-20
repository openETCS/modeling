/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "manageDMI_Input_manage_DMI_Input_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void manageDMI_Input_init_manage_DMI_Input_Pkg(
  outC_manageDMI_Input_manage_DMI_Input_Pkg *outC)
{
  static kcg_int i4;
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->init = kcg_true;
  outC->DMI_Status_inEVC.DMI_Active = kcg_true;
  outC->DMI_Status_inEVC.DMI_Error = kcg_true;
  outC->DMI_Status_inEVC.DMI_DriverIdValidated = kcg_true;
  outC->DMI_Status_inEVC.DMI_LevelSelectedByDirver = kcg_true;
  outC->DMI_Status_inEVC.DMI_TrainRunningNumberFirstValidation = kcg_true;
  outC->DMI_Status_inEVC.DMI_TrainRunningNumberValidated = kcg_true;
  outC->DMI_Status_inEVC.DMI_TrainDataValidated = kcg_true;
  outC->DMI_Status_inEVC.DMI_StartReceived = kcg_true;
  outC->DMI_Status_inEVC.DMI_Identifier.valid = kcg_true;
  outC->DMI_Status_inEVC.DMI_Identifier.systemTime = 0;
  outC->DMI_Status_inEVC.DMI_Identifier.DMI_Identifier = DMI_1_DMI_Types_Pkg;
  outC->DMI_Status_inEVC.DMI_Identifier.Cabin_Identifier =
    cabin_A_DMI_Types_Pkg;
  outC->DMI_Status_inEVC.DMI_Identifier.l_name = 0;
  for (i = 0; i < 255; i++) {
    outC->DMI_Status_inEVC.DMI_Identifier.DMI_name[i] = ' ';
  }
  outC->DMI_Status_inEVC.DMI_Identifier.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->outForMA.trackAheadFree = kcg_true;
  outC->outForMA.driverSelectsStart = kcg_true;
  outC->updatedNTC = 0;
  outC->outDriverRequest.valid = kcg_true;
  outC->outDriverRequest.systemTime = 0;
  outC->outDriverRequest.m_request = Start_of_mission_DMI_Types_Pkg;
  for (i1 = 0; i1 < 31; i1++) {
    outC->outStatusList[i1].valid = kcg_true;
    outC->outStatusList[i1].dmi_textMessageID = 0;
    outC->outStatusList[i1].timeStamp = 0;
    outC->outStatusList[i1].textReport =
      Q_TEXTREPORT_No_driver_acknowledgement_report_required;
    outC->outStatusList[i1].context = con_undefined_DMI_Types_Pkg;
    outC->outStatusList[i1].nid_textmessage = 0;
    outC->outStatusList[i1].whichLevel = M_LEVEL_Level_0;
    outC->outStatusList[i1].whichMode = M_MODE_Full_Supervision;
  }
  outC->ML_levelTransition.is_set = kcg_true;
  outC->ML_levelTransition.transition.level = M_LEVEL_Level_0;
  outC->ML_levelTransition.transition.position = 0;
  outC->ML_levelTransition.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->ML_levelTransition.transition.immediateAck = kcg_true;
  outC->ML_levelTransition.transition.AckLength = 0;
  outC->ML_levelTransition.LRBG = 0;
  outC->ML_levelTransition.referenceLocation = 0;
  outC->forModesAndLevel.valid = kcg_true;
  outC->forModesAndLevel.DriverAck.valid = kcg_true;
  outC->forModesAndLevel.DriverAck.whichMode = M_MODE_Full_Supervision;
  outC->forModesAndLevel.DriverAck.acknowledgement = kcg_true;
  outC->forModesAndLevel.DriverRequest.valid = kcg_true;
  outC->forModesAndLevel.DriverRequest.Req_Exit_SH = kcg_true;
  outC->forModesAndLevel.DriverRequest.Req_NL = kcg_true;
  outC->forModesAndLevel.DriverRequest.Req_Override = kcg_true;
  outC->forModesAndLevel.DriverRequest.Req_SH = kcg_true;
  outC->forModesAndLevel.DriverRequest.Req_Start = kcg_true;
  outC->forModesAndLevel.DriverRequest.ETCS_Isolated = kcg_true;
  outC->forModesAndLevel.LevelAck = kcg_true;
  outC->fromDMI_AdhesionFactor.valid = kcg_true;
  outC->fromDMI_AdhesionFactor.systemTime = 0;
  outC->fromDMI_AdhesionFactor.adhesionFactor = M_ADHESION_Slippery_rail;
  outC->fromDMI_TrainDataAck.valid = kcg_true;
  outC->fromDMI_TrainDataAck.systemTime = 0;
  outC->fromDMI_TrainDataAck.acknowledged = kcg_true;
  outC->fromDMI_TrainData.valid = kcg_true;
  outC->fromDMI_TrainData.systemTime = 0;
  outC->fromDMI_TrainData.trainCategory =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->fromDMI_TrainData.l_train = 0;
  outC->fromDMI_TrainData.m_brakeperct = 0;
  outC->fromDMI_TrainData.v_maxTrain = 0;
  outC->fromDMI_TrainData.m_axleLoad = M_AXLELOADCAT_A;
  outC->fromDMI_TrainData.m_airTight = M_AIRTIGHT_Not_fitted;
  outC->fromDMI_TrainData.m_loadingGauge =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->fromDMI_Icon_Ack.valid = kcg_true;
  outC->fromDMI_Icon_Ack.systemTime = 0;
  outC->fromDMI_Icon_Ack.DMI_nid_icon_identifier = 0;
  outC->fromDMI_RadioNetData.valid = kcg_true;
  outC->fromDMI_RadioNetData.systemTime = 0;
  outC->fromDMI_TrainRunningNumber.valid = kcg_true;
  outC->fromDMI_TrainRunningNumber.systemTime = 0;
  outC->fromDMI_TrainRunningNumber.trainRunningNumber = 0;
  outC->fromDMI_DriverIdentifier.valid = kcg_true;
  outC->fromDMI_DriverIdentifier.systemTime = 0;
  for (i2 = 0; i2 < 9; i2++) {
    outC->fromDMI_DriverIdentifier.driverIdentifier[i2] = ' ';
  }
  outC->outUpdateLevelsDMI = kcg_true;
  outC->fromDMI_Identifier.valid = kcg_true;
  outC->fromDMI_Identifier.systemTime = 0;
  outC->fromDMI_Identifier.DMI_Identifier = DMI_1_DMI_Types_Pkg;
  outC->fromDMI_Identifier.Cabin_Identifier = cabin_A_DMI_Types_Pkg;
  outC->fromDMI_Identifier.l_name = 0;
  for (i3 = 0; i3 < 255; i3++) {
    outC->fromDMI_Identifier.DMI_name[i3] = ' ';
  }
  outC->fromDMI_Identifier.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->currentDMIStatus.DMI_Active = kcg_true;
  outC->currentDMIStatus.DMI_Error = kcg_true;
  outC->currentDMIStatus.DMI_DriverIdValidated = kcg_true;
  outC->currentDMIStatus.DMI_LevelSelectedByDirver = kcg_true;
  outC->currentDMIStatus.DMI_TrainRunningNumberFirstValidation = kcg_true;
  outC->currentDMIStatus.DMI_TrainRunningNumberValidated = kcg_true;
  outC->currentDMIStatus.DMI_TrainDataValidated = kcg_true;
  outC->currentDMIStatus.DMI_StartReceived = kcg_true;
  outC->currentDMIStatus.DMI_Identifier.valid = kcg_true;
  outC->currentDMIStatus.DMI_Identifier.systemTime = 0;
  outC->currentDMIStatus.DMI_Identifier.DMI_Identifier = DMI_1_DMI_Types_Pkg;
  outC->currentDMIStatus.DMI_Identifier.Cabin_Identifier =
    cabin_A_DMI_Types_Pkg;
  outC->currentDMIStatus.DMI_Identifier.l_name = 0;
  for (i4 = 0; i4 < 255; i4++) {
    outC->currentDMIStatus.DMI_Identifier.DMI_name[i4] = ' ';
  }
  outC->currentDMIStatus.DMI_Identifier.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void manageDMI_Input_reset_manage_DMI_Input_Pkg(
  outC_manageDMI_Input_manage_DMI_Input_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* manage_DMI_Input_Pkg::manageDMI_Input */
void manageDMI_Input_manage_DMI_Input_Pkg(
  /* manage_DMI_Input_Pkg::manageDMI_Input::fromDMI */ DMI_to_EVC_Message_int_T_API_DMI_Pkg *fromDMI,
  /* manage_DMI_Input_Pkg::manageDMI_Input::dmiStatusReset */ kcg_bool dmiStatusReset,
  /* manage_DMI_Input_Pkg::manageDMI_Input::inStatusList */ DMI_TXT_MSGList_status_T_DMI_Types_Pkg *inStatusList,
  /* manage_DMI_Input_Pkg::manageDMI_Input::inSystemTime */ T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* manage_DMI_Input_Pkg::manageDMI_Input::lasttNTC */ NID_STM_DMI_Types_Pkg lasttNTC,
  outC_manageDMI_Input_manage_DMI_Input_Pkg *outC)
{
  /* manage_DMI_Input_Pkg::manageDMI_Input::driverRequest */
  static DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg _19_driverRequest;
  /* manage_DMI_Input_Pkg::manageDMI_Input::icon_Ack */
  static DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg _18_icon_Ack;
  /* manage_DMI_Input_Pkg::manageDMI_Input::textMessage_Ack */
  static DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg _17_textMessage_Ack;
  /* manage_DMI_Input_Pkg::manageDMI_Input::DMI_Status_inEVC */
  static DMI_EVC_status_T_DMI_Types_Pkg _16_DMI_Status_inEVC;
  /* manage_DMI_Input_Pkg::manageDMI_Input::outForMA */
  static Driver2MAR_T_MA_Request _15_outForMA;
  /* manage_DMI_Input_Pkg::manageDMI_Input::updatedNTC */
  static NID_STM_DMI_Types_Pkg _14_updatedNTC;
  /* manage_DMI_Input_Pkg::manageDMI_Input::outStatusList */
  static DMI_TXT_MSGList_status_T_DMI_Types_Pkg _13_outStatusList;
  /* manage_DMI_Input_Pkg::manageDMI_Input::ML_levelTransition */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _12_ML_levelTransition;
  /* manage_DMI_Input_Pkg::manageDMI_Input::forModesAndLevel */
  static DMI_To_Modes_T_DMI_Types_Pkg _11_forModesAndLevel;
  /* manage_DMI_Input_Pkg::manageDMI_Input::fromDMI_AdhesionFactor */
  static DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg _10_fromDMI_AdhesionFactor;
  /* manage_DMI_Input_Pkg::manageDMI_Input::fromDMI_TrainDataAck */
  static DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg _9_fromDMI_TrainDataAck;
  /* manage_DMI_Input_Pkg::manageDMI_Input::fromDMI_TrainData */
  static DMI_Train_Data_T_DMI_Messages_Bothways_Pkg _8_fromDMI_TrainData;
  /* manage_DMI_Input_Pkg::manageDMI_Input::fromDMI_Icon_Ack */
  static DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg _7_fromDMI_Icon_Ack;
  /* manage_DMI_Input_Pkg::manageDMI_Input::fromDMI_RadioNetData */
  static DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg _6_fromDMI_RadioNetData;
  /* manage_DMI_Input_Pkg::manageDMI_Input::fromDMI_TrainRunningNumber */
  static DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg _5_fromDMI_TrainRunningNumber;
  /* manage_DMI_Input_Pkg::manageDMI_Input::fromDMI_DriverIdentifier */
  static DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg _4_fromDMI_DriverIdentifier;
  /* manage_DMI_Input_Pkg::manageDMI_Input::outUpdateLevelsDMI */
  static kcg_bool _3_outUpdateLevelsDMI;
  /* manage_DMI_Input_Pkg::manageDMI_Input::fromDMI_Identifier */
  static DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg _2_fromDMI_Identifier;
  /* manage_DMI_Input_Pkg::manageDMI_Input::currentDMIStatus */
  static DMI_EVC_status_T_DMI_Types_Pkg _1_currentDMIStatus;
  /* manage_DMI_Input_Pkg::manageDMI_Input::IfBlock1::then::_L54 */
  static DMI_to_EVC_Message_T_API_DMI_Pkg _L54_IfBlock1;
  /* manage_DMI_Input_Pkg::manageDMI_Input::IfBlock1::then::_L53 */
  static DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg _L53_IfBlock1;
  /* manage_DMI_Input_Pkg::manageDMI_Input::IfBlock1::then::_L52 */
  static Driver2MAR_T_MA_Request _L52_IfBlock1;
  /* manage_DMI_Input_Pkg::manageDMI_Input::IfBlock1::then::_L51 */
  static NID_STM_DMI_Types_Pkg _L51_IfBlock1;
  /* manage_DMI_Input_Pkg::manageDMI_Input::IfBlock1::then::_L50 */
  static NID_STM_DMI_Types_Pkg _L50_IfBlock1;
  /* manage_DMI_Input_Pkg::manageDMI_Input::IfBlock1::then::_L47 */
  static kcg_bool _L47_IfBlock1;
  /* manage_DMI_Input_Pkg::manageDMI_Input::IfBlock1::then::_L45 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L45_IfBlock1;
  /* manage_DMI_Input_Pkg::manageDMI_Input::IfBlock1::then::_L44 */
  static DMI_TXT_MSGList_status_T_DMI_Types_Pkg _L44_IfBlock1;
  /* manage_DMI_Input_Pkg::manageDMI_Input::IfBlock1::then::_L43 */
  static DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg _L43_IfBlock1;
  /* manage_DMI_Input_Pkg::manageDMI_Input::IfBlock1::then::_L42 */
  static DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg _L42_IfBlock1;
  /* manage_DMI_Input_Pkg::manageDMI_Input::IfBlock1::then::_L41 */
  static DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg _L41_IfBlock1;
  /* manage_DMI_Input_Pkg::manageDMI_Input::IfBlock1::then::_L38 */
  static DMI_TXT_MSGList_status_T_DMI_Types_Pkg _L38_IfBlock1;
  /* manage_DMI_Input_Pkg::manageDMI_Input::IfBlock1::then::_L37 */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _L37_IfBlock1;
  /* manage_DMI_Input_Pkg::manageDMI_Input::IfBlock1::then::_L36 */
  static DMI_Level_Data_T_DMI_Messages_Bothways_Pkg _L36_IfBlock1;
  /* manage_DMI_Input_Pkg::manageDMI_Input::IfBlock1::then::_L33 */
  static kcg_bool _L33_IfBlock1;
  /* manage_DMI_Input_Pkg::manageDMI_Input::IfBlock1::then::_L32 */
  static DMI_To_Modes_T_DMI_Types_Pkg _L32_IfBlock1;
  /* manage_DMI_Input_Pkg::manageDMI_Input::IfBlock1::then::_L30 */
  static DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg _L30_IfBlock1;
  /* manage_DMI_Input_Pkg::manageDMI_Input::IfBlock1::then::_L21 */
  static DMI_EVC_status_T_DMI_Types_Pkg _L21_IfBlock1;
  /* manage_DMI_Input_Pkg::manageDMI_Input::IfBlock1::then::_L19 */
  static DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg _L19_IfBlock1;
  /* manage_DMI_Input_Pkg::manageDMI_Input::IfBlock1::then::_L12 */
  static DMI_EVC_status_T_DMI_Types_Pkg _L12_IfBlock1;
  /* manage_DMI_Input_Pkg::manageDMI_Input::IfBlock1::then::_L11 */
  static DMI_to_EVC_Message_int_T_API_DMI_Pkg _L11_IfBlock1;
  /* manage_DMI_Input_Pkg::manageDMI_Input::IfBlock1::then::_L10 */
  static DMI_Train_Data_T_DMI_Messages_Bothways_Pkg _L10_IfBlock1;
  /* manage_DMI_Input_Pkg::manageDMI_Input::IfBlock1::then::_L9 */
  static DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg _L9_IfBlock1;
  /* manage_DMI_Input_Pkg::manageDMI_Input::IfBlock1::then::_L8 */
  static DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg _L8_IfBlock1;
  /* manage_DMI_Input_Pkg::manageDMI_Input::IfBlock1::then::_L7 */
  static DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg _L7_IfBlock1;
  /* manage_DMI_Input_Pkg::manageDMI_Input::IfBlock1::then::_L6 */
  static DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg _L6_IfBlock1;
  /* manage_DMI_Input_Pkg::manageDMI_Input::IfBlock1::then::_L5 */
  static DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg _L5_IfBlock1;
  /* manage_DMI_Input_Pkg::manageDMI_Input::IfBlock1::then::_L4 */
  static DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg _L4_IfBlock1;
  /* manage_DMI_Input_Pkg::manageDMI_Input::IfBlock1::then::_L3 */
  static DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg _L3_IfBlock1;
  /* manage_DMI_Input_Pkg::manageDMI_Input::IfBlock1::then::_L2 */
  static DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg _L2_IfBlock1;
  /* manage_DMI_Input_Pkg::manageDMI_Input::IfBlock1::then::_L1 */
  static kcg_bool _L1_IfBlock1;
  static DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg _34_noname;
  static kcg_bool noname;
  /* manage_DMI_Input_Pkg::manageDMI_Input::driverRequest */
  static DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg driverRequest;
  /* manage_DMI_Input_Pkg::manageDMI_Input::icon_Ack */
  static DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg icon_Ack;
  /* manage_DMI_Input_Pkg::manageDMI_Input::textMessage_Ack */
  static DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg textMessage_Ack;
  /* manage_DMI_Input_Pkg::manageDMI_Input::DMI_Status_inEVC */
  static DMI_EVC_status_T_DMI_Types_Pkg DMI_Status_inEVC;
  /* manage_DMI_Input_Pkg::manageDMI_Input::outForMA */
  static Driver2MAR_T_MA_Request outForMA;
  /* manage_DMI_Input_Pkg::manageDMI_Input::updatedNTC */
  static NID_STM_DMI_Types_Pkg updatedNTC;
  /* manage_DMI_Input_Pkg::manageDMI_Input::outStatusList */
  static DMI_TXT_MSGList_status_T_DMI_Types_Pkg outStatusList;
  /* manage_DMI_Input_Pkg::manageDMI_Input::ML_levelTransition */
  static T_LevelTransition_Level_And_Mode_Types_Pkg ML_levelTransition;
  /* manage_DMI_Input_Pkg::manageDMI_Input::forModesAndLevel */
  static DMI_To_Modes_T_DMI_Types_Pkg forModesAndLevel;
  /* manage_DMI_Input_Pkg::manageDMI_Input::fromDMI_AdhesionFactor */
  static DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg fromDMI_AdhesionFactor;
  /* manage_DMI_Input_Pkg::manageDMI_Input::fromDMI_TrainDataAck */
  static DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg fromDMI_TrainDataAck;
  /* manage_DMI_Input_Pkg::manageDMI_Input::fromDMI_TrainData */
  static DMI_Train_Data_T_DMI_Messages_Bothways_Pkg fromDMI_TrainData;
  /* manage_DMI_Input_Pkg::manageDMI_Input::fromDMI_Icon_Ack */
  static DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg fromDMI_Icon_Ack;
  /* manage_DMI_Input_Pkg::manageDMI_Input::fromDMI_RadioNetData */
  static DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg fromDMI_RadioNetData;
  /* manage_DMI_Input_Pkg::manageDMI_Input::fromDMI_TrainRunningNumber */
  static DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg fromDMI_TrainRunningNumber;
  /* manage_DMI_Input_Pkg::manageDMI_Input::fromDMI_DriverIdentifier */
  static DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg fromDMI_DriverIdentifier;
  /* manage_DMI_Input_Pkg::manageDMI_Input::outUpdateLevelsDMI */
  static kcg_bool outUpdateLevelsDMI;
  /* manage_DMI_Input_Pkg::manageDMI_Input::fromDMI_Identifier */
  static DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg fromDMI_Identifier;
  /* manage_DMI_Input_Pkg::manageDMI_Input::currentDMIStatus */
  static DMI_EVC_status_T_DMI_Types_Pkg currentDMIStatus;
  /* manage_DMI_Input_Pkg::manageDMI_Input::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* manage_DMI_Input_Pkg::manageDMI_Input::IfBlock1::else::else::_L3 */
  static DMI_EVC_status_T_DMI_Types_Pkg _L346_IfBlock1;
  /* manage_DMI_Input_Pkg::manageDMI_Input::IfBlock1::else::else::_L4 */
  static DMI_TXT_MSGList_status_T_DMI_Types_Pkg _L445_IfBlock1;
  /* manage_DMI_Input_Pkg::manageDMI_Input::IfBlock1::else::else::_L6 */
  static DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg _L644_IfBlock1;
  /* manage_DMI_Input_Pkg::manageDMI_Input::IfBlock1::else::else::_L5 */
  static DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg _L543_IfBlock1;
  /* manage_DMI_Input_Pkg::manageDMI_Input::IfBlock1::else::else::_L7 */
  static NID_STM_DMI_Types_Pkg _L742_IfBlock1;
  /* manage_DMI_Input_Pkg::manageDMI_Input::IfBlock1::else::else::_L8 */
  static Driver2MAR_T_MA_Request _L841_IfBlock1;
  /* manage_DMI_Input_Pkg::manageDMI_Input::currentDMIStatus */
  static DMI_EVC_status_T_DMI_Types_Pkg _20_currentDMIStatus;
  /* manage_DMI_Input_Pkg::manageDMI_Input::outStatusList */
  static DMI_TXT_MSGList_status_T_DMI_Types_Pkg _21_outStatusList;
  /* manage_DMI_Input_Pkg::manageDMI_Input::updatedNTC */
  static NID_STM_DMI_Types_Pkg _22_updatedNTC;
  /* manage_DMI_Input_Pkg::manageDMI_Input::outForMA */
  static Driver2MAR_T_MA_Request _23_outForMA;
  /* manage_DMI_Input_Pkg::manageDMI_Input::DMI_Status_inEVC */
  static DMI_EVC_status_T_DMI_Types_Pkg _24_DMI_Status_inEVC;
  /* manage_DMI_Input_Pkg::manageDMI_Input::icon_Ack */
  static DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg _25_icon_Ack;
  /* manage_DMI_Input_Pkg::manageDMI_Input::driverRequest */
  static DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg _26_driverRequest;
  /* manage_DMI_Input_Pkg::manageDMI_Input::IfBlock1::else::then::_L5 */
  static DMI_EVC_status_T_DMI_Types_Pkg _L540_IfBlock1;
  /* manage_DMI_Input_Pkg::manageDMI_Input::IfBlock1::else::then::_L7 */
  static DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg _L739_IfBlock1;
  /* manage_DMI_Input_Pkg::manageDMI_Input::IfBlock1::else::then::_L8 */
  static DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg _L838_IfBlock1;
  /* manage_DMI_Input_Pkg::manageDMI_Input::IfBlock1::else::then::_L9 */
  static DMI_TXT_MSGList_status_T_DMI_Types_Pkg _L937_IfBlock1;
  /* manage_DMI_Input_Pkg::manageDMI_Input::IfBlock1::else::then::_L10 */
  static NID_STM_DMI_Types_Pkg _L1036_IfBlock1;
  /* manage_DMI_Input_Pkg::manageDMI_Input::IfBlock1::else::then::_L11 */
  static Driver2MAR_T_MA_Request _L1135_IfBlock1;
  /* manage_DMI_Input_Pkg::manageDMI_Input::currentDMIStatus */
  static DMI_EVC_status_T_DMI_Types_Pkg _27_currentDMIStatus;
  /* manage_DMI_Input_Pkg::manageDMI_Input::outStatusList */
  static DMI_TXT_MSGList_status_T_DMI_Types_Pkg _28_outStatusList;
  /* manage_DMI_Input_Pkg::manageDMI_Input::updatedNTC */
  static NID_STM_DMI_Types_Pkg _29_updatedNTC;
  /* manage_DMI_Input_Pkg::manageDMI_Input::outForMA */
  static Driver2MAR_T_MA_Request _30_outForMA;
  /* manage_DMI_Input_Pkg::manageDMI_Input::DMI_Status_inEVC */
  static DMI_EVC_status_T_DMI_Types_Pkg _31_DMI_Status_inEVC;
  /* manage_DMI_Input_Pkg::manageDMI_Input::icon_Ack */
  static DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg _32_icon_Ack;
  /* manage_DMI_Input_Pkg::manageDMI_Input::driverRequest */
  static DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg _33_driverRequest;
  /* manage_DMI_Input_Pkg::manageDMI_Input::DMI_Status_inEVC */
  static DMI_EVC_status_T_DMI_Types_Pkg last_DMI_Status_inEVC;
  /* manage_DMI_Input_Pkg::manageDMI_Input::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* manage_DMI_Input_Pkg::manageDMI_Input::inputPresent */
  static kcg_bool inputPresent;
  /* manage_DMI_Input_Pkg::manageDMI_Input::sndValidationRequested */
  static kcg_bool sndValidationRequested;
  /* manage_DMI_Input_Pkg::manageDMI_Input::textMessage_Ack */
  static DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg _49_textMessage_Ack;
  /* manage_DMI_Input_Pkg::manageDMI_Input::icon_Ack */
  static DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg _48_icon_Ack;
  /* manage_DMI_Input_Pkg::manageDMI_Input::driverRequest */
  static DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg _47_driverRequest;
  /* manage_DMI_Input_Pkg::manageDMI_Input::_L1 */
  static DMI_to_EVC_Message_int_T_API_DMI_Pkg _L1;
  /* manage_DMI_Input_Pkg::manageDMI_Input::_L14 */
  static DMI_EVC_status_T_DMI_Types_Pkg _L14;
  /* manage_DMI_Input_Pkg::manageDMI_Input::_L15 */
  static kcg_bool _L15;
  /* manage_DMI_Input_Pkg::manageDMI_Input::_L16 */
  static DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg _L16;
  /* manage_DMI_Input_Pkg::manageDMI_Input::_L18 */
  static kcg_bool _L18;
  /* manage_DMI_Input_Pkg::manageDMI_Input::_L19 */
  static kcg_int _L19;
  /* manage_DMI_Input_Pkg::manageDMI_Input::_L20 */
  static kcg_int _L20;
  
  kcg_copy_DMI_to_EVC_Message_int_T_API_DMI_Pkg(&_L1, fromDMI);
  _L20 = 1;
  _L19 = _L1[0];
  _L18 = _L20 == _L19;
  inputPresent = _L18;
  IfBlock1_clock = inputPresent & !dmiStatusReset;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
  }
  else {
    else_clock_IfBlock1 = dmiStatusReset;
  }
  /* last_init_ck_DMI_Status_inEVC */ if (outC->init) {
    kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
      &last_DMI_Status_inEVC,
      (DMI_EVC_status_T_DMI_Types_Pkg *)
        &cDMI_EVC_Status_Default_DMI_Types_Pkg);
  }
  else {
    kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
      &last_DMI_Status_inEVC,
      &outC->DMI_Status_inEVC);
  }
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
      &_L21_IfBlock1,
      &last_DMI_Status_inEVC);
    kcg_copy_DMI_to_EVC_Message_int_T_API_DMI_Pkg(&_L11_IfBlock1, fromDMI);
    /* 2 */ Write_int_to_DMI_to_EVC_Messages(&_L11_IfBlock1, &_L54_IfBlock1);
  }
  else /* ck_anon_activ */ if (else_clock_IfBlock1) {
    kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
      &_L540_IfBlock1,
      (DMI_EVC_status_T_DMI_Types_Pkg *)
        &cDMI_EVC_Status_Default_DMI_Types_Pkg);
    kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
      &_27_currentDMIStatus,
      &_L540_IfBlock1);
    kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
      &currentDMIStatus,
      &_27_currentDMIStatus);
  }
  else {
    kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
      &_L346_IfBlock1,
      &last_DMI_Status_inEVC);
    kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
      &_20_currentDMIStatus,
      &_L346_IfBlock1);
    kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
      &currentDMIStatus,
      &_20_currentDMIStatus);
  }
  kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(&_L14, &last_DMI_Status_inEVC);
  _L15 = _L14.DMI_TrainRunningNumberFirstValidation;
  sndValidationRequested = _L15;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L33_IfBlock1 = sndValidationRequested;
    /* 2 */
    updateDMIStatus_manage_DMI_Input_Pkg(
      &_L21_IfBlock1,
      &_L54_IfBlock1,
      _L33_IfBlock1,
      &_L12_IfBlock1);
    kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
      &_1_currentDMIStatus,
      &_L12_IfBlock1);
    kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
      &outC->currentDMIStatus,
      &_1_currentDMIStatus);
    kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(
      &_L3_IfBlock1,
      &_L54_IfBlock1.identifier);
    kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(
      &_2_fromDMI_Identifier,
      &_L3_IfBlock1);
    kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->fromDMI_Identifier,
      &_2_fromDMI_Identifier);
    kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
      &_L4_IfBlock1,
      &_L54_IfBlock1.driverRequest);
    kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
      &_19_driverRequest,
      &_L4_IfBlock1);
    kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
      &_L41_IfBlock1,
      &_19_driverRequest);
    kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &_L30_IfBlock1,
      &_L54_IfBlock1.iconAck);
    kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &_18_icon_Ack,
      &_L30_IfBlock1);
    kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &_L42_IfBlock1,
      &_18_icon_Ack);
    kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &_L8_IfBlock1,
      &_L54_IfBlock1.textMessageAck);
    kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &_17_textMessage_Ack,
      &_L8_IfBlock1);
    kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &_L43_IfBlock1,
      &_17_textMessage_Ack);
    _L45_IfBlock1 = inSystemTime;
    kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
      &_L44_IfBlock1,
      inStatusList);
    /* 1 */
    receiveRequestsModesAndLevel_manage_DMI_Input_Pkg(
      &_L41_IfBlock1,
      &_L42_IfBlock1,
      &_L43_IfBlock1,
      _L45_IfBlock1,
      &_L44_IfBlock1,
      &_L32_IfBlock1,
      &_L38_IfBlock1,
      &_L47_IfBlock1);
    _3_outUpdateLevelsDMI = _L47_IfBlock1;
    outC->outUpdateLevelsDMI = _3_outUpdateLevelsDMI;
    kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
      &_L5_IfBlock1,
      &_L54_IfBlock1.driverIdentifier);
    kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
      &_4_fromDMI_DriverIdentifier,
      &_L5_IfBlock1);
    kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
      &outC->fromDMI_DriverIdentifier,
      &_4_fromDMI_DriverIdentifier);
    kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
      &_L6_IfBlock1,
      &_L54_IfBlock1.trainRunningNumber);
    kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
      &_5_fromDMI_TrainRunningNumber,
      &_L6_IfBlock1);
    kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
      &outC->fromDMI_TrainRunningNumber,
      &_5_fromDMI_TrainRunningNumber);
    kcg_copy_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg(
      &_L7_IfBlock1,
      &_L54_IfBlock1.radioNetData);
    kcg_copy_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg(
      &_6_fromDMI_RadioNetData,
      &_L7_IfBlock1);
    kcg_copy_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->fromDMI_RadioNetData,
      &_6_fromDMI_RadioNetData);
    kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &_7_fromDMI_Icon_Ack,
      &_L30_IfBlock1);
    kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->fromDMI_Icon_Ack,
      &_7_fromDMI_Icon_Ack);
    kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
      &_L10_IfBlock1,
      &_L54_IfBlock1.trainData);
    kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
      &_8_fromDMI_TrainData,
      &_L10_IfBlock1);
    kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
      &outC->fromDMI_TrainData,
      &_8_fromDMI_TrainData);
    kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &_L9_IfBlock1,
      &_L54_IfBlock1.trainDataAck);
    kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &_9_fromDMI_TrainDataAck,
      &_L9_IfBlock1);
    kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->fromDMI_TrainDataAck,
      &_9_fromDMI_TrainDataAck);
    kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(
      &_L19_IfBlock1,
      &_L54_IfBlock1.adhesionFactor);
    kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(
      &_10_fromDMI_AdhesionFactor,
      &_L19_IfBlock1);
    kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(
      &outC->fromDMI_AdhesionFactor,
      &_10_fromDMI_AdhesionFactor);
    kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(
      &_11_forModesAndLevel,
      &_L32_IfBlock1);
    kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(
      &outC->forModesAndLevel,
      &_11_forModesAndLevel);
    kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(
      &_L36_IfBlock1,
      &_L54_IfBlock1.selectedLevel);
    _L51_IfBlock1 = lasttNTC;
    /* 1 */
    changeLevelByDiver_manage_DMI_Input_Pkg(
      &_L36_IfBlock1,
      _L51_IfBlock1,
      &_L37_IfBlock1,
      &_L50_IfBlock1);
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &_12_ML_levelTransition,
      &_L37_IfBlock1);
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &outC->ML_levelTransition,
      &_12_ML_levelTransition);
    kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
      &_13_outStatusList,
      &_L38_IfBlock1);
    kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
      &outC->outStatusList,
      &_13_outStatusList);
    _14_updatedNTC = _L50_IfBlock1;
    outC->updatedNTC = _14_updatedNTC;
    kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
      &_L53_IfBlock1,
      &_19_driverRequest);
    /* 1 */ triggerForMA_manage_DMI_Input_Pkg(&_L53_IfBlock1, &_L52_IfBlock1);
    kcg_copy_Driver2MAR_T_MA_Request(&_15_outForMA, &_L52_IfBlock1);
    kcg_copy_Driver2MAR_T_MA_Request(&outC->outForMA, &_15_outForMA);
    kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
      &_16_DMI_Status_inEVC,
      &_L12_IfBlock1);
    kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
      &outC->DMI_Status_inEVC,
      &_16_DMI_Status_inEVC);
    kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &_49_textMessage_Ack,
      &_17_textMessage_Ack);
    kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &_48_icon_Ack,
      &_18_icon_Ack);
    kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
      &_47_driverRequest,
      &_19_driverRequest);
    kcg_copy_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg(
      &_L2_IfBlock1,
      &_L54_IfBlock1.status);
    _L1_IfBlock1 = _L54_IfBlock1.present;
    noname = _L1_IfBlock1;
    kcg_copy_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg(
      &_34_noname,
      &_L2_IfBlock1);
  }
  else {
    kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
      &outC->currentDMIStatus,
      &currentDMIStatus);
    kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(
      &fromDMI_Identifier,
      (DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg *)
        &cDMIIdentifierDefault_manage_DMI_Input_Pkg);
    kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->fromDMI_Identifier,
      &fromDMI_Identifier);
    outUpdateLevelsDMI = kcg_false;
    outC->outUpdateLevelsDMI = outUpdateLevelsDMI;
    kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
      &fromDMI_DriverIdentifier,
      (DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg *)
        &cDMIDriverIdentifierDefault_manage_DMI_Input_Pkg);
    kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
      &outC->fromDMI_DriverIdentifier,
      &fromDMI_DriverIdentifier);
    kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
      &fromDMI_TrainRunningNumber,
      (DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg *)
        &cDMITrainRunningNumberDefault_manage_DMI_Input_Pkg);
    kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
      &outC->fromDMI_TrainRunningNumber,
      &fromDMI_TrainRunningNumber);
    kcg_copy_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg(
      &fromDMI_RadioNetData,
      (DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg *)
        &cDMIRadioNetDataDefault_manage_DMI_Input_Pkg);
    kcg_copy_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->fromDMI_RadioNetData,
      &fromDMI_RadioNetData);
    kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &fromDMI_Icon_Ack,
      (DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *)
        &cDMIIconAckDefault_manage_DMI_Input_Pkg);
    kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->fromDMI_Icon_Ack,
      &fromDMI_Icon_Ack);
    kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
      &fromDMI_TrainData,
      (DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *)
        &cDMITrainDataDefault_manage_DMI_Input_Pkg);
    kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
      &outC->fromDMI_TrainData,
      &fromDMI_TrainData);
    kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &fromDMI_TrainDataAck,
      (DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *)
        &cDMITrainDataAckDefault_manage_DMI_Input_Pkg);
    kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &outC->fromDMI_TrainDataAck,
      &fromDMI_TrainDataAck);
    kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(
      &fromDMI_AdhesionFactor,
      (DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg *)
        &cDMIAdhesionFactorDefault_manage_DMI_Input_Pkg);
    kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(
      &outC->fromDMI_AdhesionFactor,
      &fromDMI_AdhesionFactor);
    kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(
      &forModesAndLevel,
      (DMI_To_Modes_T_DMI_Types_Pkg *)
        &cAckModesAndLevels_manage_DMI_Input_Pkg);
    kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(
      &outC->forModesAndLevel,
      &forModesAndLevel);
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &ML_levelTransition,
      (T_LevelTransition_Level_And_Mode_Types_Pkg *)
        &M_Default_Transition_Level_And_Mode_Types_Pkg);
    kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
      &outC->ML_levelTransition,
      &ML_levelTransition);
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
        &_L937_IfBlock1,
        (DMI_TXT_MSGList_status_T_DMI_Types_Pkg *)
          &cEmptyTestStatusList_DMI_Types_Pkg);
      kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
        &_28_outStatusList,
        &_L937_IfBlock1);
      kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
        &outStatusList,
        &_28_outStatusList);
    }
    else {
      kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
        &_L445_IfBlock1,
        inStatusList);
      kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
        &_21_outStatusList,
        &_L445_IfBlock1);
      kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
        &outStatusList,
        &_21_outStatusList);
    }
    kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
      &outC->outStatusList,
      &outStatusList);
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      _L1036_IfBlock1 = lasttNTC;
      _29_updatedNTC = _L1036_IfBlock1;
      updatedNTC = _29_updatedNTC;
    }
    else {
      _L742_IfBlock1 = lasttNTC;
      _22_updatedNTC = _L742_IfBlock1;
      updatedNTC = _22_updatedNTC;
    }
    outC->updatedNTC = updatedNTC;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      kcg_copy_Driver2MAR_T_MA_Request(
        &_L1135_IfBlock1,
        (Driver2MAR_T_MA_Request *) &cNoMATrigger_manage_DMI_Input_Pkg);
      kcg_copy_Driver2MAR_T_MA_Request(&_30_outForMA, &_L1135_IfBlock1);
      kcg_copy_Driver2MAR_T_MA_Request(&outForMA, &_30_outForMA);
    }
    else {
      kcg_copy_Driver2MAR_T_MA_Request(
        &_L841_IfBlock1,
        (Driver2MAR_T_MA_Request *) &cNoMATrigger_manage_DMI_Input_Pkg);
      kcg_copy_Driver2MAR_T_MA_Request(&_23_outForMA, &_L841_IfBlock1);
      kcg_copy_Driver2MAR_T_MA_Request(&outForMA, &_23_outForMA);
    }
    kcg_copy_Driver2MAR_T_MA_Request(&outC->outForMA, &outForMA);
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
        &_31_DMI_Status_inEVC,
        &_L540_IfBlock1);
      kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
        &DMI_Status_inEVC,
        &_31_DMI_Status_inEVC);
    }
    else {
      kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
        &_24_DMI_Status_inEVC,
        &_L346_IfBlock1);
      kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
        &DMI_Status_inEVC,
        &_24_DMI_Status_inEVC);
    }
    kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(
      &outC->DMI_Status_inEVC,
      &DMI_Status_inEVC);
    kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &textMessage_Ack,
      (DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *)
        &cDMITextMessageAckDefault_manage_DMI_Input_Pkg);
    kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &_49_textMessage_Ack,
      &textMessage_Ack);
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
        &_L838_IfBlock1,
        (DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *)
          &cDMIIconAckDefault_manage_DMI_Input_Pkg);
      kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
        &_32_icon_Ack,
        &_L838_IfBlock1);
      kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
        &icon_Ack,
        &_32_icon_Ack);
    }
    else {
      kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
        &_L543_IfBlock1,
        (DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *)
          &cDMIIconAckDefault_manage_DMI_Input_Pkg);
      kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
        &_25_icon_Ack,
        &_L543_IfBlock1);
      kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
        &icon_Ack,
        &_25_icon_Ack);
    }
    kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
      &_48_icon_Ack,
      &icon_Ack);
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
        &_L739_IfBlock1,
        (DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg *)
          &cDMIDriverRequestDefault_manage_DMI_Input_Pkg);
      kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
        &_33_driverRequest,
        &_L739_IfBlock1);
      kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
        &driverRequest,
        &_33_driverRequest);
    }
    else {
      kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
        &_L644_IfBlock1,
        (DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg *)
          &cDMIDriverRequestDefault_manage_DMI_Input_Pkg);
      kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
        &_26_driverRequest,
        &_L644_IfBlock1);
      kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
        &driverRequest,
        &_26_driverRequest);
    }
    kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
      &_47_driverRequest,
      &driverRequest);
  }
  kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
    &_L16,
    &_47_driverRequest);
  kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
    &outC->outDriverRequest,
    &_L16);
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** manageDMI_Input_manage_DMI_Input_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

