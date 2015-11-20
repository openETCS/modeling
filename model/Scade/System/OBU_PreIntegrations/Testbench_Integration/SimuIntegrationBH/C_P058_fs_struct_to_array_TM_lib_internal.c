/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P058_fs_struct_to_array_TM_lib_internal.h"

/* TM_lib_internal::C_P058_fs_struct_to_array */
void C_P058_fs_struct_to_array_TM_lib_internal(
  /* TM_lib_internal::C_P058_fs_struct_to_array::section */ P058_section_int_T_TM *section,
  /* TM_lib_internal::C_P058_fs_struct_to_array::section_arrays */ P058_section_array_T_TM *section_arrays)
{
  /* TM_lib_internal::C_P058_fs_struct_to_array::_L1 */
  static P058_section_int_T_TM _L1;
  /* TM_lib_internal::C_P058_fs_struct_to_array::_L4 */
  static kcg_int _L4;
  /* TM_lib_internal::C_P058_fs_struct_to_array::_L3 */
  static kcg_int _L3;
  /* TM_lib_internal::C_P058_fs_struct_to_array::_L10 */
  static array_int_2 _L10;
  
  kcg_copy_P058_section_int_T_TM(&_L1, section);
  _L3 = _L1.D_LOC;
  _L4 = _L1.Q_LGTLOC;
  _L10[0] = _L3;
  _L10[1] = _L4;
  kcg_copy_P058_section_array_T_TM(section_arrays, &_L10);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P058_fs_struct_to_array_TM_lib_internal.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

