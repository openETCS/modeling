/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Normalize_Profile_loop_TA_Gradient.h"

/* TA_Gradient::GP_Normalize_Profile_loop */
void GP_Normalize_Profile_loop_TA_Gradient(
  /* TA_Gradient::GP_Normalize_Profile_loop::i */ kcg_int i,
  /* TA_Gradient::GP_Normalize_Profile_loop::ProfileIn */ GradientProfile_t_TrackAtlasTypes *ProfileIn,
  /* TA_Gradient::GP_Normalize_Profile_loop::pos_BG */ L_internal_Type_Obu_BasicTypes_Pkg pos_BG,
  /* TA_Gradient::GP_Normalize_Profile_loop::ProfileNormalized_LRBG */ GradientProfile_t_TrackAtlasTypes *ProfileNormalized_LRBG)
{
  /* TA_Gradient::GP_Normalize_Profile_loop::Loc_Section_Abs */
  static L_internal_Type_Obu_BasicTypes_Pkg Loc_Section_Abs;
  /* TA_Gradient::GP_Normalize_Profile_loop::Ga_section_at_LRBG */
  static Gradient_section_t_TrackAtlasTypes Ga_section_at_LRBG;
  /* TA_Gradient::GP_Normalize_Profile_loop::L_Gradient */
  static L_internal_Type_Obu_BasicTypes_Pkg L_Gradient;
  /* TA_Gradient::GP_Normalize_Profile_loop::_L1 */
  static kcg_int _L1;
  /* TA_Gradient::GP_Normalize_Profile_loop::_L2 */
  static GradientProfile_t_TrackAtlasTypes _L2;
  /* TA_Gradient::GP_Normalize_Profile_loop::_L3 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L3;
  /* TA_Gradient::GP_Normalize_Profile_loop::_L4 */
  static Gradient_section_t_TrackAtlasTypes _L4;
  /* TA_Gradient::GP_Normalize_Profile_loop::_L5 */
  static kcg_bool _L5;
  /* TA_Gradient::GP_Normalize_Profile_loop::_L7 */
  static Gradient_section_t_TrackAtlasTypes _L7;
  /* TA_Gradient::GP_Normalize_Profile_loop::_L9 */
  static kcg_int _L9;
  /* TA_Gradient::GP_Normalize_Profile_loop::_L10 */
  static kcg_int _L10;
  /* TA_Gradient::GP_Normalize_Profile_loop::_L11 */
  static kcg_int _L11;
  /* TA_Gradient::GP_Normalize_Profile_loop::_L15 */
  static kcg_int _L15;
  /* TA_Gradient::GP_Normalize_Profile_loop::_L14 */
  static GradientProfile_t_TrackAtlasTypes _L14;
  /* TA_Gradient::GP_Normalize_Profile_loop::_L13 */
  static Gradient_section_t_TrackAtlasTypes _L13;
  /* TA_Gradient::GP_Normalize_Profile_loop::_L16 */
  static kcg_int _L16;
  /* TA_Gradient::GP_Normalize_Profile_loop::_L17 */
  static kcg_int _L17;
  /* TA_Gradient::GP_Normalize_Profile_loop::_L20 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L20;
  /* TA_Gradient::GP_Normalize_Profile_loop::_L24 */
  static kcg_int _L24;
  /* TA_Gradient::GP_Normalize_Profile_loop::_L25 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L25;
  /* TA_Gradient::GP_Normalize_Profile_loop::_L26 */
  static kcg_int _L26;
  /* TA_Gradient::GP_Normalize_Profile_loop::_L34 */
  static Gradient_section_t_TrackAtlasTypes _L34;
  /* TA_Gradient::GP_Normalize_Profile_loop::_L33 */
  static kcg_int _L33;
  /* TA_Gradient::GP_Normalize_Profile_loop::_L32 */
  static GradientProfile_t_TrackAtlasTypes _L32;
  /* TA_Gradient::GP_Normalize_Profile_loop::_L31 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L31;
  /* TA_Gradient::GP_Normalize_Profile_loop::_L30 */
  static GradientProfile_t_TrackAtlasTypes _L30;
  /* TA_Gradient::GP_Normalize_Profile_loop::_L12 */
  static Gradient_section_t_TrackAtlasTypes _L12;
  /* TA_Gradient::GP_Normalize_Profile_loop::_L35 */
  static kcg_int _L35;
  /* TA_Gradient::GP_Normalize_Profile_loop::_L36 */
  static kcg_bool _L36;
  /* TA_Gradient::GP_Normalize_Profile_loop::_L37 */
  static kcg_int _L37;
  
  _L1 = i;
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&_L2, ProfileIn);
  _L3 = pos_BG;
  if ((0 <= _L1) & (_L1 < 50)) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(&_L4, &_L2[_L1]);
  }
  else {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &_L4,
      (Gradient_section_t_TrackAtlasTypes *) &DEFAULT_GP_Section_TA_Gradient);
  }
  _L5 = _L4.valid;
  Loc_Section_Abs = _L4.Loc_Absolute;
  _L9 = Loc_Section_Abs - _L3;
  _L11 = 0;
  /* 2 */ if (_L5) {
    _L10 = _L9;
  }
  else {
    _L10 = _L11;
  }
  kcg_copy_Gradient_section_t_TrackAtlasTypes(&_L7, &_L4);
  if (kcg_true) {
    _L7.Loc_LRBG = _L10;
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&_L14, ProfileIn);
  _L15 = i;
  _L17 = 1;
  _L16 = _L15 + _L17;
  if ((0 <= _L16) & (_L16 < 50)) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(&_L13, &_L14[_L16]);
  }
  else {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &_L13,
      (Gradient_section_t_TrackAtlasTypes *) &DEFAULT_GP_Section_TA_Gradient);
  }
  _L20 = _L13.Loc_Absolute;
  _L25 = Loc_Section_Abs;
  _L26 = _L20 - _L25;
  _L37 = 0;
  _L36 = _L26 > _L37;
  _L35 = 0;
  /* 3 */ if (_L36) {
    _L24 = _L26;
  }
  else {
    _L24 = _L35;
  }
  kcg_copy_Gradient_section_t_TrackAtlasTypes(&Ga_section_at_LRBG, &_L7);
  L_Gradient = _L24;
  kcg_copy_Gradient_section_t_TrackAtlasTypes(&_L12, &Ga_section_at_LRBG);
  _L31 = L_Gradient;
  kcg_copy_Gradient_section_t_TrackAtlasTypes(&_L34, &_L12);
  if (kcg_true) {
    _L34.L_Gradient = _L31;
  }
  _L33 = i;
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&_L30, ProfileIn);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&_L32, &_L30);
  if ((0 <= _L33) & (_L33 < 50)) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(&_L32[_L33], &_L34);
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(ProfileNormalized_LRBG, &_L32);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** GP_Normalize_Profile_loop_TA_Gradient.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

