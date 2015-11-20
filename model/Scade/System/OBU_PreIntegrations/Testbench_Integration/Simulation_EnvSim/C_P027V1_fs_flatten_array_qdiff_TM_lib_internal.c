/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P027V1_fs_flatten_array_qdiff_TM_lib_internal.h"

/* TM_lib_internal::C_P027V1_fs_flatten_array_qdiff */
void C_P027V1_fs_flatten_array_qdiff_TM_lib_internal(
  /* TM_lib_internal::C_P027V1_fs_flatten_array_qdiff::i */kcg_int i,
  /* TM_lib_internal::C_P027V1_fs_flatten_array_qdiff::Acc */P027V1_sections_array_flat_qdiff_T_TM_baseline2 *Acc,
  /* TM_lib_internal::C_P027V1_fs_flatten_array_qdiff::section_arrays */P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 *section_arrays,
  /* TM_lib_internal::C_P027V1_fs_flatten_array_qdiff::flat */P027V1_sections_array_flat_qdiff_T_TM_baseline2 *flat)
{
  static kcg_int tmp;
  
  kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2(flat, Acc);
  if ((0 <= i / 2) & (i / 2 < 32) & ((0 <= i % 2) & (i % 2 < 2))) {
    tmp = (*section_arrays)[i / 2][i % 2];
  }
  else {
    tmp = 0;
  }
  if ((0 <= i) & (i < 64)) {
    (*flat)[i] = tmp;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P027V1_fs_flatten_array_qdiff_TM_lib_internal.c
** Generation date: 2015-11-20T19:47:22
*************************************************************$ */

