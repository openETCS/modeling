/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P005_fs_struct_to_array_TM_lib_internal.h"

/* TM_lib_internal::C_P005_fs_struct_to_array */
void C_P005_fs_struct_to_array_TM_lib_internal(
  /* TM_lib_internal::C_P005_fs_struct_to_array::section */ P005_section_int_T_TM *section,
  /* TM_lib_internal::C_P005_fs_struct_to_array::section_arrays */ P005_section_array_T_TM *section_arrays)
{
  /* TM_lib_internal::C_P005_fs_struct_to_array::_L1 */
  static P005_section_int_T_TM _L1;
  /* TM_lib_internal::C_P005_fs_struct_to_array::_L2 */
  static array_int_7 _L2;
  /* TM_lib_internal::C_P005_fs_struct_to_array::_L6 */
  static kcg_int _L6;
  /* TM_lib_internal::C_P005_fs_struct_to_array::_L5 */
  static kcg_int _L5;
  /* TM_lib_internal::C_P005_fs_struct_to_array::_L4 */
  static kcg_int _L4;
  /* TM_lib_internal::C_P005_fs_struct_to_array::_L3 */
  static kcg_int _L3;
  /* TM_lib_internal::C_P005_fs_struct_to_array::_L12 */
  static kcg_int _L12;
  /* TM_lib_internal::C_P005_fs_struct_to_array::_L11 */
  static kcg_int _L11;
  /* TM_lib_internal::C_P005_fs_struct_to_array::_L10 */
  static kcg_int _L10;
  
  kcg_copy_P005_section_int_T_TM(&_L1, section);
  _L3 = _L1.D_LINK;
  _L4 = _L1.Q_NEWCOUNTRY;
  _L5 = _L1.NID_C;
  _L6 = _L1.NID_BG;
  _L12 = _L1.Q_LINKORIENTATION;
  _L11 = _L1.Q_LINKREACTION;
  _L10 = _L1.Q_LOCACC;
  _L2[0] = _L3;
  _L2[1] = _L4;
  _L2[2] = _L5;
  _L2[3] = _L6;
  _L2[4] = _L12;
  _L2[5] = _L11;
  _L2[6] = _L10;
  kcg_copy_P005_section_array_T_TM(section_arrays, &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P005_fs_struct_to_array_TM_lib_internal.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

