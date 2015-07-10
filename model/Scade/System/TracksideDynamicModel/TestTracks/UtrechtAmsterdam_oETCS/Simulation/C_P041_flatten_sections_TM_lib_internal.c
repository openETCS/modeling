/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-09T20:36:53
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P041_flatten_sections_TM_lib_internal.h"

void C_P041_flatten_sections_reset_TM_lib_internal(
  outC_C_P041_flatten_sections_TM_lib_internal *outC)
{
  static kcg_int i;
  
  for (i = 0; i < 99; i++) {
    /* 1 */
    C_P041_fs_flatten_array_reset_TM_lib_internal(&outC->_1_Context_1[i]);
  }
  for (i = 0; i < 33; i++) {
    /* 1 */
    C_P041_fs_struct_to_array_reset_TM_lib_internal(&outC->Context_1[i]);
  }
}

/* TM_lib_internal::C_P041_flatten_sections */
void C_P041_flatten_sections_TM_lib_internal(
  /* TM_lib_internal::C_P041_flatten_sections::MergedSections */P041_OBU_sectionlist_int_T_TM *MergedSections,
  outC_C_P041_flatten_sections_TM_lib_internal *outC)
{
  static kcg_int i2;
  static kcg_int i1;
  static P041_sections_array_flat_T_TM tmp;
  static kcg_int i;
  
  kcg_copy_P041_OBU_sectionlist_int_T_TM(&outC->_L75, MergedSections);
  for (i2 = 0; i2 < 33; i2++) {
    /* 1 */
    C_P041_fs_struct_to_array_TM_lib_internal(
      &outC->_L75[i2],
      &outC->Context_1[i2]);
    kcg_copy_P041_section_array_T_TM(
      &outC->_L74[i2],
      &outC->Context_1[i2].section_arrays);
  }
  for (i1 = 0; i1 < 99; i1++) {
    kcg_copy_array_int_3_33(&outC->_L80[i1], &outC->_L74);
  }
  kcg_copy_P041_sections_array_flat_T_TM(
    &outC->_L76,
    (P041_sections_array_flat_T_TM *) &DEFAULT_P041_sections_array_flat_TM);
  kcg_copy_P041_sections_array_flat_T_TM(&outC->_L78, &outC->_L76);
  for (i = 0; i < 99; i++) {
    kcg_copy_P041_sections_array_flat_T_TM(&tmp, &outC->_L78);
    /* 1 */
    C_P041_fs_flatten_array_TM_lib_internal(
      i,
      &tmp,
      &outC->_L80[i],
      &outC->_1_Context_1[i]);
    kcg_copy_P041_sections_array_flat_T_TM(
      &outC->_L78,
      &outC->_1_Context_1[i].flat);
  }
  kcg_copy_P041_sections_array_flat_T_TM(&outC->Flattened, &outC->_L78);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P041_flatten_sections_TM_lib_internal.c
** Generation date: 2015-07-09T20:36:53
*************************************************************$ */

