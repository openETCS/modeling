/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MRSPPreindicationIterator_TargetLimits_Pkg.h"

/* TargetLimits_Pkg::MRSPPreindicationIterator */
void MRSPPreindicationIterator_TargetLimits_Pkg(
  /* TargetLimits_Pkg::MRSPPreindicationIterator::i */ kcg_int i,
  /* TargetLimits_Pkg::MRSPPreindicationIterator::MRSP_preindication_mix */ MRSP_internal_section_T_TargetManagement_types *MRSP_preindication_mix,
  /* TargetLimits_Pkg::MRSPPreindicationIterator::MRSP_sect_n */ MRSP_internal_section_T_TargetManagement_types *MRSP_sect_n,
  /* TargetLimits_Pkg::MRSPPreindicationIterator::EBDcurve */ ParabolaCurve_T_CalcBrakingCurves_types *EBDcurve,
  /* TargetLimits_Pkg::MRSPPreindicationIterator::guiCurveEnabled */ kcg_bool guiCurveEnabled,
  /* TargetLimits_Pkg::MRSPPreindicationIterator::GUIcurve */ ParabolaCurve_T_CalcBrakingCurves_types *GUIcurve,
  /* TargetLimits_Pkg::MRSPPreindicationIterator::T */ T_trac_t_TargetLimits_Pkg *T,
  /* TargetLimits_Pkg::MRSPPreindicationIterator::goOn */ kcg_bool *goOn,
  /* TargetLimits_Pkg::MRSPPreindicationIterator::MRSP_preindication_next */ MRSP_internal_section_T_TargetManagement_types *MRSP_preindication_next)
{
  /* TargetLimits_Pkg::MRSPPreindicationIterator */
  static L_internal_real_Type_SDM_Types_Pkg op_call;
  /* TargetLimits_Pkg::MRSPPreindicationIterator */
  static kcg_bool _1_op_call;
  /* TargetLimits_Pkg::MRSPPreindicationIterator */
  static kcg_bool ck_every;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::D_I */
  static L_internal_real_Type_SDM_Types_Pkg D_I;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::V_MRSPn */
  static V_internal_real_Type_SDM_Types_Pkg V_MRSPn;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::V_MRSPn_1 */
  static V_internal_real_Type_SDM_Types_Pkg V_MRSPn_1;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::D_I_1 */
  static L_internal_real_Type_SDM_Types_Pkg D_I_1;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::lastIsValid */
  static kcg_bool lastIsValid;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::D_start */
  static L_internal_real_Type_SDM_Types_Pkg D_start;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::simpleCaseFulfilled */
  static kcg_bool simpleCaseFulfilled;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::cornerCaseFulfilled */
  static kcg_bool cornerCaseFulfilled;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::finalize */
  static kcg_bool finalize;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::currentlyValid */
  static kcg_bool currentlyValid;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::finalCaseFulfilled */
  static kcg_bool finalCaseFulfilled;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L6 */
  static kcg_bool _L6;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L5 */
  static V_internal_real_Type_SDM_Types_Pkg _L5;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L4 */
  static L_internal_real_Type_SDM_Types_Pkg _L4;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L7 */
  static MRSP_internal_section_T_TargetManagement_types _L7;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L8 */
  static MRSP_internal_section_T_TargetManagement_types _L8;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L21 */
  static kcg_bool _L21;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L20 */
  static V_internal_real_Type_SDM_Types_Pkg _L20;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L19 */
  static L_internal_real_Type_SDM_Types_Pkg _L19;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L22 */
  static L_internal_real_Type_SDM_Types_Pkg _L22;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L25 */
  static T_internal_real_Type_SDM_Types_Pkg _L25;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L26 */
  static kcg_real _L26;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L27 */
  static kcg_real _L27;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L28 */
  static L_internal_real_Type_SDM_Types_Pkg _L28;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L29 */
  static MRSP_internal_section_T_TargetManagement_types _L29;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L33 */
  static kcg_bool _L33;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L35 */
  static V_internal_real_Type_SDM_Types_Pkg _L35;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L39 */
  static V_internal_real_Type_SDM_Types_Pkg _L39;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L42 */
  static kcg_bool _L42;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L43 */
  static kcg_bool _L43;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L44 */
  static kcg_bool _L44;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L45 */
  static kcg_bool _L45;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L46 */
  static L_internal_real_Type_SDM_Types_Pkg _L46;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L47 */
  static L_internal_real_Type_SDM_Types_Pkg _L47;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L48 */
  static kcg_bool _L48;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L49 */
  static kcg_bool _L49;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L50 */
  static V_internal_real_Type_SDM_Types_Pkg _L50;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L51 */
  static V_internal_real_Type_SDM_Types_Pkg _L51;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L52 */
  static L_internal_real_Type_SDM_Types_Pkg _L52;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L53 */
  static L_internal_real_Type_SDM_Types_Pkg _L53;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L54 */
  static kcg_real _L54;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L57 */
  static L_internal_real_Type_SDM_Types_Pkg _L57;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L59 */
  static kcg_bool _L59;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L62 */
  static kcg_bool _L62;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L63 */
  static kcg_bool _L63;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L65 */
  static kcg_bool _L65;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L70 */
  static kcg_bool _L70;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L71 */
  static L_internal_real_Type_SDM_Types_Pkg _L71;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L72 */
  static kcg_bool _L72;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L73 */
  static L_internal_real_Type_SDM_Types_Pkg _L73;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L76 */
  static kcg_bool _L76;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L78 */
  static kcg_bool _L78;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L79 */
  static kcg_bool _L79;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L82 */
  static kcg_bool _L82;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L83 */
  static kcg_bool _L83;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L84 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L84;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L87 */
  static kcg_bool _L87;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L88 */
  static ParabolaCurve_T_CalcBrakingCurves_types _L88;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L89 */
  static T_trac_t_TargetLimits_Pkg _L89;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L90 */
  static kcg_bool _L90;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L97 */
  static kcg_bool _L97;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L96 */
  static kcg_bool _L96;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L98 */
  static kcg_bool _L98;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L99 */
  static kcg_bool _L99;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L102 */
  static kcg_bool _L102;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L103 */
  static L_internal_real_Type_SDM_Types_Pkg _L103;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L104 */
  static L_internal_real_Type_SDM_Types_Pkg _L104;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L107 */
  static kcg_int _L107;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L108 */
  static kcg_int _L108;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L110 */
  static kcg_bool _L110;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L111 */
  static kcg_bool _L111;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L113 */
  static kcg_bool _L113;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L115 */
  static kcg_bool _L115;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L114 */
  static kcg_bool _L114;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L116 */
  static kcg_bool _L116;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L118 */
  static kcg_bool _L118;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L117 */
  static kcg_bool _L117;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L124 */
  static kcg_bool _L124;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L123 */
  static kcg_bool _L123;
  /* TargetLimits_Pkg::MRSPPreindicationIterator::_L125 */
  static kcg_bool _L125;
  
  kcg_copy_MRSP_internal_section_T_TargetManagement_types(&_L7, MRSP_sect_n);
  _L6 = _L7.valid;
  ck_every = _L6;
  _L5 = _L7.MRS;
  V_MRSPn = _L5;
  _L39 = V_MRSPn;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L84, EBDcurve);
  _L87 = guiCurveEnabled;
  kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(&_L88, GUIcurve);
  kcg_copy_T_trac_t_TargetLimits_Pkg(&_L89, T);
  /* ck_MRSPPreindicationIterator */ if (ck_every) {
    /* 1 */
    d_I_MRSP_TargetLimits_Pkg(
      _L39,
      &_L84,
      _L87,
      &_L88,
      &_L89,
      &_1_op_call,
      &op_call);
  }
  _L4 = _L7.Loc_Abs;
  kcg_copy_MRSP_internal_section_T_TargetManagement_types(
    &_L8,
    MRSP_preindication_mix);
  _L21 = _L8.valid;
  _L20 = _L8.MRS;
  _L19 = _L8.Loc_Abs;
  /* ck_MRSPPreindicationIterator */ if (ck_every) {
    _L90 = _1_op_call;
  }
  else {
    _L90 = kcg_false;
  }
  currentlyValid = _L90;
  _L102 = currentlyValid;
  _L107 = i;
  _L108 = MRSPMaxSections_TrackAtlasTypes - 1;
  _L110 = _L107 == _L108;
  _L111 = _L102 & _L110;
  finalCaseFulfilled = _L111;
  _L98 = finalCaseFulfilled;
  D_I_1 = _L19;
  _L46 = D_I_1;
  D_start = _L4;
  _L47 = D_start;
  _L45 = _L46 < _L47;
  _L70 = !_L45;
  lastIsValid = _L21;
  _L42 = lastIsValid;
  /* ck_MRSPPreindicationIterator */ if (ck_every) {
    _L22 = op_call;
  }
  else {
    _L22 = 0.0;
  }
  D_I = _L22;
  _L71 = D_I;
  _L73 = D_start;
  _L72 = _L71 < _L73;
  _L33 = _L70 & _L42 & _L72;
  cornerCaseFulfilled = _L33;
  _L63 = cornerCaseFulfilled;
  _L79 = currentlyValid;
  _L83 = !_L79;
  _L43 = lastIsValid;
  _L124 = currentlyValid;
  _L123 = !_L124;
  _L125 = _L123 | _L45;
  _L44 = _L43 & _L125;
  simpleCaseFulfilled = _L44;
  _L59 = simpleCaseFulfilled;
  _L62 = _L98 | _L63 | _L83 | _L59;
  finalize = _L62;
  _L65 = finalize;
  _L115 = finalCaseFulfilled;
  _L114 = cornerCaseFulfilled;
  _L118 = finalize;
  _L117 = !_L118;
  _L116 = _L115 | _L114 | _L117;
  _L113 = cornerCaseFulfilled;
  _L53 = D_start;
  _L104 = D_I;
  /* 5 */ if (_L113) {
    _L103 = _L53;
  }
  else {
    _L103 = _L104;
  }
  _L52 = D_I_1;
  /* 1 */ if (_L116) {
    _L28 = _L103;
  }
  else {
    _L28 = _L52;
  }
  _L51 = V_MRSPn;
  V_MRSPn_1 = _L20;
  _L50 = V_MRSPn_1;
  /* 3 */ if (_L116) {
    _L35 = _L51;
  }
  else {
    _L35 = _L50;
  }
  _L25 = T_preindication_SDM_Types_Pkg;
  _L26 = _L35 * _L25;
  _L27 = _L28 - _L26;
  _L57 = D_I;
  /* 4 */ if (_L65) {
    _L54 = _L27;
  }
  else {
    _L54 = _L57;
  }
  _L97 = simpleCaseFulfilled;
  _L96 = cornerCaseFulfilled;
  _L99 = finalCaseFulfilled;
  _L76 = currentlyValid;
  _L48 = _L97 | _L96 | _L99 | _L76;
  _L29.Loc_Abs = _L54;
  _L29.MRS = _L35;
  _L29.valid = _L48;
  kcg_copy_MRSP_internal_section_T_TargetManagement_types(
    MRSP_preindication_next,
    &_L29);
  _L82 = finalize;
  _L49 = !_L82;
  _L78 = _L76 & _L49;
  *goOn = _L78;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MRSPPreindicationIterator_TargetLimits_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

