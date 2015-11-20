/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MA_Convert_P15_to_DistanceProfile_loop_TA_MA.h"

/* TA_MA::MA_Convert_P15_to_DistanceProfile_loop */
void MA_Convert_P15_to_DistanceProfile_loop_TA_MA(
  /* TA_MA::MA_Convert_P15_to_DistanceProfile_loop::i */ kcg_int i,
  /* TA_MA::MA_Convert_P15_to_DistanceProfile_loop::ProfileAccu */ AccuDistanceProfileMA_TA_MA *ProfileAccu,
  /* TA_MA::MA_Convert_P15_to_DistanceProfile_loop::SectionsIn */ P015_OBU_sectionlist_enum_T_TM *SectionsIn,
  /* TA_MA::MA_Convert_P15_to_DistanceProfile_loop::n_iter */ N_ITER n_iter,
  /* TA_MA::MA_Convert_P15_to_DistanceProfile_loop::q_scale */ Q_SCALE q_scale,
  /* TA_MA::MA_Convert_P15_to_DistanceProfile_loop::SpeedtProfile */ AccuDistanceProfileMA_TA_MA *SpeedtProfile)
{
  /* TA_MA::MA_Convert_P15_to_DistanceProfile_loop::section_d */
  static kcg_int section_d;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile_loop::_L139 */
  static Q_SCALE _L139;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile_loop::_L134 */
  static kcg_int _L134;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile_loop::_L133 */
  static MovementAuthoritySectionlist_t_TrackAtlasTypes _L133;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile_loop::_L131 */
  static kcg_int _L131;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile_loop::_L125 */
  static AccuDistanceProfileMA_TA_MA _L125;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile_loop::_L121 */
  static P015_OBU_sectionlist_enum_T_TM _L121;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile_loop::_L142 */
  static AccuDistanceProfileMA_TA_MA _L142;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile_loop::_L144 */
  static kcg_int _L144;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile_loop::_L227 */
  static P015_section_enum_T_TM _L227;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile_loop::_L238 */
  static MovementAuthoritySection_t_TrackAtlasTypes _L238;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile_loop::_L239 */
  static L_SECTION _L239;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile_loop::_L240 */
  static D_SECTIONTIMERSTOPLOC _L240;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile_loop::_L241 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L241;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile_loop::_L242 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L242;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile_loop::_L243 */
  static kcg_bool _L243;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile_loop::_L244 */
  static Q_SECTIONTIMER _L244;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile_loop::_L245 */
  static T_SECTIONTIMER _L245;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile_loop::_L248 */
  static kcg_int _L248;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile_loop::_L249 */
  static kcg_int _L249;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile_loop::_L252 */
  static MovementAuthoritySection_t_TrackAtlasTypes _L252;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile_loop::_L256 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L256;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile_loop::_L255 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L255;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile_loop::_L257 */
  static kcg_int _L257;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile_loop::_L258 */
  static kcg_int _L258;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile_loop::_L259 */
  static kcg_bool _L259;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile_loop::_L260 */
  static kcg_int _L260;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile_loop::_L261 */
  static kcg_int _L261;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile_loop::_L262 */
  static T_SECTIONTIMER _L262;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile_loop::_L263 */
  static kcg_int _L263;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile_loop::_L264 */
  static kcg_bool _L264;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile_loop::_L265 */
  static MovementAuthoritySectionlist_t_TrackAtlasTypes _L265;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile_loop::_L275 */
  static AccuDistanceProfileMA_TA_MA _L275;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile_loop::_L279 */
  static N_ITER _L279;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile_loop::_L280 */
  static kcg_int _L280;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile_loop::_L281 */
  static kcg_bool _L281;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile_loop::_L282 */
  static kcg_int _L282;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile_loop::_L286 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L286;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile_loop::_L285 */
  static MovementAuthoritySectionlist_t_TrackAtlasTypes _L285;
  /* TA_MA::MA_Convert_P15_to_DistanceProfile_loop::_L289 */
  static kcg_int _L289;
  
  kcg_copy_P015_OBU_sectionlist_enum_T_TM(&_L121, SectionsIn);
  kcg_copy_AccuDistanceProfileMA_TA_MA(&_L125, ProfileAccu);
  _L131 = i;
  kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(
    &_L285,
    &_L125.sections);
  _L134 = i;
  if ((0 <= _L134) & (_L134 < 32)) {
    kcg_copy_P015_section_enum_T_TM(&_L227, &_L121[_L134]);
  }
  else {
    kcg_copy_P015_section_enum_T_TM(
      &_L227,
      (P015_section_enum_T_TM *) &DEFAULT_P015_OBU_section_TM);
  }
  _L243 = _L227.valid;
  _L279 = n_iter;
  _L280 = i;
  _L281 = _L279 == _L280;
  _L139 = q_scale;
  _L239 = _L227.l_section;
  _L241 = /* 1 */ Normalize_Distance_d_internal_t_TA_Lib_internal(_L139, _L239);
  kcg_copy_AccuDistanceProfileMA_TA_MA(&_L142, ProfileAccu);
  kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(
    &_L265,
    &_L142.sections);
  _L144 = i;
  _L261 = 1;
  _L260 = _L144 - _L261;
  if ((0 <= _L260) & (_L260 < 10)) {
    kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes(&_L252, &_L265[_L260]);
  }
  else {
    kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes(
      &_L252,
      (MovementAuthoritySection_t_TrackAtlasTypes *) &DefaultMA_section_TA_MA);
  }
  _L256 = _L252.l_section;
  _L257 = _L241 + _L256;
  _L249 = 0;
  /* 1 */ if (_L243) {
    section_d = _L257;
  }
  else {
    section_d = _L249;
  }
  _L244 = _L227.q_sectiontimer;
  _L259 = /* 1 */ CAST_Q_SECTIONTIMER_to_bool_TM_conversions(_L244);
  _L264 = _L243 & _L259;
  _L245 = _L227.t_sectiontimer;
  _L263 = 0;
  /* 3 */ if (_L243) {
    _L262 = _L245;
  }
  else {
    _L262 = _L263;
  }
  _L240 = _L227.d_sectiontimerstoploc;
  _L242 = /* 2 */ Normalize_Distance_d_internal_t_TA_Lib_internal(_L139, _L240);
  _L255 = _L252.d_sectiontimerstoploc;
  _L258 = _L242 + _L255;
  /* 2 */ if (_L243) {
    _L248 = _L258;
  }
  else {
    _L248 = _L249;
  }
  _L238.valid = _L243;
  _L238.q_endsection = _L281;
  _L238.l_section = section_d;
  _L238.q_sectiontimer = _L264;
  _L238.t_sectiontimer = _L262;
  _L238.d_sectiontimerstoploc = _L248;
  kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(&_L133, &_L285);
  if ((0 <= _L131) & (_L131 < 10)) {
    kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes(&_L133[_L131], &_L238);
  }
  _L282 = section_d;
  _L286 = _L125.d_endsection;
  /* 4 */ if (_L281) {
    _L289 = _L282;
  }
  else {
    _L289 = _L286;
  }
  kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(
    &_L275.sections,
    &_L133);
  _L275.d_endsection = _L289;
  kcg_copy_AccuDistanceProfileMA_TA_MA(SpeedtProfile, &_L275);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** MA_Convert_P15_to_DistanceProfile_loop_TA_MA.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

