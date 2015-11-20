/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:26
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P046_fs_struct_to_array_TM_lib_internal.h"

/* TM_lib_internal::C_P046_fs_struct_to_array */
void C_P046_fs_struct_to_array_TM_lib_internal(
  /* TM_lib_internal::C_P046_fs_struct_to_array::section */P046_section_int_T_TM *section,
  /* TM_lib_internal::C_P046_fs_struct_to_array::section_arrays */P046_section_array_T_TM *section_arrays)
{
  (*section_arrays)[0] = (*section).M_LEVELTR;
  (*section_arrays)[1] = (*section).NID_NTC;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P046_fs_struct_to_array_TM_lib_internal.c
** Generation date: 2015-11-20T19:47:26
*************************************************************$ */

