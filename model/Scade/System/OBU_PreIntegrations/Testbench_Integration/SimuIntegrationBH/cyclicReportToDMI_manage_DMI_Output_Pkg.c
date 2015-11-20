/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "cyclicReportToDMI_manage_DMI_Output_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void cyclicReportToDMI_init_manage_DMI_Output_Pkg(
  outC_cyclicReportToDMI_manage_DMI_Output_Pkg *outC)
{
  outC->packetDynamic.valid = kcg_true;
  outC->packetDynamic.system_clock = 0;
  outC->packetDynamic.v_train = 0;
  outC->packetDynamic.location_front_train = 0;
  outC->packetDynamic.location_brake_target = 0;
  outC->packetDynamic.v_target = 0;
  outC->packetDynamic.v_permitted = 0;
  outC->packetDynamic.v_release = 0;
  outC->packetDynamic.location_brake_curve_starting_point = 0;
  outC->packetDynamic.v_intervention = 0;
  outC->packetDynamic.mode = M_MODE_Full_Supervision;
  outC->packetDynamic.level.level = M_LEVEL_Level_0;
  outC->packetDynamic.level.nid_stm = 0;
  outC->packetDynamic.nid_c = 0;
  outC->packetDynamic.nid_c_valid = kcg_true;
  outC->packetDynamic.m_warning = supDis_normal_DMI_Types_Pkg;
  outC->packetDynamic.sup_status = CSM_DMI_Types_Pkg;
  outC->packetDynamic.location_LOA = 0;
  outC->packetDynamic.v_LOA = 0;
  outC->packetDynamic.location_KP_Balise_Track = 0;
  outC->packetDynamic.distance_KP_Balise = 0;
  outC->packetDynamic.distance_to_TSA = 0;
  outC->packetDynamic.radioConnectionStatus =
    conn_unknown_API_RadioCommunication_Pkg;
  outC->packetDynamic.distanceIndicationPoint = 0;
  /* 1 */ isSendingNeeded_init_manage_DMI_Output_Pkg(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void cyclicReportToDMI_reset_manage_DMI_Output_Pkg(
  outC_cyclicReportToDMI_manage_DMI_Output_Pkg *outC)
{
  /* 1 */ isSendingNeeded_reset_manage_DMI_Output_Pkg(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* manage_DMI_Output_Pkg::cyclicReportToDMI */
void cyclicReportToDMI_manage_DMI_Output_Pkg(
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::incurrentDMIStatus */ DMI_EVC_status_T_DMI_Types_Pkg *incurrentDMIStatus,
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::inSystemTime */ T_internal_Type_Obu_BasicTypes_Pkg inSystemTime,
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::inOdometry */ odometry_T_Obu_BasicTypes_Pkg *inOdometry,
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::inTrainPosition */ trainPosition_T_TrainPosition_Types_Pck *inTrainPosition,
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::inSpeedSupervision */ speedSupervisionForDMI_T_DMI_Types_Pkg *inSpeedSupervision,
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::inModeAndLevel */ T_Mode_Level_Level_And_Mode_Types_Pkg *inModeAndLevel,
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::inNationalValues */ nationValuesForDMI_T_DMI_Types_Pkg *inNationalValues,
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::inMovementAuthority */ movementAuthorityForDMI_T_DMI_Types_Pkg *inMovementAuthority,
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::inMoRC_status */ morcStatus_T_RCM_Session_Types_Pkg *inMoRC_status,
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::inNTC */ NID_NTC inNTC,
  outC_cyclicReportToDMI_manage_DMI_Output_Pkg *outC)
{
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::packetDynamic */
  static DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg _1_packetDynamic;
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::IfBlock1::then::_L20 */
  static morcStatus_T_RCM_Session_Types_Pkg _L20_IfBlock1;
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::IfBlock1::then::_L19 */
  static NID_NTC _L19_IfBlock1;
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::IfBlock1::then::_L16 */
  static movementAuthorityForDMI_T_DMI_Types_Pkg _L16_IfBlock1;
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::IfBlock1::then::_L15 */
  static nationValuesForDMI_T_DMI_Types_Pkg _L15_IfBlock1;
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::IfBlock1::then::_L14 */
  static T_Mode_Level_Level_And_Mode_Types_Pkg _L14_IfBlock1;
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::IfBlock1::then::_L13 */
  static speedSupervisionForDMI_T_DMI_Types_Pkg _L13_IfBlock1;
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::IfBlock1::then::_L12 */
  static trainPosition_T_TrainPosition_Types_Pck _L12_IfBlock1;
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::IfBlock1::then::_L11 */
  static odometry_T_Obu_BasicTypes_Pkg _L11_IfBlock1;
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::IfBlock1::then::_L10 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L10_IfBlock1;
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::IfBlock1::then::_L1 */
  static DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg _L1_IfBlock1;
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::packetDynamic */
  static DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg packetDynamic;
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::doSendingDynamc */
  static kcg_bool doSendingDynamc;
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::_L1 */
  static kcg_bool _L1;
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::_L2 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L2;
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::_L12 */
  static DMI_EVC_status_T_DMI_Types_Pkg _L12;
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::_L13 */
  static T_Mode_Level_Level_And_Mode_Types_Pkg _L13;
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::_L14 */
  static kcg_bool _L14;
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::_L15 */
  static kcg_bool _L15;
  /* manage_DMI_Output_Pkg::cyclicReportToDMI::_L16 */
  static kcg_bool _L16;
  
  _L2 = inSystemTime;
  kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(&_L12, incurrentDMIStatus);
  /* 1 */ isSendingNeeded_manage_DMI_Output_Pkg(_L2, &_L12, &outC->Context_1);
  _L1 = outC->Context_1.sendingNeeded;
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(&_L13, inModeAndLevel);
  _L14 = _L13.newLevel;
  _L15 = _L13.newMode;
  _L16 = _L1 | _L14 | _L15;
  doSendingDynamc = _L16;
  IfBlock1_clock = doSendingDynamc;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L10_IfBlock1 = inSystemTime;
    kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&_L11_IfBlock1, inOdometry);
    kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
      &_L12_IfBlock1,
      inTrainPosition);
    kcg_copy_speedSupervisionForDMI_T_DMI_Types_Pkg(
      &_L13_IfBlock1,
      inSpeedSupervision);
    kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
      &_L14_IfBlock1,
      inModeAndLevel);
    kcg_copy_nationValuesForDMI_T_DMI_Types_Pkg(
      &_L15_IfBlock1,
      inNationalValues);
    kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&_L20_IfBlock1, inMoRC_status);
    kcg_copy_movementAuthorityForDMI_T_DMI_Types_Pkg(
      &_L16_IfBlock1,
      inMovementAuthority);
    _L19_IfBlock1 = inNTC;
    /* 2 */
    sendDynamic_manage_DMI_Output_Pkg(
      _L10_IfBlock1,
      &_L11_IfBlock1,
      &_L12_IfBlock1,
      &_L13_IfBlock1,
      &_L14_IfBlock1,
      &_L15_IfBlock1,
      &_L20_IfBlock1,
      &_L16_IfBlock1,
      _L19_IfBlock1,
      &_L1_IfBlock1);
    kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg(
      &_1_packetDynamic,
      &_L1_IfBlock1);
    kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->packetDynamic,
      &_1_packetDynamic);
  }
  else {
    kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg(
      &packetDynamic,
      (DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg *)
        &cDefaultDynamic_manage_DMI_Output_Pkg);
    kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg(
      &outC->packetDynamic,
      &packetDynamic);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** cyclicReportToDMI_manage_DMI_Output_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

