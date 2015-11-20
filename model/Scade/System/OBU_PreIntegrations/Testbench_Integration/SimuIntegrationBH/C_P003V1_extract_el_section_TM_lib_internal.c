/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P003V1_extract_el_section_TM_lib_internal.h"

/* TM_lib_internal::C_P003V1_extract_el_section */
kcg_int C_P003V1_extract_el_section_TM_lib_internal(
  /* TM_lib_internal::C_P003V1_extract_el_section::offset */ kcg_int offset,
  /* TM_lib_internal::C_P003V1_extract_el_section::flat */ P003V1_OBU_sectionlist_int_T_TM_baseline2 *flat)
{
  /* TM_lib_internal::C_P003V1_extract_el_section::_L1 */
  static kcg_int _L1;
  /* TM_lib_internal::C_P003V1_extract_el_section::_L2 */
  static P003V1_OBU_sectionlist_int_T_TM_baseline2 _L2;
  /* TM_lib_internal::C_P003V1_extract_el_section::_L6 */
  static kcg_int _L6;
  /* TM_lib_internal::C_P003V1_extract_el_section::element */
  static kcg_int element;
  
  _L1 = offset;
  kcg_copy_P003V1_OBU_sectionlist_int_T_TM_baseline2(&_L2, flat);
  if ((0 <= _L1) & (_L1 < 32)) {
    _L6 = _L2[_L1];
  }
  else {
    _L6 = 0;
  }
  element = _L6;
  return element;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P003V1_extract_el_section_TM_lib_internal.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

