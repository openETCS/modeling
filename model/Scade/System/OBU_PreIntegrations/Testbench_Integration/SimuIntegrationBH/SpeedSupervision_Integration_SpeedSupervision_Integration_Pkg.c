/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void SpeedSupervision_Integration_init_SpeedSupervision_Integration_Pkg(
  outC_SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg *outC)
{
  outC->Target_Speed_Reached = kcg_true;
  outC->EOA_overpassed = kcg_true;
  outC->brakeCmd.valid = kcg_true;
  outC->brakeCmd.m_servicebrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->brakeCmd.m_emergencybrake_cm =
    brake_signal_command_not_defined_TIU_Types_Pkg;
  outC->sdmCommands.valid = kcg_true;
  outC->sdmCommands.estimatedSpeed = 0;
  outC->sdmCommands.valid_v_est = kcg_true;
  outC->sdmCommands.permittedSpeed = 0;
  outC->sdmCommands.valid_v_permitted = kcg_true;
  outC->sdmCommands.releaseSpeed = 0;
  outC->sdmCommands.valid_v_release = kcg_true;
  outC->sdmCommands.mrdtSpeed = 0;
  outC->sdmCommands.valid_v_mrdt = kcg_true;
  outC->sdmCommands.sbiSpeed = 0;
  outC->sdmCommands.valid_v_sbi = kcg_true;
  outC->sdmCommands.targetDistance = 0;
  outC->sdmCommands.valid_targetDistance = kcg_true;
  outC->sdmCommands.supervisionStatus = Normal_Supervision_SDM_Types_Pkg;
  outC->sdmCommands.sdmType = CSM_SDM_Types_Pkg;
  outC->sdmCommands.revokedSupervisionStatus = Normal_Supervision_SDM_Types_Pkg;
  outC->sdmCommands.triggeredSupervisionStatus =
    Normal_Supervision_SDM_Types_Pkg;
  outC->sdmCommands.revokedSB = kcg_true;
  outC->sdmCommands.triggeredSB = kcg_true;
  outC->sdmCommands.revokedEB = kcg_true;
  outC->sdmCommands.triggeredEB = kcg_true;
  outC->sdmCommands.revokedTCO = kcg_true;
  outC->sdmCommands.triggeredTCO = kcg_true;
  outC->sdmCommands.ebCmd = kcg_true;
  outC->target.targetType = EoA_TargetManagement_types;
  outC->target.distance = 0;
  outC->target.speed = 0;
  outC->target.valid = kcg_true;
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
  /* 1 */ ProbeSDM_init_EnvSim(&outC->_4_Context_1);
  /* 1 */ SDM_Commands_init_SDM_Commands_Pkg(&outC->_3_Context_1);
  /* 1 */
  CalcBrakingCurves_integration_init_CalcBrakingCurves_Pkg(&outC->_2_Context_1);
  /* 1 */ AGradient_init_SDM_GradientAcceleration_Pkg(&outC->_1_Context_1);
  /* 2 */ TargetManagement_init_TargetManagement_pkg(&outC->Context_2);
  /* 1 */ SDM_InputWrapper_init_SDM_Input_Wrappers(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SpeedSupervision_Integration_reset_SpeedSupervision_Integration_Pkg(
  outC_SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg *outC)
{
  /* 1 */ ProbeSDM_reset_EnvSim(&outC->_4_Context_1);
  /* 1 */ SDM_Commands_reset_SDM_Commands_Pkg(&outC->_3_Context_1);
  /* 1 */
  CalcBrakingCurves_integration_reset_CalcBrakingCurves_Pkg(
    &outC->_2_Context_1);
  /* 1 */ AGradient_reset_SDM_GradientAcceleration_Pkg(&outC->_1_Context_1);
  /* 2 */ TargetManagement_reset_TargetManagement_pkg(&outC->Context_2);
  /* 1 */ SDM_InputWrapper_reset_SDM_Input_Wrappers(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration */
void SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg(
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::NationalValues */ P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::TrainPosition */ trainPosition_T_TrainPosition_Types_Pck *TrainPosition,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::trainProps */ trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::trainData */ trainData_T_TIU_Types_Pkg *trainData,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::dataFromTrackAtlas */ DataForSupervision_nextGen_t_TrackAtlasTypes *dataFromTrackAtlas,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::Service_brake_requested_by_modes_and_levels */ kcg_bool Service_brake_requested_by_modes_and_levels,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::Emergency_brake_requested_by_modes_and_levels */ kcg_bool Emergency_brake_requested_by_modes_and_levels,
  outC_SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg *outC)
{
  static kcg_bool noname;
  static kcg_bool _1_noname;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::targetCollection */
  static TargetCollection_T_TargetManagement_types targetCollection;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::Trainlocations_internal */
  static TrainLocations_real_T_SDM_Types_Pkg Trainlocations_internal;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::MRSP_internal */
  static MRSP_internal_T_TargetManagement_types MRSP_internal;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::MA_internal */
  static MA_section_real_T_TargetManagement_types MA_internal;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::trainData_extras */
  static trainData_internal_t_SDM_Types_Pkg trainData_extras;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::T_b */
  static t_Brake_t_SDMModelPkg T_b;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::MRDT */
  static Target_T_TargetManagement_types MRDT;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::CurveCollection */
  static CurveCollection_T_CalcBrakingCurves_types CurveCollection;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L3 */
  static speedSupervisionForDMI_T_DMI_Types_Pkg _L3;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L21 */
  static P3_NationalValues_T_Packet_Types_Pkg _L21;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L22 */
  static trainPosition_T_TrainPosition_Types_Pck _L22;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L24 */
  static odometry_T_Obu_BasicTypes_Pkg _L24;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L34 */
  static trainProperties_T_TrainPosition_Types_Pck _L34;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L43 */
  static CurveCollection_T_CalcBrakingCurves_types _L43;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L48 */
  static TrainLocations_real_T_SDM_Types_Pkg _L48;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L54 */
  static MRSP_internal_T_TargetManagement_types _L54;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L55 */
  static MA_section_real_T_TargetManagement_types _L55;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L58 */
  static kcg_bool _L58;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L59 */
  static kcg_bool _L59;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L66 */
  static kcg_bool _L66;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L65 */
  static SDM_Commands_T_SDM_Types_Pkg _L65;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L81 */
  static TargetCollection_T_TargetManagement_types _L81;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L86 */
  static TrainLocations_real_T_SDM_Types_Pkg _L86;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L94 */
  static kcg_int _L94;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L96 */
  static TrainLocations_real_T_SDM_Types_Pkg _L96;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L97 */
  static TargetCollection_T_TargetManagement_types _L97;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L98 */
  static MRSP_internal_T_TargetManagement_types _L98;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L102 */
  static TargetCollection_T_TargetManagement_types _L102;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L114 */
  static kcg_bool _L114;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L113 */
  static Target_T_TargetManagement_types _L113;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L112 */
  static SDM_Locations_T_SDM_Types_Pkg _L112;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L111 */
  static Speeds_T_SDM_Types_Pkg _L111;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L139 */
  static t_Brake_t_SDMModelPkg _L139;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L141 */
  static P3_NationalValues_T_Packet_Types_Pkg _L141;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L143 */
  static trainData_T_TIU_Types_Pkg _L143;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L162 */
  static DataForSupervision_nextGen_t_TrackAtlasTypes _L162;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L163 */
  static kcg_bool _L163;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L185 */
  static trainData_internal_t_SDM_Types_Pkg _L185;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L187 */
  static ASafe_T_CalcBrakingCurves_types _L187;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L186 */
  static ASafe_T_CalcBrakingCurves_types _L186;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L189 */
  static GradientProfile_real_t_SDM_GradientAcceleration_types _L189;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L193 */
  static trainData_T_TIU_Types_Pkg _L193;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L190 */
  static A_gradient_t_SDM_GradientAcceleration_types _L190;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L196 */
  static TargetCollection_T_TargetManagement_types _L196;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L206 */
  static ASafe_T_CalcBrakingCurves_types _L206;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L208 */
  static ASafe_T_CalcBrakingCurves_types _L208;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L210 */
  static kcg_bool _L210;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L211 */
  static kcg_bool _L211;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L212 */
  static kcg_bool _L212;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L214 */
  static Brake_command_T_TIU_Types_Pkg _L214;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L215 */
  static P3_NationalValues_T_Packet_Types_Pkg _L215;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L216 */
  static MA_section_real_T_TargetManagement_types _L216;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L222 */
  static trainData_internal_t_SDM_Types_Pkg _L222;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L223 */
  static trainData_internal_t_SDM_Types_Pkg _L223;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L225 */
  static t_Brake_t_SDMModelPkg _L225;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L226 */
  static kcg_bool _L226;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L227 */
  static Q_NVSBFBPERM _L227;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L228 */
  static P3_NationalValues_T_Packet_Types_Pkg _L228;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L229 */
  static kcg_bool _L229;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L230 */
  static kcg_bool _L230;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L232 */
  static kcg_bool _L232;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L233 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L233;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L239 */
  static trainPosition_T_TrainPosition_Types_Pck _L239;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L240 */
  static kcg_bool _L240;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L241 */
  static P3_NationalValues_T_Packet_Types_Pkg _L241;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L242 */
  static odometry_T_Obu_BasicTypes_Pkg _L242;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L243 */
  static trainPosition_T_TrainPosition_Types_Pck _L243;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L244 */
  static trainData_T_TIU_Types_Pkg _L244;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L246 */
  static DataForSupervision_nextGen_t_TrackAtlasTypes _L246;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L247 */
  static kcg_bool _L247;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L250 */
  static Target_T_TargetManagement_types _L250;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L256 */
  static Target_T_TargetManagement_types _L256;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L255 */
  static TargetCollection_T_TargetManagement_types _L255;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L254 */
  static CurveCollection_T_CalcBrakingCurves_types _L254;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L257 */
  static kcg_bool _L257;
  
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L22, TrainPosition);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&_L34, trainProps);
  kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes(
    &_L162,
    dataFromTrackAtlas);
  /* 1 */
  SDM_InputWrapper_SDM_Input_Wrappers(&_L22, &_L34, &_L162, &outC->Context_1);
  kcg_copy_MRSP_internal_T_TargetManagement_types(
    &_L54,
    &outC->Context_1.mrsp_out);
  _L59 = outC->Context_1.mrsp_update_out;
  kcg_copy_MA_section_real_T_TargetManagement_types(
    &_L55,
    &outC->Context_1.ma_out);
  _L58 = outC->Context_1.ma_update_out;
  kcg_copy_TrainLocations_real_T_SDM_Types_Pkg(
    &_L48,
    &outC->Context_1.trainLocations);
  kcg_copy_GradientProfile_real_t_SDM_GradientAcceleration_types(
    &_L189,
    &outC->Context_1.gp_out);
  _L163 = outC->Context_1.gp_update_out;
  _L233 = outC->Context_1.offsetAntennaL1;
  /* 2 */
  TargetManagement_TargetManagement_pkg(
    &_L54,
    _L59,
    &_L55,
    _L58,
    &_L48,
    &outC->Context_2);
  kcg_copy_TargetCollection_T_TargetManagement_types(
    &_L81,
    &outC->Context_2.targetCollection);
  kcg_copy_TargetCollection_T_TargetManagement_types(&targetCollection, &_L81);
  kcg_copy_TargetCollection_T_TargetManagement_types(&_L102, &targetCollection);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L239, TrainPosition);
  kcg_copy_MRSP_internal_T_TargetManagement_types(&MRSP_internal, &_L54);
  kcg_copy_MRSP_internal_T_TargetManagement_types(&_L98, &MRSP_internal);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&_L24, odometry);
  kcg_copy_TrainLocations_real_T_SDM_Types_Pkg(&Trainlocations_internal, &_L48);
  kcg_copy_TrainLocations_real_T_SDM_Types_Pkg(&_L96, &Trainlocations_internal);
  kcg_copy_TargetCollection_T_TargetManagement_types(&_L97, &targetCollection);
  kcg_copy_TrainLocations_real_T_SDM_Types_Pkg(&_L86, &Trainlocations_internal);
  kcg_copy_trainData_T_TIU_Types_Pkg(&_L143, trainData);
  kcg_copy_P3_NationalValues_T_Packet_Types_Pkg(&_L21, NationalValues);
  /* 1 */ ABrakeFactory_SDMModelPkg(&_L143, &_L21, &_L139, &_L186, &_L187);
  kcg_copy_trainData_T_TIU_Types_Pkg(&_L193, trainData);
  kcg_copy_TargetCollection_T_TargetManagement_types(&_L196, &targetCollection);
  /* 1 */
  AGradient_SDM_GradientAcceleration_Pkg(
    &_L48,
    &_L189,
    _L163,
    &_L193,
    &_L196,
    &outC->_1_Context_1);
  kcg_copy_A_gradient_t_SDM_GradientAcceleration_types(
    &_L190,
    &outC->_1_Context_1.A_gradient);
  /* 3 */ addGradient_SDMModelPkg(&_L186, &_L190, &_L208);
  /* 1 */ addGradient_SDMModelPkg(&_L187, &_L190, &_L206);
  /* 1 */
  CalcBrakingCurves_integration_CalcBrakingCurves_Pkg(
    &_L86,
    &_L81,
    &_L208,
    &_L206,
    &outC->_2_Context_1);
  kcg_copy_CurveCollection_T_CalcBrakingCurves_types(
    &_L43,
    &outC->_2_Context_1.curveCollection);
  kcg_copy_MA_section_real_T_TargetManagement_types(&MA_internal, &_L55);
  kcg_copy_MA_section_real_T_TargetManagement_types(&_L216, &MA_internal);
  kcg_copy_t_Brake_t_SDMModelPkg(&T_b, &_L139);
  kcg_copy_t_Brake_t_SDMModelPkg(&_L225, &T_b);
  kcg_copy_P3_NationalValues_T_Packet_Types_Pkg(&_L141, NationalValues);
  kcg_copy_P3_NationalValues_T_Packet_Types_Pkg(&_L228, NationalValues);
  _L227 = _L228.q_nvsbfbperm;
  _L230 = kcg_true;
  _L232 = !_L230;
  switch (_L227) {
    case Q_NVSBFBPERM_Yes :
      _L229 = _L230;
      break;
    
    default :
      _L229 = _L232;
  }
  _L226 = kcg_true;
  _L94 = 800;
  _L185.isSB_FBAvailable = _L229;
  _L185.isSB_CmdAvailable = _L226;
  _L185.isTCOAvailable = _L226;
  _L185.T_traction_cut_off = _L94;
  _L185.offsetAntennaL1 = _L233;
  kcg_copy_trainData_internal_t_SDM_Types_Pkg(&trainData_extras, &_L185);
  kcg_copy_trainData_internal_t_SDM_Types_Pkg(&_L222, &trainData_extras);
  /* 4 */
  SDMLimitLocations_TargetLimits_Pkg(
    &_L98,
    &_L24,
    &_L96,
    &_L97,
    &_L43,
    &_L216,
    &_L225,
    &_L141,
    &_L222,
    &_L111,
    &_L112,
    &_L113,
    &_L114);
  _L210 = Service_brake_requested_by_modes_and_levels;
  _L211 = Emergency_brake_requested_by_modes_and_levels;
  kcg_copy_P3_NationalValues_T_Packet_Types_Pkg(&_L241, NationalValues);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&_L242, odometry);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L243, TrainPosition);
  kcg_copy_trainData_T_TIU_Types_Pkg(&_L244, trainData);
  kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes(
    &_L246,
    dataFromTrackAtlas);
  _L240 = /* 1 */
    SimpleValidityCheck_SDM_Input_Wrappers(
      &_L241,
      &_L242,
      &_L243,
      &_L244,
      &_L246);
  _L247 = _L211 | _L240;
  kcg_copy_P3_NationalValues_T_Packet_Types_Pkg(&_L215, NationalValues);
  kcg_copy_trainData_internal_t_SDM_Types_Pkg(&_L223, &trainData_extras);
  /* 1 */
  SDM_Commands_SDM_Commands_Pkg(
    &_L102,
    &_L239,
    &_L111,
    &_L112,
    &_L113,
    _L114,
    _L210,
    _L247,
    &_L215,
    &_L223,
    &outC->_3_Context_1);
  kcg_copy_speedSupervisionForDMI_T_DMI_Types_Pkg(
    &_L3,
    &outC->_3_Context_1.sdmToDMI);
  kcg_copy_SDM_Commands_T_SDM_Types_Pkg(&_L65, &outC->_3_Context_1.sdmCmd);
  _L66 = outC->_3_Context_1.targetSpeedReached;
  _L212 = outC->_3_Context_1.eoaOverpassed;
  kcg_copy_Brake_command_T_TIU_Types_Pkg(&_L214, &outC->_3_Context_1.brakeCmd);
  kcg_copy_speedSupervisionForDMI_T_DMI_Types_Pkg(&outC->sdmToDMI, &_L3);
  kcg_copy_Target_T_TargetManagement_types(&MRDT, &_L113);
  kcg_copy_Target_T_TargetManagement_types(&_L250, &MRDT);
  kcg_copy_Target_T_TargetManagement_types(&outC->target, &_L250);
  kcg_copy_SDM_Commands_T_SDM_Types_Pkg(&outC->sdmCommands, &_L65);
  kcg_copy_Brake_command_T_TIU_Types_Pkg(&outC->brakeCmd, &_L214);
  outC->EOA_overpassed = _L212;
  outC->Target_Speed_Reached = _L66;
  noname = _L240;
  kcg_copy_CurveCollection_T_CalcBrakingCurves_types(&CurveCollection, &_L43);
  kcg_copy_Target_T_TargetManagement_types(&_L256, &MRDT);
  kcg_copy_TargetCollection_T_TargetManagement_types(&_L255, &targetCollection);
  kcg_copy_CurveCollection_T_CalcBrakingCurves_types(&_L254, &CurveCollection);
  /* 1 */ ProbeSDM_EnvSim(&_L255, &_L254, &_L256, &outC->_4_Context_1);
  _L257 = outC->_4_Context_1.dummyOut;
  _1_noname = _L257;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

