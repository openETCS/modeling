/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Convert_P21_to_DistancePr_TA_Gradient.h"

void Convert_P21_to_DistancePr_reset_TA_Gradient(
  outC_Convert_P21_to_DistancePr_TA_Gradient *outC)
{
  /* 4 */ Normalize_Distance_d_inte_reset_TA_Lib_internal(&outC->Context_4);
  /* 2 */ EVAL_Q_GDIR_reset_TA_Lib_internal(&outC->Context_2);
  /* 3 */ Normalize_Distance_d_inte_reset_TA_Lib_internal(&outC->Context_3);
}

/* TA_Gradient::Convert_P21_to_DistanceProfile_loop */
void Convert_P21_to_DistancePr_TA_Gradient(
  /* TA_Gradient::Convert_P21_to_DistanceProfile_loop::i */kcg_int i,
  /* TA_Gradient::Convert_P21_to_DistanceProfile_loop::acc */GradientProfile_t_TrackAtlasTypes *acc,
  /* TA_Gradient::Convert_P21_to_DistanceProfile_loop::SectionIn */P021_OBU_sectionlist_enum_T_TM *SectionIn,
  /* TA_Gradient::Convert_P21_to_DistanceProfile_loop::q_scale */Q_SCALE q_scale,
  outC_Convert_P21_to_DistancePr_TA_Gradient *outC)
{
  outC->_L134 = i;
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
  outC->_L139 = q_scale;
  kcg_copy_P021_OBU_sectionlist_enum_T_TM(&outC->_L121, SectionIn);
  if ((0 <= outC->_L134) & (outC->_L134 < 33)) {
    kcg_copy_P021_section_enum_T_TM(&outC->_L123, &outC->_L121[outC->_L134]);
  }
  else {
    kcg_copy_P021_section_enum_T_TM(
      &outC->_L123,
      (P021_section_enum_T_TM *) &DEFAULT_P021_OBU_section_TM);
  }
  outC->_L138 = outC->_L123.d_gradient;
  outC->_L137 = outC->_L140.d_gradient;
  outC->_L130 = outC->_L123.valid;
  /* 3 */
  Normalize_Distance_d_inte_TA_Lib_internal(
    outC->_L139,
    outC->_L138,
    &outC->Context_3);
  outC->_L135 = outC->Context_3.d_internal;
  outC->_L129 = outC->_L123.q_gdir;
  outC->_L124 = outC->_L123.g_a;
  /* 2 */
  EVAL_Q_GDIR_TA_Lib_internal(outC->_L129, outC->_L124, &outC->Context_2);
  outC->_L127 = outC->Context_2.gradient;
  /* 4 */
  Normalize_Distance_d_inte_TA_Lib_internal(
    outC->_L139,
    outC->_L137,
    &outC->Context_4);
  outC->_L122 = outC->Context_4.d_internal;
  outC->_L132 = outC->_L122 - outC->_L135;
  outC->_L136.valid = outC->_L130;
  outC->_L136.Loc_Absolute = outC->_L135;
  outC->_L136.Loc_LRBG = outC->_L135;
  outC->_L136.Gradient = outC->_L127;
  outC->_L136.L_Gradient = outC->_L132;
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L125, acc);
  outC->_L131 = i;
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L133, &outC->_L125);
  if ((0 <= outC->_L131) & (outC->_L131 < 10)) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &outC->_L133[outC->_L131],
      &outC->_L136);
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->GradientProfile,
    &outC->_L133);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Convert_P21_to_DistancePr_TA_Gradient.c
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

