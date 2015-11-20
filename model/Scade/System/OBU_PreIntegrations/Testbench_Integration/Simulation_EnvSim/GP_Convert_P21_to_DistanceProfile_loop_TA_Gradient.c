/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Convert_P21_to_DistanceProfile_loop_TA_Gradient.h"

/* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop */
void GP_Convert_P21_to_DistanceProfile_loop_TA_Gradient(
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop::i */kcg_int i,
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop::ProfileAccu */GradientProfile_t_TrackAtlasTypes *ProfileAccu,
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop::SectionIn */P021_OBU_sectionlist_enum_T_TM *SectionIn,
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop::q_scale */Q_SCALE q_scale,
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop::GradientProfile */GradientProfile_t_TrackAtlasTypes *GradientProfile)
{
  static kcg_int tmp4;
  static kcg_int tmp3;
  static G_internal_Type_Obu_BasicTypes_Pkg tmp2;
  static L_internal_Type_Obu_BasicTypes_Pkg tmp1;
  static P021_section_enum_T_TM tmp;
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop::_L123 */
  static P021_section_enum_T_TM _L123;
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop::_L143 */
  static Gradient_section_t_TrackAtlasTypes _L143;
  
  if ((0 <= i - 1) & (i - 1 < 50)) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(&_L143, &(*ProfileAccu)[i - 1]);
  }
  else {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &_L143,
      (Gradient_section_t_TrackAtlasTypes *) &DEFAULT_GP_Section_TA_Gradient);
  }
  if ((0 <= i) & (i < 33)) {
    kcg_copy_P021_section_enum_T_TM(&_L123, &(*SectionIn)[i]);
  }
  else {
    kcg_copy_P021_section_enum_T_TM(
      &_L123,
      (P021_section_enum_T_TM *) &DEFAULT_P021_OBU_section_TM);
  }
  tmp2 = /* 3 */
    Normalize_Distance_d_internal_t_TA_Lib_internal(q_scale, _L123.d_gradient);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(GradientProfile, ProfileAccu);
  if (_L123.valid) {
    tmp4 = tmp2 + _L143.Loc_Absolute;
    tmp3 = tmp2 + _L143.Loc_LRBG;
  }
  else {
    tmp4 = 0;
    tmp3 = 0;
  }
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
    (*GradientProfile)[i].valid = _L123.valid;
    (*GradientProfile)[i].Loc_Absolute = tmp4;
    (*GradientProfile)[i].Loc_LRBG = tmp3;
    (*GradientProfile)[i].Gradient = tmp2;
    (*GradientProfile)[i].L_Gradient = tmp1;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** GP_Convert_P21_to_DistanceProfile_loop_TA_Gradient.c
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

