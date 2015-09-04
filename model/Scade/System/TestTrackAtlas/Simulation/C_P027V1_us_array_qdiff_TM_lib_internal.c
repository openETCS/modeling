/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P027V1_us_array_qdiff_TM_lib_internal.h"

void C_P027V1_us_array_qdiff_reset_TM_lib_internal(
  outC_C_P027V1_us_array_qdiff_TM_lib_internal *outC)
{
  /* 1 */ CAST_Int_to_NC_DIFF_reset_TM_conversions(&outC->_2_Context_1);
  /* 1 */
  C_P027V1_extract_el_section_reset_TM_lib_internal(&outC->_1_Context_1);
  /* 1 */ CAST_Int_to_V_DIFF_reset_TM_conversions(&outC->Context_1);
  /* 2 */ C_P027V1_extract_el_section_reset_TM_lib_internal(&outC->Context_2);
}

/* TM_lib_internal::C_P027V1_us_array_qdiff */
void C_P027V1_us_array_qdiff_TM_lib_internal(
  /* TM_lib_internal::C_P027V1_us_array_qdiff::i */kcg_int i,
  /* TM_lib_internal::C_P027V1_us_array_qdiff::n_iter_int */kcg_int n_iter_int,
  /* TM_lib_internal::C_P027V1_us_array_qdiff::flat */P027V1_sections_array_flat_qdiff_T_TM_baseline2 *flat,
  outC_C_P027V1_us_array_qdiff_TM_lib_internal *outC)
{
  outC->_L3 = n_iter_int;
  outC->_L5 = i;
  outC->_L33 = outC->_L3 > outC->_L5;
  outC->_L32 = kcg_true;
  outC->_L18 = DIM_P027V1_n_sections_qdiff_TM_lib_internal;
  outC->_L16 = outC->_L5 * outC->_L18;
  kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2(&outC->_L1, flat);
  /* 2 */
  C_P027V1_extract_el_section_TM_lib_internal(
    outC->_L16,
    &outC->_L1,
    1,
    &outC->Context_2);
  outC->_L19 = outC->Context_2.element;
  /* 1 */ CAST_Int_to_V_DIFF_TM_conversions(outC->_L19, &outC->Context_1);
  outC->_L28 = outC->Context_1.v_diff;
  /* 1 */
  C_P027V1_extract_el_section_TM_lib_internal(
    outC->_L16,
    &outC->_L1,
    0,
    &outC->_1_Context_1);
  outC->_L15 = outC->_1_Context_1.element;
  /* 1 */ CAST_Int_to_NC_DIFF_TM_conversions(outC->_L15, &outC->_2_Context_1);
  outC->_L25 = outC->_2_Context_1.nc_diff;
  outC->cont = outC->_L33;
  outC->_L4.valid = outC->_L32;
  outC->_L4.nc_diff = outC->_L25;
  outC->_L4.v_diff = outC->_L28;
  kcg_copy_P027V1_section_enum_qdiff_T_TM_baseline2(
    &outC->sections,
    &outC->_L4);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P027V1_us_array_qdiff_TM_lib_internal.c
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

