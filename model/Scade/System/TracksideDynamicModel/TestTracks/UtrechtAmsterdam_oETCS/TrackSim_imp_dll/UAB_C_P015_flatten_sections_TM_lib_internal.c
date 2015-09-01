/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/TrackSim_imp_dll\kcg_s2c_config.txt
** Generation date: 2015-08-27T15:14:25
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "UAB_C_P015_flatten_sections_TM_lib_internal.h"

/* TM_lib_internal::C_P015_flatten_sections */
void UAB_C_P015_flatten_sections_TM_lib_internal(
  /* TM_lib_internal::C_P015_flatten_sections::MergedSections */UAB_P015_OBU_sectionlist_int_T_TM *MergedSections,
  /* TM_lib_internal::C_P015_flatten_sections::Flattened */UAB_P015_sections_array_flat_T_TM *Flattened)
{
  static UAB_P015_sections_array_flat_T_TM tmp;
  static kcg_int i;
  /* TM_lib_internal::C_P015_flatten_sections::_L74 */
  static UAB_array_int_4_32 _L74;
  
  for (i = 0; i < 32; i++) {
    /* 2 */
    UAB_C_P015_fs_struct_to_array_TM_lib_internal(
      &(*MergedSections)[i],
      &_L74[i]);
  }
  UAB_kcg_copy_P015_sections_array_flat_T_TM(
    Flattened,
    (UAB_P015_sections_array_flat_T_TM *)
      &UAB_DEFAULT_P015_sections_array_flat_TM);
  for (i = 0; i < 128; i++) {
    UAB_kcg_copy_P015_sections_array_flat_T_TM(&tmp, Flattened);
    /* 1 */
    UAB_C_P015_fs_flatten_array_TM_lib_internal(i, &tmp, &_L74, Flattened);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** UAB_C_P015_flatten_sections_TM_lib_internal.c
** Generation date: 2015-08-27T15:14:25
*************************************************************$ */

