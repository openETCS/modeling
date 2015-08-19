/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/AmstredamUtrechNoExp\kcg_s2c_config.txt
** Generation date: 2015-07-22T11:03:51
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P058_fs_flatten_array_TM_lib_internal.h"

/* TM_lib_internal::C_P058_fs_flatten_array */
void C_P058_fs_flatten_array_TM_lib_internal(
  /* TM_lib_internal::C_P058_fs_flatten_array::i */kcg_int i,
  /* TM_lib_internal::C_P058_fs_flatten_array::Acc */P058_sections_array_flat_T_TM *Acc,
  /* TM_lib_internal::C_P058_fs_flatten_array::section_arrays */P058_OBU_sectionlist_array_T_TM *section_arrays,
  /* TM_lib_internal::C_P058_fs_flatten_array::flat */P058_sections_array_flat_T_TM *flat)
{
  static kcg_int tmp;
  
  kcg_copy_P058_sections_array_flat_T_TM(flat, Acc);
  if ((0 <= i / 2) & (i / 2 < 32) & ((0 <= i % 2) & (i % 2 < 2))) {
    tmp = (*section_arrays)[i / 2][i % 2];
  }
  else {
    tmp = 0;
  }
  if ((0 <= i) & (i < 64)) {
    (*flat)[i] = tmp;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P058_fs_flatten_array_TM_lib_internal.c
** Generation date: 2015-07-22T11:03:51
*************************************************************$ */

