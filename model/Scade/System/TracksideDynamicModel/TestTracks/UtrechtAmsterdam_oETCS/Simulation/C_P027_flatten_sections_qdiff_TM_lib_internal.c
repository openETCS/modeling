/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-03T00:04:39
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P027_flatten_sections_qdiff_TM_lib_internal.h"

void C_P027_flatten_sections_qdiff_reset_TM_lib_internal(
  outC_C_P027_flatten_sections_qdiff_TM_lib_internal *outC)
{
  kcg_int i;
  
  for (i = 0; i < 32; i++) {
    /* 1 */
    C_P027V1_fs_flatten_array_reset_TM_lib_internal(&outC->_1_Context_1[i]);
  }
  for (i = 0; i < 32; i++) {
    /* 1 */
    C_P027V1_fs_struct_to_arr_reset_TM_lib_internal(&outC->Context_1[i]);
  }
}

/* TM_lib_internal::C_P027_flatten_sections_qdiff */
void C_P027_flatten_sections_qdiff_TM_lib_internal(
  /* TM_lib_internal::C_P027_flatten_sections_qdiff::MergedSections */P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 *MergedSections,
  outC_C_P027_flatten_sections_qdiff_TM_lib_internal *outC)
{
  kcg_int i2;
  kcg_int i1;
  P027V1_sections_array_flat_qdiff_T_TM_baseline2 tmp;
  kcg_int i;
  
  kcg_copy_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2(
    &outC->_L75,
    MergedSections);
  for (i2 = 0; i2 < 32; i2++) {
    /* 1 */
    C_P027V1_fs_struct_to_arr_TM_lib_internal(
      &outC->_L75[i2],
      &outC->Context_1[i2]);
    kcg_copy_P027V1_section_array_qdiff_T_TM_baseline2(
      &outC->_L74[i2],
      &outC->Context_1[i2].section_arrays);
  }
  for (i1 = 0; i1 < 32; i1++) {
    kcg_copy_array_int_2_32(&outC->_L84[i1], &outC->_L74);
  }
  kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2(
    &outC->_L76,
    (P027V1_sections_array_flat_qdiff_T_TM_baseline2 *)
      &DEFAULT_P027V1_sections_array_qdiff_flat_TM_baseline2);
  kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2(
    &outC->_L83,
    &outC->_L76);
  for (i = 0; i < 32; i++) {
    kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2(&tmp, &outC->_L83);
    /* 1 */
    C_P027V1_fs_flatten_array_TM_lib_internal(
      i,
      &tmp,
      &outC->_L84[i],
      &outC->_1_Context_1[i]);
    kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2(
      &outC->_L83,
      &outC->_1_Context_1[i].flat);
  }
  kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2(
    &outC->Flattened,
    &outC->_L83);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P027_flatten_sections_qdiff_TM_lib_internal.c
** Generation date: 2015-07-03T00:04:39
*************************************************************$ */

