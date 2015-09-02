/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-02T17:34:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Normalize_Profile_loop_TA_Gradient.h"

void GP_Normalize_Profile_loop_reset_TA_Gradient(
  outC_GP_Normalize_Profile_loop_TA_Gradient *outC)
{
}

/* TA_Gradient::GP_Normalize_Profile_loop */
void GP_Normalize_Profile_loop_TA_Gradient(
  /* TA_Gradient::GP_Normalize_Profile_loop::i */kcg_int i,
  /* TA_Gradient::GP_Normalize_Profile_loop::ProfileIn */GradientProfile_t_TrackAtlasTypes *ProfileIn,
  /* TA_Gradient::GP_Normalize_Profile_loop::pos_BG */L_internal_Type_Obu_BasicTypes_Pkg pos_BG,
  outC_GP_Normalize_Profile_loop_TA_Gradient *outC)
{
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L30, ProfileIn);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L2, ProfileIn);
  outC->_L1 = i;
  if ((0 <= outC->_L1) & (outC->_L1 < 50)) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &outC->_L4,
      &outC->_L2[outC->_L1]);
  }
  else {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &outC->_L4,
      (Gradient_section_t_TrackAtlasTypes *) &DEFAULT_GP_Section_TA_Gradient);
  }
  outC->_L5 = outC->_L4.valid;
  outC->Loc_Section_Abs = outC->_L4.Loc_Absolute;
  outC->_L3 = pos_BG;
  outC->_L9 = outC->Loc_Section_Abs - outC->_L3;
  outC->_L11 = 0;
  if (outC->_L5) {
    outC->_L10 = outC->_L9;
  }
  else {
    outC->_L10 = outC->_L11;
  }
  kcg_copy_Gradient_section_t_TrackAtlasTypes(&outC->_L7, &outC->_L4);
  if (kcg_true) {
    outC->_L7.Loc_LRBG = outC->_L10;
  }
  kcg_copy_Gradient_section_t_TrackAtlasTypes(
    &outC->Ga_section_at_LRBG,
    &outC->_L7);
  kcg_copy_Gradient_section_t_TrackAtlasTypes(
    &outC->_L12,
    &outC->Ga_section_at_LRBG);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L14, ProfileIn);
  outC->_L15 = i;
  outC->_L17 = 1;
  outC->_L16 = outC->_L15 + outC->_L17;
  if ((0 <= outC->_L16) & (outC->_L16 < 50)) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &outC->_L13,
      &outC->_L14[outC->_L16]);
  }
  else {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &outC->_L13,
      (Gradient_section_t_TrackAtlasTypes *) &DEFAULT_GP_Section_TA_Gradient);
  }
  outC->_L18 = outC->_L13.valid;
  outC->_L21 = 255;
  outC->_L19 = outC->_L13.Gradient;
  outC->_L22 = outC->_L21 != outC->_L19;
  outC->_L23 = outC->_L18 & outC->_L22;
  outC->_L20 = outC->_L13.Loc_Absolute;
  outC->_L25 = outC->Loc_Section_Abs;
  outC->_L26 = outC->_L20 - outC->_L25;
  outC->_L27 = outC->_L13.L_Gradient;
  if (outC->_L23) {
    outC->_L24 = outC->_L26;
  }
  else {
    outC->_L24 = outC->_L27;
  }
  outC->L_Gradient = outC->_L24;
  outC->_L31 = outC->L_Gradient;
  kcg_copy_Gradient_section_t_TrackAtlasTypes(&outC->_L34, &outC->_L12);
  if (kcg_true) {
    outC->_L34.L_Gradient = outC->_L31;
  }
  outC->_L33 = i;
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L32, &outC->_L30);
  if ((0 <= outC->_L33) & (outC->_L33 < 50)) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &outC->_L32[outC->_L33],
      &outC->_L34);
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->ProfileNormalized_LRBG,
    &outC->_L32);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** GP_Normalize_Profile_loop_TA_Gradient.c
** Generation date: 2015-09-02T17:34:33
*************************************************************$ */

