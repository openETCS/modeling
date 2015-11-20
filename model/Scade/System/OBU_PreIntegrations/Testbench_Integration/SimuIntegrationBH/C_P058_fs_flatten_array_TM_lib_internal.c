/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P058_fs_flatten_array_TM_lib_internal.h"

/* TM_lib_internal::C_P058_fs_flatten_array */
void C_P058_fs_flatten_array_TM_lib_internal(
  /* TM_lib_internal::C_P058_fs_flatten_array::i */ kcg_int i,
  /* TM_lib_internal::C_P058_fs_flatten_array::Acc */ P058_sections_array_flat_T_TM *Acc,
  /* TM_lib_internal::C_P058_fs_flatten_array::section_arrays */ P058_OBU_sectionlist_array_T_TM *section_arrays,
  /* TM_lib_internal::C_P058_fs_flatten_array::flat */ P058_sections_array_flat_T_TM *flat)
{
  /* TM_lib_internal::C_P058_fs_flatten_array::_L1 */
  static P058_sections_array_flat_T_TM _L1;
  /* TM_lib_internal::C_P058_fs_flatten_array::_L3 */
  static kcg_int _L3;
  /* TM_lib_internal::C_P058_fs_flatten_array::_L5 */
  static kcg_int _L5;
  /* TM_lib_internal::C_P058_fs_flatten_array::_L6 */
  static kcg_int _L6;
  /* TM_lib_internal::C_P058_fs_flatten_array::_L7 */
  static P058_sections_array_flat_T_TM _L7;
  /* TM_lib_internal::C_P058_fs_flatten_array::_L8 */
  static kcg_int _L8;
  /* TM_lib_internal::C_P058_fs_flatten_array::_L2 */
  static P058_OBU_sectionlist_array_T_TM _L2;
  /* TM_lib_internal::C_P058_fs_flatten_array::_L10 */
  static kcg_int _L10;
  /* TM_lib_internal::C_P058_fs_flatten_array::_L154 */
  static kcg_int _L154;
  
  kcg_copy_P058_sections_array_flat_T_TM(&_L1, Acc);
  kcg_copy_P058_OBU_sectionlist_array_T_TM(&_L2, section_arrays);
  _L3 = i;
  _L5 = 2;
  _L6 = _L3 % _L5;
  _L154 = _L3 / _L5;
  if ((0 <= _L154) & (_L154 < 32) & ((0 <= _L6) & (_L6 < 2))) {
    _L10 = _L2[_L154][_L6];
  }
  else {
    _L10 = 0;
  }
  _L8 = i;
  kcg_copy_P058_sections_array_flat_T_TM(&_L7, &_L1);
  if ((0 <= _L8) & (_L8 < 64)) {
    _L7[_L8] = _L10;
  }
  kcg_copy_P058_sections_array_flat_T_TM(flat, &_L7);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P058_fs_flatten_array_TM_lib_internal.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

