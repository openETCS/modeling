/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSPPreindicationSelector_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::MRSPPreindicationSelector */
void MRSPPreindicationSelector_TargetLimits_Pkg(
  /* TargetLimits_Pkg::MRSPPreindicationSelector::MRSP */MRSP_internal_T_TargetManagement_types *MRSP,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::EBDcurve */ParabolaCurve_T_CalcBrakingCurves_types *EBDcurve,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::SBDcurve */ParabolaCurve_T_CalcBrakingCurves_types *SBDcurve,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::GUIcurve */ParabolaCurve_T_CalcBrakingCurves_types *GUIcurve,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::guiCurveEnabled */kcg_bool guiCurveEnabled,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::isEoA */kcg_bool isEoA,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::T */T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::D_preindication */L_internal_real_Type_SDM_Types_Pkg *D_preindication,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::D_I_V_MRSP */L_internal_real_Type_SDM_Types_Pkg *D_I_V_MRSP,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::valid */kcg_bool *valid)
{
  static struct__158126 tmp1;
  static kcg_bool tmp;
  static kcg_int i;
  /* TargetLimits_Pkg::MRSPPreindicationSelector::_L1 */
  static MRSP_internal_section_T_TargetManagement_types _L1;
  /* TargetLimits_Pkg::MRSPPreindicationSelector::_L69 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L69;
  /* TargetLimits_Pkg::MRSPPreindicationSelector::_L75 */
  static T_trac_t_TargetLimits_Pkg _L75;
  
  _L1.Loc_Abs = 0.0;
  _L1.MRS = 0.0;
  _L1.valid = kcg_false;
  if (isEoA) {
    kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L69, SBDcurve);
    kcg_copy_T_trac_t_TargetLimits_Pkg(&_L75, T);
    _L75.berem = 0.0;
    _L75.Traction = 0.0;
    _L75.bs2 = (*T).bs1;
  }
  else {
    kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L69, EBDcurve);
    kcg_copy_T_trac_t_TargetLimits_Pkg(&_L75, T);
  }
  for (i = 0; i < 110; i++) {
    kcg_copy_MRSP_internal_section_T_TargetManagement_types(&tmp1, &_L1);
    /* 1 */
    MRSPPreindicationIterator_TargetLimits_Pkg(
      i,
      &tmp1,
      &(*MRSP)[i],
      &_L69,
      guiCurveEnabled,
      GUIcurve,
      &_L75,
      &tmp,
      &_L1);
    if (!tmp) {
      break;
    }
  }
  *valid = _L1.valid;
  *D_preindication = _L1.Loc_Abs;
  *D_I_V_MRSP = T_preindication_SDM_Types_Pkg * _L1.MRS + *D_preindication;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** MRSPPreindicationSelector_TargetLimits_Pkg.c
** Generation date: 2015-11-20T19:47:10
*************************************************************$ */

