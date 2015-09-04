/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T11:57:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Find_First_Gsection_After_BG_loop_TA_Gradient.h"

void GP_Find_First_Gsection_After_BG_loop_reset_TA_Gradient(
  outC_GP_Find_First_Gsection_After_BG_loop_TA_Gradient *outC)
{
}

/* TA_Gradient::GP_Find_First_Gsection_After_BG_loop */
void GP_Find_First_Gsection_After_BG_loop_TA_Gradient(
  /* TA_Gradient::GP_Find_First_Gsection_After_BG_loop::i */kcg_int i,
  /* TA_Gradient::GP_Find_First_Gsection_After_BG_loop::Acc */kcg_int Acc,
  /* TA_Gradient::GP_Find_First_Gsection_After_BG_loop::Profile_in */GradientProfile_t_TrackAtlasTypes *Profile_in,
  outC_GP_Find_First_Gsection_After_BG_loop_TA_Gradient *outC)
{
  kcg_int noname;
  
  outC->_L5 = i;
  outC->_L14 = 1;
  outC->_L13 = outC->_L5 - outC->_L14;
  outC->_L16 = 0;
  outC->_L15 = outC->_L13 < outC->_L16;
  if (outC->_L15) {
    outC->_L17 = outC->_L16;
  }
  else {
    outC->_L17 = outC->_L13;
  }
  outC->_L12 = 0;
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L7, Profile_in);
  if ((0 <= outC->_L5) & (outC->_L5 < 50)) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &outC->_L9,
      &outC->_L7[outC->_L5]);
  }
  else {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &outC->_L9,
      (Gradient_section_t_TrackAtlasTypes *) &DEFAULT_GP_Section_TA_Gradient);
  }
  outC->_L10 = outC->_L9.Loc_LRBG;
  outC->_L11 = outC->_L10 < outC->_L12;
  outC->_L6 = Acc;
  noname = outC->_L6;
  outC->Pointer = outC->_L17;
  outC->cont = outC->_L11;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** GP_Find_First_Gsection_After_BG_loop_TA_Gradient.c
** Generation date: 2015-09-04T11:57:30
*************************************************************$ */

