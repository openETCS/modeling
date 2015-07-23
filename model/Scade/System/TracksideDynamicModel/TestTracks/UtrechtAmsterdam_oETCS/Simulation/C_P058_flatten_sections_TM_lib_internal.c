/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P058_flatten_sections_TM_lib_internal.h"

void C_P058_flatten_sections_reset_TM_lib_internal(
  outC_C_P058_flatten_sections_TM_lib_internal *outC)
{
  static kcg_int i;
  
  for (i = 0; i < 64; i++) {
    /* 1 */
    C_P058_fs_flatten_array_reset_TM_lib_internal(&outC->_1_Context_1[i]);
  }
  for (i = 0; i < 32; i++) {
    /* 1 */
    C_P058_fs_struct_to_array_reset_TM_lib_internal(&outC->Context_1[i]);
  }
}

/* TM_lib_internal::C_P058_flatten_sections */
void C_P058_flatten_sections_TM_lib_internal(
  /* TM_lib_internal::C_P058_flatten_sections::MergedSections */P058_OBU_sectionlist_int_T_TM *MergedSections,
  outC_C_P058_flatten_sections_TM_lib_internal *outC)
{
  static kcg_int i2;
  static kcg_int i1;
  static P058_sections_array_flat_T_TM tmp;
  static kcg_int i;
  
  kcg_copy_P058_OBU_sectionlist_int_T_TM(&outC->_L75, MergedSections);
  for (i2 = 0; i2 < 32; i2++) {
    /* 1 */
    C_P058_fs_struct_to_array_TM_lib_internal(
      &outC->_L75[i2],
      &outC->Context_1[i2]);
    kcg_copy_P058_section_array_T_TM(
      &outC->_L74[i2],
      &outC->Context_1[i2].section_arrays);
  }
  for (i1 = 0; i1 < 64; i1++) {
    kcg_copy_array_int_2_32(&outC->_L80[i1], &outC->_L74);
  }
  kcg_copy_P058_sections_array_flat_T_TM(
    &outC->_L76,
    (P058_sections_array_flat_T_TM *) &DEFAULT_P058_sections_array_flat_TM);
  kcg_copy_P058_sections_array_flat_T_TM(&outC->_L78, &outC->_L76);
  for (i = 0; i < 64; i++) {
    kcg_copy_P058_sections_array_flat_T_TM(&tmp, &outC->_L78);
    /* 1 */
    C_P058_fs_flatten_array_TM_lib_internal(
      i,
      &tmp,
      &outC->_L80[i],
      &outC->_1_Context_1[i]);
    kcg_copy_P058_sections_array_flat_T_TM(
      &outC->_L78,
      &outC->_1_Context_1[i].flat);
  }
  kcg_copy_P058_sections_array_flat_T_TM(&outC->Flattened, &outC->_L78);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P058_flatten_sections_TM_lib_internal.c
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

