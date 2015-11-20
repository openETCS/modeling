/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P027V1_fs_struct_to_array_qdiff_TM_lib_internal.h"

/* TM_lib_internal::C_P027V1_fs_struct_to_array_qdiff */
void C_P027V1_fs_struct_to_array_qdiff_TM_lib_internal(
  /* TM_lib_internal::C_P027V1_fs_struct_to_array_qdiff::section */ P027V1_section_int_qdiff_T_TM_baseline2 *section,
  /* TM_lib_internal::C_P027V1_fs_struct_to_array_qdiff::section_arrays */ P027V1_section_array_qdiff_T_TM_baseline2 *section_arrays)
{
  /* TM_lib_internal::C_P027V1_fs_struct_to_array_qdiff::_L1 */
  static P027V1_section_int_qdiff_T_TM_baseline2 _L1;
  /* TM_lib_internal::C_P027V1_fs_struct_to_array_qdiff::_L2 */
  static array_int_2 _L2;
  /* TM_lib_internal::C_P027V1_fs_struct_to_array_qdiff::_L4 */
  static kcg_int _L4;
  /* TM_lib_internal::C_P027V1_fs_struct_to_array_qdiff::_L3 */
  static kcg_int _L3;
  
  kcg_copy_P027V1_section_int_qdiff_T_TM_baseline2(&_L1, section);
  _L3 = _L1.NC_DIFF;
  _L4 = _L1.V_DIFF;
  _L2[0] = _L3;
  _L2[1] = _L4;
  kcg_copy_P027V1_section_array_qdiff_T_TM_baseline2(section_arrays, &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P027V1_fs_struct_to_array_qdiff_TM_lib_internal.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

