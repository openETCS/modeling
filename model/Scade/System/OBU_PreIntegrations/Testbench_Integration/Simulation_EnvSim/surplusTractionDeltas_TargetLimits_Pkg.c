/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "surplusTractionDeltas_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::surplusTractionDeltas */
void surplusTractionDeltas_TargetLimits_Pkg(
  /* TargetLimits_Pkg::surplusTractionDeltas::trainData_int */trainData_internal_t_SDM_Types_Pkg *trainData_int,
  /* TargetLimits_Pkg::surplusTractionDeltas::odometry */odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* TargetLimits_Pkg::surplusTractionDeltas::T_b */t_Brake_t_SDMModelPkg *T_b,
  /* TargetLimits_Pkg::surplusTractionDeltas::V_target */V_internal_real_Type_SDM_Types_Pkg V_target,
  /* TargetLimits_Pkg::surplusTractionDeltas::T_part */T_trac_t_TargetLimits_Pkg *T_part,
  /* TargetLimits_Pkg::surplusTractionDeltas::bec */bec_t_TargetLimits_Pkg *bec,
  /* TargetLimits_Pkg::surplusTractionDeltas::V_est */V_internal_real_Type_SDM_Types_Pkg *V_est,
  /* TargetLimits_Pkg::surplusTractionDeltas::T */T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::surplusTractionDeltas::V_ura */V_internal_real_Type_SDM_Types_Pkg *V_ura)
{
  static T_internal_real_Type_SDM_Types_Pkg tmp2;
  static array_real_3 tmp1;
  static kcg_real tmp;
  /* TargetLimits_Pkg::surplusTractionDeltas::T_berem */
  static T_internal_real_Type_SDM_Types_Pkg T_berem;
  /* TargetLimits_Pkg::surplusTractionDeltas::T_Traction */
  static T_internal_real_Type_SDM_Types_Pkg T_Traction;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L110 */
  static kcg_bool _L110;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L115 */
  static T_internal_real_Type_SDM_Types_Pkg _L115;
  /* TargetLimits_Pkg::surplusTractionDeltas::_L145 */
  static A_internal_real_Type_SDM_Types_Pkg _L145;
  
  (*T).inhComp = (*T_part).inhComp;
  _L110 = V_target == 0.0;
  if (_L110) {
    tmp2 = (*T_b).service[0];
  }
  else {
    tmp2 = (*T_b).service[1];
  }
  (*T).bs = tmp2;
  T_Traction = /* 1 */
    TransformT_intToT_real_SDM_Types_Pkg((*trainData_int).T_traction_cut_off);
  tmp = 0.8 * tmp2;
  *V_est = /* 3 */
    TransformV_odoToV_real_SDM_Types_Pkg((*odometry).speed.v_safeNominal);
  _L145 = /* 1 */
    TransformA_intToA_real_SDM_Types_Pkg((*odometry).acceleration);
  *V_ura = /* 1 */
    TransformV_odoToV_real_SDM_Types_Pkg((*odometry).speed.v_upper) - /* 2 */
    TransformV_odoToV_real_SDM_Types_Pkg((*odometry).speed.v_rawNominal);
  /* 1 */
  splitT_bs_TargetLimits_Pkg(
    tmp2,
    (*trainData_int).isSB_FBAvailable,
    (*trainData_int).isSB_CmdAvailable,
    &_L115,
    &T_berem);
  (*T).bs1 = _L115;
  (*T).bs2 = T_berem;
  if ((*trainData_int).isTCOAvailable) {
    tmp2 = T_Traction - (T_warning_SDM_Types_Pkg + T_berem);
  }
  else {
    tmp2 = T_Traction;
  }
  T_Traction = /* 1 */ limitPositive_SDM_Types_Pkg(tmp2);
  tmp1[1] = T_Traction * _L145;
  (*T).Traction = T_Traction;
  if (_L110) {
    tmp2 = (*T_b).emergency[0];
  }
  else {
    tmp2 = (*T_b).emergency[1];
  }
  T_berem = /* 3 */ limitPositive_SDM_Types_Pkg(tmp2 - T_Traction);
  (*T).berem = T_berem;
  if ((*trainData_int).isSB_FBAvailable) {
    (*T).indication = 5.0;
  }
  else if (5.0 >= tmp) {
    (*T).indication = 5.0;
  }
  else {
    (*T).indication = tmp;
  }
  if ((*T_part).inhComp) {
    tmp1[0] = 0.0;
  }
  else {
    tmp1[0] = *V_ura;
  }
  if (_L145 <= 0.4) {
    _L115 = _L145;
  }
  else {
    _L115 = 0.4;
  }
  tmp1[2] = /* 2 */ limitPositive_SDM_Types_Pkg(_L115) * T_berem;
  /* 1 */ calcBec_TargetLimits_Pkg(&tmp1, V_target, *V_est, T, bec);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** surplusTractionDeltas_TargetLimits_Pkg.c
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

