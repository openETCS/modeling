/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TargetSelector_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::TargetSelector */
void TargetSelector_TargetLimits_Pkg(
  /* TargetLimits_Pkg::TargetSelector::Targets */TargetCollection_T_TargetManagement_types *Targets,
  /* TargetLimits_Pkg::TargetSelector::Curves */CurveCollection_T_CalcBrakingCurves_types *Curves,
  /* TargetLimits_Pkg::TargetSelector::odometry */odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* TargetLimits_Pkg::TargetSelector::trainData_int */trainData_internal_t_SDM_Types_Pkg *trainData_int,
  /* TargetLimits_Pkg::TargetSelector::T_b */t_Brake_t_SDMModelPkg *T_b,
  /* TargetLimits_Pkg::TargetSelector::NationalValues */P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* TargetLimits_Pkg::TargetSelector::trainLocations */TrainLocations_real_T_SDM_Types_Pkg *trainLocations,
  /* TargetLimits_Pkg::TargetSelector::MostRestrictiveDisplayedTarget */Target_T_TargetManagement_types *MostRestrictiveDisplayedTarget,
  /* TargetLimits_Pkg::TargetSelector::MostRestrictiveEBDCurve */ParabolaCurve_T_CalcBrakingCurves_types *MostRestrictiveEBDCurve,
  /* TargetLimits_Pkg::TargetSelector::SBDcurve */ParabolaCurve_T_CalcBrakingCurves_types *SBDcurve,
  /* TargetLimits_Pkg::TargetSelector::GUIcurve */ParabolaCurve_T_CalcBrakingCurves_types *GUIcurve,
  /* TargetLimits_Pkg::TargetSelector::GUICurveEnabled */kcg_bool *GUICurveEnabled,
  /* TargetLimits_Pkg::TargetSelector::V_Target */V_internal_real_Type_SDM_Types_Pkg *V_Target,
  /* TargetLimits_Pkg::TargetSelector::V_P_MRDT */V_internal_real_Type_SDM_Types_Pkg *V_P_MRDT,
  /* TargetLimits_Pkg::TargetSelector::D_EOA */L_internal_real_Type_SDM_Types_Pkg *D_EOA,
  /* TargetLimits_Pkg::TargetSelector::D_SvL */L_internal_real_Type_SDM_Types_Pkg *D_SvL,
  /* TargetLimits_Pkg::TargetSelector::v_est */V_internal_real_Type_SDM_Types_Pkg *v_est,
  /* TargetLimits_Pkg::TargetSelector::T */T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::TargetSelector::V_ura */V_internal_real_Type_SDM_Types_Pkg *V_ura,
  /* TargetLimits_Pkg::TargetSelector::bec */bec_t_TargetLimits_Pkg *bec,
  /* TargetLimits_Pkg::TargetSelector::D_SBI2 */L_internal_real_Type_SDM_Types_Pkg *D_SBI2,
  /* TargetLimits_Pkg::TargetSelector::valid_D_SBI2 */kcg_bool *valid_D_SBI2,
  /* TargetLimits_Pkg::TargetSelector::D_estfront */L_internal_real_Type_SDM_Types_Pkg *D_estfront,
  /* TargetLimits_Pkg::TargetSelector::D_maxsafefront */L_internal_real_Type_SDM_Types_Pkg *D_maxsafefront)
{
  static kcg_bool tmp4;
  static kcg_bool tmp3;
  static V_internal_real_Type_SDM_Types_Pkg tmp2;
  static L_internal_Type_Obu_BasicTypes_Pkg tmp1;
  static V_internal_Type_Obu_BasicTypes_Pkg tmp;
  /* TargetLimits_Pkg::TargetSelector::_L29 */
  static TargetIteratorAkku_TargetLimits_Pkg _L29;
  /* TargetLimits_Pkg::TargetSelector::_L60 */
  static TargetIteratorAkku_TargetLimits_Pkg _L60;
  /* TargetLimits_Pkg::TargetSelector::_L157 */
  static Target_real_T_TargetManagement_types _L157;
  /* TargetLimits_Pkg::TargetSelector::_L261 */
  static kcg_bool _L261;
  /* TargetLimits_Pkg::TargetSelector::_L282 */
  static Target_real_T_TargetManagement_types _L282;
  
  _L29.ttype = invalid_TargetManagement_types;
  _L29.bec.v = 0.0;
  _L29.bec.d = 0.0;
  _L29.V_est = 0.0;
  _L29.V_ura = 0.0;
  _L29.V_P_MRDT_ebd = 0.0;
  tmp = - 1;
  _L29.index = tmp;
  _L29.V_P_MRDT_index = _L29.index;
  _L29.SBI2 = 0.0;
  *D_maxsafefront = (*trainLocations).d_maxSafeFrontEndPos;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
    GUIcurve,
    &(*Curves).GUI_curve);
  *GUICurveEnabled = (*Curves).GUI_curve_enabled;
  switch ((*NationalValues).q_nvinhsmicperm) {
    case Q_NVINHSMICPERM_Yes :
      tmp4 = kcg_true;
      break;
    
    default :
      tmp4 = kcg_false;
  }
  _L29.T.Traction = 0.0;
  _L29.T.berem = 0.0;
  _L29.T.bs = 0.0;
  _L29.T.bs1 = 0.0;
  _L29.T.bs2 = 0.0;
  _L29.T.inhComp = tmp4;
  _L29.T.indication = 0.0;
  for (tmp1 = 0; tmp1 < 110; tmp1++) {
    kcg_copy_TargetIteratorAkku_TargetLimits_Pkg(&_L60, &_L29);
    /* 2 */
    TargetIterator_TargetLimits_Pkg(
      tmp1,
      &_L60,
      &(*Targets).MRSP_targetList[tmp1],
      &(*Curves).MRSP_EBD_curves[tmp1],
      trainData_int,
      odometry,
      T_b,
      *D_maxsafefront,
      GUIcurve,
      *GUICurveEnabled,
      &tmp4,
      &_L29);
    if (!tmp4) {
      break;
    }
  }
  /* 4 */
  TargetIterator_TargetLimits_Pkg(
    tmp,
    &_L29,
    &(*Targets).SvL_LoA_target,
    &(*Curves).SvL_LoA_EBD_curve,
    trainData_int,
    odometry,
    T_b,
    *D_maxsafefront,
    GUIcurve,
    *GUICurveEnabled,
    &tmp4,
    &_L60);
  *D_SvL = (*Targets).SvL_LoA_target.distance;
  *D_EOA = (*Targets).EOA_target.distance;
  if ((0 <= _L60.V_P_MRDT_index) & (_L60.V_P_MRDT_index < 110)) {
    kcg_copy_Target_real_T_TargetManagement_types(
      &_L157,
      &(*Targets).MRSP_targetList[_L60.V_P_MRDT_index]);
  }
  else {
    kcg_copy_Target_real_T_TargetManagement_types(
      &_L157,
      &(*Targets).SvL_LoA_target);
  }
  if ((0 <= _L60.index) & (_L60.index < 110)) {
    kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
      MostRestrictiveEBDCurve,
      &(*Curves).MRSP_EBD_curves[_L60.index]);
  }
  else {
    kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
      MostRestrictiveEBDCurve,
      &(*Curves).SvL_LoA_EBD_curve);
  }
  kcg_copy_bec_t_TargetLimits_Pkg(bec, &_L60.bec);
  kcg_copy_T_trac_t_TargetLimits_Pkg(T, &_L60.T);
  *D_SBI2 = _L60.SBI2;
  *V_ura = _L60.V_ura;
  *v_est = _L60.V_est;
  *valid_D_SBI2 = _L60.ttype != invalid_TargetManagement_types;
  *D_estfront = (*trainLocations).d_est_frontendPos;
  tmp4 = (*Targets).EOA_target.targetType == EoA_TargetManagement_types;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
    SBDcurve,
    &(*Curves).EOA_SBD_curve);
  if (tmp4) {
    /* 2 */
    v_SBI1_TargetLimits_Pkg(
      SBDcurve,
      *v_est,
      *D_estfront,
      *D_EOA,
      T_driver_SDM_Types_Pkg,
      *GUICurveEnabled,
      GUIcurve,
      T,
      &tmp3,
      &tmp2);
  }
  else {
    tmp3 = kcg_false;
    tmp2 = 0.0;
  }
  /* 1 */
  selectLEValid_TargetLimits_Pkg(
    (kcg_bool) (_L157.targetType != invalid_TargetManagement_types),
    _L60.V_P_MRDT_ebd,
    tmp3,
    tmp2,
    &_L261,
    &tmp4,
    V_P_MRDT);
  if (_L261) {
    kcg_copy_Target_real_T_TargetManagement_types(&_L282, &_L157);
  }
  else {
    kcg_copy_Target_real_T_TargetManagement_types(
      &_L282,
      &(*Targets).EOA_target);
  }
  (*MostRestrictiveDisplayedTarget).targetType = _L282.targetType;
  (*MostRestrictiveDisplayedTarget).valid = invalid_TargetManagement_types !=
    _L282.targetType;
  *V_Target = _L282.speed;
  tmp1 = /* 1 */ TransformL_realToL_int_SDM_Types_Pkg(_L282.distance);
  (*MostRestrictiveDisplayedTarget).distance = tmp1;
  (*MostRestrictiveDisplayedTarget).speed = /* 1 */
    TransformV_realToV_int_SDM_Types_Pkg(*V_Target);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TargetSelector_TargetLimits_Pkg.c
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

