/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/KCG\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:59:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P027_flatten_sections_qdiff_TM_lib_internal.h"

/* TM_lib_internal::C_P027_flatten_sections_qdiff */
void C_P027_flatten_sections_qdiff_TM_lib_internal(
  /* TM_lib_internal::C_P027_flatten_sections_qdiff::MergedSections */P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 *MergedSections,
  /* TM_lib_internal::C_P027_flatten_sections_qdiff::Flattened */P027V1_sections_array_flat_qdiff_T_TM_baseline2 *Flattened)
{
  static P027V1_sections_array_flat_qdiff_T_TM_baseline2 tmp;
  static kcg_int i;
  /* TM_lib_internal::C_P027_flatten_sections_qdiff::_L74 */
  static array_int_2_32 _L74;
  
  for (i = 0; i < 32; i++) {
    /* 1 */
    C_P027V1_fs_struct_to_array_qdiff_TM_lib_internal(
      &(*MergedSections)[i],
      &_L74[i]);
  }
  kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2(
    Flattened,
    (P027V1_sections_array_flat_qdiff_T_TM_baseline2 *)
      &DEFAULT_P027V1_sections_array_qdiff_flat_TM_baseline2);
  for (i = 0; i < 32; i++) {
    kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2(&tmp, Flattened);
    /* 1 */
    C_P027V1_fs_flatten_array_qdiff_TM_lib_internal(i, &tmp, &_L74, Flattened);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P027_flatten_sections_qdiff_TM_lib_internal.c
** Generation date: 2015-07-21T17:59:23
*************************************************************$ */

