/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GradientProfile_to_DMI_TA_Export.h"

void GradientProfile_to_DMI_reset_TA_Export(
  outC_GradientProfile_to_DMI_TA_Export *outC)
{
  kcg_int i;
  
  for (i = 0; i < 50; i++) {
    /* 1 */ GradientProfile_to_DMI_loop_reset_TA_Export(&outC->Context_1[i]);
  }
}

/* TA_Export::GradientProfile_to_DMI */
void GradientProfile_to_DMI_TA_Export(
  /* TA_Export::GradientProfile_to_DMI::Gradient_Profile_in */GradientProfile_t_TrackAtlasTypes *Gradient_Profile_in,
  outC_GradientProfile_to_DMI_TA_Export *outC)
{
  kcg_int i;
  
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L1, Gradient_Profile_in);
  for (i = 0; i < 50; i++) {
    /* 1 */
    GradientProfile_to_DMI_loop_TA_Export(&outC->_L1[i], &outC->Context_1[i]);
    kcg_copy__3_GradientProfile_for_DMI_section_t_TrackAtlasTypes(
      &outC->_L2[i],
      &outC->Context_1[i].Gradiient_section_for_DMI_out);
  }
  kcg_copy_GradientProfile_for_DMI_t_TrackAtlasTypes(
    &outC->Gradient_Profile_for_DMI_out,
    &outC->_L2);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** GradientProfile_to_DMI_TA_Export.c
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

