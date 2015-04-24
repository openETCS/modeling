/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "sendDynamic_manage_DMI_Output_Pkg.h"

/* manage_DMI_Output_Pkg::sendDynamic */
void sendDynamic_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::sendDynamic::inSystemTime */ T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* manage_DMI_Output_Pkg::sendDynamic::inOdometry */ odometry_T_Obu_BasicTypes_Pkg *inOdometry,
  /* manage_DMI_Output_Pkg::sendDynamic::inTrainPosition */ trainPosition_T_TrainPosition_Types_Pck *inTrainPosition,
  /* manage_DMI_Output_Pkg::sendDynamic::inSpeedSupervision */ speedSupervisionForDMI_T_DMI_Types_Pkg *inSpeedSupervision,
  /* manage_DMI_Output_Pkg::sendDynamic::inModeAndLevel */ ModeAndLevelStatus_T_BG_Types_Pkg *inModeAndLevel,
  /* manage_DMI_Output_Pkg::sendDynamic::inNationalValues */ nationValuesForDMI_T_DMI_Types_Pkg *inNationalValues,
  /* manage_DMI_Output_Pkg::sendDynamic::inMovementAuthority */ movementAuthorityForDMI_T_DMI_Types_Pkg *inMovementAuthority,
  /* manage_DMI_Output_Pkg::sendDynamic::inMorePositions */ morePositions_T_DMI_Types_Pkg *inMorePositions,
  /* manage_DMI_Output_Pkg::sendDynamic::inRadioConnectionStatus */ safeRadioConnectionStatus_Type_MoRC_Pck inRadioConnectionStatus,
  /* manage_DMI_Output_Pkg::sendDynamic::packetDynamic */ DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg *packetDynamic)
{
  (*packetDynamic).v_target = (*inSpeedSupervision).targetSpeed;
  (*packetDynamic).v_permitted = (*inSpeedSupervision).permittedSpeed;
  (*packetDynamic).v_release = (*inSpeedSupervision).releaseSpeed;
  (*packetDynamic).location_brake_curve_starting_point =
    (*packetDynamic).v_target;
  (*packetDynamic).valid = kcg_true;
  (*packetDynamic).system_clock = inSystemTime;
  (*packetDynamic).v_train = (*inOdometry).speed.v_safeNominal;
  (*packetDynamic).location_front_train =
    (*inTrainPosition).estimatedFrontEndPosition;
  (*packetDynamic).location_brake_target =
    (*inSpeedSupervision).locationBrakeTarget;
  (*packetDynamic).v_intervention = (*inSpeedSupervision).interventionSpeed;
  (*packetDynamic).mode = (*inModeAndLevel).m_mode;
  (*packetDynamic).level.level = (*inModeAndLevel).m_level;
  (*packetDynamic).level.nid_stm = cnoSTM_manage_DMI_Output_Pkg;
  (*packetDynamic).nid_c = (*inNationalValues).nid_c;
  (*packetDynamic).nid_c_valid = (*inNationalValues).nid_c_valid;
  (*packetDynamic).m_warning = (*inSpeedSupervision).supervisionDisplay;
  (*packetDynamic).sup_status = (*inSpeedSupervision).sup_status;
  (*packetDynamic).location_LOA = (*inMovementAuthority).location_LOA;
  (*packetDynamic).v_LOA = (*inMovementAuthority).v_LOA;
  (*packetDynamic).location_KP_Balise_Track =
    (*inMorePositions).location_KP_Balise_Track;
  (*packetDynamic).distance_KP_Balise = (*inMorePositions).distance_KP_Balise;
  (*packetDynamic).distance_to_TSA = (*inMorePositions).distance_to_TSA;
  (*packetDynamic).radioConnectionStatus = /* 1 */
    mapMoRCtoRadio_CS_manage_DMI_Output_Pkg(inRadioConnectionStatus);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** sendDynamic_manage_DMI_Output_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

