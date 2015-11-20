/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "sendDynamic_manage_DMI_Output_Pkg.h"

/* manage_DMI_Output_Pkg::sendDynamic */
void sendDynamic_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::sendDynamic::inSystemTime */T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* manage_DMI_Output_Pkg::sendDynamic::inOdometry */odometry_T_Obu_BasicTypes_Pkg *inOdometry,
  /* manage_DMI_Output_Pkg::sendDynamic::inTrainPosition */trainPosition_T_TrainPosition_Types_Pck *inTrainPosition,
  /* manage_DMI_Output_Pkg::sendDynamic::inSpeedSupervision */speedSupervisionForDMI_T_DMI_Types_Pkg *inSpeedSupervision,
  /* manage_DMI_Output_Pkg::sendDynamic::inModeAndLevel */T_Mode_Level_Level_And_Mode_Types_Pkg *inModeAndLevel,
  /* manage_DMI_Output_Pkg::sendDynamic::inNationalValues */nationValuesForDMI_T_DMI_Types_Pkg *inNationalValues,
  /* manage_DMI_Output_Pkg::sendDynamic::inMoRC_status */morcStatus_T_RCM_Session_Types_Pkg *inMoRC_status,
  /* manage_DMI_Output_Pkg::sendDynamic::inMovementAuthority */movementAuthorityForDMI_T_DMI_Types_Pkg *inMovementAuthority,
  /* manage_DMI_Output_Pkg::sendDynamic::inNTC */NID_NTC inNTC,
  /* manage_DMI_Output_Pkg::sendDynamic::packetDynamic */DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg *packetDynamic)
{
  /* manage_DMI_Output_Pkg::sendDynamic::_L48 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L48;
  /* manage_DMI_Output_Pkg::sendDynamic::_L47 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L47;
  
  (*packetDynamic).valid = kcg_true;
  (*packetDynamic).system_clock = inSystemTime;
  (*packetDynamic).location_front_train =
    (*inTrainPosition).estimatedFrontEndPosition;
  (*packetDynamic).location_brake_target =
    (*inSpeedSupervision).locationBrakeTarget;
  (*packetDynamic).location_brake_curve_starting_point =
    (*inSpeedSupervision).location_brake_curve_starting_point;
  (*packetDynamic).mode = (*inModeAndLevel).Mode;
  (*packetDynamic).level.level = (*inModeAndLevel).level;
  (*packetDynamic).level.nid_stm = inNTC;
  (*packetDynamic).nid_c = (*inNationalValues).nid_c;
  (*packetDynamic).nid_c_valid = (*inNationalValues).nid_c_valid;
  (*packetDynamic).m_warning = (*inSpeedSupervision).supervisionDisplay;
  (*packetDynamic).sup_status = (*inSpeedSupervision).sup_status;
  (*packetDynamic).location_LOA = (*inMovementAuthority).location_LOA;
  (*packetDynamic).v_LOA = (*inMovementAuthority).v_LOA;
  (*packetDynamic).distanceIndicationPoint =
    (*inSpeedSupervision).distanceIndicationPoint;
  /* 1 */
  calcDistances_manage_DMI_Output_Pkg(
    inTrainPosition,
    &(*packetDynamic).location_KP_Balise_Track,
    &_L47,
    &_L48);
  (*packetDynamic).distance_KP_Balise = _L47;
  (*packetDynamic).distance_to_TSA = _L48;
  (*packetDynamic).v_train = /* 1 */
    convert_cm_s_km_h_manage_DMI_Output_Pkg((*inOdometry).speed.v_safeNominal);
  (*packetDynamic).v_target = /* 2 */
    convert_cm_s_km_h_manage_DMI_Output_Pkg((*inSpeedSupervision).targetSpeed);
  (*packetDynamic).v_permitted = /* 3 */
    convert_cm_s_km_h_manage_DMI_Output_Pkg(
      (*inSpeedSupervision).permittedSpeed);
  (*packetDynamic).v_release = /* 4 */
    convert_cm_s_km_h_manage_DMI_Output_Pkg((*inSpeedSupervision).releaseSpeed);
  (*packetDynamic).v_intervention = /* 5 */
    convert_cm_s_km_h_manage_DMI_Output_Pkg(
      (*inSpeedSupervision).interventionSpeed);
  (*packetDynamic).radioConnectionStatus = /* 1 */
    mapMoRCtoRadio_CS_manage_DMI_Output_Pkg(inMoRC_status);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** sendDynamic_manage_DMI_Output_Pkg.c
** Generation date: 2015-11-20T19:47:08
*************************************************************$ */

