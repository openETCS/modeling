/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P011_us_array_voltage_TM_TrainToTrack_lib_internal.h"

/* TM_TrainToTrack_lib_internal::C_P011_us_array_voltage */
void C_P011_us_array_voltage_TM_TrainToTrack_lib_internal(
  /* TM_TrainToTrack_lib_internal::C_P011_us_array_voltage::i */ kcg_int i,
  /* TM_TrainToTrack_lib_internal::C_P011_us_array_voltage::n_iter_int */ kcg_int n_iter_int,
  /* TM_TrainToTrack_lib_internal::C_P011_us_array_voltage::flat */ P011_voltage_sections_array_flat_t_TM_TrainToTrack *flat,
  /* TM_TrainToTrack_lib_internal::C_P011_us_array_voltage::cont */ kcg_bool *cont,
  /* TM_TrainToTrack_lib_internal::C_P011_us_array_voltage::sections */ P011_voltage_TM_TrainToTrack *sections)
{
  /* TM_TrainToTrack_lib_internal::C_P011_us_array_voltage::_L1 */
  static P011_voltage_sections_array_flat_t_TM_TrainToTrack _L1;
  /* TM_TrainToTrack_lib_internal::C_P011_us_array_voltage::_L3 */
  static kcg_int _L3;
  /* TM_TrainToTrack_lib_internal::C_P011_us_array_voltage::_L4 */
  static P011_voltage_TM_TrainToTrack _L4;
  /* TM_TrainToTrack_lib_internal::C_P011_us_array_voltage::_L5 */
  static kcg_int _L5;
  /* TM_TrainToTrack_lib_internal::C_P011_us_array_voltage::_L15 */
  static kcg_int _L15;
  /* TM_TrainToTrack_lib_internal::C_P011_us_array_voltage::_L16 */
  static kcg_int _L16;
  /* TM_TrainToTrack_lib_internal::C_P011_us_array_voltage::_L18 */
  static kcg_int _L18;
  /* TM_TrainToTrack_lib_internal::C_P011_us_array_voltage::_L19 */
  static kcg_int _L19;
  /* TM_TrainToTrack_lib_internal::C_P011_us_array_voltage::_L25 */
  static NID_CTRACTION _L25;
  /* TM_TrainToTrack_lib_internal::C_P011_us_array_voltage::_L28 */
  static M_VOLTAGE _L28;
  /* TM_TrainToTrack_lib_internal::C_P011_us_array_voltage::_L33 */
  static kcg_bool _L33;
  
  kcg_copy_P011_voltage_sections_array_flat_t_TM_TrainToTrack(&_L1, flat);
  _L5 = i;
  _L18 = DIM_voltage_list_TM_TrainToTrack;
  _L16 = _L5 * _L18;
  _L19 = /* 2 */
    C_P011_extract_el_section_voltage_TM_TrainToTrack_lib_internal(
      _L16,
      &_L1,
      0);
  _L28 = /* 1 */ CAST_Int_to_M_VOLTAGE_TM_conversions(_L19);
  _L15 = /* 1 */
    C_P011_extract_el_section_voltage_TM_TrainToTrack_lib_internal(
      _L16,
      &_L1,
      1);
  _L25 = /* 1 */ CAST_Int_to_NID_CTRACTION_TM_conversions(_L15);
  _L4.m_voltage = _L28;
  _L4.nid_ctraction = _L25;
  kcg_copy_P011_voltage_TM_TrainToTrack(sections, &_L4);
  _L3 = n_iter_int;
  _L33 = _L3 > _L5;
  *cont = _L33;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P011_us_array_voltage_TM_TrainToTrack_lib_internal.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

