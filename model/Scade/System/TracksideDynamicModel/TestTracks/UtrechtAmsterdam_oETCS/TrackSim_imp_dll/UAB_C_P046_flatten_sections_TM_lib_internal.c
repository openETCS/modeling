/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/TrackSim_imp_dll\kcg_s2c_config.txt
** Generation date: 2015-08-20T20:42:32
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "UAB_C_P046_flatten_sections_TM_lib_internal.h"

/* TM_lib_internal::C_P046_flatten_sections */
void UAB_C_P046_flatten_sections_TM_lib_internal(
  /* TM_lib_internal::C_P046_flatten_sections::MergedSections */UAB_P046_OBU_sectionlist_int_T_TM *MergedSections,
  /* TM_lib_internal::C_P046_flatten_sections::Flattened */UAB_P046_sections_array_flat_T_TM *Flattened)
{
  static UAB_P046_sections_array_flat_T_TM tmp;
  static kcg_int i;
  /* TM_lib_internal::C_P046_flatten_sections::_L74 */
  static UAB_array_int_2_33 _L74;
  
  for (i = 0; i < 33; i++) {
    /* 1 */
    UAB_C_P046_fs_struct_to_array_TM_lib_internal(
      &(*MergedSections)[i],
      &_L74[i]);
  }
  UAB_kcg_copy_P046_sections_array_flat_T_TM(
    Flattened,
    (UAB_P046_sections_array_flat_T_TM *)
      &UAB_DEFAULT_P046_sections_array_flat_TM);
  for (i = 0; i < 99; i++) {
    UAB_kcg_copy_P046_sections_array_flat_T_TM(&tmp, Flattened);
    /* 1 */
    UAB_C_P046_fs_flatten_array_TM_lib_internal(i, &tmp, &_L74, Flattened);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** UAB_C_P046_flatten_sections_TM_lib_internal.c
** Generation date: 2015-08-20T20:42:32
*************************************************************$ */

