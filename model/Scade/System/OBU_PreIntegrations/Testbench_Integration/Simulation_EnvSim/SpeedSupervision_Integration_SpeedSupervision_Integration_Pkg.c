/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg.h"

void SpeedSupervision_Integration_reset_SpeedSupervision_Integration_Pkg(
  outC_SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg *outC)
{
  /* 1 */ SDM_Commands_reset_SDM_Commands_Pkg(&outC->Context_1);
  /* 1 */ ProbeSDM_reset_EnvSim(&outC->_1_Context_1);
  /* 1 */
  CalcBrakingCurves_integration_reset_CalcBrakingCurves_Pkg(
    &outC->_2_Context_1);
  /* 1 */ AGradient_reset_SDM_GradientAcceleration_Pkg(&outC->_3_Context_1);
  /* 2 */ TargetManagement_reset_TargetManagement_pkg(&outC->Context_2);
  /* 1 */ SDM_InputWrapper_reset_SDM_Input_Wrappers(&outC->_4_Context_1);
}

/* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration */
void SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg(
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::NationalValues */P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::TrainPosition */trainPosition_T_TrainPosition_Types_Pck *TrainPosition,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::odometry */odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::trainProps */trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::trainData */trainData_T_TIU_Types_Pkg *trainData,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::dataFromTrackAtlas */DataForSupervision_nextGen_t_TrackAtlasTypes *dataFromTrackAtlas,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::Service_brake_requested_by_modes_and_levels */kcg_bool Service_brake_requested_by_modes_and_levels,
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::Emergency_brake_requested_by_modes_and_levels */kcg_bool Emergency_brake_requested_by_modes_and_levels,
  outC_SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg *outC)
{
  static ASafe_T_CalcBrakingCurves_types tmp1;
  static ASafe_T_CalcBrakingCurves_types tmp;
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
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L114 */
  static kcg_bool _L114;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L112 */
  static SDM_Locations_T_SDM_Types_Pkg _L112;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L111 */
  static Speeds_T_SDM_Types_Pkg _L111;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L187 */
  static ASafe_T_CalcBrakingCurves_types _L187;
  /* SpeedSupervision_Integration_Pkg::SpeedSupervision_Integration::_L190 */
  static A_gradient_t_SDM_GradientAcceleration_types _L190;
  
  trainData_extras.isSB_CmdAvailable = kcg_true;
  trainData_extras.isTCOAvailable = kcg_true;
  trainData_extras.T_traction_cut_off = 800;
  /* 1 */
  SDM_InputWrapper_SDM_Input_Wrappers(
    TrainPosition,
    trainProps,
    dataFromTrackAtlas,
    &outC->_4_Context_1);
  trainData_extras.offsetAntennaL1 = outC->_4_Context_1.offsetAntennaL1;
  kcg_copy_MRSP_internal_T_TargetManagement_types(
    &MRSP_internal,
    &outC->_4_Context_1.mrsp_out);
  kcg_copy_MA_section_real_T_TargetManagement_types(
    &MA_internal,
    &outC->_4_Context_1.ma_out);
  kcg_copy_TrainLocations_real_T_SDM_Types_Pkg(
    &Trainlocations_internal,
    &outC->_4_Context_1.trainLocations);
  /* 2 */
  TargetManagement_TargetManagement_pkg(
    &MRSP_internal,
    outC->_4_Context_1.mrsp_update_out,
    &MA_internal,
    outC->_4_Context_1.ma_update_out,
    &Trainlocations_internal,
    &outC->Context_2);
  /* 1 */
  ABrakeFactory_SDMModelPkg(trainData, NationalValues, &T_b, &tmp, &_L187);
  /* 1 */
  AGradient_SDM_GradientAcceleration_Pkg(
    &Trainlocations_internal,
    &outC->_4_Context_1.gp_out,
    outC->_4_Context_1.gp_update_out,
    trainData,
    &outC->Context_2.targetCollection,
    &outC->_3_Context_1);
  kcg_copy_A_gradient_t_SDM_GradientAcceleration_types(
    &_L190,
    &outC->_3_Context_1.A_gradient);
  /* 3 */ addGradient_SDMModelPkg(&tmp, &_L190, &tmp1);
  /* 1 */ addGradient_SDMModelPkg(&_L187, &_L190, &tmp);
  /* 1 */
  CalcBrakingCurves_integration_CalcBrakingCurves_Pkg(
    &Trainlocations_internal,
    &outC->Context_2.targetCollection,
    &tmp1,
    &tmp,
    &outC->_2_Context_1);
  switch ((*NationalValues).q_nvsbfbperm) {
    case Q_NVSBFBPERM_Yes :
      _L114 = kcg_true;
      break;
    
    default :
      _L114 = kcg_false;
  }
  trainData_extras.isSB_FBAvailable = _L114;
  /* 4 */
  SDMLimitLocations_TargetLimits_Pkg(
    &MRSP_internal,
    odometry,
    &Trainlocations_internal,
    &outC->Context_2.targetCollection,
    &outC->_2_Context_1.curveCollection,
    &MA_internal,
    &T_b,
    NationalValues,
    &trainData_extras,
    &_L111,
    &_L112,
    &outC->target,
    &_L114);
  /* 1 */
  ProbeSDM_EnvSim(
    &outC->Context_2.targetCollection,
    &outC->_2_Context_1.curveCollection,
    &outC->target,
    &outC->_1_Context_1);
  /* 1 */
  SDM_Commands_SDM_Commands_Pkg(
    &outC->Context_2.targetCollection,
    TrainPosition,
    &_L111,
    &_L112,
    &outC->target,
    _L114,
    Service_brake_requested_by_modes_and_levels,
    (kcg_bool)
      (Emergency_brake_requested_by_modes_and_levels | /* 1 */
        SimpleValidityCheck_SDM_Input_Wrappers(
          NationalValues,
          odometry,
          TrainPosition,
          trainData,
          dataFromTrackAtlas)),
    NationalValues,
    &trainData_extras,
    &outC->Context_1);
  kcg_copy_speedSupervisionForDMI_T_DMI_Types_Pkg(
    &outC->sdmToDMI,
    &outC->Context_1.sdmToDMI);
  kcg_copy_SDM_Commands_T_SDM_Types_Pkg(
    &outC->sdmCommands,
    &outC->Context_1.sdmCmd);
  outC->Target_Speed_Reached = outC->Context_1.targetSpeedReached;
  outC->EOA_overpassed = outC->Context_1.eoaOverpassed;
  kcg_copy_Brake_command_T_TIU_Types_Pkg(
    &outC->brakeCmd,
    &outC->Context_1.brakeCmd);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SpeedSupervision_Integration_SpeedSupervision_Integration_Pkg.c
** Generation date: 2015-11-20T19:47:11
*************************************************************$ */

