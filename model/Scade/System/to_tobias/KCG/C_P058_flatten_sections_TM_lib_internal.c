/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/KCG\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:57:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P058_flatten_sections_TM_lib_internal.h"

/* TM_lib_internal::C_P058_flatten_sections */
void C_P058_flatten_sections_TM_lib_internal(
  /* TM_lib_internal::C_P058_flatten_sections::MergedSections */P058_OBU_sectionlist_int_T_TM *MergedSections,
  /* TM_lib_internal::C_P058_flatten_sections::Flattened */P058_sections_array_flat_T_TM *Flattened)
{
  static P058_sections_array_flat_T_TM tmp;
  static kcg_int i;
  /* TM_lib_internal::C_P058_flatten_sections::_L74 */
  static array_int_2_32 _L74;
  
  for (i = 0; i < 32; i++) {
    /* 1 */
    C_P058_fs_struct_to_array_TM_lib_internal(&(*MergedSections)[i], &_L74[i]);
  }
  kcg_copy_P058_sections_array_flat_T_TM(
    Flattened,
    (P058_sections_array_flat_T_TM *) &DEFAULT_P058_sections_array_flat_TM);
  for (i = 0; i < 64; i++) {
    kcg_copy_P058_sections_array_flat_T_TM(&tmp, Flattened);
    /* 1 */ C_P058_fs_flatten_array_TM_lib_internal(i, &tmp, &_L74, Flattened);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P058_flatten_sections_TM_lib_internal.c
** Generation date: 2015-07-21T17:57:00
*************************************************************$ */

