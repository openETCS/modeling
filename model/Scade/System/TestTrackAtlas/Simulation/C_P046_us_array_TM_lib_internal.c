/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P046_us_array_TM_lib_internal.h"

void C_P046_us_array_reset_TM_lib_internal(
  outC_C_P046_us_array_TM_lib_internal *outC)
{
  /* 1 */ CAST_Int_to_M_LEVELTR_reset_TM_conversions(&outC->_2_Context_1);
  /* 1 */ C_P046_extract_el_section_reset_TM_lib_internal(&outC->_1_Context_1);
  /* 1 */ CAST_Int_to_NID_NTC_reset_TM_conversions(&outC->Context_1);
  /* 2 */ C_P046_extract_el_section_reset_TM_lib_internal(&outC->Context_2);
}

/* TM_lib_internal::C_P046_us_array */
void C_P046_us_array_TM_lib_internal(
  /* TM_lib_internal::C_P046_us_array::i */kcg_int i,
  /* TM_lib_internal::C_P046_us_array::n_iter_int */kcg_int n_iter_int,
  /* TM_lib_internal::C_P046_us_array::flat */P046_sections_array_flat_T_TM *flat,
  outC_C_P046_us_array_TM_lib_internal *outC)
{
  outC->_L3 = n_iter_int;
  outC->_L5 = i;
  outC->_L33 = outC->_L3 > outC->_L5;
  outC->_L32 = kcg_true;
  outC->_L18 = DIM_P046_n_sections_TM_lib_internal;
  outC->_L16 = outC->_L5 * outC->_L18;
  kcg_copy_P046_sections_array_flat_T_TM(&outC->_L1, flat);
  /* 2 */
  C_P046_extract_el_section_TM_lib_internal(
    outC->_L16,
    &outC->_L1,
    1,
    &outC->Context_2);
  outC->_L19 = outC->Context_2.element;
  /* 1 */ CAST_Int_to_NID_NTC_TM_conversions(outC->_L19, &outC->Context_1);
  outC->_L28 = outC->Context_1.nid_ntc;
  /* 1 */
  C_P046_extract_el_section_TM_lib_internal(
    outC->_L16,
    &outC->_L1,
    0,
    &outC->_1_Context_1);
  outC->_L15 = outC->_1_Context_1.element;
  /* 1 */ CAST_Int_to_M_LEVELTR_TM_conversions(outC->_L15, &outC->_2_Context_1);
  outC->_L25 = outC->_2_Context_1.m_leveltr;
  outC->cont = outC->_L33;
  outC->_L4.valid = outC->_L32;
  outC->_L4.m_leveltr = outC->_L25;
  outC->_L4.nid_ntc = outC->_L28;
  kcg_copy_P046_section_enum_T_TM(&outC->sections, &outC->_L4);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P046_us_array_TM_lib_internal.c
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

