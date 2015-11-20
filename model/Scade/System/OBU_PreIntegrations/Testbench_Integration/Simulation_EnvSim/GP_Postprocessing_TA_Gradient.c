/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Postprocessing_TA_Gradient.h"

void GP_Postprocessing_reset_TA_Gradient(
  outC_GP_Postprocessing_TA_Gradient *outC)
{
  outC->init = kcg_true;
}

/* TA_Gradient::GP_Postprocessing */
void GP_Postprocessing_TA_Gradient(
  /* TA_Gradient::GP_Postprocessing::Profile_in */GradientProfile_t_TrackAtlasTypes *Profile_in,
  /* TA_Gradient::GP_Postprocessing::pos_LRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_LRBG,
  /* TA_Gradient::GP_Postprocessing::pos_prvLRBG */L_internal_Type_Obu_BasicTypes_Pkg pos_prvLRBG,
  /* TA_Gradient::GP_Postprocessing::there_is_prvLRBG */kcg_bool there_is_prvLRBG,
  outC_GP_Postprocessing_TA_Gradient *outC)
{
  static GradientProfile_t_TrackAtlasTypes tmp;
  
  if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_GradientProfile_t_TrackAtlasTypes(
      &tmp,
      (GradientProfile_t_TrackAtlasTypes *)
        &DEFAULT_GradientProfile_TrackAtlasTypes);
  }
  else {
    kcg_copy_GradientProfile_t_TrackAtlasTypes(&tmp, &outC->rem__L4);
  }
  /* 1 */
  GP_Position_GP_with_BGs_TA_Gradient(
    Profile_in,
    pos_LRBG,
    pos_prvLRBG,
    there_is_prvLRBG,
    &tmp,
    &outC->GP,
    &outC->available,
    &outC->rem__L4);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** GP_Postprocessing_TA_Gradient.c
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

