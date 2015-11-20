/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P011_flatten_sections_voltage_TM_TrainToTrack_lib_internal.h"

/* TM_TrainToTrack_lib_internal::C_P011_flatten_sections_voltage */
void C_P011_flatten_sections_voltage_TM_TrainToTrack_lib_internal(
  /* TM_TrainToTrack_lib_internal::C_P011_flatten_sections_voltage::MergedSections */P011_voltage_list_TM_TrainToTrack *MergedSections,
  /* TM_TrainToTrack_lib_internal::C_P011_flatten_sections_voltage::Flattened */P011_voltage_sections_array_flat_t_TM_TrainToTrack *Flattened)
{
  static P011_voltage_sections_array_flat_t_TM_TrainToTrack tmp;
  static kcg_int i;
  /* TM_TrainToTrack_lib_internal::C_P011_flatten_sections_voltage::_L74 */
  static array_int_2_4 _L74;
  
  for (i = 0; i < 4; i++) {
    /* 1 */
    C_P011_fs_struct_to_array_voltage_TM_TrainToTrack_lib_internal(
      &(*MergedSections)[i],
      &_L74[i]);
  }
  kcg_copy_P011_voltage_sections_array_flat_t_TM_TrainToTrack(
    Flattened,
    (P011_voltage_sections_array_flat_t_TM_TrainToTrack *)
      &DEFAULT_P011_voltage_sections_array_flat_TM_TrainToTrack);
  for (i = 0; i < 8; i++) {
    kcg_copy_P011_voltage_sections_array_flat_t_TM_TrainToTrack(
      &tmp,
      Flattened);
    /* 1 */
    C_P011_fs_flatten_array_voltage_TM_TrainToTrack_lib_internal(
      i,
      &tmp,
      &_L74,
      Flattened);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P011_flatten_sections_voltage_TM_TrainToTrack_lib_internal.c
** Generation date: 2015-11-20T19:47:16
*************************************************************$ */

