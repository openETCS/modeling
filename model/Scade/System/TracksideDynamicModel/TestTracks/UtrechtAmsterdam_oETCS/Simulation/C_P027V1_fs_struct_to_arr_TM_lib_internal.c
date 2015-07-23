/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P027V1_fs_struct_to_arr_TM_lib_internal.h"

void C_P027V1_fs_struct_to_arr_reset_TM_lib_internal(
  outC_C_P027V1_fs_struct_to_arr_TM_lib_internal *outC)
{
}

/* TM_lib_internal::C_P027V1_fs_struct_to_array_qdiff */
void C_P027V1_fs_struct_to_arr_TM_lib_internal(
  /* TM_lib_internal::C_P027V1_fs_struct_to_array_qdiff::section */P027V1_section_int_qdiff_T_TM_baseline2 *section,
  outC_C_P027V1_fs_struct_to_arr_TM_lib_internal *outC)
{
  kcg_copy_P027V1_section_int_qdiff_T_TM_baseline2(&outC->_L1, section);
  outC->_L4 = outC->_L1.V_DIFF;
  outC->_L3 = outC->_L1.NC_DIFF;
  outC->_L2[0] = outC->_L3;
  outC->_L2[1] = outC->_L4;
  kcg_copy_P027V1_section_array_qdiff_T_TM_baseline2(
    &outC->section_arrays,
    &outC->_L2);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P027V1_fs_struct_to_arr_TM_lib_internal.c
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

