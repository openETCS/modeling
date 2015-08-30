/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:55:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P021_extract_el_section_TM_lib_internal.h"

void C_P021_extract_el_section_reset_TM_lib_internal(
  outC_C_P021_extract_el_section_TM_lib_internal *outC)
{
}

/* TM_lib_internal::C_P021_extract_el_section */
void C_P021_extract_el_section_TM_lib_internal(
  /* TM_lib_internal::C_P021_extract_el_section::offset */kcg_int offset,
  /* TM_lib_internal::C_P021_extract_el_section::flat */P021_sections_array_flat_T_TM *flat,
  /* TM_lib_internal::C_P021_extract_el_section::modulo */kcg_int modulo,
  outC_C_P021_extract_el_section_TM_lib_internal *outC)
{
  kcg_copy_P021_sections_array_flat_T_TM(&outC->_L2, flat);
  outC->_L1 = offset;
  outC->_L3 = modulo;
  outC->_L5 = outC->_L1 + outC->_L3;
  if ((0 <= outC->_L5) & (outC->_L5 < 99)) {
    outC->_L6 = outC->_L2[outC->_L5];
  }
  else {
    outC->_L6 = 0;
  }
  outC->element = outC->_L6;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P021_extract_el_section_TM_lib_internal.c
** Generation date: 2015-08-30T07:55:34
*************************************************************$ */

