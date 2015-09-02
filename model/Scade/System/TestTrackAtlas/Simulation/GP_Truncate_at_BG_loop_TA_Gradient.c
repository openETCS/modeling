/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-02T17:34:33
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Truncate_at_BG_loop_TA_Gradient.h"

void GP_Truncate_at_BG_loop_reset_TA_Gradient(
  outC_GP_Truncate_at_BG_loop_TA_Gradient *outC)
{
}

/* TA_Gradient::GP_Truncate_at_BG_loop */
void GP_Truncate_at_BG_loop_TA_Gradient(
  /* TA_Gradient::GP_Truncate_at_BG_loop::i */kcg_int i,
  /* TA_Gradient::GP_Truncate_at_BG_loop::Acc */GradientProfile_t_TrackAtlasTypes *Acc,
  /* TA_Gradient::GP_Truncate_at_BG_loop::Profile_in */GradientProfile_t_TrackAtlasTypes *Profile_in,
  /* TA_Gradient::GP_Truncate_at_BG_loop::Pointer */kcg_int Pointer,
  outC_GP_Truncate_at_BG_loop_TA_Gradient *outC)
{
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L3, Profile_in);
  outC->_L6 = i;
  outC->_L4 = Pointer;
  outC->_L7 = outC->_L6 + outC->_L4;
  if ((0 <= outC->_L7) & (outC->_L7 < 50)) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &outC->_L8,
      &outC->_L3[outC->_L7]);
  }
  else {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &outC->_L8,
      (Gradient_section_t_TrackAtlasTypes *) &DEFAULT_GP_Section_TA_Gradient);
  }
  outC->_L9 = outC->_L8.valid;
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L2, Acc);
  outC->_L1 = i;
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L5, &outC->_L2);
  if ((0 <= outC->_L1) & (outC->_L1 < 50)) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &outC->_L5[outC->_L1],
      &outC->_L8);
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->Profile_out, &outC->_L5);
  outC->cont = outC->_L9;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** GP_Truncate_at_BG_loop_TA_Gradient.c
** Generation date: 2015-09-02T17:34:33
*************************************************************$ */

