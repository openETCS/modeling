/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P027V1_fs_struct_to_array_qdiff_TM_lib_internal.h"

/* TM_lib_internal::C_P027V1_fs_struct_to_array_qdiff */
void C_P027V1_fs_struct_to_array_qdiff_TM_lib_internal(
  /* TM_lib_internal::C_P027V1_fs_struct_to_array_qdiff::section */P027V1_section_int_qdiff_T_TM_baseline2 *section,
  /* TM_lib_internal::C_P027V1_fs_struct_to_array_qdiff::section_arrays */P027V1_section_array_qdiff_T_TM_baseline2 *section_arrays)
{
  (*section_arrays)[0] = (*section).NC_DIFF;
  (*section_arrays)[1] = (*section).V_DIFF;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P027V1_fs_struct_to_array_qdiff_TM_lib_internal.c
** Generation date: 2015-11-20T19:47:22
*************************************************************$ */

