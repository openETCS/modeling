/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalcBrakeCmd_SDM_Commands_Pkg.h"

void CalcBrakeCmd_reset_SDM_Commands_Pkg(
  outC_CalcBrakeCmd_SDM_Commands_Pkg *outC)
{
  outC->init = kcg_true;
}

/* SDM_Commands_Pkg::CalcBrakeCmd */
void CalcBrakeCmd_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::CalcBrakeCmd::in_sdmCmd */SDM_Commands_T_SDM_Types_Pkg *in_sdmCmd,
  /* SDM_Commands_Pkg::CalcBrakeCmd::speeds */Speeds_T_SDM_Types_Pkg *speeds,
  /* SDM_Commands_Pkg::CalcBrakeCmd::NationalValues */P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* SDM_Commands_Pkg::CalcBrakeCmd::TrainData_int */trainData_internal_t_SDM_Types_Pkg *TrainData_int,
  outC_CalcBrakeCmd_SDM_Commands_Pkg *outC)
{
  static kcg_bool tmp;
  /* SDM_Commands_Pkg::CalcBrakeCmd::NoSBinTSM */
  static kcg_bool NoSBinTSM;
  /* SDM_Commands_Pkg::CalcBrakeCmd::SB2EB */
  static kcg_bool SB2EB;
  /* SDM_Commands_Pkg::CalcBrakeCmd::revSB */
  static kcg_bool revSB;
  /* SDM_Commands_Pkg::CalcBrakeCmd::revEB */
  static kcg_bool revEB;
  
  outC->brakeCmd.valid = kcg_true;
  NoSBinTSM = (*NationalValues).q_nvsbtsmperm == Q_NVSBTSMPERM_No;
  tmp = (*in_sdmCmd).sdmType == TSM_SDM_Types_Pkg;
  revEB = ((!NoSBinTSM & tmp) | !tmp) & (*TrainData_int).isSB_CmdAvailable;
  revSB = (*in_sdmCmd).revokedSB & revEB;
  if (outC->init) {
    SB2EB = kcg_false;
  }
  else {
    SB2EB = outC->trigSB;
  }
  outC->trigSB = ((*in_sdmCmd).triggeredSB & revEB) | (SB2EB & !revSB);
  SB2EB = !(*TrainData_int).isSB_CmdAvailable | (NoSBinTSM & tmp);
  revEB = ((*in_sdmCmd).revokedEB | (SB2EB & (*in_sdmCmd).revokedSB)) &
    (((*NationalValues).q_nvemrrls ==
        Q_NVEMRRLS_Revoke_emergency_brake_command_when_permitted_speed_supervision_limit_is_no_longer_exceed) |
      (*speeds).OdoStandStill);
  if (outC->init) {
    outC->init = kcg_false;
    tmp = kcg_false;
  }
  else {
    tmp = outC->trigEB;
  }
  outC->trigEB = (*in_sdmCmd).triggeredEB | (*in_sdmCmd).ebCmd | (SB2EB &
      (*in_sdmCmd).triggeredSB) | (tmp & !revEB);
  if (outC->trigSB) {
    outC->brakeCmd.m_servicebrake_cm = apply_brake_TIU_Types_Pkg;
  }
  else if (revSB) {
    outC->brakeCmd.m_servicebrake_cm = release_brake_TIU_Types_Pkg;
  }
  else {
    outC->brakeCmd.m_servicebrake_cm =
      brake_signal_command_not_defined_TIU_Types_Pkg;
  }
  if (outC->trigEB) {
    outC->brakeCmd.m_emergencybrake_cm = apply_brake_TIU_Types_Pkg;
  }
  else if (revEB) {
    outC->brakeCmd.m_emergencybrake_cm = release_brake_TIU_Types_Pkg;
  }
  else {
    outC->brakeCmd.m_emergencybrake_cm =
      brake_signal_command_not_defined_TIU_Types_Pkg;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CalcBrakeCmd_SDM_Commands_Pkg.c
** Generation date: 2015-11-20T19:47:09
*************************************************************$ */

