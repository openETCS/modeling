/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Merge_New_P21_to_Profile_TA_Gradient.h"

/* TA_Gradient::GP_Merge_New_P21_to_Profile */
void GP_Merge_New_P21_to_Profile_TA_Gradient(
  /* TA_Gradient::GP_Merge_New_P21_to_Profile::new_GP */GradientProfile_t_TrackAtlasTypes *new_GP,
  /* TA_Gradient::GP_Merge_New_P21_to_Profile::Last_GradientProfile_in */GradientProfile_t_TrackAtlasTypes *Last_GradientProfile_in,
  /* TA_Gradient::GP_Merge_New_P21_to_Profile::GradientdProfile_out */GradientProfile_t_TrackAtlasTypes *GradientdProfile_out)
{
  static GradientProfile_t_TrackAtlasTypes tmp;
  static kcg_int i;
  /* TA_Gradient::GP_Merge_New_P21_to_Profile::_L1 */
  static kcg_int _L1;
  
  if ((*Last_GradientProfile_in)[0].valid) {
    _L1 = /* 1 */
      FindStartOfNewGradientProfileAbs_TA_Lib_internal(
        Last_GradientProfile_in,
        new_GP);
  }
  else {
    _L1 = 0;
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    GradientdProfile_out,
    Last_GradientProfile_in);
  for (i = 0; i < 50; i++) {
    kcg_copy_GradientProfile_t_TrackAtlasTypes(&tmp, GradientdProfile_out);
    /* 1 */
    GP_Merge_New_P21_to_Profile_loop_TA_Gradient(
      i,
      &tmp,
      _L1,
      new_GP,
      GradientdProfile_out);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** GP_Merge_New_P21_to_Profile_TA_Gradient.c
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

