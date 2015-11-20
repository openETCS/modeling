/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P011_extract_el_section_voltage_TM_TrainToTrack_lib_internal.h"

/* TM_TrainToTrack_lib_internal::C_P011_extract_el_section_voltage */
kcg_int C_P011_extract_el_section_voltage_TM_TrainToTrack_lib_internal(
  /* TM_TrainToTrack_lib_internal::C_P011_extract_el_section_voltage::offset */ kcg_int offset,
  /* TM_TrainToTrack_lib_internal::C_P011_extract_el_section_voltage::flat */ P011_voltage_sections_array_flat_t_TM_TrainToTrack *flat,
  /* TM_TrainToTrack_lib_internal::C_P011_extract_el_section_voltage::modulo */ kcg_int modulo)
{
  /* TM_TrainToTrack_lib_internal::C_P011_extract_el_section_voltage::_L1 */
  static kcg_int _L1;
  /* TM_TrainToTrack_lib_internal::C_P011_extract_el_section_voltage::_L2 */
  static P011_voltage_sections_array_flat_t_TM_TrainToTrack _L2;
  /* TM_TrainToTrack_lib_internal::C_P011_extract_el_section_voltage::_L3 */
  static kcg_int _L3;
  /* TM_TrainToTrack_lib_internal::C_P011_extract_el_section_voltage::_L5 */
  static kcg_int _L5;
  /* TM_TrainToTrack_lib_internal::C_P011_extract_el_section_voltage::_L6 */
  static kcg_int _L6;
  /* TM_TrainToTrack_lib_internal::C_P011_extract_el_section_voltage::element */
  static kcg_int element;
  
  _L1 = offset;
  kcg_copy_P011_voltage_sections_array_flat_t_TM_TrainToTrack(&_L2, flat);
  _L3 = modulo;
  _L5 = _L1 + _L3;
  if ((0 <= _L5) & (_L5 < 8)) {
    _L6 = _L2[_L5];
  }
  else {
    _L6 = 0;
  }
  element = _L6;
  return element;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P011_extract_el_section_voltage_TM_TrainToTrack_lib_internal.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

