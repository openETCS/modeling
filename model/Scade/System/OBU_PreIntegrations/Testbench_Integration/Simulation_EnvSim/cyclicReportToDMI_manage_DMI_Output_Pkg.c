/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "cyclicReportToDMI_manage_DMI_Output_Pkg.h"

void cyclicReportToDMI_reset_manage_DMI_Output_Pkg(
  outC_cyclicReportToDMI_manage_DMI_Output_Pkg *outC)
{
  /* 1 */ isSendingNeeded_reset_manage_DMI_Output_Pkg(&outC->Context_1);
}

/* manage_DMI_Output_Pkg::cyclicReportToDMI */
void cyclicReportToDMI_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::incurrentDMIStatus */DMI_EVC_status_T_DMI_Types_Pkg *incurrentDMIStatus,
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::inSystemTime */T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::inOdometry */odometry_T_Obu_BasicTypes_Pkg *inOdometry,
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::inTrainPosition */trainPosition_T_TrainPosition_Types_Pck *inTrainPosition,
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::inSpeedSupervision */speedSupervisionForDMI_T_DMI_Types_Pkg *inSpeedSupervision,
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::inModeAndLevel */T_Mode_Level_Level_And_Mode_Types_Pkg *inModeAndLevel,
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::inNationalValues */nationValuesForDMI_T_DMI_Types_Pkg *inNationalValues,
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::inMovementAuthority */movementAuthorityForDMI_T_DMI_Types_Pkg *inMovementAuthority,
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::inMoRC_status */morcStatus_T_RCM_Session_Types_Pkg *inMoRC_status,
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::inNTC */NID_NTC inNTC,
  outC_cyclicReportToDMI_manage_DMI_Output_Pkg *outC)
{
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::doSendingDynamc */
  static kcg_bool doSendingDynamc;
  
  /* 1 */
  isSendingNeeded_manage_DMI_Output_Pkg(
    inSystemTime,
    incurrentDMIStatus,
    &outC->Context_1);
  doSendingDynamc = outC->Context_1.sendingNeeded | (*inModeAndLevel).newLevel |
    (*inModeAndLevel).newMode;
  if (doSendingDynamc) {
    /* 2 */
    sendDynamic_manage_DMI_Output_Pkg(
      inSystemTime,
      inOdometry,
      inTrainPosition,
      inSpeedSupervision,
      inModeAndLevel,
      inNationalValues,
      inMoRC_status,
      inMovementAuthority,
      inNTC,
      &outC->packetDynamic);
  }
  else {
    kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->packetDynamic,
      (DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg *)
        &cDefaultDynamic_manage_DMI_Output_Pkg);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** cyclicReportToDMI_manage_DMI_Output_Pkg.c
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

