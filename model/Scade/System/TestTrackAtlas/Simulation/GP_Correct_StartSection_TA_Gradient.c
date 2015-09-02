/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-02T17:34:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Correct_StartSection_TA_Gradient.h"

void GP_Correct_StartSection_reset_TA_Gradient(
  outC_GP_Correct_StartSection_TA_Gradient *outC)
{
}

/* TA_Gradient::GP_Correct_StartSection */
void GP_Correct_StartSection_TA_Gradient(
  /* TA_Gradient::GP_Correct_StartSection::Profile_in */GradientProfile_t_TrackAtlasTypes *Profile_in,
  /* TA_Gradient::GP_Correct_StartSection::Loc_BG */kcg_int Loc_BG,
  outC_GP_Correct_StartSection_TA_Gradient *outC)
{
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L1, Profile_in);
  kcg_copy_Gradient_section_t_TrackAtlasTypes(&outC->_L3, &outC->_L1[0]);
  outC->_L8 = 0;
  kcg_copy_Gradient_section_t_TrackAtlasTypes(&outC->_L7, &outC->_L3);
  if (kcg_true) {
    outC->_L7.Loc_LRBG = outC->_L8;
  }
  outC->_L9 = outC->_L1[1].Loc_Absolute;
  outC->_L10 = Loc_BG;
  outC->_L11 = outC->_L9 - outC->_L10;
  kcg_copy_Gradient_section_t_TrackAtlasTypes(&outC->_L12, &outC->_L7);
  if (kcg_true) {
    outC->_L12.L_Gradient = outC->_L11;
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L5, &outC->_L1);
  if ((0 <= 0) & (0 < 50)) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(&outC->_L5[0], &outC->_L12);
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->Profile_out, &outC->_L5);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** GP_Correct_StartSection_TA_Gradient.c
** Generation date: 2015-09-02T17:34:33
*************************************************************$ */

