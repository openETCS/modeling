/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Convert_P21_to_DistanceProfile_loop_TA_Gradient.h"

/* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop */
void GP_Convert_P21_to_DistanceProfile_loop_TA_Gradient(
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop::i */ kcg_int i,
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop::ProfileAccu */ GradientProfile_t_TrackAtlasTypes *ProfileAccu,
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop::SectionIn */ P021_OBU_sectionlist_enum_T_TM *SectionIn,
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop::q_scale */ Q_SCALE q_scale,
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop::GradientProfile */ GradientProfile_t_TrackAtlasTypes *GradientProfile)
{
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop::_L141 */
  static kcg_int _L141;
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop::_L140 */
  static P021_section_enum_T_TM _L140;
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop::_L139 */
  static Q_SCALE _L139;
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop::_L138 */
  static D_GRADIENT _L138;
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop::_L137 */
  static D_GRADIENT _L137;
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop::_L136 */
  static Gradient_section_t_TrackAtlasTypes _L136;
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop::_L135 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L135;
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop::_L134 */
  static kcg_int _L134;
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop::_L133 */
  static GradientProfile_t_TrackAtlasTypes _L133;
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop::_L131 */
  static kcg_int _L131;
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop::_L130 */
  static kcg_bool _L130;
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop::_L129 */
  static Q_GDIR _L129;
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop::_L128 */
  static P021_OBU_sectionlist_enum_T_TM _L128;
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop::_L127 */
  static G_internal_Type_Obu_BasicTypes_Pkg _L127;
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop::_L126 */
  static kcg_int _L126;
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop::_L125 */
  static GradientProfile_t_TrackAtlasTypes _L125;
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop::_L124 */
  static G_A _L124;
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop::_L123 */
  static P021_section_enum_T_TM _L123;
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop::_L122 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L122;
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop::_L121 */
  static P021_OBU_sectionlist_enum_T_TM _L121;
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop::_L142 */
  static GradientProfile_t_TrackAtlasTypes _L142;
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop::_L143 */
  static Gradient_section_t_TrackAtlasTypes _L143;
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop::_L144 */
  static kcg_int _L144;
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop::_L145 */
  static kcg_int _L145;
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop::_L146 */
  static kcg_int _L146;
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop::_L147 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L147;
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop::_L148 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L148;
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop::_L149 */
  static kcg_int _L149;
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop::_L150 */
  static kcg_int _L150;
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop::_L151 */
  static kcg_int _L151;
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop::_L152 */
  static kcg_int _L152;
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop::_L153 */
  static kcg_int _L153;
  
  kcg_copy_P021_OBU_sectionlist_enum_T_TM(&_L121, SectionIn);
  _L139 = q_scale;
  kcg_copy_P021_OBU_sectionlist_enum_T_TM(&_L128, SectionIn);
  _L134 = i;
  _L126 = 1;
  _L141 = _L134 + _L126;
  if ((0 <= _L141) & (_L141 < 33)) {
    kcg_copy_P021_section_enum_T_TM(&_L140, &_L128[_L141]);
  }
  else {
    kcg_copy_P021_section_enum_T_TM(
      &_L140,
      (P021_section_enum_T_TM *) &DEFAULT_P021_OBU_section_TM);
  }
  _L137 = _L140.d_gradient;
  _L122 = /* 4 */ Normalize_Distance_d_internal_t_TA_Lib_internal(_L139, _L137);
  if ((0 <= _L134) & (_L134 < 33)) {
    kcg_copy_P021_section_enum_T_TM(&_L123, &_L121[_L134]);
  }
  else {
    kcg_copy_P021_section_enum_T_TM(
      &_L123,
      (P021_section_enum_T_TM *) &DEFAULT_P021_OBU_section_TM);
  }
  _L124 = _L123.g_a;
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&_L125, ProfileAccu);
  _L129 = _L123.q_gdir;
  _L127 = /* 2 */ EVAL_Q_GDIR_TA_Lib_internal(_L129, _L124);
  _L130 = _L123.valid;
  _L131 = i;
  _L138 = _L123.d_gradient;
  _L135 = /* 3 */ Normalize_Distance_d_internal_t_TA_Lib_internal(_L139, _L138);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&_L142, ProfileAccu);
  _L144 = i;
  _L145 = 1;
  _L146 = _L144 - _L145;
  if ((0 <= _L146) & (_L146 < 50)) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(&_L143, &_L142[_L146]);
  }
  else {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &_L143,
      (Gradient_section_t_TrackAtlasTypes *) &DEFAULT_GP_Section_TA_Gradient);
  }
  _L147 = _L143.Loc_Absolute;
  _L149 = _L135 + _L147;
  _L153 = 0;
  /* 1 */ if (_L130) {
    _L151 = _L149;
  }
  else {
    _L151 = _L153;
  }
  _L148 = _L143.Loc_LRBG;
  _L150 = _L135 + _L148;
  /* 2 */ if (_L130) {
    _L152 = _L150;
  }
  else {
    _L152 = _L153;
  }
  _L136.valid = _L130;
  _L136.Loc_Absolute = _L151;
  _L136.Loc_LRBG = _L152;
  _L136.Gradient = _L127;
  _L136.L_Gradient = _L122;
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&_L133, &_L125);
  if ((0 <= _L131) & (_L131 < 50)) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(&_L133[_L131], &_L136);
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(GradientProfile, &_L133);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** GP_Convert_P21_to_DistanceProfile_loop_TA_Gradient.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

