/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "handleTraction_output_to_TIU_API_Pkg.h"

void handleTraction_reset_output_to_TIU_API_Pkg(
  outC_handleTraction_output_to_TIU_API_Pkg *outC)
{
  outC->init = kcg_true;
}

/* output_to_TIU_API_Pkg::handleTraction */
void handleTraction_output_to_TIU_API_Pkg(
  /* output_to_TIU_API_Pkg::handleTraction::in_train_commands */Type_I_train_commands_T_TIU_Types_Pkg *in_train_commands,
  /* output_to_TIU_API_Pkg::handleTraction::inModeLevel */T_Mode_Level_Level_And_Mode_Types_Pkg *inModeLevel,
  outC_handleTraction_output_to_TIU_API_Pkg *outC)
{
  /* output_to_TIU_API_Pkg::handleTraction::tempTractionCutOffStatus */
  static M_traction_cutoff_command_T_TIU_Types_Pkg tempTractionCutOffStatus;
  /* output_to_TIU_API_Pkg::handleTraction::_L8 */
  static M_traction_cutoff_command_T_TIU_Types_Pkg _L8;
  /* output_to_TIU_API_Pkg::handleTraction::_L11 */
  static kcg_bool _L11;
  
  if (outC->init) {
    outC->init = kcg_false;
    _L8 = traction_cutoff_command_not_defined_TIU_Types_Pkg;
  }
  else {
    _L8 = outC->tractionCutOffStatus;
  }
  tempTractionCutOffStatus = /* 1 */
    mapModeToTractionCutOff_output_to_TIU_API_Pkg(inModeLevel);
  _L11 = _L8 != tempTractionCutOffStatus;
  if (_L11) {
    outC->tractionCutOffStatus = tempTractionCutOffStatus;
  }
  else {
    outC->tractionCutOffStatus = _L8;
  }
  kcg_copy_Type_I_train_commands_T_TIU_Types_Pkg(
    &outC->outTrainCommands,
    in_train_commands);
  outC->outTrainCommands.valid = (*in_train_commands).valid | _L11;
  outC->outTrainCommands.m_traction_cutoff_cm = outC->tractionCutOffStatus;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** handleTraction_output_to_TIU_API_Pkg.c
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

