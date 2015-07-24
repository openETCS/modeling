/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/KCG\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:57:00
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P005_flatten_sections_TM_lib_internal.h"

/* TM_lib_internal::C_P005_flatten_sections */
void C_P005_flatten_sections_TM_lib_internal(
  /* TM_lib_internal::C_P005_flatten_sections::MergedSections */P005_OBU_sectionlist_int_T_TM *MergedSections,
  /* TM_lib_internal::C_P005_flatten_sections::Flattened */P005_sections_array_flat_T_TM *Flattened)
{
  static P005_sections_array_flat_T_TM tmp;
  static kcg_int i;
  /* TM_lib_internal::C_P005_flatten_sections::_L74 */
  static array_int_7_33 _L74;
  
  for (i = 0; i < 33; i++) {
    /* 2 */
    C_P005_fs_struct_to_array_TM_lib_internal(&(*MergedSections)[i], &_L74[i]);
  }
  kcg_copy_P005_sections_array_flat_T_TM(
    Flattened,
    (P005_sections_array_flat_T_TM *) &DEFAULT_P005_sections_array_flat_TM);
  for (i = 0; i < 231; i++) {
    kcg_copy_P005_sections_array_flat_T_TM(&tmp, Flattened);
    /* 2 */ C_P005_fs_flatten_array_TM_lib_internal(i, &tmp, &_L74, Flattened);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P005_flatten_sections_TM_lib_internal.c
** Generation date: 2015-07-21T17:57:00
*************************************************************$ */

