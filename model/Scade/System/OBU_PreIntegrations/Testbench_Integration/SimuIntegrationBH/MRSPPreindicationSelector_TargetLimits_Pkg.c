/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSPPreindicationSelector_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::MRSPPreindicationSelector */
void MRSPPreindicationSelector_TargetLimits_Pkg(
  /* TargetLimits_Pkg::MRSPPreindicationSelector::MRSP */ MRSP_internal_T_TargetManagement_types *MRSP,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::EBDcurve */ ParabolaCurve_T_CalcBrakingCurves_types *EBDcurve,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::SBDcurve */ ParabolaCurve_T_CalcBrakingCurves_types *SBDcurve,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::GUIcurve */ ParabolaCurve_T_CalcBrakingCurves_types *GUIcurve,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::guiCurveEnabled */ kcg_bool guiCurveEnabled,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::isEoA */ kcg_bool isEoA,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::T */ T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::D_preindication */ L_internal_real_Type_SDM_Types_Pkg *D_preindication,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::D_I_V_MRSP */ L_internal_real_Type_SDM_Types_Pkg *D_I_V_MRSP,
  /* TargetLimits_Pkg::MRSPPreindicationSelector::valid */ kcg_bool *valid)
{
  static kcg_int i4;
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  /* TargetLimits_Pkg::MRSPPreindicationSelector */
  static MRSP_internal_section_T_TargetManagement_types acc;
  /* TargetLimits_Pkg::MRSPPreindicationSelector */
  static kcg_bool cond_iterw;
  static kcg_int i;
  static kcg_int noname;
  /* TargetLimits_Pkg::MRSPPreindicationSelector::_L1 */
  static MRSP_internal_section_T_TargetManagement_types _L1;
  /* TargetLimits_Pkg::MRSPPreindicationSelector::_L3 */
  static kcg_int _L3;
  /* TargetLimits_Pkg::MRSPPreindicationSelector::_L4 */
  static kcg_bool _L4;
  /* TargetLimits_Pkg::MRSPPreindicationSelector::_L10 */
  static kcg_bool _L10;
  /* TargetLimits_Pkg::MRSPPreindicationSelector::_L9 */
  static V_internal_real_Type_SDM_Types_Pkg _L9;
  /* TargetLimits_Pkg::MRSPPreindicationSelector::_L8 */
  static L_internal_real_Type_SDM_Types_Pkg _L8;
  /* TargetLimits_Pkg::MRSPPreindicationSelector::_L11 */
  static MRSP_internal_T_TargetManagement_types _L11;
  /* TargetLimits_Pkg::MRSPPreindicationSelector::_L12 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L12;
  /* TargetLimits_Pkg::MRSPPreindicationSelector::_L15 */
  static kcg_bool _L15;
  /* TargetLimits_Pkg::MRSPPreindicationSelector::_L16 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L16;
  /* TargetLimits_Pkg::MRSPPreindicationSelector::_L17 */
  static T_trac_t_TargetLimits_Pkg _L17;
  /* TargetLimits_Pkg::MRSPPreindicationSelector::_L18 */
  static ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types _L18;
  /* TargetLimits_Pkg::MRSPPreindicationSelector::_L26 */
  static array_bool_110 _L26;
  /* TargetLimits_Pkg::MRSPPreindicationSelector::_L27 */
  static ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types _L27;
  /* TargetLimits_Pkg::MRSPPreindicationSelector::_L28 */
  static array_169099 _L28;
  /* TargetLimits_Pkg::MRSPPreindicationSelector::_L39 */
  static MRSP_internal_section_T_TargetManagement_types _L39;
  /* TargetLimits_Pkg::MRSPPreindicationSelector::_L40 */
  static kcg_bool _L40;
  /* TargetLimits_Pkg::MRSPPreindicationSelector::_L41 */
  static kcg_real _L41;
  /* TargetLimits_Pkg::MRSPPreindicationSelector::_L68 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L68;
  /* TargetLimits_Pkg::MRSPPreindicationSelector::_L69 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L69;
  /* TargetLimits_Pkg::MRSPPreindicationSelector::_L70 */
  static T_trac_t_TargetLimits_Pkg _L70;
  /* TargetLimits_Pkg::MRSPPreindicationSelector::_L71 */
  static T_trac_t_TargetLimits_Pkg _L71;
  /* TargetLimits_Pkg::MRSPPreindicationSelector::_L72 */
  static T_trac_t_TargetLimits_Pkg _L72;
  /* TargetLimits_Pkg::MRSPPreindicationSelector::_L73 */
  static kcg_real _L73;
  /* TargetLimits_Pkg::MRSPPreindicationSelector::_L74 */
  static T_internal_real_Type_SDM_Types_Pkg _L74;
  /* TargetLimits_Pkg::MRSPPreindicationSelector::_L75 */
  static T_trac_t_TargetLimits_Pkg _L75;
  /* TargetLimits_Pkg::MRSPPreindicationSelector::_L76 */
  static T_trac_t_TargetLimits_Pkg _L76;
  /* TargetLimits_Pkg::MRSPPreindicationSelector::_L77 */
  static kcg_bool _L77;
  /* TargetLimits_Pkg::MRSPPreindicationSelector::_L81 */
  static T_trac_t_TargetLimits_Pkg _L81;
  /* TargetLimits_Pkg::MRSPPreindicationSelector::_L83 */
  static kcg_real _L83;
  /* TargetLimits_Pkg::MRSPPreindicationSelector::_L85 */
  static kcg_real _L85;
  /* TargetLimits_Pkg::MRSPPreindicationSelector::_L84 */
  static T_internal_real_Type_SDM_Types_Pkg _L84;
  /* TargetLimits_Pkg::MRSPPreindicationSelector::_L86 */
  static kcg_real _L86;
  
  _L41 = 0.0;
  _L40 = kcg_false;
  _L39.Loc_Abs = _L41;
  _L39.MRS = _L41;
  _L39.valid = _L40;
  kcg_copy_MRSP_internal_T_TargetManagement_types(&_L11, MRSP);
  _L77 = isEoA;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L68, SBDcurve);
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L12, EBDcurve);
  /* 1 */ if (_L77) {
    kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L69, &_L68);
  }
  else {
    kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L69, &_L12);
  }
  /* pow */ for (i4 = 0; i4 < 110; i4++) {
    kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L18[i4], &_L69);
  }
  _L15 = guiCurveEnabled;
  /* pow */ for (i3 = 0; i3 < 110; i3++) {
    _L26[i3] = _L15;
  }
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L16, GUIcurve);
  /* pow */ for (i2 = 0; i2 < 110; i2++) {
    kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L27[i2], &_L16);
  }
  kcg_copy_T_trac_t_TargetLimits_Pkg(&_L81, T);
  _L73 = 0.0;
  kcg_copy_T_trac_t_TargetLimits_Pkg(&_L70, &_L81);
  if (kcg_true) {
    _L70.berem = _L73;
  }
  _L83 = 0.0;
  kcg_copy_T_trac_t_TargetLimits_Pkg(&_L71, &_L70);
  if (kcg_true) {
    _L71.Traction = _L83;
  }
  kcg_copy_T_trac_t_TargetLimits_Pkg(&_L17, T);
  _L74 = _L17.bs1;
  kcg_copy_T_trac_t_TargetLimits_Pkg(&_L72, &_L71);
  if (kcg_true) {
    _L72.bs2 = _L74;
  }
  kcg_copy_T_trac_t_TargetLimits_Pkg(&_L76, T);
  /* 2 */ if (_L77) {
    kcg_copy_T_trac_t_TargetLimits_Pkg(&_L75, &_L72);
  }
  else {
    kcg_copy_T_trac_t_TargetLimits_Pkg(&_L75, &_L76);
  }
  /* pow */ for (i1 = 0; i1 < 110; i1++) {
    kcg_copy_T_trac_t_TargetLimits_Pkg(&_L28[i1], &_L75);
  }
  _L4 = kcg_true;
  kcg_copy_MRSP_internal_section_T_TargetManagement_types(&_L1, &_L39);
  if (_L4) {
    for (i = 0; i < 110; i++) {
      kcg_copy_MRSP_internal_section_T_TargetManagement_types(&acc, &_L1);
      /* 1 */
      MRSPPreindicationIterator_TargetLimits_Pkg(
        i,
        &acc,
        &_L11[i],
        &_L18[i],
        _L26[i],
        &_L27[i],
        &_L28[i],
        &cond_iterw,
        &_L1);
      _L3 = i + 1;
      if (!cond_iterw) {
        break;
      }
    }
  }
  else {
    _L3 = 0;
  }
  noname = _L3;
  _L10 = _L1.valid;
  _L9 = _L1.MRS;
  _L8 = _L1.Loc_Abs;
  *D_preindication = _L8;
  _L84 = T_preindication_SDM_Types_Pkg;
  _L85 = _L84 * _L9;
  _L86 = _L85 + _L8;
  *D_I_V_MRSP = _L86;
  *valid = _L10;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MRSPPreindicationSelector_TargetLimits_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

