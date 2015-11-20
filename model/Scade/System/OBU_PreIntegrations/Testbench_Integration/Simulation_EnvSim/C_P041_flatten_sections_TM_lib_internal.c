/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P041_flatten_sections_TM_lib_internal.h"

/* TM_lib_internal::C_P041_flatten_sections */
void C_P041_flatten_sections_TM_lib_internal(
  /* TM_lib_internal::C_P041_flatten_sections::MergedSections */P041_OBU_sectionlist_int_T_TM *MergedSections,
  /* TM_lib_internal::C_P041_flatten_sections::Flattened */P041_sections_array_flat_T_TM *Flattened)
{
  static P041_sections_array_flat_T_TM tmp;
  static kcg_int i;
  /* TM_lib_internal::C_P041_flatten_sections::_L74 */
  static array_int_3_33 _L74;
  
  for (i = 0; i < 33; i++) {
    /* 1 */
    C_P041_fs_struct_to_array_TM_lib_internal(&(*MergedSections)[i], &_L74[i]);
  }
  kcg_copy_P041_sections_array_flat_T_TM(
    Flattened,
    (P041_sections_array_flat_T_TM *) &DEFAULT_P041_sections_array_flat_TM);
  for (i = 0; i < 99; i++) {
    kcg_copy_P041_sections_array_flat_T_TM(&tmp, Flattened);
    /* 1 */ C_P041_fs_flatten_array_TM_lib_internal(i, &tmp, &_L74, Flattened);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P041_flatten_sections_TM_lib_internal.c
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

