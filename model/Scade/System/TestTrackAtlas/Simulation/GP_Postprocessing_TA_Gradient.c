/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Postprocessing_TA_Gradient.h"

void GP_Postprocessing_reset_TA_Gradient(
  outC_GP_Postprocessing_TA_Gradient *outC)
{
  outC->init = kcg_true;
  /* 1 */ GP_Position_GP_with_BGs_reset_TA_Gradient(&outC->Context_1);
}

/* TA_Gradient::GP_Postprocessing */
void GP_Postprocessing_TA_Gradient(
  /* TA_Gradient::GP_Postprocessing::Profile_in */GradientProfile_t_TrackAtlasTypes *Profile_in,
  /* TA_Gradient::GP_Postprocessing::pos_LRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_Gradient::GP_Postprocessing::pos_prvLRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  /* TA_Gradient::GP_Postprocessing::there_is_prvLRBG */kcg_bool there_is_prvLRBG,
  outC_GP_Postprocessing_TA_Gradient *outC)
{
  outC->_L9 = there_is_prvLRBG;
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L8, Profile_in);
  if (outC->init) {
    kcg_copy_GradientProfile_t_TrackAtlasTypes(
      &outC->_L1,
      (GradientProfile_t_TrackAtlasTypes *)
        &DEFAULT_GradientProfile_TrackAtlasTypes);
  }
  else {
    kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->_L1, &outC->_L4);
  }
  outC->_L7 = pos_LRBG;
  outC->_L6 = pos_prvLRBG;
  /* 1 */
  GP_Position_GP_with_BGs_TA_Gradient(
    &outC->_L8,
    outC->_L7,
    outC->_L6,
    outC->_L9,
    &outC->_L1,
    &outC->Context_1);
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->_L2,
    &outC->Context_1.ProfileOut);
  outC->_L3 = outC->Context_1.available;
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    &outC->_L4,
    &outC->Context_1.ProfileLoopOut);
  outC->available = outC->_L3;
  kcg_copy_GradientProfile_t_TrackAtlasTypes(&outC->GP, &outC->_L2);
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** GP_Postprocessing_TA_Gradient.c
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

