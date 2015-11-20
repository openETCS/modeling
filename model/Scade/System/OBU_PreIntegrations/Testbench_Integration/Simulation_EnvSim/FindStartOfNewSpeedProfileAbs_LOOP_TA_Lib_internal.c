/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal.h"

/* TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP */
void FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal(
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP::i */kcg_int i,
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP::Acc */kcg_int Acc,
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP::distance_in */L_internal_Type_Obu_BasicTypes_Pkg distance_in,
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP::Profile_in */StaticSpeedProfile_t_TrackAtlasTypes *Profile_in,
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP::cont */kcg_bool *cont,
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP::relevant_section */kcg_int *relevant_section)
{
  static V_internal_Type_Obu_BasicTypes_Pkg tmp;
  /* TA_Lib_internal::FindStartOfNewSpeedProfileAbs_LOOP::_L4 */
  static StaticSpeedSection_t_TrackAtlasTypes _L4;
  
  *relevant_section = i + 0;
  if ((0 <= i) & (i < 50)) {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(&_L4, &(*Profile_in)[i]);
  }
  else {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &_L4,
      (StaticSpeedSection_t_TrackAtlasTypes *)
        &DEFAULT_StaticSpeedSection_TrackAtlasTypes);
  }
  if (0 <= _L4.v_static) {
    tmp = _L4.v_static;
  }
  else {
    tmp = - _L4.v_static;
  }
  *cont = !((i > 0) & (0 == _L4.d_static_abs)) & (_L4.d_static_abs <
      distance_in) & (tmp != 635);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** FindStartOfNewSpeedProfileAbs_LOOP_TA_Lib_internal.c
** Generation date: 2015-11-20T19:47:17
*************************************************************$ */

