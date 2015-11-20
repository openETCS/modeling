/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP.h"

/* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop */
void SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP(
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::i */ kcg_int i,
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::ProfileAccu */ StaticSpeedProfile_t_TrackAtlasTypes *ProfileAccu,
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::SectionIn */ P027V1_OBU_sectionlist_enum_T_TM_baseline2 *SectionIn,
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::q_scale */ Q_SCALE q_scale,
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::SpeedtProfile */ StaticSpeedProfile_t_TrackAtlasTypes *SpeedtProfile)
{
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::_L139 */
  static Q_SCALE _L139;
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::_L138 */
  static D_STATIC _L138;
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::_L137 */
  static V_STATIC _L137;
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::_L136 */
  static StaticSpeedSection_t_TrackAtlasTypes _L136;
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::_L135 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L135;
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::_L134 */
  static kcg_int _L134;
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::_L133 */
  static StaticSpeedProfile_t_TrackAtlasTypes _L133;
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::_L131 */
  static kcg_int _L131;
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::_L130 */
  static kcg_bool _L130;
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::_L125 */
  static StaticSpeedProfile_t_TrackAtlasTypes _L125;
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::_L123 */
  static P027V1_section_enum_T_TM_baseline2 _L123;
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::_L121 */
  static P027V1_OBU_sectionlist_enum_T_TM_baseline2 _L121;
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::_L142 */
  static StaticSpeedProfile_t_TrackAtlasTypes _L142;
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::_L143 */
  static StaticSpeedSection_t_TrackAtlasTypes _L143;
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::_L144 */
  static kcg_int _L144;
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::_L145 */
  static kcg_int _L145;
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::_L146 */
  static kcg_int _L146;
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::_L147 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L147;
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::_L148 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L148;
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::_L154 */
  static kcg_int _L154;
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::_L155 */
  static kcg_int _L155;
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::_L156 */
  static kcg_int _L156;
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::_L157 */
  static kcg_int _L157;
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::_L158 */
  static kcg_int _L158;
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::_L159 */
  static Q_FRONT _L159;
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::_L160 */
  static kcg_bool _L160;
  
  kcg_copy_P027V1_OBU_sectionlist_enum_T_TM_baseline2(&_L121, SectionIn);
  _L134 = i;
  if ((0 <= _L134) & (_L134 < 33)) {
    kcg_copy_P027V1_section_enum_T_TM_baseline2(&_L123, &_L121[_L134]);
  }
  else {
    kcg_copy_P027V1_section_enum_T_TM_baseline2(
      &_L123,
      (P027V1_section_enum_T_TM_baseline2 *)
        &DEFAULT_P027v1_OBU_section_TM_baseline2);
  }
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&_L125, ProfileAccu);
  _L130 = _L123.valid;
  _L131 = i;
  _L139 = q_scale;
  _L138 = _L123.d_static;
  _L135 = /* 2 */ Normalize_Distance_d_internal_t_TA_Lib_internal(_L139, _L138);
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&_L142, ProfileAccu);
  _L144 = i;
  _L145 = 1;
  _L146 = _L144 - _L145;
  if ((0 <= _L146) & (_L146 < 50)) {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(&_L143, &_L142[_L146]);
  }
  else {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &_L143,
      (StaticSpeedSection_t_TrackAtlasTypes *)
        &DEFAULT_StaticSpeedSection_TrackAtlasTypes);
  }
  _L147 = _L143.d_static_abs;
  _L154 = _L135 + _L147;
  _L158 = 0;
  /* 1 */ if (_L130) {
    _L155 = _L154;
  }
  else {
    _L155 = _L158;
  }
  _L148 = _L143.d_static_LRBG;
  _L157 = _L135 + _L148;
  /* 2 */ if (_L130) {
    _L156 = _L157;
  }
  else {
    _L156 = _L158;
  }
  _L159 = _L123.q_front;
  _L160 = /* 1 */ Eval_Q_Front_TA_Lib_internal(_L159);
  _L137 = _L123.v_static;
  _L136.valid = _L130;
  _L136.d_static_abs = _L155;
  _L136.d_static_LRBG = _L156;
  _L136.q_train_length_corr = _L160;
  _L136.v_static = _L137;
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&_L133, &_L125);
  if ((0 <= _L131) & (_L131 < 50)) {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(&_L133[_L131], &_L136);
  }
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(SpeedtProfile, &_L133);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

