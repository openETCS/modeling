/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Truncate_at_BG_TA_Gradient.h"

/* TA_Gradient::GP_Truncate_at_BG */
void GP_Truncate_at_BG_TA_Gradient(
  /* TA_Gradient::GP_Truncate_at_BG::Profile_in */GradientProfile_t_TrackAtlasTypes *Profile_in,
  /* TA_Gradient::GP_Truncate_at_BG::Profile_out */GradientProfile_t_TrackAtlasTypes *Profile_out)
{
  static kcg_int tmp2;
  static GradientProfile_t_TrackAtlasTypes tmp1;
  static kcg_bool tmp;
  static kcg_int i;
  /* TA_Gradient::GP_Truncate_at_BG::_L5 */
  static kcg_int _L5;
  
  _L5 = 0;
  for (i = 0; i < 50; i++) {
    tmp2 = _L5;
    /* 1 */
    GP_Find_First_Gsection_After_BG_loop_TA_Gradient(
      i,
      tmp2,
      Profile_in,
      &tmp,
      &_L5);
    if (!tmp) {
      break;
    }
  }
  kcg_copy_GradientProfile_t_TrackAtlasTypes(
    Profile_out,
    (GradientProfile_t_TrackAtlasTypes *)
      &DEFAULT_GradientProfile_TrackAtlasTypes);
  for (i = 0; i < 50; i++) {
    kcg_copy_GradientProfile_t_TrackAtlasTypes(&tmp1, Profile_out);
    /* 1 */
    GP_Truncate_at_BG_loop_TA_Gradient(
      i,
      &tmp1,
      Profile_in,
      _L5,
      &tmp,
      Profile_out);
    if (!tmp) {
      break;
    }
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** GP_Truncate_at_BG_TA_Gradient.c
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

