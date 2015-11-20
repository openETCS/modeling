/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P041_flatten_sections_TM_lib_internal.h"

/* TM_lib_internal::C_P041_flatten_sections */
void C_P041_flatten_sections_TM_lib_internal(
  /* TM_lib_internal::C_P041_flatten_sections::MergedSections */ P041_OBU_sectionlist_int_T_TM *MergedSections,
  /* TM_lib_internal::C_P041_flatten_sections::Flattened */ P041_sections_array_flat_T_TM *Flattened)
{
  static kcg_int i2;
  static kcg_int i1;
  /* TM_lib_internal::C_P041_flatten_sections */
  static P041_sections_array_flat_T_TM acc;
  static kcg_int i;
  /* TM_lib_internal::C_P041_flatten_sections::_L76 */
  static P041_sections_array_flat_T_TM _L76;
  /* TM_lib_internal::C_P041_flatten_sections::_L75 */
  static P041_OBU_sectionlist_int_T_TM _L75;
  /* TM_lib_internal::C_P041_flatten_sections::_L74 */
  static array_int_3_33 _L74;
  /* TM_lib_internal::C_P041_flatten_sections::_L78 */
  static P041_sections_array_flat_T_TM _L78;
  /* TM_lib_internal::C_P041_flatten_sections::_L80 */
  static array_int_3_33_99 _L80;
  
  kcg_copy_P041_sections_array_flat_T_TM(
    &_L76,
    (P041_sections_array_flat_T_TM *) &DEFAULT_P041_sections_array_flat_TM);
  kcg_copy_P041_OBU_sectionlist_int_T_TM(&_L75, MergedSections);
  for (i2 = 0; i2 < 33; i2++) {
    /* 1 */ C_P041_fs_struct_to_array_TM_lib_internal(&_L75[i2], &_L74[i2]);
  }
  /* pow */ for (i1 = 0; i1 < 99; i1++) {
    kcg_copy_array_int_3_33(&_L80[i1], &_L74);
  }
  kcg_copy_P041_sections_array_flat_T_TM(&_L78, &_L76);
  for (i = 0; i < 99; i++) {
    kcg_copy_P041_sections_array_flat_T_TM(&acc, &_L78);
    /* 1 */ C_P041_fs_flatten_array_TM_lib_internal(i, &acc, &_L80[i], &_L78);
  }
  kcg_copy_P041_sections_array_flat_T_TM(Flattened, &_L78);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P041_flatten_sections_TM_lib_internal.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

