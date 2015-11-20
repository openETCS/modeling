/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P027_flatten_sections_qdiff_TM_lib_internal.h"

/* TM_lib_internal::C_P027_flatten_sections_qdiff */
void C_P027_flatten_sections_qdiff_TM_lib_internal(
  /* TM_lib_internal::C_P027_flatten_sections_qdiff::MergedSections */ P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 *MergedSections,
  /* TM_lib_internal::C_P027_flatten_sections_qdiff::Flattened */ P027V1_sections_array_flat_qdiff_T_TM_baseline2 *Flattened)
{
  static kcg_int i2;
  static kcg_int i1;
  /* TM_lib_internal::C_P027_flatten_sections_qdiff */
  static P027V1_sections_array_flat_qdiff_T_TM_baseline2 acc;
  static kcg_int i;
  /* TM_lib_internal::C_P027_flatten_sections_qdiff::_L76 */
  static P027V1_sections_array_flat_qdiff_T_TM_baseline2 _L76;
  /* TM_lib_internal::C_P027_flatten_sections_qdiff::_L75 */
  static P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 _L75;
  /* TM_lib_internal::C_P027_flatten_sections_qdiff::_L74 */
  static array_int_2_32 _L74;
  /* TM_lib_internal::C_P027_flatten_sections_qdiff::_L83 */
  static P027V1_sections_array_flat_qdiff_T_TM_baseline2 _L83;
  /* TM_lib_internal::C_P027_flatten_sections_qdiff::_L84 */
  static array_int_2_32_32 _L84;
  
  kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2(
    &_L76,
    (P027V1_sections_array_flat_qdiff_T_TM_baseline2 *)
      &DEFAULT_P027V1_sections_array_qdiff_flat_TM_baseline2);
  kcg_copy_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2(
    &_L75,
    MergedSections);
  for (i2 = 0; i2 < 32; i2++) {
    /* 1 */
    C_P027V1_fs_struct_to_array_qdiff_TM_lib_internal(&_L75[i2], &_L74[i2]);
  }
  /* pow */ for (i1 = 0; i1 < 32; i1++) {
    kcg_copy_array_int_2_32(&_L84[i1], &_L74);
  }
  kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2(&_L83, &_L76);
  for (i = 0; i < 32; i++) {
    kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2(&acc, &_L83);
    /* 1 */
    C_P027V1_fs_flatten_array_qdiff_TM_lib_internal(i, &acc, &_L84[i], &_L83);
  }
  kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2(Flattened, &_L83);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P027_flatten_sections_qdiff_TM_lib_internal.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

