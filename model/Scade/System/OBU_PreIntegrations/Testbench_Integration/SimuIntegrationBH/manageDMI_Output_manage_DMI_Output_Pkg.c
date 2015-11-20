/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "manageDMI_Output_manage_DMI_Output_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void manageDMI_Output_init_manage_DMI_Output_Pkg(
  outC_manageDMI_Output_manage_DMI_Output_Pkg *outC)
{
  static kcg_int i1;
  static kcg_int i;
  
  for (i = 0; i < 31; i++) {
    outC->outStatusList[i].valid = kcg_true;
    outC->outStatusList[i].dmi_textMessageID = 0;
    outC->outStatusList[i].timeStamp = 0;
    outC->outStatusList[i].textReport =
      Q_TEXTREPORT_No_driver_acknowledgement_report_required;
    outC->outStatusList[i].context = con_undefined_DMI_Types_Pkg;
    outC->outStatusList[i].nid_textmessage = 0;
    outC->outStatusList[i].whichLevel = M_LEVEL_Level_0;
    outC->outStatusList[i].whichMode = M_MODE_Full_Supervision;
  }
  for (i1 = 0; i1 < 999; i1++) {
    outC->to_DMI[i1] = 0;
  }
  /* 1 */ collectDMIPackets_init_manage_DMI_Output_Pkg(&outC->_3_Context_1);
  /* 2 */ sendBrakesToDMI_init_manage_DMI_Output_Pkg(&outC->Context_2);
  /* 1 */ sendVersion_init_manage_DMI_Output_Pkg(&outC->_2_Context_1);
  /* 1 */ doIdentifierRequest_init_manage_DMI_Output_Pkg(&outC->_1_Context_1);
  /* 1 */ cyclicReportToDMI_init_manage_DMI_Output_Pkg(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void manageDMI_Output_reset_manage_DMI_Output_Pkg(
  outC_manageDMI_Output_manage_DMI_Output_Pkg *outC)
{
  /* 1 */ collectDMIPackets_reset_manage_DMI_Output_Pkg(&outC->_3_Context_1);
  /* 2 */ sendBrakesToDMI_reset_manage_DMI_Output_Pkg(&outC->Context_2);
  /* 1 */ sendVersion_reset_manage_DMI_Output_Pkg(&outC->_2_Context_1);
  /* 1 */ doIdentifierRequest_reset_manage_DMI_Output_Pkg(&outC->_1_Context_1);
  /* 1 */ cyclicReportToDMI_reset_manage_DMI_Output_Pkg(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* manage_DMI_Output_Pkg::manageDMI_Output */
void manageDMI_Output_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::manageDMI_Output::incurrentDMIStatus */ DMI_EVC_status_T_DMI_Types_Pkg *incurrentDMIStatus,
  /* manage_DMI_Output_Pkg::manageDMI_Output::inSystemTime */ T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* manage_DMI_Output_Pkg::manageDMI_Output::TIU_TrainStatus */ TIU_trainStatus_T_TIU_Types_Pkg *TIU_TrainStatus,
  /* manage_DMI_Output_Pkg::manageDMI_Output::inOdometry */ odometry_T_Obu_BasicTypes_Pkg *inOdometry,
  /* manage_DMI_Output_Pkg::manageDMI_Output::inTrainPosition */ trainPosition_T_TrainPosition_Types_Pck *inTrainPosition,
  /* manage_DMI_Output_Pkg::manageDMI_Output::inBrakeCommand */ Brake_command_T_TIU_Types_Pkg *inBrakeCommand,
  /* manage_DMI_Output_Pkg::manageDMI_Output::inSpeedSupervision */ speedSupervisionForDMI_T_DMI_Types_Pkg *inSpeedSupervision,
  /* manage_DMI_Output_Pkg::manageDMI_Output::inModeAndLevel */ T_Mode_Level_Level_And_Mode_Types_Pkg *inModeAndLevel,
  /* manage_DMI_Output_Pkg::manageDMI_Output::inNationalValues */ nationValuesForDMI_T_DMI_Types_Pkg *inNationalValues,
  /* manage_DMI_Output_Pkg::manageDMI_Output::inMovementAuthority */ movementAuthorityForDMI_T_DMI_Types_Pkg *inMovementAuthority,
  /* manage_DMI_Output_Pkg::manageDMI_Output::inMoRC_status */ morcStatus_T_RCM_Session_Types_Pkg *inMoRC_status,
  /* manage_DMI_Output_Pkg::manageDMI_Output::trainDataFromEVC */ trainData_T_TIU_Types_Pkg *trainDataFromEVC,
  /* manage_DMI_Output_Pkg::manageDMI_Output::dmi_entryRequest */ DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_entryRequest,
  /* manage_DMI_Output_Pkg::manageDMI_Output::dmi_evc_coded_train_data */ DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_evc_coded_train_data,
  /* manage_DMI_Output_Pkg::manageDMI_Output::dmi_trackDescription */ DataForDMI_t_TrackAtlasTypes *dmi_trackDescription,
  /* manage_DMI_Output_Pkg::manageDMI_Output::evc_systemVersion */ M_VERSION evc_systemVersion,
  /* manage_DMI_Output_Pkg::manageDMI_Output::dmi_displayControl */ DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_displayControl,
  /* manage_DMI_Output_Pkg::manageDMI_Output::dmi_EVC_levelList */ DMI_LevelList_T_DMI_Types_Pkg *dmi_EVC_levelList,
  /* manage_DMI_Output_Pkg::manageDMI_Output::dmiUpdateLevelsDMI */ kcg_bool dmiUpdateLevelsDMI,
  /* manage_DMI_Output_Pkg::manageDMI_Output::dmi_EVC_radioNet */ DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg *dmi_EVC_radioNet,
  /* manage_DMI_Output_Pkg::manageDMI_Output::dmi_driverIdentifier */ DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg *dmi_driverIdentifier,
  /* manage_DMI_Output_Pkg::manageDMI_Output::dmi_trainRunningNumber */ DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg *dmi_trainRunningNumber,
  /* manage_DMI_Output_Pkg::manageDMI_Output::dmi_adhesionFactor */ DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg *dmi_adhesionFactor,
  /* manage_DMI_Output_Pkg::manageDMI_Output::dmi_fromBG */ kcg_bool dmi_fromBG,
  /* manage_DMI_Output_Pkg::manageDMI_Output::inModeLevel_Ack */ T_AcknoledgementRequest_Level_And_Mode_Types_Pkg *inModeLevel_Ack,
  /* manage_DMI_Output_Pkg::manageDMI_Output::announcedLevel */ T_AnnouncedLevel_Level_And_Mode_Types_Pkg *announcedLevel,
  /* manage_DMI_Output_Pkg::manageDMI_Output::inNTC */ NID_NTC inNTC,
  /* manage_DMI_Output_Pkg::manageDMI_Output::inStatusList */ DMI_TXT_MSGList_status_T_DMI_Types_Pkg *inStatusList,
  outC_manageDMI_Output_manage_DMI_Output_Pkg *outC)
{
  /* manage_DMI_Output_Pkg::manageDMI_Output */
  static DMI_Train_Data_T_DMI_Messages_Bothways_Pkg op_call;
  /* manage_DMI_Output_Pkg::manageDMI_Output */
  static kcg_bool ck_every;
  /* manage_DMI_Output_Pkg::manageDMI_Output::doTrainData */
  static kcg_bool doTrainData;
  /* manage_DMI_Output_Pkg::manageDMI_Output::DMI_TrainData */
  static DMI_Train_Data_T_DMI_Messages_Bothways_Pkg DMI_TrainData;
  /* manage_DMI_Output_Pkg::manageDMI_Output::versionPackage */
  static DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg versionPackage;
  /* manage_DMI_Output_Pkg::manageDMI_Output::LevelListPkg */
  static DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg LevelListPkg;
  /* manage_DMI_Output_Pkg::manageDMI_Output::levelUpdate */
  static kcg_bool levelUpdate;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L2 */
  static DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg _L2;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L3 */
  static DMI_EVC_status_T_DMI_Types_Pkg _L3;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L4 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L4;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L5 */
  static TIU_trainStatus_T_TIU_Types_Pkg _L5;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L6 */
  static odometry_T_Obu_BasicTypes_Pkg _L6;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L7 */
  static trainPosition_T_TrainPosition_Types_Pck _L7;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L8 */
  static speedSupervisionForDMI_T_DMI_Types_Pkg _L8;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L9 */
  static T_Mode_Level_Level_And_Mode_Types_Pkg _L9;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L10 */
  static nationValuesForDMI_T_DMI_Types_Pkg _L10;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L11 */
  static movementAuthorityForDMI_T_DMI_Types_Pkg _L11;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L15 */
  static DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg _L15;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L16 */
  static DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg _L16;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L18 */
  static DataForDMI_t_TrackAtlasTypes _L18;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L21 */
  static DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg _L21;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L23 */
  static DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg _L23;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L24 */
  static DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg _L24;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L25 */
  static DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg _L25;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L27 */
  static DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg _L27;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L29 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L29;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L1 */
  static EVC_to_DMI_Message_T_API_DMI_Pkg _L1;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L31 */
  static DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg _L31;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L30 */
  static DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg _L30;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L37 */
  static kcg_bool _L37;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L38 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L38;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L40 */
  static kcg_bool _L40;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L42 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L42;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L45 */
  static DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg _L45;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L46 */
  static Brake_command_T_TIU_Types_Pkg _L46;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L47 */
  static NID_NTC _L47;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L53 */
  static trainData_T_TIU_Types_Pkg _L53;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L52 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L52;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L51 */
  static DMI_Train_Data_T_DMI_Messages_Bothways_Pkg _L51;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L50 */
  static kcg_bool _L50;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L49 */
  static DMI_Train_Data_T_DMI_Messages_Bothways_Pkg _L49;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L55 */
  static DMI_Train_Data_T_DMI_Messages_Bothways_Pkg _L55;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L64 */
  static DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg _L64;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L66 */
  static DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg _L66;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L67 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L67;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L68 */
  static M_VERSION _L68;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L69 */
  static DMI_EVC_status_T_DMI_Types_Pkg _L69;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L70 */
  static DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg _L70;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L72 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L72;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L73 */
  static DMI_LevelList_T_DMI_Types_Pkg _L73;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L74 */
  static kcg_bool _L74;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L75 */
  static DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg _L75;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L77 */
  static DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg _L77;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L76 */
  static DMI_TXT_MSGList_status_T_DMI_Types_Pkg _L76;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L78 */
  static DMI_TXT_MSGList_status_T_DMI_Types_Pkg _L78;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L80 */
  static kcg_bool _L80;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L81 */
  static kcg_bool _L81;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L83 */
  static kcg_bool _L83;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L84 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L84;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L85 */
  static DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg _L85;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L86 */
  static T_AcknoledgementRequest_Level_And_Mode_Types_Pkg _L86;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L87 */
  static T_AnnouncedLevel_Level_And_Mode_Types_Pkg _L87;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L88 */
  static DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg _L88;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L89 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L89;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L91 */
  static M_VERSION _L91;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L92 */
  static TIU_trainStatus_T_TIU_Types_Pkg _L92;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L93 */
  static EVC_to_DMI_Message_int_T_API_DMI_Pkg _L93;
  /* manage_DMI_Output_Pkg::manageDMI_Output::_L94 */
  static morcStatus_T_RCM_Session_Types_Pkg _L94;
  
  kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &_L15,
    dmi_entryRequest);
  _L38 = inSystemTime;
  /* 1 */
  doEntryRequest_manage_DMI_Output_Pkg(&_L15, _L38, &_L31, &_L30, &_L37, &_L81);
  doTrainData = _L37;
  _L50 = doTrainData;
  ck_every = _L50;
  _L52 = inSystemTime;
  kcg_copy_trainData_T_TIU_Types_Pkg(&_L53, trainDataFromEVC);
  /* ck_manageDMI_Output */ if (ck_every) {
    /* 2 */ sendTrainData_manage_DMI_Output_Pkg(_L52, &_L53, &op_call);
  }
  kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(&_L3, incurrentDMIStatus);
  _L4 = inSystemTime;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&_L6, inOdometry);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L7, inTrainPosition);
  kcg_copy_speedSupervisionForDMI_T_DMI_Types_Pkg(&_L8, inSpeedSupervision);
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(&_L9, inModeAndLevel);
  kcg_copy_nationValuesForDMI_T_DMI_Types_Pkg(&_L10, inNationalValues);
  kcg_copy_movementAuthorityForDMI_T_DMI_Types_Pkg(&_L11, inMovementAuthority);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&_L94, inMoRC_status);
  _L47 = inNTC;
  /* 1 */
  cyclicReportToDMI_manage_DMI_Output_Pkg(
    &_L3,
    _L4,
    &_L6,
    &_L7,
    &_L8,
    &_L9,
    &_L10,
    &_L11,
    &_L94,
    _L47,
    &outC->Context_1);
  kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg(
    &_L2,
    &outC->Context_1.packetDynamic);
  kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg(&_L5, TIU_TrainStatus);
  kcg_copy_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    &_L16,
    dmi_evc_coded_train_data);
  kcg_copy_DataForDMI_t_TrackAtlasTypes(&_L18, dmi_trackDescription);
  kcg_copy_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg(
    &_L21,
    dmi_displayControl);
  kcg_copy_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    &_L23,
    dmi_EVC_radioNet);
  kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
    &_L24,
    dmi_driverIdentifier);
  kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
    &_L25,
    dmi_trainRunningNumber);
  kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(
    &_L27,
    dmi_adhesionFactor);
  _L29 = inSystemTime;
  _L42 = inSystemTime;
  kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(&_L78, inStatusList);
  _L40 = dmi_fromBG;
  kcg_copy_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg(
    &_L86,
    inModeLevel_Ack);
  kcg_copy_T_AnnouncedLevel_Level_And_Mode_Types_Pkg(&_L87, announcedLevel);
  /* 1 */
  manageTextMessages_manage_TextMessages_Pkg(
    _L42,
    &_L78,
    _L40,
    &_L86,
    &_L87,
    &_L77,
    &_L76);
  _L84 = inSystemTime;
  /* 1 */ copyTrackDescription_manage_DMI_Output_Pkg(&_L18, _L84, &_L85);
  kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg(&_L92, TIU_TrainStatus);
  _L89 = inSystemTime;
  _L91 = evc_systemVersion;
  /* 1 */
  doIdentifierRequest_manage_DMI_Output_Pkg(
    &_L92,
    _L89,
    _L91,
    &outC->_1_Context_1);
  kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
    &_L88,
    &outC->_1_Context_1.identifierRequest);
  _L68 = evc_systemVersion;
  kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(&_L69, incurrentDMIStatus);
  _L67 = inSystemTime;
  /* 1 */
  sendVersion_manage_DMI_Output_Pkg(_L68, &_L69, _L67, &outC->_2_Context_1);
  kcg_copy_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg(
    &_L66,
    &outC->_2_Context_1.VersionPkg);
  kcg_copy_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg(
    &versionPackage,
    &_L66);
  kcg_copy_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg(
    &_L64,
    &versionPackage);
  kcg_copy_DMI_LevelList_T_DMI_Types_Pkg(&_L73, dmi_EVC_levelList);
  levelUpdate = _L81;
  _L80 = levelUpdate;
  _L74 = dmiUpdateLevelsDMI;
  _L83 = _L80 | _L74;
  _L72 = inSystemTime;
  /* 1 */ sendLevelListPkg_manage_DMI_Output_Pkg(&_L73, _L83, _L72, &_L70);
  kcg_copy_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    &LevelListPkg,
    &_L70);
  kcg_copy_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
    &_L75,
    &LevelListPkg);
  kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
    &_L49,
    (DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *)
      &cDefaultTrainData_manage_DMI_Output_Pkg);
  /* ck_manageDMI_Output */ if (ck_every) {
    kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(&_L51, &op_call);
  }
  else {
    kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(&_L51, &_L49);
  }
  kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(&DMI_TrainData, &_L51);
  kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(&_L55, &DMI_TrainData);
  kcg_copy_Brake_command_T_TIU_Types_Pkg(&_L46, inBrakeCommand);
  /* 2 */ sendBrakesToDMI_manage_DMI_Output_Pkg(&_L46, _L29, &outC->Context_2);
  kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(
    &_L45,
    &outC->Context_2.dmi_iconRequest);
  /* 1 */
  collectDMIPackets_manage_DMI_Output_Pkg(
    &_L5,
    &_L2,
    &_L31,
    &_L30,
    &_L16,
    &_L77,
    &_L85,
    &_L88,
    &_L64,
    &_L21,
    &_L75,
    &_L23,
    &_L24,
    &_L25,
    &_L55,
    &_L27,
    &_L45,
    _L29,
    &outC->_3_Context_1);
  kcg_copy_EVC_to_DMI_Message_T_API_DMI_Pkg(&_L1, &outC->_3_Context_1.to_DMI);
  /* 1 */ Write_EVC_to_DMI_to_int_Messages(&_L1, &_L93);
  kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(&outC->to_DMI, &_L93);
  kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(&outC->outStatusList, &_L76);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** manageDMI_Output_manage_DMI_Output_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

