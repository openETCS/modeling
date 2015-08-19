/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P003V1_extract_el_section_TM_lib_internal.h"

void C_P003V1_extract_el_section_reset_TM_lib_internal(
  outC_C_P003V1_extract_el_section_TM_lib_internal *outC)
{
}

/* TM_lib_internal::C_P003V1_extract_el_section */
void C_P003V1_extract_el_section_TM_lib_internal(
  /* TM_lib_internal::C_P003V1_extract_el_section::offset */kcg_int offset,
  /* TM_lib_internal::C_P003V1_extract_el_section::flat */P003V1_OBU_sectionlist_int_T_TM_baseline2 *flat,
  outC_C_P003V1_extract_el_section_TM_lib_internal *outC)
{
  kcg_copy_P003V1_OBU_sectionlist_int_T_TM_baseline2(&outC->_L2, flat);
  outC->_L1 = offset;
  if ((0 <= outC->_L1) & (outC->_L1 < 32)) {
    outC->_L6 = outC->_L2[outC->_L1];
  }
  else {
    outC->_L6 = 0;
  }
  outC->element = outC->_L6;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P003V1_extract_el_section_TM_lib_internal.c
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

