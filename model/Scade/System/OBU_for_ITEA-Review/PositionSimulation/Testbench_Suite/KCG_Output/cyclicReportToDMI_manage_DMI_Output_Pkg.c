/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "cyclicReportToDMI_manage_DMI_Output_Pkg.h"

void cyclicReportToDMI_init_manage_DMI_Output_Pkg(
  outC_cyclicReportToDMI_manage_DMI_Output_Pkg *outC)
{
  outC->packetDynamic.radioConnectionStatus =
    conn_unknown_API_RadioCommunication_Pkg;
  outC->packetDynamic.distance_to_TSA = 0;
  outC->packetDynamic.distance_KP_Balise = 0;
  outC->packetDynamic.location_KP_Balise_Track = 0;
  outC->packetDynamic.v_LOA = 0;
  outC->packetDynamic.location_LOA = 0;
  outC->packetDynamic.sup_status = CSM_DMI_Types_Pkg;
  outC->packetDynamic.m_warning = supDis_normal_DMI_Types_Pkg;
  outC->packetDynamic.nid_c_valid = kcg_true;
  outC->packetDynamic.nid_c = 0;
  outC->packetDynamic.level.nid_stm = 0;
  outC->packetDynamic.level.level = M_LEVEL_Level_0;
  outC->packetDynamic.mode = M_MODE_Full_Supervision;
  outC->packetDynamic.v_intervention = 0;
  outC->packetDynamic.location_brake_curve_starting_point = 0;
  outC->packetDynamic.v_release = 0;
  outC->packetDynamic.v_permitted = 0;
  outC->packetDynamic.v_target = 0;
  outC->packetDynamic.location_brake_target = 0;
  outC->packetDynamic.location_front_train = 0;
  outC->packetDynamic.v_train = 0;
  outC->packetDynamic.system_clock = 0;
  outC->packetDynamic.valid = kcg_true;
  isSendingNeeded_init_manage_DMI_Output_Pkg(&outC->Context_1);
}


void cyclicReportToDMI_reset_manage_DMI_Output_Pkg(
  outC_cyclicReportToDMI_manage_DMI_Output_Pkg *outC)
{
  /* 1 */ isSendingNeeded_reset_manage_DMI_Output_Pkg(&outC->Context_1);
}

/* manage_DMI_Output_Pkg::cyclicReportToDMI */
void cyclicReportToDMI_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::incurrentDMIStatus */ DMI_EVC_status_T_DMI_Types_Pkg *incurrentDMIStatus,
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::inSystemTime */ T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::inOdometry */ odometry_T_Obu_BasicTypes_Pkg *inOdometry,
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::inTrainPosition */ trainPosition_T_TrainPosition_Types_Pck *inTrainPosition,
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::inSpeedSupervision */ speedSupervisionForDMI_T_DMI_Types_Pkg *inSpeedSupervision,
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::inModeAndLevel */ ModeAndLevelStatus_T_BG_Types_Pkg *inModeAndLevel,
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::inNationalValues */ nationValuesForDMI_T_DMI_Types_Pkg *inNationalValues,
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::inMovementAuthority */ movementAuthorityForDMI_T_DMI_Types_Pkg *inMovementAuthority,
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::inMorePositions */ morePositions_T_DMI_Types_Pkg *inMorePositions,
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::inRadioConnectionStatus */ safeRadioConnectionStatus_Type_MoRC_Pck inRadioConnectionStatus,
  outC_cyclicReportToDMI_manage_DMI_Output_Pkg *outC)
{
  /* 1 */
  isSendingNeeded_manage_DMI_Output_Pkg(
    inSystemTime,
    incurrentDMIStatus,
    &outC->Context_1);
  if (outC->Context_1.sendingNeeded) {
    /* 2 */
    sendDynamic_manage_DMI_Output_Pkg(
      inSystemTime,
      inOdometry,
      inTrainPosition,
      inSpeedSupervision,
      inModeAndLevel,
      inNationalValues,
      inMovementAuthority,
      inMorePositions,
      inRadioConnectionStatus,
      &outC->packetDynamic);
  }
  else {
    kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->packetDynamic,
      (DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg *)
        &cDefaultDynamic_manage_DMI_Output_Pkg);
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** cyclicReportToDMI_manage_DMI_Output_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

