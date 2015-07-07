/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-07T00:28:47
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P027V1_fs_flatten_array_TM_lib_internal.h"

void C_P027V1_fs_flatten_array_reset_TM_lib_internal(
  outC_C_P027V1_fs_flatten_array_TM_lib_internal *outC)
{
}

/* TM_lib_internal::C_P027V1_fs_flatten_array_qdiff */
void C_P027V1_fs_flatten_array_TM_lib_internal(
  /* TM_lib_internal::C_P027V1_fs_flatten_array_qdiff::i */kcg_int i,
  /* TM_lib_internal::C_P027V1_fs_flatten_array_qdiff::Acc */P027V1_sections_array_flat_qdiff_T_TM_baseline2 *Acc,
  /* TM_lib_internal::C_P027V1_fs_flatten_array_qdiff::section_arrays */_1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 *section_arrays,
  outC_C_P027V1_fs_flatten_array_TM_lib_internal *outC)
{
  outC->_L3 = i;
  outC->_L5 = 2;
  outC->_L154 = outC->_L3 / outC->_L5;
  kcg_copy__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2(
    &outC->_L2,
    section_arrays);
  outC->_L6 = outC->_L3 % outC->_L5;
  if ((0 <= outC->_L154) & (outC->_L154 < 32) & ((0 <= outC->_L6) & (outC->_L6 <
        2))) {
    outC->_L10 = outC->_L2[outC->_L154][outC->_L6];
  }
  else {
    outC->_L10 = 0;
  }
  kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2(&outC->_L1, Acc);
  outC->_L8 = i;
  kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2(
    &outC->_L7,
    &outC->_L1);
  if ((0 <= outC->_L8) & (outC->_L8 < 64)) {
    outC->_L7[outC->_L8] = outC->_L10;
  }
  kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2(
    &outC->flat,
    &outC->_L7);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P027V1_fs_flatten_array_TM_lib_internal.c
** Generation date: 2015-07-07T00:28:47
*************************************************************$ */

