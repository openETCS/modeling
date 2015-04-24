/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalcBrakeCmd_SDM_OutputWrapper.h"

void CalcBrakeCmd_init_SDM_OutputWrapper(
  outC_CalcBrakeCmd_SDM_OutputWrapper *outC)
{
  outC->init = kcg_true;
  outC->trigSB = kcg_true;
  outC->trigEB = kcg_true;
  outC->brakeCmd.m_emergencybrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->brakeCmd.m_servicebrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->brakeCmd.valid = kcg_true;
}


void CalcBrakeCmd_reset_SDM_OutputWrapper(
  outC_CalcBrakeCmd_SDM_OutputWrapper *outC)
{
  outC->init = kcg_true;
}

/* SDM_OutputWrapper::CalcBrakeCmd */
void CalcBrakeCmd_SDM_OutputWrapper(
  /* SDM_OutputWrapper::CalcBrakeCmd::triggeredEB */ kcg_bool triggeredEB,
  /* SDM_OutputWrapper::CalcBrakeCmd::triggeredSB */ kcg_bool triggeredSB,
  /* SDM_OutputWrapper::CalcBrakeCmd::revokedEB */ kcg_bool revokedEB,
  /* SDM_OutputWrapper::CalcBrakeCmd::revokedSB */ kcg_bool revokedSB,
  outC_CalcBrakeCmd_SDM_OutputWrapper *outC)
{
  kcg_bool tmp1;
  kcg_bool tmp;
  
  outC->brakeCmd.valid = kcg_true;
  if (outC->init) {
    tmp1 = kcg_false;
    outC->init = kcg_false;
    tmp = kcg_false;
  }
  else {
    tmp1 = outC->trigSB;
    tmp = outC->trigEB;
  }
  outC->trigSB = triggeredSB | (!revokedSB & !triggeredSB & tmp1);
  outC->trigEB = (tmp & !revokedEB & !triggeredEB) | triggeredEB;
  if (revokedSB) {
    outC->brakeCmd.m_servicebrake_cm = release_brake_TIU_Types_Pkg;
  }
  else if (outC->trigSB) {
    outC->brakeCmd.m_servicebrake_cm = apply_brake_TIU_Types_Pkg;
  }
  else {
    outC->brakeCmd.m_servicebrake_cm =
      brake_signal_command_not_defined_TIU_Types_Pkg;
  }
  if (revokedEB) {
    outC->brakeCmd.m_emergencybrake_cm = release_brake_TIU_Types_Pkg;
  }
  else if (outC->trigEB) {
    outC->brakeCmd.m_emergencybrake_cm = apply_brake_TIU_Types_Pkg;
  }
  else {
    outC->brakeCmd.m_emergencybrake_cm =
      brake_signal_command_not_defined_TIU_Types_Pkg;
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** CalcBrakeCmd_SDM_OutputWrapper.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

