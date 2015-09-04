/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Merge_New_P21_to_Profile_loop_TA_Gradient.h"

void GP_Merge_New_P21_to_Profile_loop_reset_TA_Gradient(
  outC_GP_Merge_New_P21_to_Profile_loop_TA_Gradient *outC)
{
}

/* TA_Gradient::GP_Merge_New_P21_to_Profile_loop */
void GP_Merge_New_P21_to_Profile_loop_TA_Gradient(
  /* TA_Gradient::GP_Merge_New_P21_to_Profile_loop::i */kcg_int i,
  /* TA_Gradient::GP_Merge_New_P21_to_Profile_loop::GP */GradientProfile_t_TrackAtlasTypes *GP,
  /* TA_Gradient::GP_Merge_New_P21_to_Profile_loop::First_Section_To_Replace */kcg_int First_Section_To_Replace,
  /* TA_Gradient::GP_Merge_New_P21_to_Profile_loop::new_GP_received */GradientProfile_t_TrackAtlasTypes *new_GP_received,
  outC_GP_Merge_New_P21_to_Profile_loop_TA_Gradient *outC)
{
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L20, GP);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L6, new_GP_received);
  outC->_L11 = i;
  if ((0 <= outC->_L11) & (outC->_L11 < 50)) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &outC->_L15,
      &outC->_L6[outC->_L11]);
  }
  else {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &outC->_L15,
      (Gradient_section_t_TrackAtlasTypes *)
        &DEFAULT_GradientSection_TrackAtlasTypes);
  }
  outC->_L5 = i;
  outC->_L4 = First_Section_To_Replace;
  outC->_L7 = outC->_L5 + outC->_L4;
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L19, &outC->_L20);
  if ((0 <= outC->_L7) & (outC->_L7 < 50)) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &outC->_L19[outC->_L7],
      &outC->_L15);
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->GradientProfile_out,
    &outC->_L19);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** GP_Merge_New_P21_to_Profile_loop_TA_Gradient.c
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

