/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T11:57:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Convert_P21_to_DistanceProfile_loop_TA_Gradient.h"

void GP_Convert_P21_to_DistanceProfile_loop_reset_TA_Gradient(
  outC_GP_Convert_P21_to_DistanceProfile_loop_TA_Gradient *outC)
{
  /* 4 */
  Normalize_Distance_d_internal_t_reset_TA_Lib_internal(&outC->Context_4);
  /* 2 */ EVAL_Q_GDIR_reset_TA_Lib_internal(&outC->Context_2);
  /* 3 */
  Normalize_Distance_d_internal_t_reset_TA_Lib_internal(&outC->Context_3);
}

/* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop */
void GP_Convert_P21_to_DistanceProfile_loop_TA_Gradient(
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop::i */kcg_int i,
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop::ProfileAccu */GradientProfile_t_TrackAtlasTypes *ProfileAccu,
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop::SectionIn */P021_OBU_sectionlist_enum_T_TM *SectionIn,
  /* TA_Gradient::GP_Convert_P21_to_DistanceProfile_loop::q_scale */Q_SCALE q_scale,
  outC_GP_Convert_P21_to_DistanceProfile_loop_TA_Gradient *outC)
{
  outC->_L153 = 0;
  kcg_copy_P021_OBU_sectionlist_enum_T_TM(&outC->_L121, SectionIn);
  outC->_L134 = i;
  if ((0 <= outC->_L134) & (outC->_L134 < 33)) {
    kcg_copy_P021_section_enum_T_TM(&outC->_L123, &outC->_L121[outC->_L134]);
  }
  else {
    kcg_copy_P021_section_enum_T_TM(
      &outC->_L123,
      (P021_section_enum_T_TM *) &DEFAULT_P021_OBU_section_TM);
  }
  outC->_L130 = outC->_L123.valid;
  outC->_L139 = q_scale;
  outC->_L138 = outC->_L123.d_gradient;
  /* 3 */
  Normalize_Distance_d_internal_t_TA_Lib_internal(
    outC->_L139,
    outC->_L138,
    &outC->Context_3);
  outC->_L135 = outC->Context_3.d_internal;
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L142, ProfileAccu);
  outC->_L144 = i;
  outC->_L145 = 1;
  outC->_L146 = outC->_L144 - outC->_L145;
  if ((0 <= outC->_L146) & (outC->_L146 < 50)) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &outC->_L143,
      &outC->_L142[outC->_L146]);
  }
  else {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &outC->_L143,
      (Gradient_section_t_TrackAtlasTypes *) &DEFAULT_GP_Section_TA_Gradient);
  }
  outC->_L148 = outC->_L143.Loc_LRBG;
  outC->_L150 = outC->_L135 + outC->_L148;
  if (outC->_L130) {
    outC->_L152 = outC->_L150;
  }
  else {
    outC->_L152 = outC->_L153;
  }
  outC->_L147 = outC->_L143.Loc_Absolute;
  outC->_L149 = outC->_L135 + outC->_L147;
  if (outC->_L130) {
    outC->_L151 = outC->_L149;
  }
  else {
    outC->_L151 = outC->_L153;
  }
  outC->_L126 = 1;
  outC->_L141 = outC->_L134 + outC->_L126;
  kcg_copy_P021_OBU_sectionlist_enum_T_TM(&outC->_L128, SectionIn);
  if ((0 <= outC->_L141) & (outC->_L141 < 33)) {
    kcg_copy_P021_section_enum_T_TM(&outC->_L140, &outC->_L128[outC->_L141]);
  }
  else {
    kcg_copy_P021_section_enum_T_TM(
      &outC->_L140,
      (P021_section_enum_T_TM *) &DEFAULT_P021_OBU_section_TM);
  }
  outC->_L137 = outC->_L140.d_gradient;
  outC->_L129 = outC->_L123.q_gdir;
  outC->_L124 = outC->_L123.g_a;
  /* 2 */
  EVAL_Q_GDIR_TA_Lib_internal(outC->_L129, outC->_L124, &outC->Context_2);
  outC->_L127 = outC->Context_2.gradient;
  /* 4 */
  Normalize_Distance_d_internal_t_TA_Lib_internal(
    outC->_L139,
    outC->_L137,
    &outC->Context_4);
  outC->_L122 = outC->Context_4.d_internal;
  outC->_L136.valid = outC->_L130;
  outC->_L136.Loc_Absolute = outC->_L151;
  outC->_L136.Loc_LRBG = outC->_L152;
  outC->_L136.Gradient = outC->_L127;
  outC->_L136.L_Gradient = outC->_L122;
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L125, ProfileAccu);
  outC->_L131 = i;
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L133, &outC->_L125);
  if ((0 <= outC->_L131) & (outC->_L131 < 50)) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &outC->_L133[outC->_L131],
      &outC->_L136);
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->GradientProfile,
    &outC->_L133);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** GP_Convert_P21_to_DistanceProfile_loop_TA_Gradient.c
** Generation date: 2015-09-04T11:57:30
*************************************************************$ */

