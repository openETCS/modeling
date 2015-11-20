/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ManageLevelAndMode.h"

#ifndef KCG_USER_DEFINED_INIT
void ManageLevelAndMode_init(outC_ManageLevelAndMode *outC)
{
  outC->Data_To_DMI_Ack.valid = kcg_true;
  outC->Data_To_DMI_Ack.whichMode = M_MODE_Full_Supervision;
  outC->Data_To_DMI_Ack.SH_Req_RefusedByRBC = kcg_true;
  outC->Data_To_DMI_Ack.LevelNeedsAck = kcg_true;
  outC->announcedLevel.LevelTransition.is_set = kcg_true;
  outC->announcedLevel.LevelTransition.transition.level = M_LEVEL_Level_0;
  outC->announcedLevel.LevelTransition.transition.position = 0;
  outC->announcedLevel.LevelTransition.transition.transitionType =
    M_TransitionType_Conditional_Level_And_Mode_Types_Pkg;
  outC->announcedLevel.LevelTransition.transition.immediateAck = kcg_true;
  outC->announcedLevel.LevelTransition.transition.AckLength = 0;
  outC->announcedLevel.LevelTransition.LRBG = 0;
  outC->announcedLevel.LevelTransition.referenceLocation = 0;
  outC->announcedLevel.IsAvailableForUse = kcg_true;
  outC->EB_Requested = kcg_true;
  outC->Service_Brake_Command = kcg_true;
  outC->Data_To_BG_Management.EoM_Procedure_req = kcg_true;
  outC->Data_To_BG_Management.Clean_BG_List_SH_Area = kcg_true;
  outC->Data_To_BG_Management.MA_Req = kcg_true;
  outC->Data_To_BG_Management.Req_for_SH_from_Driver = kcg_true;
  outC->Data_To_BG_Management.Connection_to_RBC_req = kcg_true;
  outC->Data_To_BG_Management.Position_Repport_Needed = kcg_true;
  outC->Compatible_Mode_And_Level.compatibleModeAndLevel = kcg_true;
  outC->Compatible_Mode_And_Level.level = M_LEVEL_Level_0;
  outC->Compatible_Mode_And_Level.newLevel = kcg_true;
  outC->Compatible_Mode_And_Level.Mode = M_MODE_Full_Supervision;
  outC->Compatible_Mode_And_Level.newMode = kcg_true;
  /* 1 */ Output_init(&outC->_2_Context_1);
  /* 1 */ ManageModes_init(&outC->_1_Context_1);
  /* 1 */ ManageLevels_init(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ManageLevelAndMode_reset(outC_ManageLevelAndMode *outC)
{
  /* 1 */ Output_reset(&outC->_2_Context_1);
  /* 1 */ ManageModes_reset(&outC->_1_Context_1);
  /* 1 */ ManageLevels_reset(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* ManageLevelAndMode */
void ManageLevelAndMode(
  /* ManageLevelAndMode::Data_From_DMI */ DMI_To_Modes_T_DMI_Types_Pkg *Data_From_DMI,
  /* ManageLevelAndMode::Data_From_Localisation */ T_Data_From_Localisation_Level_And_Mode_Types_Pkg *Data_From_Localisation,
  /* ManageLevelAndMode::Data_From_TIU */ Message_Train_Interface_to_EVC_T_TIU_Types_Pkg *Data_From_TIU,
  /* ManageLevelAndMode::Data_From_Track_Messages */ T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg *Data_From_Track_Messages,
  /* ManageLevelAndMode::Data_From_Track_Packets */ T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg *Data_From_Track_Packets,
  /* ManageLevelAndMode::Data_From_Speed_and_Supervision */ T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg *Data_From_Speed_and_Supervision,
  /* ManageLevelAndMode::Cab_In */ cab_ID_T_TIU_Types_Pkg Cab_In,
  /* ManageLevelAndMode::driver_level_transition_In */ T_LevelTransition_Level_And_Mode_Types_Pkg *driver_level_transition_In,
  /* ManageLevelAndMode::ERTMS_capabilities_In */ T_ERTMS_capabilities_Level_And_Mode_Types_Pkg *ERTMS_capabilities_In,
  /* ManageLevelAndMode::Data_from_Track_MASSPGradient */ T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg *Data_from_Track_MASSPGradient,
  /* ManageLevelAndMode::Data_From_F2_Functions */ T_Data_From_F2_functions_Level_And_Mode_Types_Pkg *Data_From_F2_Functions,
  /* ManageLevelAndMode::Data_From_STM */ T_Data_From_STM_Level_And_Mode_Types_Pkg *Data_From_STM,
  /* ManageLevelAndMode::MemorizedLevelIn */ M_LEVEL MemorizedLevelIn,
  outC_ManageLevelAndMode *outC)
{
  /* ManageLevelAndMode::Loc_Level_To_Apply */
  static M_LEVEL Loc_Level_To_Apply;
  /* ManageLevelAndMode::Loc_Mode_To_Apply */
  static T_Mode_Level_And_Mode_Types_Pkg Loc_Mode_To_Apply;
  /* ManageLevelAndMode::Loc_TripFromLevel */
  static kcg_bool Loc_TripFromLevel;
  /* ManageLevelAndMode::_L5 */
  static T_Data_To_BG_Management_Level_And_Mode_Types_Pkg _L5;
  /* ManageLevelAndMode::_L4 */
  static T_Data_To_DMI_Level_And_Mode_Types_Pkg _L4;
  /* ManageLevelAndMode::_L3 */
  static kcg_bool _L3;
  /* ManageLevelAndMode::_L2 */
  static kcg_bool _L2;
  /* ManageLevelAndMode::_L1 */
  static T_Mode_Level_And_Mode_Types_Pkg _L1;
  /* ManageLevelAndMode::_L12 */
  static kcg_bool _L12;
  /* ManageLevelAndMode::_L11 */
  static kcg_bool _L11;
  /* ManageLevelAndMode::_L10 */
  static kcg_bool _L10;
  /* ManageLevelAndMode::_L9 */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _L9;
  /* ManageLevelAndMode::_L8 */
  static kcg_bool _L8;
  /* ManageLevelAndMode::_L7 */
  static kcg_bool _L7;
  /* ManageLevelAndMode::_L6 */
  static M_LEVEL _L6;
  /* ManageLevelAndMode::_L25 */
  static kcg_bool _L25;
  /* ManageLevelAndMode::_L28 */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _L28;
  /* ManageLevelAndMode::_L29 */
  static kcg_bool _L29;
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
  /* ManageLevelAndMode::_L53 */
  static DMI_To_Modes_T_DMI_Types_Pkg _L53;
  /* ManageLevelAndMode::_L54 */
  static T_Data_From_Localisation_Level_And_Mode_Types_Pkg _L54;
  /* ManageLevelAndMode::_L55 */
  static Message_Train_Interface_to_EVC_T_TIU_Types_Pkg _L55;
  /* ManageLevelAndMode::_L56 */
  static T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg _L56;
  /* ManageLevelAndMode::_L57 */
  static T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg _L57;
  /* ManageLevelAndMode::_L58 */
  static T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg _L58;
  /* ManageLevelAndMode::_L59 */
  static cab_ID_T_TIU_Types_Pkg _L59;
  /* ManageLevelAndMode::_L61 */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _L61;
  /* ManageLevelAndMode::_L72 */
  static T_ERTMS_capabilities_Level_And_Mode_Types_Pkg _L72;
  /* ManageLevelAndMode::_L73 */
  static M_LEVEL _L73;
  /* ManageLevelAndMode::_L75 */
  static T_Mode_Level_And_Mode_Types_Pkg _L75;
  /* ManageLevelAndMode::_L76 */
  static kcg_bool _L76;
  /* ManageLevelAndMode::_L77 */
  static M_LEVEL _L77;
  /* ManageLevelAndMode::_L78 */
  static T_Mode_Level_And_Mode_Types_Pkg _L78;
  /* ManageLevelAndMode::_L79 */
  static T_Mode_Level_Level_And_Mode_Types_Pkg _L79;
  /* ManageLevelAndMode::_L82 */
  static T_Data_To_BG_Management_Level_And_Mode_Types_Pkg _L82;
  /* ManageLevelAndMode::_L83 */
  static kcg_bool _L83;
  /* ManageLevelAndMode::_L84 */
  static kcg_bool _L84;
  /* ManageLevelAndMode::_L87 */
  static T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg _L87;
  /* ManageLevelAndMode::_L92 */
  static T_Data_From_F2_functions_Level_And_Mode_Types_Pkg _L92;
  /* ManageLevelAndMode::_L93 */
  static T_Data_From_STM_Level_And_Mode_Types_Pkg _L93;
  /* ManageLevelAndMode::_L94 */
  static T_Data_From_STM_Level_And_Mode_Types_Pkg _L94;
  /* ManageLevelAndMode::_L95 */
  static T_Data_From_F2_functions_Level_And_Mode_Types_Pkg _L95;
  /* ManageLevelAndMode::_L96 */
  static T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg _L96;
  /* ManageLevelAndMode::_L101 */
  static kcg_bool _L101;
  /* ManageLevelAndMode::_L100 */
  static kcg_bool _L100;
  /* ManageLevelAndMode::_L104 */
  static kcg_bool _L104;
  /* ManageLevelAndMode::_L108 */
  static M_LEVEL _L108;
  /* ManageLevelAndMode::_L109 */
  static M_LEVEL _L109;
  /* ManageLevelAndMode::_L110 */
  static T_AcknoledgementRequest_Level_And_Mode_Types_Pkg _L110;
  /* ManageLevelAndMode::_L111 */
  static T_AnnouncedLevel_Level_And_Mode_Types_Pkg _L111;
  
  kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(&_L53, Data_From_DMI);
  kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(&_L55, Data_From_TIU);
  kcg_copy_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg(
    &_L56,
    Data_From_Track_Messages);
  kcg_copy_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg(
    &_L57,
    Data_From_Track_Packets);
  kcg_copy_T_Data_From_STM_Level_And_Mode_Types_Pkg(&_L93, Data_From_STM);
  kcg_copy_T_Data_From_Localisation_Level_And_Mode_Types_Pkg(
    &_L54,
    Data_From_Localisation);
  kcg_copy_T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg(
    &_L58,
    Data_From_Speed_and_Supervision);
  kcg_copy_T_Data_From_F2_functions_Level_And_Mode_Types_Pkg(
    &_L92,
    Data_From_F2_Functions);
  _L59 = Cab_In;
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &_L61,
    driver_level_transition_In);
  kcg_copy_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg(
    &_L72,
    ERTMS_capabilities_In);
  kcg_copy_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg(
    &_L87,
    Data_from_Track_MASSPGradient);
  _L109 = MemorizedLevelIn;
  /* 1 */
  Input(
    &_L53,
    &_L55,
    &_L56,
    &_L57,
    &_L93,
    &_L54,
    &_L58,
    &_L92,
    _L59,
    &_L61,
    &_L72,
    &_L87,
    _L109,
    &_L25,
    &_L28,
    &_L29,
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
  ManageLevels(_L25, &_L28, _L29, &_L30, &_L33, &_L96, _L108, &outC->Context_1);
  _L6 = outC->Context_1.nextLevel;
  _L7 = outC->Context_1.TripTrainRequested;
  _L8 = outC->Context_1.needsAckFromDriver;
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &_L9,
    &outC->Context_1.announcedLevelTransition);
  _L10 = outC->Context_1.serviceBrakeRequested;
  _L11 = outC->Context_1.connectionToRBCRequested;
  _L12 = outC->Context_1.positionReportNeeded;
  _L100 = outC->Context_1.levelIsNew;
  _L101 = outC->Context_1.isAvailableForUse;
  Loc_Level_To_Apply = _L6;
  _L73 = Loc_Level_To_Apply;
  Loc_TripFromLevel = _L7;
  _L104 = Loc_TripFromLevel;
  /* 1 */
  ManageModes(
    _L73,
    _L37,
    &_L40,
    &_L95,
    &_L41,
    &_L42,
    &_L94,
    &_L43,
    &_L44,
    _L104,
    &outC->_1_Context_1);
  _L1 = outC->_1_Context_1.currentMode;
  _L2 = outC->_1_Context_1.EB_Requested;
  _L3 = outC->_1_Context_1.Service_Brake_Command;
  kcg_copy_T_Data_To_DMI_Level_And_Mode_Types_Pkg(
    &_L4,
    &outC->_1_Context_1.Data_To_DMI);
  kcg_copy_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg(
    &_L5,
    &outC->_1_Context_1.Data_To_BG_Management);
  Loc_Mode_To_Apply = _L1;
  _L75 = Loc_Mode_To_Apply;
  _L77 = Loc_Level_To_Apply;
  _L78 = Loc_Mode_To_Apply;
  _L76 = /* 1 */ CheckLevelAndMode(_L77, _L78);
  /* 1 */
  Output(
    _L6,
    _L8,
    &_L9,
    _L10,
    _L11,
    _L12,
    _L100,
    _L101,
    _L75,
    _L2,
    _L3,
    &_L4,
    &_L5,
    _L76,
    &outC->_2_Context_1);
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &_L79,
    &outC->_2_Context_1.Compatible_Mode_And_Level);
  kcg_copy_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg(
    &_L82,
    &outC->_2_Context_1.Data_To_BG_Management);
  _L83 = outC->_2_Context_1.Service_Brake_Command;
  _L84 = outC->_2_Context_1.EB_Requested;
  kcg_copy_T_AnnouncedLevel_Level_And_Mode_Types_Pkg(
    &_L111,
    &outC->_2_Context_1.announcedLevel);
  kcg_copy_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg(
    &_L110,
    &outC->_2_Context_1.Data_To_DMI_Ack);
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &outC->Compatible_Mode_And_Level,
    &_L79);
  kcg_copy_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg(
    &outC->Data_To_BG_Management,
    &_L82);
  outC->Service_Brake_Command = _L83;
  outC->EB_Requested = _L84;
  kcg_copy_T_AnnouncedLevel_Level_And_Mode_Types_Pkg(
    &outC->announcedLevel,
    &_L111);
  kcg_copy_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg(
    &outC->Data_To_DMI_Ack,
    &_L110);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ManageLevelAndMode.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

