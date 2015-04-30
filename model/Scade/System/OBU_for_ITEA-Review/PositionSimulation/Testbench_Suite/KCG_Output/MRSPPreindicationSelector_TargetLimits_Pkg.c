/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSPPreindicationSelector_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::MRSPPreindicationSelector */
void MRSPPreindicationSelector_TargetLimits_Pkg(
  /* TargetLimits_Pkg::MRSPPreindicationSelector::MRSP */ MRSP_internal_T_TargetManagement_types *MRSP,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::curve */ ParabolaCurve_T_CalcBrakingCurves_types *curve,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::GUIcurve */ ParabolaCurve_T_CalcBrakingCurves_types *GUIcurve,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::guiCurveEnabled */ kcg_bool guiCurveEnabled,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::T_Traction */ T_internal_real_Type_SDM_Types_Pkg T_Traction,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::T_berem */ T_internal_real_Type_SDM_Types_Pkg T_berem,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::T_bs */ T_internal_real_Type_SDM_Types_Pkg T_bs,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::D_preindication */ L_internal_real_Type_SDM_Types_Pkg *D_preindication,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::valid */ kcg_bool *valid)
{
  MRSP_internal_section_T_TargetManagement_types tmp1;
  kcg_bool tmp;
  kcg_int i;
  /* TargetLimits_Pkg::MRSPPreindicationSelector::_L1 */ MRSP_internal_section_T_TargetManagement_types _L1;
  
  _L1.Loc_Abs = 0.0;
  _L1.MRS = 0.0;
  _L1.valid = kcg_false;
  for (i = 0; i < 200; i++) {
    kcg_copy_MRSP_internal_section_T_TargetManagement_types(&tmp1, &_L1);
    /* 1 */
    MRSPPreindicationIterator_TargetLimits_Pkg(
      i,
      &tmp1,
      &(*MRSP)[i],
      curve,
      T_Traction,
      T_berem,
      guiCurveEnabled,
      GUIcurve,
      T_bs,
      &tmp,
      &_L1);
    if (!tmp) {
      break;
    }
  }
  *D_preindication = _L1.Loc_Abs;
  *valid = _L1.valid;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** MRSPPreindicationSelector_TargetLimits_Pkg.c
** Generation date: 2015-04-24T11:01:00
*************************************************************$ */

