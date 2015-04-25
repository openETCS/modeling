/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SDMLimitLocations_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::SDMLimitLocations */
void SDMLimitLocations_TargetLimits_Pkg(
  /* TargetLimits_Pkg::SDMLimitLocations::MRSP_Profile */ MRSP_internal_T_TargetManagement_types *MRSP_Profile,
  /* TargetLimits_Pkg::SDMLimitLocations::odometry */ Odometry_real_T_SDM_Types_Pkg *odometry,
  /* TargetLimits_Pkg::SDMLimitLocations::trainLocations */ TrainLocations_real_T_SDM_Types_Pkg *trainLocations,
  /* TargetLimits_Pkg::SDMLimitLocations::targetCollection */ TargetCollection_T_TargetManagement_types *targetCollection,
  /* TargetLimits_Pkg::SDMLimitLocations::curveCollection */ CurveCollection_T_CalcBrakingCurves_types *curveCollection,
  /* TargetLimits_Pkg::SDMLimitLocations::v_release */ V_internal_real_Type_SDM_Types_Pkg v_release,
  /* TargetLimits_Pkg::SDMLimitLocations::V_ura */ V_internal_real_Type_SDM_Types_Pkg V_ura,
  /* TargetLimits_Pkg::SDMLimitLocations::inhibitUnderReadingCompensation */ Q_NVINHSMICPERM inhibitUnderReadingCompensation,
  /* TargetLimits_Pkg::SDMLimitLocations::isTractionCutOffImplemented */ kcg_bool isTractionCutOffImplemented,
  /* TargetLimits_Pkg::SDMLimitLocations::T_traction_cut_off */ T_internal_real_Type_SDM_Types_Pkg T_traction_cut_off,
  /* TargetLimits_Pkg::SDMLimitLocations::T_be */ T_internal_real_Type_SDM_Types_Pkg T_be,
  /* TargetLimits_Pkg::SDMLimitLocations::T_bs */ T_internal_real_Type_SDM_Types_Pkg T_bs,
  /* TargetLimits_Pkg::SDMLimitLocations::locations */ SDM_Locations_T_SDM_Types_Pkg *locations,
  /* TargetLimits_Pkg::SDMLimitLocations::MostRestrictiveTarget */ Target_real_T_TargetManagement_types *MostRestrictiveTarget,
  /* TargetLimits_Pkg::SDMLimitLocations::FLOIisSBI1 */ kcg_bool *FLOIisSBI1,
  /* TargetLimits_Pkg::SDMLimitLocations::v_target */ V_internal_real_Type_SDM_Types_Pkg *v_target,
  /* TargetLimits_Pkg::SDMLimitLocations::v_MRSP */ V_internal_real_Type_SDM_Types_Pkg *v_MRSP,
  /* TargetLimits_Pkg::SDMLimitLocations::v_P_SBD */ V_internal_real_Type_SDM_Types_Pkg *v_P_SBD,
  /* TargetLimits_Pkg::SDMLimitLocations::v_P_EBD */ V_internal_real_Type_SDM_Types_Pkg *v_P_EBD,
  /* TargetLimits_Pkg::SDMLimitLocations::v_P_EBD_valid */ kcg_bool *v_P_EBD_valid)
{
  V_internal_real_Type_SDM_Types_Pkg tmp;
  /* TargetLimits_Pkg::SDMLimitLocations::D_bec */ L_internal_real_Type_SDM_Types_Pkg D_bec;
  /* TargetLimits_Pkg::SDMLimitLocations::SBDcurve */ ParabolaCurve_T_CalcBrakingCurves_types SBDcurve;
  /* TargetLimits_Pkg::SDMLimitLocations::EBDcurve */ ParabolaCurve_T_CalcBrakingCurves_types EBDcurve;
  /* TargetLimits_Pkg::SDMLimitLocations::T_Traction */ T_internal_real_Type_SDM_Types_Pkg T_Traction;
  /* TargetLimits_Pkg::SDMLimitLocations::T_berem */ T_internal_real_Type_SDM_Types_Pkg T_berem;
  /* TargetLimits_Pkg::SDMLimitLocations::DpiE */ L_internal_real_Type_SDM_Types_Pkg DpiE;
  /* TargetLimits_Pkg::SDMLimitLocations::DpiS */ L_internal_real_Type_SDM_Types_Pkg DpiS;
  /* TargetLimits_Pkg::SDMLimitLocations::V_dt */ TractionDeltaTriple_TargetLimits_Pkg V_dt;
  /* TargetLimits_Pkg::SDMLimitLocations::D_SBI2 */ L_internal_real_Type_SDM_Types_Pkg D_SBI2;
  /* TargetLimits_Pkg::SDMLimitLocations::GUICurveEnabled */ kcg_bool GUICurveEnabled;
  /* TargetLimits_Pkg::SDMLimitLocations::GUIcurve */ ParabolaCurve_T_CalcBrakingCurves_types GUIcurve;
  /* TargetLimits_Pkg::SDMLimitLocations::SBI2val */ kcg_bool SBI2val;
  /* TargetLimits_Pkg::SDMLimitLocations::_L18 */ L_internal_real_Type_SDM_Types_Pkg _L18;
  /* TargetLimits_Pkg::SDMLimitLocations::_L23 */ L_internal_real_Type_SDM_Types_Pkg _L23;
  /* TargetLimits_Pkg::SDMLimitLocations::_L21 */ L_internal_real_Type_SDM_Types_Pkg _L21;
  /* TargetLimits_Pkg::SDMLimitLocations::_L25 */ V_internal_real_Type_SDM_Types_Pkg _L25;
  /* TargetLimits_Pkg::SDMLimitLocations::_L26 */ V_internal_real_Type_SDM_Types_Pkg _L26;
  /* TargetLimits_Pkg::SDMLimitLocations::_L343 */ kcg_bool _L343;
  /* TargetLimits_Pkg::SDMLimitLocations::_L642 */ kcg_bool _L642;
  
  /* 1 */
  surplusTractionDeltas_TargetLimits_Pkg(
    (*odometry).acceleration,
    inhibitUnderReadingCompensation,
    isTractionCutOffImplemented,
    T_traction_cut_off,
    T_be,
    V_ura,
    T_bs,
    &T_Traction,
    &T_berem,
    &V_dt);
  /* 2 */
  TargetSelector_TargetLimits_Pkg(
    (*odometry).speed.v_safeNominal,
    targetCollection,
    curveCollection,
    T_bs,
    T_Traction,
    T_berem,
    &V_dt,
    MostRestrictiveTarget,
    &EBDcurve,
    &SBDcurve,
    &GUIcurve,
    &GUICurveEnabled,
    v_target,
    &_L23,
    &D_bec,
    &SBI2val,
    &D_SBI2);
  (*locations).d_EBI_of_V_est = D_SBI2 + (*odometry).speed.v_safeNominal * T_bs;
  (*locations).d_eoa = _L23;
  (*locations).d_svl = D_bec;
  *v_P_SBD = /* 1 */
    P_SpeedRelatedToSBD_SDM_Types_Pkg(
      GUICurveEnabled,
      (*trainLocations).d_est_frontendPos,
      (*odometry).speed.v_safeNominal,
      &GUIcurve,
      T_bs,
      &SBDcurve,
      _L23);
  /* 1 */
  v_bec_TargetLimits_Pkg(
    (*odometry).speed.v_safeNominal,
    *v_target,
    T_Traction,
    T_berem,
    &V_dt,
    &_L25,
    &D_bec);
  /* 1 */
  P_SpeedRelatedToEBD_SDM_Types_Pkg(
    (*trainLocations).d_maxSafeFrontEndPos,
    (*trainLocations).d_maxSafeFrontEndPos,
    (*odometry).speed.v_safeNominal,
    &EBDcurve,
    &GUIcurve,
    T_bs,
    *v_target,
    GUICurveEnabled,
    D_bec,
    _L25,
    v_P_EBD,
    v_P_EBD_valid);
  *v_MRSP = /* 1 */
    getMRSFromMRSP_SDM_Types_Pkg(
      MRSP_Profile,
      (*trainLocations).d_maxSafeFrontEndPos);
  /* 2 */
  MRSPPreindicationSelector_TargetLimits_Pkg(
    MRSP_Profile,
    &SBDcurve,
    &GUIcurve,
    GUICurveEnabled,
    0.0,
    0.0,
    T_bs,
    &DpiS,
    &_L343);
  (*locations).SBD_preindication_location = DpiS;
  (*locations).Preindication_SBD_location_valid = _L343;
  /* 1 */
  d_P_target_TargetLimits_Pkg(
    &EBDcurve,
    *v_target,
    T_Traction,
    T_berem,
    T_bs,
    &_L343,
    &(*locations).d_P_of_V_target);
  /* 1 */
  MRSPPreindicationSelector_TargetLimits_Pkg(
    MRSP_Profile,
    &EBDcurve,
    &GUIcurve,
    GUICurveEnabled,
    T_Traction,
    T_berem,
    T_bs,
    &DpiE,
    &_L343);
  (*locations).EBD_preindication_location = DpiE;
  (*locations).Preindication_EBD_location_valid = _L343;
  /* 1 */
  d_RSM_start_TargetLimits_Pkg(
    v_release,
    T_Traction,
    T_berem,
    &EBDcurve,
    &SBDcurve,
    (*trainLocations).d_maxSafeFrontEndPos,
    (*trainLocations).d_est_frontendPos,
    T_bs,
    T_bs,
    &_L18,
    &(*locations).EBD_RSM_start_location,
    &_L21,
    &_L343,
    &_L642);
  (*locations).SBD_RSM_start_location = _L21;
  (*locations).RSM_start_location_EBD_valid = _L343;
  (*locations).RSM_start_location_SBD_valid = _L642;
  /* 1 */
  v_SBI2_TargetLimits_Pkg(
    &EBDcurve,
    (*odometry).speed.v_safeNominal,
    *v_target,
    _L25,
    (*trainLocations).d_maxSafeFrontEndPos,
    D_bec,
    T_bs,
    &_L26,
    &_L343);
  (*locations).SBI2_of_V_est = _L26;
  /* 1 */
  v_SBI1_TargetLimits_Pkg(
    &SBDcurve,
    (*odometry).speed.v_safeNominal,
    (*trainLocations).d_est_frontendPos,
    _L23,
    T_bs,
    &_L25,
    &_L642);
  (*locations).SBI1_of_V_est = _L25;
  /* 1 */
  d_SBI1_TargetLimits_Pkg(
    &SBDcurve,
    (*odometry).speed.v_safeNominal,
    T_bs,
    &_L343,
    &_L18);
  /* 2 */
  d_limits_TargetLimits_Pkg(
    (*odometry).speed.v_safeNominal,
    _L343,
    _L18,
    SBI2val,
    D_SBI2,
    (*trainLocations).d_est_frontendPos,
    (*trainLocations).d_maxSafeFrontEndPos,
    T_bs,
    &GUIcurve,
    GUICurveEnabled,
    &(*locations).d_I_of_V_est,
    &_L23,
    &D_bec,
    &_L21,
    FLOIisSBI1);
  (*locations).d_P_of_V_est = _L23;
  (*locations).d_W_of_V_est = D_bec;
  (*locations).d_FLOI_of_V_est = _L21;
  if (*FLOIisSBI1) {
    (*locations).d_I_of_V_MRSP = DpiS;
    tmp = _L25;
  }
  else {
    (*locations).d_I_of_V_MRSP = DpiE;
    tmp = _L26;
  }
  (*locations).FLOI_of_V_est = tmp;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** SDMLimitLocations_TargetLimits_Pkg.c
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

