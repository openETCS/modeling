/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
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
  /* manage_DMI_Output_Pkg::sendDynamic::inModeAndLevel */ T_Mode_Level_Level_And_Mode_Types_Pkg *inModeAndLevel,
  /* manage_DMI_Output_Pkg::sendDynamic::inNationalValues */ nationValuesForDMI_T_DMI_Types_Pkg *inNationalValues,
  /* manage_DMI_Output_Pkg::sendDynamic::inMoRC_status */ morcStatus_T_RCM_Session_Types_Pkg *inMoRC_status,
  /* manage_DMI_Output_Pkg::sendDynamic::inMovementAuthority */ movementAuthorityForDMI_T_DMI_Types_Pkg *inMovementAuthority,
  /* manage_DMI_Output_Pkg::sendDynamic::inNTC */ NID_NTC inNTC,
  /* manage_DMI_Output_Pkg::sendDynamic::packetDynamic */ DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg *packetDynamic)
{
  /* manage_DMI_Output_Pkg::sendDynamic::_L1 */
  static DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg _L1;
  /* manage_DMI_Output_Pkg::sendDynamic::_L2 */
  static kcg_bool _L2;
  /* manage_DMI_Output_Pkg::sendDynamic::_L3 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L3;
  /* manage_DMI_Output_Pkg::sendDynamic::_L4 */
  static odometry_T_Obu_BasicTypes_Pkg _L4;
  /* manage_DMI_Output_Pkg::sendDynamic::_L5 */
  static trainPosition_T_TrainPosition_Types_Pck _L5;
  /* manage_DMI_Output_Pkg::sendDynamic::_L6 */
  static speedSupervisionForDMI_T_DMI_Types_Pkg _L6;
  /* manage_DMI_Output_Pkg::sendDynamic::_L7 */
  static T_Mode_Level_Level_And_Mode_Types_Pkg _L7;
  /* manage_DMI_Output_Pkg::sendDynamic::_L8 */
  static nationValuesForDMI_T_DMI_Types_Pkg _L8;
  /* manage_DMI_Output_Pkg::sendDynamic::_L9 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L9;
  /* manage_DMI_Output_Pkg::sendDynamic::_L10 */
  static Location_T_Obu_BasicTypes_Pkg _L10;
  /* manage_DMI_Output_Pkg::sendDynamic::_L11 */
  static V_internal_Type_Obu_BasicTypes_Pkg _L11;
  /* manage_DMI_Output_Pkg::sendDynamic::_L12 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L12;
  /* manage_DMI_Output_Pkg::sendDynamic::_L13 */
  static V_internal_Type_Obu_BasicTypes_Pkg _L13;
  /* manage_DMI_Output_Pkg::sendDynamic::_L15 */
  static V_internal_Type_Obu_BasicTypes_Pkg _L15;
  /* manage_DMI_Output_Pkg::sendDynamic::_L16 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L16;
  /* manage_DMI_Output_Pkg::sendDynamic::_L17 */
  static V_internal_Type_Obu_BasicTypes_Pkg _L17;
  /* manage_DMI_Output_Pkg::sendDynamic::_L18 */
  static M_MODE _L18;
  /* manage_DMI_Output_Pkg::sendDynamic::_L19 */
  static M_LEVEL _L19;
  /* manage_DMI_Output_Pkg::sendDynamic::_L20 */
  static NID_C _L20;
  /* manage_DMI_Output_Pkg::sendDynamic::_L22 */
  static kcg_bool _L22;
  /* manage_DMI_Output_Pkg::sendDynamic::_L21 */
  static M_SUPERVISION_STATUS_DMI_Types_Pkg _L21;
  /* manage_DMI_Output_Pkg::sendDynamic::_L23 */
  static speedSupervisionForDMI_T_DMI_Types_Pkg _L23;
  /* manage_DMI_Output_Pkg::sendDynamic::_L24 */
  static movementAuthorityForDMI_T_DMI_Types_Pkg _L24;
  /* manage_DMI_Output_Pkg::sendDynamic::_L25 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L25;
  /* manage_DMI_Output_Pkg::sendDynamic::_L26 */
  static V_internal_Type_Obu_BasicTypes_Pkg _L26;
  /* manage_DMI_Output_Pkg::sendDynamic::_L35 */
  static connectionStatusRadioUnit_T_API_RadioCommunication_Pkg _L35;
  /* manage_DMI_Output_Pkg::sendDynamic::_L36 */
  static M_SupervisionDisplay_T_DMI_Types_Pkg _L36;
  /* manage_DMI_Output_Pkg::sendDynamic::_L43 */
  static DMI_level_T_DMI_Types_Pkg _L43;
  /* manage_DMI_Output_Pkg::sendDynamic::_L45 */
  static NID_NTC _L45;
  /* manage_DMI_Output_Pkg::sendDynamic::_L48 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L48;
  /* manage_DMI_Output_Pkg::sendDynamic::_L47 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L47;
  /* manage_DMI_Output_Pkg::sendDynamic::_L46 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L46;
  /* manage_DMI_Output_Pkg::sendDynamic::_L49 */
  static trainPosition_T_TrainPosition_Types_Pck _L49;
  /* manage_DMI_Output_Pkg::sendDynamic::_L74 */
  static speedSupervisionForDMI_T_DMI_Types_Pkg _L74;
  /* manage_DMI_Output_Pkg::sendDynamic::_L73 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L73;
  /* manage_DMI_Output_Pkg::sendDynamic::_L75 */
  static V_internal_Type_Obu_BasicTypes_Pkg _L75;
  /* manage_DMI_Output_Pkg::sendDynamic::_L76 */
  static V_internal_Type_Obu_BasicTypes_Pkg _L76;
  /* manage_DMI_Output_Pkg::sendDynamic::_L77 */
  static V_internal_Type_Obu_BasicTypes_Pkg _L77;
  /* manage_DMI_Output_Pkg::sendDynamic::_L78 */
  static V_internal_Type_Obu_BasicTypes_Pkg _L78;
  /* manage_DMI_Output_Pkg::sendDynamic::_L79 */
  static V_internal_Type_Obu_BasicTypes_Pkg _L79;
  /* manage_DMI_Output_Pkg::sendDynamic::_L80 */
  static morcStatus_T_RCM_Session_Types_Pkg _L80;
  
  _L2 = kcg_true;
  _L3 = inSystemTime;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&_L4, inOdometry);
  _L9 = _L4.speed.v_safeNominal;
  _L75 = /* 1 */ convert_cm_s_km_h_manage_DMI_Output_Pkg(_L9);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L5, inTrainPosition);
  _L10 = _L5.estimatedFrontEndPosition;
  kcg_copy_speedSupervisionForDMI_T_DMI_Types_Pkg(&_L6, inSpeedSupervision);
  _L12 = _L6.locationBrakeTarget;
  _L11 = _L6.targetSpeed;
  _L76 = /* 2 */ convert_cm_s_km_h_manage_DMI_Output_Pkg(_L11);
  _L13 = _L6.permittedSpeed;
  _L77 = /* 3 */ convert_cm_s_km_h_manage_DMI_Output_Pkg(_L13);
  _L15 = _L6.releaseSpeed;
  _L78 = /* 4 */ convert_cm_s_km_h_manage_DMI_Output_Pkg(_L15);
  _L16 = _L6.location_brake_curve_starting_point;
  _L17 = _L6.interventionSpeed;
  _L79 = /* 5 */ convert_cm_s_km_h_manage_DMI_Output_Pkg(_L17);
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(&_L7, inModeAndLevel);
  _L18 = _L7.Mode;
  _L19 = _L7.level;
  _L45 = inNTC;
  _L43.level = _L19;
  _L43.nid_stm = _L45;
  kcg_copy_nationValuesForDMI_T_DMI_Types_Pkg(&_L8, inNationalValues);
  _L20 = _L8.nid_c;
  _L22 = _L8.nid_c_valid;
  kcg_copy_speedSupervisionForDMI_T_DMI_Types_Pkg(&_L23, inSpeedSupervision);
  _L36 = _L23.supervisionDisplay;
  _L21 = _L23.sup_status;
  kcg_copy_movementAuthorityForDMI_T_DMI_Types_Pkg(&_L24, inMovementAuthority);
  _L25 = _L24.location_LOA;
  _L26 = _L24.v_LOA;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L49, inTrainPosition);
  /* 1 */ calcDistances_manage_DMI_Output_Pkg(&_L49, &_L46, &_L47, &_L48);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&_L80, inMoRC_status);
  _L35 = /* 1 */ mapMoRCtoRadio_CS_manage_DMI_Output_Pkg(&_L80);
  kcg_copy_speedSupervisionForDMI_T_DMI_Types_Pkg(&_L74, inSpeedSupervision);
  _L73 = _L74.distanceIndicationPoint;
  _L1.valid = _L2;
  _L1.system_clock = _L3;
  _L1.v_train = _L75;
  _L1.location_front_train = _L10;
  _L1.location_brake_target = _L12;
  _L1.v_target = _L76;
  _L1.v_permitted = _L77;
  _L1.v_release = _L78;
  _L1.location_brake_curve_starting_point = _L16;
  _L1.v_intervention = _L79;
  _L1.mode = _L18;
  kcg_copy_DMI_level_T_DMI_Types_Pkg(&_L1.level, &_L43);
  _L1.nid_c = _L20;
  _L1.nid_c_valid = _L22;
  _L1.m_warning = _L36;
  _L1.sup_status = _L21;
  _L1.location_LOA = _L25;
  _L1.v_LOA = _L26;
  _L1.location_KP_Balise_Track = _L46;
  _L1.distance_KP_Balise = _L47;
  _L1.distance_to_TSA = _L48;
  _L1.radioConnectionStatus = _L35;
  _L1.distanceIndicationPoint = _L73;
  kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg(packetDynamic, &_L1);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** sendDynamic_manage_DMI_Output_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

