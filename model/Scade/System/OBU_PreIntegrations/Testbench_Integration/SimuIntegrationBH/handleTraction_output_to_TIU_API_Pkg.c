/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "handleTraction_output_to_TIU_API_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void handleTraction_init_output_to_TIU_API_Pkg(
  outC_handleTraction_output_to_TIU_API_Pkg *outC)
{
  outC->init = kcg_true;
  outC->tractionCutOffStatus =
    traction_cutoff_command_not_defined_TIU_Types_Pkg;
  outC->outTrainCommands.valid = kcg_true;
  outC->outTrainCommands.m_pantograph_cm =
    pantograph_command_not_defined_TIU_Types_Pkg;
  outC->outTrainCommands.m_airtightness_cm =
    airtightness_command_not_defined_TIU_Types_Pkg;
  outC->outTrainCommands.m_mainpowerswitch_cm =
    open_main_power_swicth_TIU_Types_Pkg;
  outC->outTrainCommands.m_traction_cutoff_cm =
    traction_cutoff_command_not_defined_TIU_Types_Pkg;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void handleTraction_reset_output_to_TIU_API_Pkg(
  outC_handleTraction_output_to_TIU_API_Pkg *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* output_to_TIU_API_Pkg::handleTraction */
void handleTraction_output_to_TIU_API_Pkg(
  /* output_to_TIU_API_Pkg::handleTraction::in_train_commands */ Type_I_train_commands_T_TIU_Types_Pkg *in_train_commands,
  /* output_to_TIU_API_Pkg::handleTraction::inModeLevel */ T_Mode_Level_Level_And_Mode_Types_Pkg *inModeLevel,
  outC_handleTraction_output_to_TIU_API_Pkg *outC)
{
  /* output_to_TIU_API_Pkg::handleTraction::tractionCutOffStatus */
  static M_traction_cutoff_command_T_TIU_Types_Pkg last_tractionCutOffStatus;
  /* output_to_TIU_API_Pkg::handleTraction::tempTractionCutOffStatus */
  static M_traction_cutoff_command_T_TIU_Types_Pkg tempTractionCutOffStatus;
  /* output_to_TIU_API_Pkg::handleTraction::_L5 */
  static M_traction_cutoff_command_T_TIU_Types_Pkg _L5;
  /* output_to_TIU_API_Pkg::handleTraction::_L7 */
  static T_Mode_Level_Level_And_Mode_Types_Pkg _L7;
  /* output_to_TIU_API_Pkg::handleTraction::_L8 */
  static M_traction_cutoff_command_T_TIU_Types_Pkg _L8;
  /* output_to_TIU_API_Pkg::handleTraction::_L10 */
  static M_traction_cutoff_command_T_TIU_Types_Pkg _L10;
  /* output_to_TIU_API_Pkg::handleTraction::_L11 */
  static kcg_bool _L11;
  /* output_to_TIU_API_Pkg::handleTraction::_L12 */
  static M_traction_cutoff_command_T_TIU_Types_Pkg _L12;
  /* output_to_TIU_API_Pkg::handleTraction::_L13 */
  static M_traction_cutoff_command_T_TIU_Types_Pkg _L13;
  /* output_to_TIU_API_Pkg::handleTraction::_L14 */
  static M_traction_cutoff_command_T_TIU_Types_Pkg _L14;
  /* output_to_TIU_API_Pkg::handleTraction::_L16 */
  static kcg_bool _L16;
  /* output_to_TIU_API_Pkg::handleTraction::_L15 */
  static Type_I_train_commands_T_TIU_Types_Pkg _L15;
  /* output_to_TIU_API_Pkg::handleTraction::_L17 */
  static kcg_bool _L17;
  /* output_to_TIU_API_Pkg::handleTraction::_L18 */
  static Type_I_train_commands_T_TIU_Types_Pkg _L18;
  /* output_to_TIU_API_Pkg::handleTraction::_L19 */
  static Type_I_train_commands_T_TIU_Types_Pkg _L19;
  /* output_to_TIU_API_Pkg::handleTraction::_L20 */
  static Type_I_train_commands_T_TIU_Types_Pkg _L20;
  /* output_to_TIU_API_Pkg::handleTraction::_L21 */
  static M_traction_cutoff_command_T_TIU_Types_Pkg _L21;
  
  kcg_copy_Type_I_train_commands_T_TIU_Types_Pkg(&_L18, in_train_commands);
  kcg_copy_Type_I_train_commands_T_TIU_Types_Pkg(&_L15, in_train_commands);
  _L16 = _L15.valid;
  /* last_init_ck_tractionCutOffStatus */ if (outC->init) {
    last_tractionCutOffStatus =
      traction_cutoff_command_not_defined_TIU_Types_Pkg;
  }
  else {
    last_tractionCutOffStatus = outC->tractionCutOffStatus;
  }
  _L8 = last_tractionCutOffStatus;
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(&_L7, inModeLevel);
  _L5 = /* 1 */ mapModeToTractionCutOff_output_to_TIU_API_Pkg(&_L7);
  tempTractionCutOffStatus = _L5;
  _L10 = tempTractionCutOffStatus;
  _L11 = _L8 != _L10;
  _L17 = _L16 | _L11;
  kcg_copy_Type_I_train_commands_T_TIU_Types_Pkg(&_L19, &_L18);
  if (kcg_true) {
    _L19.valid = _L17;
  }
  _L13 = tempTractionCutOffStatus;
  _L14 = last_tractionCutOffStatus;
  /* 1 */ if (_L11) {
    _L12 = _L13;
  }
  else {
    _L12 = _L14;
  }
  outC->tractionCutOffStatus = _L12;
  _L21 = outC->tractionCutOffStatus;
  kcg_copy_Type_I_train_commands_T_TIU_Types_Pkg(&_L20, &_L19);
  if (kcg_true) {
    _L20.m_traction_cutoff_cm = _L21;
  }
  kcg_copy_Type_I_train_commands_T_TIU_Types_Pkg(
    &outC->outTrainCommands,
    &_L20);
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** handleTraction_output_to_TIU_API_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

