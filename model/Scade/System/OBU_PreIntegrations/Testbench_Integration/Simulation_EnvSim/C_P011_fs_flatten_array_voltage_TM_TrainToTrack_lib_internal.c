/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P011_fs_flatten_array_voltage_TM_TrainToTrack_lib_internal.h"

/* TM_TrainToTrack_lib_internal::C_P011_fs_flatten_array_voltage */
void C_P011_fs_flatten_array_voltage_TM_TrainToTrack_lib_internal(
  /* TM_TrainToTrack_lib_internal::C_P011_fs_flatten_array_voltage::i */kcg_int i,
  /* TM_TrainToTrack_lib_internal::C_P011_fs_flatten_array_voltage::Acc */P011_voltage_sections_array_flat_t_TM_TrainToTrack *Acc,
  /* TM_TrainToTrack_lib_internal::C_P011_fs_flatten_array_voltage::section_arrays */P011_voltage_sectionlist_array_T_TM_TrainToTrack *section_arrays,
  /* TM_TrainToTrack_lib_internal::C_P011_fs_flatten_array_voltage::flat */P011_voltage_sections_array_flat_t_TM_TrainToTrack *flat)
{
  static kcg_int tmp;
  
  kcg_copy_P011_voltage_sections_array_flat_t_TM_TrainToTrack(flat, Acc);
  if ((0 <= i / 2) & (i / 2 < 4) & ((0 <= i % 2) & (i % 2 < 2))) {
    tmp = (*section_arrays)[i / 2][i % 2];
  }
  else {
    tmp = 0;
  }
  if ((0 <= i) & (i < 8)) {
    (*flat)[i] = tmp;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P011_fs_flatten_array_voltage_TM_TrainToTrack_lib_internal.c
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

