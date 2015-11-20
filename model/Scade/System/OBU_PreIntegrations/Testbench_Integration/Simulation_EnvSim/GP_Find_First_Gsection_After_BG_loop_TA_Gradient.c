/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GP_Find_First_Gsection_After_BG_loop_TA_Gradient.h"

/* TA_Gradient::GP_Find_First_Gsection_After_BG_loop */
void GP_Find_First_Gsection_After_BG_loop_TA_Gradient(
  /* TA_Gradient::GP_Find_First_Gsection_After_BG_loop::i */kcg_int i,
  /* TA_Gradient::GP_Find_First_Gsection_After_BG_loop::Acc */kcg_int Acc,
  /* TA_Gradient::GP_Find_First_Gsection_After_BG_loop::Profile_in */GradientProfile_t_TrackAtlasTypes *Profile_in,
  /* TA_Gradient::GP_Find_First_Gsection_After_BG_loop::cont */kcg_bool *cont,
  /* TA_Gradient::GP_Find_First_Gsection_After_BG_loop::Pointer */kcg_int *Pointer)
{
  static Gradient_section_t_TrackAtlasTypes tmp;
  /* TA_Gradient::GP_Find_First_Gsection_After_BG_loop::_L13 */
  static kcg_int _L13;
  
  _L13 = i - 1;
  if (_L13 < 0) {
    *Pointer = 0;
  }
  else {
    *Pointer = _L13;
  }
  if ((0 <= i) & (i < 50)) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(&tmp, &(*Profile_in)[i]);
  }
  else {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &tmp,
      (Gradient_section_t_TrackAtlasTypes *) &DEFAULT_GP_Section_TA_Gradient);
  }
  *cont = tmp.Loc_LRBG < 0;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** GP_Find_First_Gsection_After_BG_loop_TA_Gradient.c
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

