/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P011_fs_struct_to_array_ntc_TM_TrainToTrack_lib_internal.h"

/* TM_TrainToTrack_lib_internal::C_P011_fs_struct_to_array_ntc */
kcg_int C_P011_fs_struct_to_array_ntc_TM_TrainToTrack_lib_internal(
  /* TM_TrainToTrack_lib_internal::C_P011_fs_struct_to_array_ntc::section */NID_NTC section)
{
  /* TM_TrainToTrack_lib_internal::C_P011_fs_struct_to_array_ntc::section_arrays */
  static kcg_int section_arrays;
  
  section_arrays = /* 1 */ CAST_NID_NTC_to_int_TM_conversions(section);
  return section_arrays;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P011_fs_struct_to_array_ntc_TM_TrainToTrack_lib_internal.c
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

