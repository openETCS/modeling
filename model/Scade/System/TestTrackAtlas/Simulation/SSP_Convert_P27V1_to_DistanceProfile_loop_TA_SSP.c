/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP.h"

void SSP_Convert_P27V1_to_DistanceProfile_loop_reset_TA_SSP(
  outC_SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP *outC)
{
  /* 2 */
  Normalize_Distance_d_internal_t_reset_TA_Lib_internal(&outC->Context_2);
  /* 1 */ Eval_Q_Front_reset_TA_Lib_internal(&outC->Context_1);
}

/* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop */
void SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP(
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::i */kcg_int i,
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::ProfileAccu */StaticSpeedProfile_t_TrackAtlasTypes *ProfileAccu,
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::SectionIn */P027V1_OBU_sectionlist_enum_T_TM_baseline2 *SectionIn,
  /* TA_SSP::SSP_Convert_P27V1_to_DistanceProfile_loop::q_scale */Q_SCALE q_scale,
  outC_SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP *outC)
{
  kcg_copy_P027V1_OBU_sectionlist_enum_T_TM_baseline2(&outC->_L121, SectionIn);
  outC->_L134 = i;
  if ((0 <= outC->_L134) & (outC->_L134 < 33)) {
    kcg_copy_P027V1_section_enum_T_TM_baseline2(
      &outC->_L123,
      &outC->_L121[outC->_L134]);
  }
  else {
    kcg_copy_P027V1_section_enum_T_TM_baseline2(
      &outC->_L123,
      (P027V1_section_enum_T_TM_baseline2 *)
        &DEFAULT_P027v1_OBU_section_TM_baseline2);
  }
  outC->_L159 = outC->_L123.q_front;
  /* 1 */ Eval_Q_Front_TA_Lib_internal(outC->_L159, &outC->Context_1);
  outC->_L160 = outC->Context_1.add_train_length;
  outC->_L158 = 0;
  outC->_L139 = q_scale;
  outC->_L138 = outC->_L123.d_static;
  /* 2 */
  Normalize_Distance_d_internal_t_TA_Lib_internal(
    outC->_L139,
    outC->_L138,
    &outC->Context_2);
  outC->_L135 = outC->Context_2.d_internal;
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L142, ProfileAccu);
  outC->_L144 = i;
  outC->_L145 = 1;
  outC->_L146 = outC->_L144 - outC->_L145;
  if ((0 <= outC->_L146) & (outC->_L146 < 50)) {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &outC->_L143,
      &outC->_L142[outC->_L146]);
  }
  else {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &outC->_L143,
      (StaticSpeedSection_t_TrackAtlasTypes *)
        &DEFAULT_StaticSpeedSection_TrackAtlasTypes);
  }
  outC->_L148 = outC->_L143.d_static_LRBG;
  outC->_L157 = outC->_L135 + outC->_L148;
  outC->_L130 = outC->_L123.valid;
  if (outC->_L130) {
    outC->_L156 = outC->_L157;
  }
  else {
    outC->_L156 = outC->_L158;
  }
  outC->_L147 = outC->_L143.d_static_abs;
  outC->_L154 = outC->_L135 + outC->_L147;
  if (outC->_L130) {
    outC->_L155 = outC->_L154;
  }
  else {
    outC->_L155 = outC->_L158;
  }
  outC->_L137 = outC->_L123.v_static;
  outC->_L136.valid = outC->_L130;
  outC->_L136.d_static_abs = outC->_L155;
  outC->_L136.d_static_LRBG = outC->_L156;
  outC->_L136.q_train_length_corr = outC->_L160;
  outC->_L136.v_static = outC->_L137;
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L125, ProfileAccu);
  outC->_L131 = i;
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(&outC->_L133, &outC->_L125);
  if ((0 <= outC->_L131) & (outC->_L131 < 50)) {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &outC->_L133[outC->_L131],
      &outC->_L136);
  }
  kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(
    &outC->SpeedtProfile,
    &outC->_L133);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SSP_Convert_P27V1_to_DistanceProfile_loop_TA_SSP.c
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

