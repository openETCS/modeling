/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Output.h"

#ifndef KCG_USER_DEFINED_INIT
void Output_init(outC_Output *outC)
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
  /* 1 */ Output_Mode_Level_To_Use_init_OutputManagement(&outC->_1_Context_1);
  /* 1 */ Output_To_DMI_init_OutputManagement(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Output_reset(outC_Output *outC)
{
  /* 1 */ Output_Mode_Level_To_Use_reset_OutputManagement(&outC->_1_Context_1);
  /* 1 */ Output_To_DMI_reset_OutputManagement(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Output */
void Output(
  /* Output::next_level */ M_LEVEL next_level,
  /* Output::needsAckFromDriver */ kcg_bool needsAckFromDriver,
  /* Output::announcedLevelTransition */ T_LevelTransition_Level_And_Mode_Types_Pkg *announcedLevelTransition,
  /* Output::service_brake_from_level */ kcg_bool service_brake_from_level,
  /* Output::Connection_to_RBC_Requested */ kcg_bool Connection_to_RBC_Requested,
  /* Output::PositionReportNeeded */ kcg_bool PositionReportNeeded,
  /* Output::isNewLevel */ kcg_bool isNewLevel,
  /* Output::isAvailableForUse */ kcg_bool isAvailableForUse,
  /* Output::currentMode */ T_Mode_Level_And_Mode_Types_Pkg currentMode,
  /* Output::EB_Requested_From_Mode */ kcg_bool EB_Requested_From_Mode,
  /* Output::Service_Brake_Command_From_Mode */ kcg_bool Service_Brake_Command_From_Mode,
  /* Output::Data_To_DMI_From_Mode */ T_Data_To_DMI_Level_And_Mode_Types_Pkg *Data_To_DMI_From_Mode,
  /* Output::Data_To_BG_Management_From_Mode */ T_Data_To_BG_Management_Level_And_Mode_Types_Pkg *Data_To_BG_Management_From_Mode,
  /* Output::Level_Mode_Compatible */ kcg_bool Level_Mode_Compatible,
  outC_Output *outC)
{
  /* Output::_L10 */
  static kcg_bool _L10;
  /* Output::_L7 */
  static T_Data_To_BG_Management_Level_And_Mode_Types_Pkg _L7;
  /* Output::_L3 */
  static T_Data_To_DMI_Level_And_Mode_Types_Pkg _L3;
  /* Output::_L2 */
  static kcg_bool _L2;
  /* Output::_L17 */
  static T_Data_To_BG_Management_Level_And_Mode_Types_Pkg _L17;
  /* Output::_L18 */
  static T_Mode_Level_Level_And_Mode_Types_Pkg _L18;
  /* Output::_L19 */
  static M_LEVEL _L19;
  /* Output::_L20 */
  static T_Mode_Level_And_Mode_Types_Pkg _L20;
  /* Output::_L21 */
  static kcg_bool _L21;
  /* Output::_L22 */
  static kcg_bool _L22;
  /* Output::_L23 */
  static kcg_bool _L23;
  /* Output::_L24 */
  static kcg_bool _L24;
  /* Output::_L25 */
  static kcg_bool _L25;
  /* Output::_L30 */
  static T_LevelTransition_Level_And_Mode_Types_Pkg _L30;
  /* Output::_L33 */
  static kcg_bool _L33;
  /* Output::_L34 */
  static kcg_bool _L34;
  /* Output::_L36 */
  static kcg_bool _L36;
  /* Output::_L37 */
  static kcg_bool _L37;
  /* Output::_L43 */
  static T_AnnouncedLevel_Level_And_Mode_Types_Pkg _L43;
  /* Output::_L44 */
  static T_AcknoledgementRequest_Level_And_Mode_Types_Pkg _L44;
  
  _L2 = needsAckFromDriver;
  kcg_copy_T_Data_To_DMI_Level_And_Mode_Types_Pkg(&_L3, Data_To_DMI_From_Mode);
  _L10 = Level_Mode_Compatible;
  kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(
    &_L30,
    announcedLevelTransition);
  _L37 = isAvailableForUse;
  /* 1 */
  Output_To_DMI_OutputManagement(
    _L10,
    _L2,
    &_L3,
    &_L30,
    _L37,
    &outC->Context_1);
  kcg_copy_T_AnnouncedLevel_Level_And_Mode_Types_Pkg(
    &_L43,
    &outC->Context_1.announcedLevel);
  kcg_copy_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg(
    &_L44,
    &outC->Context_1.Data_To_DMI_Ack);
  kcg_copy_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg(
    &_L17,
    Data_To_BG_Management_From_Mode);
  _L33 = Connection_to_RBC_Requested;
  _L34 = PositionReportNeeded;
  /* 1 */ Output_To_BG_Management_OutputManagement(&_L17, _L33, _L34, &_L7);
  kcg_copy_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg(
    &outC->Data_To_BG_Management,
    &_L7);
  _L19 = next_level;
  _L20 = currentMode;
  _L21 = Level_Mode_Compatible;
  _L36 = isNewLevel;
  /* 1 */
  Output_Mode_Level_To_Use_OutputManagement(
    _L19,
    _L20,
    _L21,
    _L36,
    &outC->_1_Context_1);
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &_L18,
    &outC->_1_Context_1.Compatible_Mode_And_Level);
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &outC->Compatible_Mode_And_Level,
    &_L18);
  _L22 = service_brake_from_level;
  _L24 = Service_Brake_Command_From_Mode;
  _L25 = _L22 | _L24;
  outC->Service_Brake_Command = _L25;
  _L23 = EB_Requested_From_Mode;
  outC->EB_Requested = _L23;
  kcg_copy_T_AnnouncedLevel_Level_And_Mode_Types_Pkg(
    &outC->announcedLevel,
    &_L43);
  kcg_copy_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg(
    &outC->Data_To_DMI_Ack,
    &_L44);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Output.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

