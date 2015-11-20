/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P011_us_array_ntc_TM_TrainToTrack_lib_internal.h"

/* TM_TrainToTrack_lib_internal::C_P011_us_array_ntc */
NID_NTC C_P011_us_array_ntc_TM_TrainToTrack_lib_internal(
  /* TM_TrainToTrack_lib_internal::C_P011_us_array_ntc::flat */kcg_int flat)
{
  /* TM_TrainToTrack_lib_internal::C_P011_us_array_ntc::sections */
  static NID_NTC sections;
  
  sections = /* 1 */ CAST_Int_to_NID_NTC_TM_conversions(flat);
  return sections;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P011_us_array_ntc_TM_TrainToTrack_lib_internal.c
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

