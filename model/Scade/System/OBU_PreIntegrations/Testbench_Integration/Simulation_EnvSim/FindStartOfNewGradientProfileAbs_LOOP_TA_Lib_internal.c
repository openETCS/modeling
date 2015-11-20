/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FindStartOfNewGradientProfileAbs_LOOP_TA_Lib_internal.h"

/* TA_Lib_internal::FindStartOfNewGradientProfileAbs_LOOP */
void FindStartOfNewGradientProfileAbs_LOOP_TA_Lib_internal(
  /* TA_Lib_internal::FindStartOfNewGradientProfileAbs_LOOP::i */kcg_int i,
  /* TA_Lib_internal::FindStartOfNewGradientProfileAbs_LOOP::Acc */kcg_int Acc,
  /* TA_Lib_internal::FindStartOfNewGradientProfileAbs_LOOP::distance_in */L_internal_Type_Obu_BasicTypes_Pkg distance_in,
  /* TA_Lib_internal::FindStartOfNewGradientProfileAbs_LOOP::Profile_in */GradientProfile_t_TrackAtlasTypes *Profile_in,
  /* TA_Lib_internal::FindStartOfNewGradientProfileAbs_LOOP::cont */kcg_bool *cont,
  /* TA_Lib_internal::FindStartOfNewGradientProfileAbs_LOOP::relevant_section */kcg_int *relevant_section)
{
  static G_internal_Type_Obu_BasicTypes_Pkg tmp;
  /* TA_Lib_internal::FindStartOfNewGradientProfileAbs_LOOP::_L4 */
  static Gradient_section_t_TrackAtlasTypes _L4;
  
  *relevant_section = i + 0;
  if ((0 <= i) & (i < 50)) {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(&_L4, &(*Profile_in)[i]);
  }
  else {
    kcg_copy_Gradient_section_t_TrackAtlasTypes(
      &_L4,
      (Gradient_section_t_TrackAtlasTypes *)
        &DEFAULT_GradientSection_TrackAtlasTypes);
  }
  if (0 <= _L4.Gradient) {
    tmp = _L4.Gradient;
  }
  else {
    tmp = - _L4.Gradient;
  }
  *cont = !((i > 0) & (0 == _L4.Loc_Absolute)) & (_L4.Loc_Absolute <
      distance_in) & (tmp != 255);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** FindStartOfNewGradientProfileAbs_LOOP_TA_Lib_internal.c
** Generation date: 2015-11-20T19:47:19
*************************************************************$ */

