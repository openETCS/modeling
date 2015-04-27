/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TargetSelector_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::TargetSelector */
void TargetSelector_TargetLimits_Pkg(
  /* TargetLimits_Pkg::TargetSelector::v_est */ V_internal_real_Type_SDM_Types_Pkg v_est,
  /* TargetLimits_Pkg::TargetSelector::Targets */ TargetCollection_T_TargetManagement_types *Targets,
  /* TargetLimits_Pkg::TargetSelector::Curves */ CurveCollection_T_CalcBrakingCurves_types *Curves,
  /* TargetLimits_Pkg::TargetSelector::T_bs2 */ T_internal_real_Type_SDM_Types_Pkg T_bs2,
  /* TargetLimits_Pkg::TargetSelector::T_Traction */ T_internal_real_Type_SDM_Types_Pkg T_Traction,
  /* TargetLimits_Pkg::TargetSelector::T_berem */ T_internal_real_Type_SDM_Types_Pkg T_berem,
  /* TargetLimits_Pkg::TargetSelector::V_dt */ TractionDeltaTriple_TargetLimits_Pkg *V_dt,
  /* TargetLimits_Pkg::TargetSelector::MostRestrictiveTarget */ Target_real_T_TargetManagement_types *MostRestrictiveTarget,
  /* TargetLimits_Pkg::TargetSelector::MostRestrictiveCurve */ ParabolaCurve_T_CalcBrakingCurves_types *MostRestrictiveCurve,
  /* TargetLimits_Pkg::TargetSelector::SBDcurve */ ParabolaCurve_T_CalcBrakingCurves_types *SBDcurve,
  /* TargetLimits_Pkg::TargetSelector::GUIcurve */ ParabolaCurve_T_CalcBrakingCurves_types *GUIcurve,
  /* TargetLimits_Pkg::TargetSelector::GUICurveEnabled */ kcg_bool *GUICurveEnabled,
  /* TargetLimits_Pkg::TargetSelector::V_Target */ V_internal_real_Type_SDM_Types_Pkg *V_Target,
  /* TargetLimits_Pkg::TargetSelector::D_EOA */ L_internal_real_Type_SDM_Types_Pkg *D_EOA,
  /* TargetLimits_Pkg::TargetSelector::D_SvL */ L_internal_real_Type_SDM_Types_Pkg *D_SvL,
  /* TargetLimits_Pkg::TargetSelector::SBI2valid */ kcg_bool *SBI2valid,
  /* TargetLimits_Pkg::TargetSelector::D_SBI2 */ L_internal_real_Type_SDM_Types_Pkg *D_SBI2)
{
  TargetIteratorAkku_TargetLimits_Pkg tmp1;
  kcg_bool tmp;
  kcg_int i;
  /* TargetLimits_Pkg::TargetSelector::emptyTarget */ Target_real_T_TargetManagement_types emptyTarget;
  /* TargetLimits_Pkg::TargetSelector::_L29 */ TargetIteratorAkku_TargetLimits_Pkg _L29;
  /* TargetLimits_Pkg::TargetSelector::_L60 */ TargetIteratorAkku_TargetLimits_Pkg _L60;
  
  emptyTarget.targetType = EoA_TargetManagement_types;
  emptyTarget.distance = 0.0;
  emptyTarget.speed = 0.0;
  emptyTarget.valid = kcg_false;
  _L29.valid = kcg_false;
  _L29.MRTSBI2 = 0.0;
  _L29.MRTIndex = 0;
  _L29.MRTType = EoA_TargetManagement_types;
  *GUICurveEnabled = (*Curves).GUI_curve_enabled;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
    GUIcurve,
    &(*Curves).GUI_curve);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
    SBDcurve,
    &(*Curves).EOA_SBD_curve);
  for (i = 0; i < 10; i++) {
    kcg_copy_TargetIteratorAkku_TargetLimits_Pkg(&tmp1, &_L29);
    /* 1 */
    TargetIterator_TargetLimits_Pkg(
      i,
      &tmp1,
      &(*Targets).LOA_targetList[i],
      &(*Curves).LOA_EBD_curves[i],
      v_est,
      T_Traction,
      T_berem,
      V_dt,
      T_bs2,
      &tmp,
      &_L29);
    if (!tmp) {
      break;
    }
  }
  for (i = 0; i < 200; i++) {
    kcg_copy_TargetIteratorAkku_TargetLimits_Pkg(&_L60, &_L29);
    /* 2 */
    TargetIterator_TargetLimits_Pkg(
      i,
      &_L60,
      &(*Targets).MRSP_targetList[i],
      &(*Curves).MRSP_EBD_curves[i],
      v_est,
      T_Traction,
      T_berem,
      V_dt,
      T_bs2,
      &tmp,
      &_L29);
    if (!tmp) {
      break;
    }
  }
  /* 4 */
  TargetIterator_TargetLimits_Pkg(
    - 1,
    &_L29,
    &(*Targets).SvL_target,
    &(*Curves).SvL_EBD_curve,
    v_est,
    T_Traction,
    T_berem,
    V_dt,
    T_bs2,
    &tmp,
    &_L60);
  *D_SBI2 = _L60.MRTSBI2;
  switch (_L60.MRTType) {
    case MRSP_TargetManagement_types :
      if ((0 <= _L60.MRTIndex) & (_L60.MRTIndex < 200)) {
        kcg_copy_Target_real_T_TargetManagement_types(
          MostRestrictiveTarget,
          &(*Targets).MRSP_targetList[_L60.MRTIndex]);
        kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
          MostRestrictiveCurve,
          &(*Curves).MRSP_EBD_curves[_L60.MRTIndex]);
      }
      else {
        kcg_copy_Target_real_T_TargetManagement_types(
          MostRestrictiveTarget,
          &emptyTarget);
        kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
          MostRestrictiveCurve,
          &(*Curves).SvL_EBD_curve);
      }
      break;
    case SvL_TargetManagement_types :
      kcg_copy_Target_real_T_TargetManagement_types(
        MostRestrictiveTarget,
        &(*Targets).SvL_target);
      kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
        MostRestrictiveCurve,
        &(*Curves).SvL_EBD_curve);
      break;
    case LoA_TargetManagement_types :
      if ((0 <= _L60.MRTIndex) & (_L60.MRTIndex < 10)) {
        kcg_copy_Target_real_T_TargetManagement_types(
          MostRestrictiveTarget,
          &(*Targets).LOA_targetList[_L60.MRTIndex]);
        kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
          MostRestrictiveCurve,
          &(*Curves).LOA_EBD_curves[_L60.MRTIndex]);
      }
      else {
        kcg_copy_Target_real_T_TargetManagement_types(
          MostRestrictiveTarget,
          &emptyTarget);
        kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
          MostRestrictiveCurve,
          &(*Curves).SvL_EBD_curve);
      }
      break;
    case EoA_TargetManagement_types :
      kcg_copy_Target_real_T_TargetManagement_types(
        MostRestrictiveTarget,
        &(*Targets).EOA_target);
      kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(
        MostRestrictiveCurve,
        &(*Curves).SvL_EBD_curve);
      break;
    
  }
  *V_Target = (*MostRestrictiveTarget).speed;
  *D_SvL = (*Targets).SvL_target.distance;
  *D_EOA = (*Targets).EOA_target.distance;
  *SBI2valid = _L60.valid;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** TargetSelector_TargetLimits_Pkg.c
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

