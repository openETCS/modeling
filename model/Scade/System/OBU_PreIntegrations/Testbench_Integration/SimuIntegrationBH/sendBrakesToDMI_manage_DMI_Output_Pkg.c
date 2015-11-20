/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "sendBrakesToDMI_manage_DMI_Output_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void sendBrakesToDMI_init_manage_DMI_Output_Pkg(
  outC_sendBrakesToDMI_manage_DMI_Output_Pkg *outC)
{
  outC->init = kcg_true;
  outC->loc_brakeCommand.valid = kcg_true;
  outC->loc_brakeCommand.m_servicebrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->loc_brakeCommand.m_emergencybrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->dmi_iconRequest.valid = kcg_true;
  outC->dmi_iconRequest.system_clock = 0;
  outC->dmi_iconRequest.DMI_m_icon_control_flag =
    show_icon_in_area_DMI_Types_Pkg;
  outC->dmi_iconRequest.DMI_m_icon_flashing_freq = 0.0;
  outC->dmi_iconRequest.DMI_nid_icon_group = level_symbol_DMI_Types_Pkg;
  outC->dmi_iconRequest.DMI_nid_icon_rank = 0;
  outC->dmi_iconRequest.DMI_nid_area_group = A_DMI_Types_Pkg;
  outC->dmi_iconRequest.DMI_nid_area_rank = 0;
  outC->dmi_iconRequest.DMI_nid_icon_identifier = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void sendBrakesToDMI_reset_manage_DMI_Output_Pkg(
  outC_sendBrakesToDMI_manage_DMI_Output_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* manage_DMI_Output_Pkg::sendBrakesToDMI */
void sendBrakesToDMI_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::brakeCommand */ Brake_command_T_TIU_Types_Pkg *brakeCommand,
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::inSystemTime */ T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  outC_sendBrakesToDMI_manage_DMI_Output_Pkg *outC)
{
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::dmi_iconRequest */
  static DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg _1_dmi_iconRequest;
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::IfBlock1::then::_L3 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L3_IfBlock1;
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::IfBlock1::then::_L2 */
  static DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg _L2_IfBlock1;
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::IfBlock1::then::_L1 */
  static DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg _L1_IfBlock1;
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::dmi_iconRequest */
  static DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg dmi_iconRequest;
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::IfBlock1::else::else::_L1 */
  static DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg _L15_IfBlock1;
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::dmi_iconRequest */
  static DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg _2_dmi_iconRequest;
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::IfBlock1::else::then::_L5 */
  static DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg _L5_IfBlock1;
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::IfBlock1::else::then::_L4 */
  static DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg _L4_IfBlock1;
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::IfBlock1::else::then::_L3 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L34_IfBlock1;
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::dmi_iconRequest */
  static DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg _3_dmi_iconRequest;
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::loc_brakeCommand */
  static Brake_command_T_TIU_Types_Pkg last_loc_brakeCommand;
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::applyBrake */
  static kcg_bool applyBrake;
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::releaseBrake */
  static kcg_bool releaseBrake;
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::changeBrakeCommand */
  static kcg_bool changeBrakeCommand;
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::_L3 */
  static Brake_command_T_TIU_Types_Pkg _L3;
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::_L4 */
  static kcg_bool _L4;
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::_L5 */
  static M_brake_signal_command_T_TIU_Types_Pkg _L5;
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::_L6 */
  static kcg_bool _L6;
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::_L7 */
  static M_brake_signal_command_T_TIU_Types_Pkg _L7;
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::_L8 */
  static kcg_bool _L8;
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::_L12 */
  static kcg_bool _L12;
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::_L11 */
  static M_brake_signal_command_T_TIU_Types_Pkg _L11;
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::_L10 */
  static M_brake_signal_command_T_TIU_Types_Pkg _L10;
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::_L9 */
  static kcg_bool _L9;
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::_L14 */
  static Brake_command_T_TIU_Types_Pkg _L14;
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::_L15 */
  static Brake_command_T_TIU_Types_Pkg _L15;
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::_L16 */
  static M_brake_signal_command_T_TIU_Types_Pkg _L16;
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::_L18 */
  static Brake_command_T_TIU_Types_Pkg _L18;
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::_L17 */
  static M_brake_signal_command_T_TIU_Types_Pkg _L17;
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::_L19 */
  static kcg_bool _L19;
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::_L22 */
  static kcg_bool _L22;
  /* manage_DMI_Output_Pkg::sendBrakesToDMI::_L23 */
  static kcg_bool _L23;
  
  kcg_copy_Brake_command_T_TIU_Types_Pkg(&_L3, brakeCommand);
  _L4 = _L3.valid;
  _L5 = _L3.m_emergencybrake_cm;
  _L7 = apply_brake_TIU_Types_Pkg;
  _L6 = _L7 == _L5;
  /* last_init_ck_loc_brakeCommand */ if (outC->init) {
    kcg_copy_Brake_command_T_TIU_Types_Pkg(
      &last_loc_brakeCommand,
      (Brake_command_T_TIU_Types_Pkg *)
        &cInitBrakeCommand_manage_DMI_Output_Pkg);
  }
  else {
    kcg_copy_Brake_command_T_TIU_Types_Pkg(
      &last_loc_brakeCommand,
      &outC->loc_brakeCommand);
  }
  kcg_copy_Brake_command_T_TIU_Types_Pkg(&_L14, brakeCommand);
  kcg_copy_Brake_command_T_TIU_Types_Pkg(&outC->loc_brakeCommand, &_L14);
  kcg_copy_Brake_command_T_TIU_Types_Pkg(&_L15, &outC->loc_brakeCommand);
  _L16 = _L15.m_emergencybrake_cm;
  kcg_copy_Brake_command_T_TIU_Types_Pkg(&_L18, &last_loc_brakeCommand);
  _L17 = _L18.m_emergencybrake_cm;
  _L19 = _L16 != _L17;
  changeBrakeCommand = _L19;
  _L22 = changeBrakeCommand;
  _L8 = _L22 & _L6 & _L4;
  applyBrake = _L8;
  _L10 = _L3.m_emergencybrake_cm;
  _L11 = release_brake_TIU_Types_Pkg;
  _L9 = _L10 == _L11;
  _L23 = changeBrakeCommand;
  _L12 = _L4 & _L9 & _L23;
  releaseBrake = _L12;
  IfBlock1_clock = applyBrake;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(
      &_L1_IfBlock1,
      (DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg *)
        &cIconRequestEB_manage_DMI_Output_Pkg);
    _L3_IfBlock1 = inSystemTime;
    kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(
      &_L2_IfBlock1,
      &_L1_IfBlock1);
    if (kcg_true) {
      _L2_IfBlock1.system_clock = _L3_IfBlock1;
    }
    kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(
      &_1_dmi_iconRequest,
      &_L2_IfBlock1);
    kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->dmi_iconRequest,
      &_1_dmi_iconRequest);
  }
  else {
    else_clock_IfBlock1 = releaseBrake;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(
        &_L4_IfBlock1,
        (DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cIconClearEB_manage_DMI_Output_Pkg);
      _L34_IfBlock1 = inSystemTime;
      kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(
        &_L5_IfBlock1,
        &_L4_IfBlock1);
      if (kcg_true) {
        _L5_IfBlock1.system_clock = _L34_IfBlock1;
      }
      kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(
        &_3_dmi_iconRequest,
        &_L5_IfBlock1);
      kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(
        &dmi_iconRequest,
        &_3_dmi_iconRequest);
    }
    else {
      kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(
        &_L15_IfBlock1,
        (DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg *)
          &cEmptyIconRequest_manage_DMI_Output_Pkg);
      kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(
        &_2_dmi_iconRequest,
        &_L15_IfBlock1);
      kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(
        &dmi_iconRequest,
        &_2_dmi_iconRequest);
    }
    kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->dmi_iconRequest,
      &dmi_iconRequest);
  }
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** sendBrakesToDMI_manage_DMI_Output_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

