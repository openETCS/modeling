/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SDMLimitLocations_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::SDMLimitLocations */
void SDMLimitLocations_TargetLimits_Pkg(
  /* TargetLimits_Pkg::SDMLimitLocations::MRSP_Profile */MRSP_internal_T_TargetManagement_types *MRSP_Profile,
  /* TargetLimits_Pkg::SDMLimitLocations::odometry */odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* TargetLimits_Pkg::SDMLimitLocations::trainLocations */TrainLocations_real_T_SDM_Types_Pkg *trainLocations,
  /* TargetLimits_Pkg::SDMLimitLocations::targetCollection */TargetCollection_T_TargetManagement_types *targetCollection,
  /* TargetLimits_Pkg::SDMLimitLocations::curveCollection */CurveCollection_T_CalcBrakingCurves_types *curveCollection,
  /* TargetLimits_Pkg::SDMLimitLocations::MA */MA_section_real_T_TargetManagement_types *MA,
  /* TargetLimits_Pkg::SDMLimitLocations::T_b */t_Brake_t_SDMModelPkg *T_b,
  /* TargetLimits_Pkg::SDMLimitLocations::NationalValues */P3_NationalValues_T_Packet_Types_Pkg *NationalValues,
  /* TargetLimits_Pkg::SDMLimitLocations::trainData_int */trainData_internal_t_SDM_Types_Pkg *trainData_int,
  /* TargetLimits_Pkg::SDMLimitLocations::speeds */Speeds_T_SDM_Types_Pkg *speeds,
  /* TargetLimits_Pkg::SDMLimitLocations::locations */SDM_Locations_T_SDM_Types_Pkg *locations,
  /* TargetLimits_Pkg::SDMLimitLocations::MostRestrictiveDisplayedTarget */Target_T_TargetManagement_types *MostRestrictiveDisplayedTarget,
  /* TargetLimits_Pkg::SDMLimitLocations::FLOIisSBI1 */kcg_bool *FLOIisSBI1)
{
  static L_internal_real_Type_SDM_Types_Pkg tmp5;
  static kcg_real tmp4;
  static V_internal_real_Type_SDM_Types_Pkg tmp3;
  static V_internal_real_Type_SDM_Types_Pkg tmp2;
  static V_internal_real_Type_SDM_Types_Pkg tmp1;
  static V_internal_real_Type_SDM_Types_Pkg tmp;
  /* TargetLimits_Pkg::SDMLimitLocations::V_est */
  static V_internal_real_Type_SDM_Types_Pkg V_est;
  /* TargetLimits_Pkg::SDMLimitLocations::bec */
  static bec_t_TargetLimits_Pkg bec;
  /* TargetLimits_Pkg::SDMLimitLocations::V_target */
  static V_internal_real_Type_SDM_Types_Pkg V_target;
  /* TargetLimits_Pkg::SDMLimitLocations::SBDcurve */
  static ParabolaCurve_T_CalcBrakingCurves_types SBDcurve;
  /* TargetLimits_Pkg::SDMLimitLocations::EBDcurve */
  static ParabolaCurve_T_CalcBrakingCurves_types EBDcurve;
  /* TargetLimits_Pkg::SDMLimitLocations::T */
  static T_trac_t_TargetLimits_Pkg T;
  /* TargetLimits_Pkg::SDMLimitLocations::V_release */
  static V_internal_real_Type_SDM_Types_Pkg V_release;
  /* TargetLimits_Pkg::SDMLimitLocations::D_EOA */
  static L_internal_real_Type_SDM_Types_Pkg D_EOA;
  /* TargetLimits_Pkg::SDMLimitLocations::D_SvL */
  static L_internal_real_Type_SDM_Types_Pkg D_SvL;
  /* TargetLimits_Pkg::SDMLimitLocations::D_est */
  static L_internal_real_Type_SDM_Types_Pkg D_est;
  /* TargetLimits_Pkg::SDMLimitLocations::D_maxsafefront */
  static L_internal_real_Type_SDM_Types_Pkg D_maxsafefront;
  /* TargetLimits_Pkg::SDMLimitLocations::GUIcurve */
  static ParabolaCurve_T_CalcBrakingCurves_types GUIcurve;
  /* TargetLimits_Pkg::SDMLimitLocations::valid_RSM1_start */
  static kcg_bool valid_RSM1_start;
  /* TargetLimits_Pkg::SDMLimitLocations::V_SBI_MRDT */
  static V_internal_real_Type_SDM_Types_Pkg V_SBI_MRDT;
  /* TargetLimits_Pkg::SDMLimitLocations::_L26 */
  static V_internal_real_Type_SDM_Types_Pkg _L26;
  /* TargetLimits_Pkg::SDMLimitLocations::_L86 */
  static L_internal_real_Type_SDM_Types_Pkg _L86;
  /* TargetLimits_Pkg::SDMLimitLocations::_L641 */
  static kcg_bool _L641;
  /* TargetLimits_Pkg::SDMLimitLocations::_L642 */
  static kcg_bool _L642;
  /* TargetLimits_Pkg::SDMLimitLocations::_L910 */
  static V_internal_real_Type_SDM_Types_Pkg _L910;
  /* TargetLimits_Pkg::SDMLimitLocations::_L909 */
  static V_internal_real_Type_SDM_Types_Pkg _L909;
  /* TargetLimits_Pkg::SDMLimitLocations::_L934 */
  static kcg_real _L934;
  /* TargetLimits_Pkg::SDMLimitLocations::_L927 */
  static kcg_real _L927;
  /* TargetLimits_Pkg::SDMLimitLocations::_L982 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L982;
  /* TargetLimits_Pkg::SDMLimitLocations::_L988 */
  static kcg_bool _L988;
  /* TargetLimits_Pkg::SDMLimitLocations::_L344 */
  static L_internal_real_Type_SDM_Types_Pkg _L344;
  /* TargetLimits_Pkg::SDMLimitLocations::_L343 */
  static kcg_bool _L343;
  /* TargetLimits_Pkg::SDMLimitLocations::_L1030 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L1030;
  /* TargetLimits_Pkg::SDMLimitLocations::_L1032 */
  static V_odometry_Type_Obu_BasicTypes_Pkg _L1032;
  
  (*speeds).OdoStandStill = (*odometry).motionState ==
    noMotion_Obu_BasicTypes_Pkg;
  /* 5 */
  TargetSelector_TargetLimits_Pkg(
    targetCollection,
    curveCollection,
    odometry,
    trainData_int,
    T_b,
    NationalValues,
    trainLocations,
    MostRestrictiveDisplayedTarget,
    &EBDcurve,
    &SBDcurve,
    &GUIcurve,
    &_L343,
    &V_target,
    &_L910,
    &D_EOA,
    &D_SvL,
    &V_est,
    &T,
    &_L927,
    &bec,
    &tmp1,
    &_L641,
    &D_est,
    &D_maxsafefront);
  _L1032 = /* 15 */ TransformV_realToV_odo_SDM_Types_Pkg(V_target);
  (*speeds).V_target = _L1032;
  _L1030 = /* 14 */ TransformV_realToV_odo_SDM_Types_Pkg(_L910);
  (*speeds).v_p_mrdt = _L1030;
  if (_L1032 >= _L1030) {
    _L982 = _L1032;
  }
  else {
    _L982 = _L1030;
  }
  valid_RSM1_start = EoA_TargetManagement_types ==
    (*MostRestrictiveDisplayedTarget).targetType;
  _L988 = valid_RSM1_start | ((*MostRestrictiveDisplayedTarget).targetType ==
      SvL_TargetManagement_types);
  _L910 = /* 3 */ dV_sbi_for_V_SDM_Types_Pkg(V_target);
  /* 1 */
  v_release_TargetLimits_Pkg(
    &EBDcurve,
    V_target,
    D_EOA,
    MA,
    _L927,
    trainLocations,
    trainData_int,
    &T,
    &V_release,
    &_L642);
  if (_L988) {
    _L927 = V_target + _L910;
  }
  else {
    _L927 = V_release;
  }
  /* 2 */
  d_limits_TargetLimits_Pkg(
    V_est,
    &SBDcurve,
    _L641,
    tmp1,
    D_est,
    D_maxsafefront,
    &T,
    &GUIcurve,
    _L343,
    &_L909,
    &tmp4,
    &tmp3,
    &tmp2,
    FLOIisSBI1);
  /* 1 */
  v_SBI1_TargetLimits_Pkg(
    &SBDcurve,
    V_est,
    D_est,
    D_EOA,
    0.0,
    kcg_false,
    &GUIcurve,
    &T,
    &_L642,
    &tmp);
  /* 1 */
  v_SBI2_TargetLimits_Pkg(
    &EBDcurve,
    V_est,
    V_target,
    &bec,
    D_maxsafefront,
    0.0,
    kcg_false,
    &GUIcurve,
    &T,
    &_L641,
    &_L26);
  if (*FLOIisSBI1) {
    V_SBI_MRDT = tmp;
  }
  else {
    V_SBI_MRDT = _L26;
  }
  if (_L927 >= V_SBI_MRDT) {
    _L934 = _L927;
  }
  else {
    _L934 = V_SBI_MRDT;
  }
  /* 1 */
  MRSPPreindicationSelector_TargetLimits_Pkg(
    MRSP_Profile,
    &EBDcurve,
    &SBDcurve,
    &GUIcurve,
    _L343,
    valid_RSM1_start,
    &T,
    &_L86,
    &_L927,
    &_L642);
  (*locations).Preindication_EBD_location_valid = _L642;
  (*locations).Preindication_SBD_location_valid = *FLOIisSBI1 & _L642;
  (*locations).SBD_preindication_location = /* 1 */
    TransformL_realToL_int_SDM_Types_Pkg(_L86);
  (*locations).EBD_preindication_location =
    (*locations).SBD_preindication_location;
  /* 1 */
  d_RSM_start_TargetLimits_Pkg(
    V_release,
    &EBDcurve,
    &SBDcurve,
    D_maxsafefront,
    D_est,
    &T,
    &_L344,
    &tmp5,
    &_L86,
    &(*locations).RSM_start_location_EBD_valid,
    &valid_RSM1_start);
  (*locations).RSM_start_location_SBD_valid = valid_RSM1_start;
  /* 1 */ d_P_target_TargetLimits_Pkg(&EBDcurve, V_target, &T, &_L343, &_L344);
  (*locations).EBD_RSM_start_location = /* 3 */
    TransformL_realToL_int_SDM_Types_Pkg(tmp5);
  (*locations).SBD_RSM_start_location = /* 10 */
    TransformL_realToL_int_SDM_Types_Pkg(_L86);
  (*locations).d_I_of_V_est = /* 4 */
    TransformL_realToL_int_SDM_Types_Pkg(_L909);
  (*locations).d_I_of_V_MRSP = /* 11 */
    TransformL_realToL_int_SDM_Types_Pkg(_L927);
  (*locations).d_P_of_V_est = /* 5 */
    TransformL_realToL_int_SDM_Types_Pkg(tmp4);
  (*locations).d_W_of_V_est = /* 12 */
    TransformL_realToL_int_SDM_Types_Pkg(tmp3);
  (*locations).d_FLOI_of_V_est = /* 6 */
    TransformL_realToL_int_SDM_Types_Pkg(tmp2);
  (*locations).d_EBI_of_V_est = /* 13 */
    TransformL_realToL_int_SDM_Types_Pkg(tmp1 + V_est * T.bs2);
  (*locations).FLOI_of_V_est = /* 7 */
    TransformL_realToL_int_SDM_Types_Pkg(V_SBI_MRDT);
  (*locations).SBI1_of_V_est = /* 14 */
    TransformL_realToL_int_SDM_Types_Pkg(tmp);
  (*locations).SBI2_of_V_est = /* 8 */
    TransformL_realToL_int_SDM_Types_Pkg(_L26);
  (*locations).d_target = /* 15 */
    TransformL_realToL_int_SDM_Types_Pkg(
      /* 1 */
      TargetDistance_TargetLimits_Pkg(
        _L344,
        D_maxsafefront,
        D_est,
        D_SvL,
        D_EOA,
        _L988));
  (*locations).d_eoa = /* 9 */ TransformL_realToL_int_SDM_Types_Pkg(D_EOA);
  (*locations).d_svl = /* 16 */ TransformL_realToL_int_SDM_Types_Pkg(D_SvL);
  _L86 = /* 1 */ getMRSFromMRSP_SDM_Types_Pkg(MRSP_Profile, D_maxsafefront);
  _L1032 = /* 16 */ TransformV_realToV_odo_SDM_Types_Pkg(_L86);
  (*speeds).V_MRSP = _L1032;
  _L909 = /* 4 */ dV_sbi_for_V_SDM_Types_Pkg(_L86);
  _L927 = _L86 + _L909;
  (*speeds).V_est = /* 1 */ TransformV_realToV_odo_SDM_Types_Pkg(V_est);
  (*speeds).V_release = /* 13 */
    TransformV_realToV_odo_SDM_Types_Pkg(V_release);
  if (_L1032 <= _L982) {
    (*speeds).v_p_dmi = _L1032;
  }
  else {
    (*speeds).v_p_dmi = _L982;
  }
  (*speeds).v_sbi_mrdt = /* 11 */
    TransformV_realToV_odo_SDM_Types_Pkg(V_SBI_MRDT);
  if (_L934 <= _L927) {
    tmp4 = _L934;
  }
  else {
    tmp4 = _L927;
  }
  (*speeds).v_FLOI_dmi = /* 10 */ TransformV_realToV_odo_SDM_Types_Pkg(tmp4);
  (*speeds).dV_warning_V_MRSP = /* 9 */
    TransformV_realToV_odo_SDM_Types_Pkg(
      /* 2 */ dV_warning_for_V_SDM_Types_Pkg(_L86));
  (*speeds).dV_warning_V_target = /* 8 */
    TransformV_realToV_odo_SDM_Types_Pkg(
      /* 1 */ dV_warning_for_V_SDM_Types_Pkg(V_target));
  (*speeds).dV_sbi_V_MRSP = /* 7 */ TransformV_realToV_odo_SDM_Types_Pkg(_L909);
  (*speeds).dV_sbi_V_target = /* 6 */
    TransformV_realToV_odo_SDM_Types_Pkg(_L910);
  (*speeds).dV_ebi_V_MRSP = /* 5 */
    TransformV_realToV_odo_SDM_Types_Pkg(
      /* 2 */ dV_ebi_for_V_SDM_Types_Pkg(_L86));
  (*speeds).dV_ebi_V_target = /* 4 */
    TransformV_realToV_odo_SDM_Types_Pkg(
      /* 1 */ dV_ebi_for_V_SDM_Types_Pkg(V_target));
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SDMLimitLocations_TargetLimits_Pkg.c
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

