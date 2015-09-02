/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Convert_P21_to_DistanceProfile_loop_TA_Gradient.h"

/* TA_Gradient::Convert_P21_to_DistanceProfile_loop */
void Convert_P21_to_DistanceProfile_loop_TA_Gradient(
  /* TA_Gradient::Convert_P21_to_DistanceProfile_loop::i */kcg_int i,
  /* TA_Gradient::Convert_P21_to_DistanceProfile_loop::acc */GradientProfile_t_TrackAtlasTypes *acc,
  /* TA_Gradient::Convert_P21_to_DistanceProfile_loop::SectionIn */P021_OBU_sectionlist_enum_T_TM *SectionIn,
  /* TA_Gradient::Convert_P21_to_DistanceProfile_loop::q_scale */Q_SCALE q_scale,
  /* TA_Gradient::Convert_P21_to_DistanceProfile_loop::GradientProfile */GradientProfile_t_TrackAtlasTypes *GradientProfile)
{
  G_internal_Type_Obu_BasicTypes_Pkg tmp2;
  L_internal_Type_Obu_BasicTypes_Pkg tmp1;
  P021_section_enum_T_TM tmp;
  /* TA_Gradient::Convert_P21_to_DistanceProfile_loop::_L135 */ L_internal_Type_Obu_BasicTypes_Pkg _L135;
  /* TA_Gradient::Convert_P21_to_DistanceProfile_loop::_L123 */ P021_section_enum_T_TM _L123;
  
  if ((0 <= i) & (i < 33)) {
    kcg_copy_P021_section_enum_T_TM(&_L123, &(*SectionIn)[i]);
  }
  else {
    kcg_copy_P021_section_enum_T_TM(
      &_L123,
      (P021_section_enum_T_TM *) &DEFAULT_P021_OBU_section_TM);
  }
  _L135 = /* 3 */
    Normalize_Distance_d_internal_t_TA_Lib_internal(q_scale, _L123.d_gradient);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(GradientProfile, acc);
  tmp2 = /* 2 */ EVAL_Q_GDIR_TA_Lib_internal(_L123.q_gdir, _L123.g_a);
  if ((0 <= i + 1) & (i + 1 < 33)) {
    kcg_copy_P021_section_enum_T_TM(&tmp, &(*SectionIn)[i + 1]);
  }
  else {
    kcg_copy_P021_section_enum_T_TM(
      &tmp,
      (P021_section_enum_T_TM *) &DEFAULT_P021_OBU_section_TM);
  }
  tmp1 = /* 4 */
    Normalize_Distance_d_internal_t_TA_Lib_internal(q_scale, tmp.d_gradient);
  if ((0 <= i) & (i < 50)) {
    (*GradientProfile)[i].Loc_Absolute = _L135;
    (*GradientProfile)[i].Loc_LRBG = (*GradientProfile)[i].Loc_Absolute;
    (*GradientProfile)[i].valid = _L123.valid;
    (*GradientProfile)[i].Gradient = tmp2;
    (*GradientProfile)[i].L_Gradient = tmp1 - _L135;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Convert_P21_to_DistanceProfile_loop_TA_Gradient.c
** Generation date: 2015-08-07T17:19:06
*************************************************************$ */

