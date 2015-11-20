/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P005_fs_flatten_array_TM_lib_internal.h"

/* TM_lib_internal::C_P005_fs_flatten_array */
void C_P005_fs_flatten_array_TM_lib_internal(
  /* TM_lib_internal::C_P005_fs_flatten_array::i */kcg_int i,
  /* TM_lib_internal::C_P005_fs_flatten_array::Acc */P005_sections_array_flat_T_TM *Acc,
  /* TM_lib_internal::C_P005_fs_flatten_array::section_arrays */P005_OBU_sectionlist_array_T_TM *section_arrays,
  /* TM_lib_internal::C_P005_fs_flatten_array::flat */P005_sections_array_flat_T_TM *flat)
{
  static kcg_int tmp;
  
  kcg_copy_P005_sections_array_flat_T_TM(flat, Acc);
  if ((0 <= i / 7) & (i / 7 < 33) & ((0 <= i % 7) & (i % 7 < 7))) {
    tmp = (*section_arrays)[i / 7][i % 7];
  }
  else {
    tmp = 0;
  }
  if ((0 <= i) & (i < 231)) {
    (*flat)[i] = tmp;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P005_fs_flatten_array_TM_lib_internal.c
** Generation date: 2015-11-20T19:47:22
*************************************************************$ */

