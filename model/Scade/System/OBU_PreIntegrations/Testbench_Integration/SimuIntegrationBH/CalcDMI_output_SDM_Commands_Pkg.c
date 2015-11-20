/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CalcDMI_output_SDM_Commands_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void CalcDMI_output_init_SDM_Commands_Pkg(
  outC_CalcDMI_output_SDM_Commands_Pkg *outC)
{
  outC->sdmToDMI.valid = kcg_true;
  outC->sdmToDMI.targetSpeed = 0;
  outC->sdmToDMI.permittedSpeed = 0;
  outC->sdmToDMI.releaseSpeed = 0;
  outC->sdmToDMI.locationBrakeTarget = 0;
  outC->sdmToDMI.location_brake_curve_starting_point = 0;
  outC->sdmToDMI.interventionSpeed = 0;
  outC->sdmToDMI.sup_status = CSM_DMI_Types_Pkg;
  outC->sdmToDMI.supervisionDisplay = supDis_normal_DMI_Types_Pkg;
  outC->sdmToDMI.distanceIndicationPoint = 0;
  /* 2 */ LowerOrHold_init_SDM_Commands_Pkg(&outC->Context_2);
  /* 3 */ LowerOrHold_init_SDM_Commands_Pkg(&outC->Context_3);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void CalcDMI_output_reset_SDM_Commands_Pkg(
  outC_CalcDMI_output_SDM_Commands_Pkg *outC)
{
  /* 2 */ LowerOrHold_reset_SDM_Commands_Pkg(&outC->Context_2);
  /* 3 */ LowerOrHold_reset_SDM_Commands_Pkg(&outC->Context_3);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* SDM_Commands_Pkg::CalcDMI_output */
void CalcDMI_output_SDM_Commands_Pkg(
  /* SDM_Commands_Pkg::CalcDMI_output::in_sdmCmd */ SDM_Commands_T_SDM_Types_Pkg *in_sdmCmd,
  /* SDM_Commands_Pkg::CalcDMI_output::limit_locations */ SDM_Locations_T_SDM_Types_Pkg *limit_locations,
  /* SDM_Commands_Pkg::CalcDMI_output::trainLocations */ trainPosition_T_TrainPosition_Types_Pck *trainLocations,
  /* SDM_Commands_Pkg::CalcDMI_output::mrdt */ Target_T_TargetManagement_types *mrdt,
  outC_CalcDMI_output_SDM_Commands_Pkg *outC)
{
  /* SDM_Commands_Pkg::CalcDMI_output::_L1 */
  static SDM_Commands_T_SDM_Types_Pkg _L1;
  /* SDM_Commands_Pkg::CalcDMI_output::_L20 */
  static speedSupervisionForDMI_T_DMI_Types_Pkg _L20;
  /* SDM_Commands_Pkg::CalcDMI_output::_L21 */
  static SDM_Types_T_SDM_Types_Pkg _L21;
  /* SDM_Commands_Pkg::CalcDMI_output::_L22 */
  static SupervisionStatus_T_SDM_Types_Pkg _L22;
  /* SDM_Commands_Pkg::CalcDMI_output::_L27 */
  static kcg_bool _L27;
  /* SDM_Commands_Pkg::CalcDMI_output::_L28 */
  static SupervisionStatus_T_SDM_Types_Pkg _L28;
  /* SDM_Commands_Pkg::CalcDMI_output::_L32 */
  static kcg_bool _L32;
  /* SDM_Commands_Pkg::CalcDMI_output::_L33 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L33;
  /* SDM_Commands_Pkg::CalcDMI_output::_L34 */
  static kcg_bool _L34;
  /* SDM_Commands_Pkg::CalcDMI_output::_L35 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L35;
  /* SDM_Commands_Pkg::CalcDMI_output::_L38 */
  static V_internal_Type_Obu_BasicTypes_Pkg _L38;
  /* SDM_Commands_Pkg::CalcDMI_output::_L40 */
  static kcg_bool _L40;
  /* SDM_Commands_Pkg::CalcDMI_output::_L41 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L41;
  /* SDM_Commands_Pkg::CalcDMI_output::_L43 */
  static kcg_bool _L43;
  /* SDM_Commands_Pkg::CalcDMI_output::_L44 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L44;
  /* SDM_Commands_Pkg::CalcDMI_output::_L46 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L46;
  /* SDM_Commands_Pkg::CalcDMI_output::_L47 */
  static SDM_Locations_T_SDM_Types_Pkg _L47;
  /* SDM_Commands_Pkg::CalcDMI_output::_L54 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L54;
  /* SDM_Commands_Pkg::CalcDMI_output::_L55 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L55;
  /* SDM_Commands_Pkg::CalcDMI_output::_L56 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L56;
  /* SDM_Commands_Pkg::CalcDMI_output::_L57 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L57;
  /* SDM_Commands_Pkg::CalcDMI_output::_L61 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L61;
  /* SDM_Commands_Pkg::CalcDMI_output::_L63 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L63;
  /* SDM_Commands_Pkg::CalcDMI_output::_L70 */
  static M_SUPERVISION_STATUS_DMI_Types_Pkg _L70;
  /* SDM_Commands_Pkg::CalcDMI_output::_L72 */
  static M_SUPERVISION_STATUS_DMI_Types_Pkg _L72;
  /* SDM_Commands_Pkg::CalcDMI_output::_L73 */
  static M_SUPERVISION_STATUS_DMI_Types_Pkg _L73;
  /* SDM_Commands_Pkg::CalcDMI_output::_L74 */
  static M_SUPERVISION_STATUS_DMI_Types_Pkg _L74;
  /* SDM_Commands_Pkg::CalcDMI_output::_L75 */
  static M_SUPERVISION_STATUS_DMI_Types_Pkg _L75;
  /* SDM_Commands_Pkg::CalcDMI_output::_L76 */
  static M_SupervisionDisplay_T_DMI_Types_Pkg _L76;
  /* SDM_Commands_Pkg::CalcDMI_output::_L77 */
  static M_SupervisionDisplay_T_DMI_Types_Pkg _L77;
  /* SDM_Commands_Pkg::CalcDMI_output::_L78 */
  static M_SupervisionDisplay_T_DMI_Types_Pkg _L78;
  /* SDM_Commands_Pkg::CalcDMI_output::_L79 */
  static M_SupervisionDisplay_T_DMI_Types_Pkg _L79;
  /* SDM_Commands_Pkg::CalcDMI_output::_L80 */
  static M_SupervisionDisplay_T_DMI_Types_Pkg _L80;
  /* SDM_Commands_Pkg::CalcDMI_output::_L81 */
  static M_SupervisionDisplay_T_DMI_Types_Pkg _L81;
  /* SDM_Commands_Pkg::CalcDMI_output::_L82 */
  static M_SupervisionDisplay_T_DMI_Types_Pkg _L82;
  /* SDM_Commands_Pkg::CalcDMI_output::_L83 */
  static M_SUPERVISION_STATUS_DMI_Types_Pkg _L83;
  /* SDM_Commands_Pkg::CalcDMI_output::_L87 */
  static kcg_bool _L87;
  /* SDM_Commands_Pkg::CalcDMI_output::_L88 */
  static M_SUPERVISION_STATUS_DMI_Types_Pkg _L88;
  /* SDM_Commands_Pkg::CalcDMI_output::_L91 */
  static trainPosition_T_TrainPosition_Types_Pck _L91;
  /* SDM_Commands_Pkg::CalcDMI_output::_L90 */
  static Location_T_Obu_BasicTypes_Pkg _L90;
  /* SDM_Commands_Pkg::CalcDMI_output::_L92 */
  static kcg_int _L92;
  /* SDM_Commands_Pkg::CalcDMI_output::_L94 */
  static kcg_int _L94;
  /* SDM_Commands_Pkg::CalcDMI_output::_L98 */
  static kcg_bool _L98;
  /* SDM_Commands_Pkg::CalcDMI_output::_L99 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L99;
  /* SDM_Commands_Pkg::CalcDMI_output::_L102 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L102;
  /* SDM_Commands_Pkg::CalcDMI_output::_L103 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L103;
  /* SDM_Commands_Pkg::CalcDMI_output::_L104 */
  static Target_T_TargetManagement_types _L104;
  /* SDM_Commands_Pkg::CalcDMI_output::_L107 */
  static kcg_bool _L107;
  /* SDM_Commands_Pkg::CalcDMI_output::_L108 */
  static Target_T_TargetManagement_types _L108;
  
  kcg_copy_SDM_Commands_T_SDM_Types_Pkg(&_L1, in_sdmCmd);
  _L22 = _L1.supervisionStatus;
  _L28 = Undefined_Supervision_SDM_Types_Pkg;
  _L27 = _L22 != _L28;
  _L40 = _L1.valid_v_mrdt;
  _L41 = _L1.mrdtSpeed;
  _L38 = cDMIUnknownSpeed_DMI_Types_Pkg;
  /* 1 */ if (_L40) {
    _L54 = _L41;
  }
  else {
    _L54 = _L38;
  }
  _L32 = _L1.valid_v_permitted;
  _L33 = _L1.permittedSpeed;
  kcg_copy_Target_T_TargetManagement_types(&_L108, mrdt);
  /* 3 */ LowerOrHold_SDM_Commands_Pkg(_L33, &_L108, &outC->Context_3);
  _L103 = outC->Context_3.vo;
  /* 2 */ if (_L32) {
    _L55 = _L103;
  }
  else {
    _L55 = _L38;
  }
  _L34 = _L1.valid_v_release;
  _L35 = _L1.releaseSpeed;
  /* 3 */ if (_L34) {
    _L56 = _L35;
  }
  else {
    _L56 = _L38;
  }
  _L46 = _L1.targetDistance;
  kcg_copy_SDM_Locations_T_SDM_Types_Pkg(&_L47, limit_locations);
  _L98 = _L47.Preindication_EBD_location_valid;
  _L61 = _L47.EBD_preindication_location;
  /* 7 */ if (_L98) {
    _L99 = _L61;
  }
  else {
    _L99 = _L38;
  }
  _L43 = _L1.valid_v_sbi;
  _L44 = _L1.sbiSpeed;
  kcg_copy_Target_T_TargetManagement_types(&_L104, mrdt);
  /* 2 */ LowerOrHold_SDM_Commands_Pkg(_L44, &_L104, &outC->Context_2);
  _L102 = outC->Context_2.vo;
  /* 4 */ if (_L43) {
    _L57 = _L102;
  }
  else {
    _L57 = _L38;
  }
  _L21 = _L1.sdmType;
  _L75 = CSM_DMI_Types_Pkg;
  _L74 = RSM_DMI_Types_Pkg;
  _L63 = _L47.d_I_of_V_MRSP;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L91, trainLocations);
  _L90 = _L91.maxSafeFrontEndPostion;
  _L87 = _L63 >= _L90;
  _L83 = PIM_DMI_Types_Pkg;
  _L73 = TSM_DMI_Types_Pkg;
  /* 5 */ if (_L87) {
    _L88 = _L83;
  }
  else {
    _L88 = _L73;
  }
  _L72 = supervision_status_unknown_DMI_Types_Pkg;
  switch (_L21) {
    case CSM_SDM_Types_Pkg :
      _L70 = _L75;
      break;
    case RSM_SDM_Types_Pkg :
      _L70 = _L74;
      break;
    case TSM_SDM_Types_Pkg :
      _L70 = _L88;
      break;
    
    default :
      _L70 = _L72;
  }
  _L77 = supDis_normal_DMI_Types_Pkg;
  _L78 = supDis_indication_DMI_Types_Pkg;
  _L79 = supDis_overspeed_DMI_Types_Pkg;
  _L80 = supDis_warning_DMI_Types_Pkg;
  _L81 = supDis_intervention_DMI_Types_Pkg;
  _L82 = supDis_normal_DMI_Types_Pkg;
  switch (_L22) {
    case Normal_Supervision_SDM_Types_Pkg :
      _L76 = _L77;
      break;
    case Indication_Supervision_SDM_Types_Pkg :
      _L76 = _L78;
      break;
    case Overspeed_Supervision_SDM_Types_Pkg :
      _L76 = _L79;
      break;
    case Warning_Supervision_SDM_Types_Pkg :
      _L76 = _L80;
      break;
    case Intervention_Supervision_SDM_Types_Pkg :
      _L76 = _L81;
      break;
    
    default :
      _L76 = _L82;
  }
  _L107 = _L47.Preindication_EBD_location_valid;
  _L92 = _L63 - _L90;
  /* 6 */ if (_L107) {
    _L94 = _L92;
  }
  else {
    _L94 = _L38;
  }
  _L20.valid = _L27;
  _L20.targetSpeed = _L54;
  _L20.permittedSpeed = _L55;
  _L20.releaseSpeed = _L56;
  _L20.locationBrakeTarget = _L46;
  _L20.location_brake_curve_starting_point = _L99;
  _L20.interventionSpeed = _L57;
  _L20.sup_status = _L70;
  _L20.supervisionDisplay = _L76;
  _L20.distanceIndicationPoint = _L94;
  kcg_copy_speedSupervisionForDMI_T_DMI_Types_Pkg(&outC->sdmToDMI, &_L20);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CalcDMI_output_SDM_Commands_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

