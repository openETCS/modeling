/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TrainLength_Correction_TA_Lib_internal.h"

/* TA_Lib_internal::TrainLength_Correction */
L_internal_Type_Obu_BasicTypes_Pkg TrainLength_Correction_TA_Lib_internal(
  /* TA_Lib_internal::TrainLength_Correction::Static_Speed_Profile */StaticSpeedProfile_t_TrackAtlasTypes *Static_Speed_Profile,
  /* TA_Lib_internal::TrainLength_Correction::train_length */L_internal_Type_Obu_BasicTypes_Pkg train_length,
  /* TA_Lib_internal::TrainLength_Correction::i */kcg_int i,
  /* TA_Lib_internal::TrainLength_Correction::v_static */V_internal_Type_Obu_BasicTypes_Pkg v_static,
  /* TA_Lib_internal::TrainLength_Correction::distance */L_internal_Type_Obu_BasicTypes_Pkg distance)
{
  static StaticSpeedSection_t_TrackAtlasTypes tmp;
  /* TA_Lib_internal::TrainLength_Correction::corrected_distance */
  static L_internal_Type_Obu_BasicTypes_Pkg corrected_distance;
  
  if ((0 <= i - 1) & (i - 1 < 50)) {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &tmp,
      &(*Static_Speed_Profile)[i - 1]);
  }
  else {
    kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(
      &tmp,
      (StaticSpeedSection_t_TrackAtlasTypes *) &DEFAULT_SSP_section_TA_SSP);
  }
  if ((635 != v_static) & (v_static > tmp.v_static)) {
    corrected_distance = train_length + distance;
  }
  else {
    corrected_distance = distance;
  }
  return corrected_distance;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TrainLength_Correction_TA_Lib_internal.c
** Generation date: 2015-11-20T19:47:17
*************************************************************$ */

