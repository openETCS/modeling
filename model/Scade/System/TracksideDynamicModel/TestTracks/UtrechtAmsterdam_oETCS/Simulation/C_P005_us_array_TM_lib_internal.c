/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-05T13:58:18
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P005_us_array_TM_lib_internal.h"

void C_P005_us_array_reset_TM_lib_internal(
  outC_C_P005_us_array_TM_lib_internal *outC)
{
  /* 1 */ CAST_Int_to_D_LINK_reset_TM_conversions(&outC->_7_Context_1);
  /* 1 */ C_P005_extract_el_section_reset_TM_lib_internal(&outC->_6_Context_1);
  /* 1 */ CAST_Int_to_NID_C_reset_TM_conversions(&outC->_5_Context_1);
  /* 3 */ C_P005_extract_el_section_reset_TM_lib_internal(&outC->Context_3);
  /* 1 */ CAST_Int_to_NID_BG_reset_TM_conversions(&outC->_4_Context_1);
  /* 4 */ C_P005_extract_el_section_reset_TM_lib_internal(&outC->Context_4);
  /* 1 */ CAST_Int_to_Q_NEWCOUNTRY_reset_TM_conversions(&outC->_3_Context_1);
  /* 2 */ C_P005_extract_el_section_reset_TM_lib_internal(&outC->Context_2);
  /* 1 */
  CAST_Int_to_Q_LINKORIENTATION_reset_TM_conversions(&outC->_2_Context_1);
  /* 5 */ C_P005_extract_el_section_reset_TM_lib_internal(&outC->Context_5);
  /* 1 */ CAST_Int_to_Q_LINKREACTION_reset_TM_conversions(&outC->_1_Context_1);
  /* 6 */ C_P005_extract_el_section_reset_TM_lib_internal(&outC->Context_6);
  /* 1 */ CAST_Int_to_Q_LOCACC_reset_TM_conversions(&outC->Context_1);
  /* 7 */ C_P005_extract_el_section_reset_TM_lib_internal(&outC->Context_7);
}

/* TM_lib_internal::C_P005_us_array */
void C_P005_us_array_TM_lib_internal(
  /* TM_lib_internal::C_P005_us_array::i */kcg_int i,
  /* TM_lib_internal::C_P005_us_array::n_iter_int */kcg_int n_iter_int,
  /* TM_lib_internal::C_P005_us_array::flat */P005_sections_array_flat_T_TM *flat,
  outC_C_P005_us_array_TM_lib_internal *outC)
{
  outC->_L3 = n_iter_int;
  outC->_L5 = i;
  outC->_L33 = outC->_L3 > outC->_L5;
  outC->_L32 = kcg_true;
  outC->_L18 = DIM_P005_n_sections_TM_lib_internal;
  outC->_L16 = outC->_L5 / outC->_L18;
  kcg_copy_P005_sections_array_flat_T_TM(&outC->_L1, flat);
  /* 7 */
  C_P005_extract_el_section_TM_lib_internal(
    outC->_L16,
    &outC->_L1,
    6,
    &outC->Context_7);
  outC->_L24 = outC->Context_7.element;
  /* 1 */ CAST_Int_to_Q_LOCACC_TM_conversions(outC->_L24, &outC->Context_1);
  outC->_L31 = outC->Context_1.q_locacc;
  /* 6 */
  C_P005_extract_el_section_TM_lib_internal(
    outC->_L16,
    &outC->_L1,
    5,
    &outC->Context_6);
  outC->_L23 = outC->Context_6.element;
  /* 1 */
  CAST_Int_to_Q_LINKREACTION_TM_conversions(outC->_L23, &outC->_1_Context_1);
  outC->_L30 = outC->_1_Context_1.q_linkreaction;
  /* 5 */
  C_P005_extract_el_section_TM_lib_internal(
    outC->_L16,
    &outC->_L1,
    4,
    &outC->Context_5);
  outC->_L22 = outC->Context_5.element;
  /* 1 */
  CAST_Int_to_Q_LINKORIENTATION_TM_conversions(outC->_L22, &outC->_2_Context_1);
  outC->_L29 = outC->_2_Context_1.q_linkorientation;
  /* 2 */
  C_P005_extract_el_section_TM_lib_internal(
    outC->_L16,
    &outC->_L1,
    1,
    &outC->Context_2);
  outC->_L19 = outC->Context_2.element;
  /* 1 */
  CAST_Int_to_Q_NEWCOUNTRY_TM_conversions(outC->_L19, &outC->_3_Context_1);
  outC->_L28 = outC->_3_Context_1.q_newcountry;
  /* 4 */
  C_P005_extract_el_section_TM_lib_internal(
    outC->_L16,
    &outC->_L1,
    3,
    &outC->Context_4);
  outC->_L21 = outC->Context_4.element;
  /* 1 */ CAST_Int_to_NID_BG_TM_conversions(outC->_L21, &outC->_4_Context_1);
  outC->_L27 = outC->_4_Context_1.nid_bg;
  /* 3 */
  C_P005_extract_el_section_TM_lib_internal(
    outC->_L16,
    &outC->_L1,
    2,
    &outC->Context_3);
  outC->_L20 = outC->Context_3.element;
  /* 1 */ CAST_Int_to_NID_C_TM_conversions(outC->_L20, &outC->_5_Context_1);
  outC->_L26 = outC->_5_Context_1.nid_c;
  /* 1 */
  C_P005_extract_el_section_TM_lib_internal(
    outC->_L16,
    &outC->_L1,
    0,
    &outC->_6_Context_1);
  outC->_L15 = outC->_6_Context_1.element;
  /* 1 */ CAST_Int_to_D_LINK_TM_conversions(outC->_L15, &outC->_7_Context_1);
  outC->_L25 = outC->_7_Context_1.d_link;
  outC->cont = outC->_L33;
  outC->_L4.valid = outC->_L32;
  outC->_L4.d_link = outC->_L25;
  outC->_L4.q_newcountry = outC->_L28;
  outC->_L4.nid_c = outC->_L26;
  outC->_L4.nid_bg = outC->_L27;
  outC->_L4.q_linkorientation = outC->_L29;
  outC->_L4.q_linkreaction = outC->_L30;
  outC->_L4.q_locacc = outC->_L31;
  kcg_copy_P005_section_enum_T_TM(&outC->sections, &outC->_L4);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P005_us_array_TM_lib_internal.c
** Generation date: 2015-06-05T13:58:18
*************************************************************$ */

