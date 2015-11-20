/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P011_fs_flatten_array_voltage_TM_TrainToTrack_lib_internal.h"

/* TM_TrainToTrack_lib_internal::C_P011_fs_flatten_array_voltage */
void C_P011_fs_flatten_array_voltage_TM_TrainToTrack_lib_internal(
  /* TM_TrainToTrack_lib_internal::C_P011_fs_flatten_array_voltage::i */ kcg_int i,
  /* TM_TrainToTrack_lib_internal::C_P011_fs_flatten_array_voltage::Acc */ P011_voltage_sections_array_flat_t_TM_TrainToTrack *Acc,
  /* TM_TrainToTrack_lib_internal::C_P011_fs_flatten_array_voltage::section_arrays */ P011_voltage_sectionlist_array_T_TM_TrainToTrack *section_arrays,
  /* TM_TrainToTrack_lib_internal::C_P011_fs_flatten_array_voltage::flat */ P011_voltage_sections_array_flat_t_TM_TrainToTrack *flat)
{
  /* TM_TrainToTrack_lib_internal::C_P011_fs_flatten_array_voltage::_L1 */
  static P011_voltage_sections_array_flat_t_TM_TrainToTrack _L1;
  /* TM_TrainToTrack_lib_internal::C_P011_fs_flatten_array_voltage::_L3 */
  static kcg_int _L3;
  /* TM_TrainToTrack_lib_internal::C_P011_fs_flatten_array_voltage::_L5 */
  static kcg_int _L5;
  /* TM_TrainToTrack_lib_internal::C_P011_fs_flatten_array_voltage::_L6 */
  static kcg_int _L6;
  /* TM_TrainToTrack_lib_internal::C_P011_fs_flatten_array_voltage::_L7 */
  static P011_voltage_sections_array_flat_t_TM_TrainToTrack _L7;
  /* TM_TrainToTrack_lib_internal::C_P011_fs_flatten_array_voltage::_L8 */
  static kcg_int _L8;
  /* TM_TrainToTrack_lib_internal::C_P011_fs_flatten_array_voltage::_L2 */
  static P011_voltage_sectionlist_array_T_TM_TrainToTrack _L2;
  /* TM_TrainToTrack_lib_internal::C_P011_fs_flatten_array_voltage::_L10 */
  static kcg_int _L10;
  /* TM_TrainToTrack_lib_internal::C_P011_fs_flatten_array_voltage::_L154 */
  static kcg_int _L154;
  
  kcg_copy_P011_voltage_sections_array_flat_t_TM_TrainToTrack(&_L1, Acc);
  kcg_copy_P011_voltage_sectionlist_array_T_TM_TrainToTrack(
    &_L2,
    section_arrays);
  _L3 = i;
  _L5 = 2;
  _L6 = _L3 % _L5;
  _L154 = _L3 / _L5;
  if ((0 <= _L154) & (_L154 < 4) & ((0 <= _L6) & (_L6 < 2))) {
    _L10 = _L2[_L154][_L6];
  }
  else {
    _L10 = 0;
  }
  _L8 = i;
  kcg_copy_P011_voltage_sections_array_flat_t_TM_TrainToTrack(&_L7, &_L1);
  if ((0 <= _L8) & (_L8 < 8)) {
    _L7[_L8] = _L10;
  }
  kcg_copy_P011_voltage_sections_array_flat_t_TM_TrainToTrack(flat, &_L7);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P011_fs_flatten_array_voltage_TM_TrainToTrack_lib_internal.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

