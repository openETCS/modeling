/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P046_extract_el_section_TM_lib_internal.h"

/* TM_lib_internal::C_P046_extract_el_section */
kcg_int C_P046_extract_el_section_TM_lib_internal(
  /* TM_lib_internal::C_P046_extract_el_section::offset */ kcg_int offset,
  /* TM_lib_internal::C_P046_extract_el_section::flat */ P046_sections_array_flat_T_TM *flat,
  /* TM_lib_internal::C_P046_extract_el_section::modulo */ kcg_int modulo)
{
  /* TM_lib_internal::C_P046_extract_el_section::_L1 */
  static kcg_int _L1;
  /* TM_lib_internal::C_P046_extract_el_section::_L2 */
  static P046_sections_array_flat_T_TM _L2;
  /* TM_lib_internal::C_P046_extract_el_section::_L3 */
  static kcg_int _L3;
  /* TM_lib_internal::C_P046_extract_el_section::_L5 */
  static kcg_int _L5;
  /* TM_lib_internal::C_P046_extract_el_section::_L6 */
  static kcg_int _L6;
  /* TM_lib_internal::C_P046_extract_el_section::element */
  static kcg_int element;
  
  _L1 = offset;
  kcg_copy_P046_sections_array_flat_T_TM(&_L2, flat);
  _L3 = modulo;
  _L5 = _L1 + _L3;
  if ((0 <= _L5) & (_L5 < 66)) {
    _L6 = _L2[_L5];
  }
  else {
    _L6 = 0;
  }
  element = _L6;
  return element;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P046_extract_el_section_TM_lib_internal.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

