/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P003V1_us_array_TM_lib_internal.h"

void C_P003V1_us_array_reset_TM_lib_internal(
  outC_C_P003V1_us_array_TM_lib_internal *outC)
{
  /* 2 */ CAST_Int_to_NID_C_reset_TM_conversions(&outC->_1_Context_2);
  /* 2 */ C_P003V1_extract_el_section_reset_TM_lib_internal(&outC->Context_2);
}

/* TM_lib_internal::C_P003V1_us_array */
void C_P003V1_us_array_TM_lib_internal(
  /* TM_lib_internal::C_P003V1_us_array::i */kcg_int i,
  /* TM_lib_internal::C_P003V1_us_array::n_iter_int */kcg_int n_iter_int,
  /* TM_lib_internal::C_P003V1_us_array::flat */P003V1_OBU_sectionlist_int_T_TM_baseline2 *flat,
  outC_C_P003V1_us_array_TM_lib_internal *outC)
{
  outC->_L35 = i;
  kcg_copy_P003V1_OBU_sectionlist_int_T_TM_baseline2(&outC->_L37, flat);
  /* 2 */
  C_P003V1_extract_el_section_TM_lib_internal(
    outC->_L35,
    &outC->_L37,
    &outC->Context_2);
  outC->_L34 = outC->Context_2.element;
  /* 2 */ CAST_Int_to_NID_C_TM_conversions(outC->_L34, &outC->_1_Context_2);
  outC->_L41 = outC->_1_Context_2.nid_c;
  outC->_L40 = kcg_true;
  outC->_L36 = n_iter_int;
  outC->_L39 = outC->_L36 > outC->_L35;
  outC->_L38.valid = outC->_L40;
  outC->_L38.nid_c = outC->_L41;
  outC->cont = outC->_L39;
  kcg_copy_P003V1_section_enum_T_TM_baseline2(&outC->sections, &outC->_L38);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P003V1_us_array_TM_lib_internal.c
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

