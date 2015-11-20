/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P003_fs_struct_to_array_TM_TrainToTrack_lib_internal.h"

/* TM_TrainToTrack_lib_internal::C_P003_fs_struct_to_array */
kcg_int C_P003_fs_struct_to_array_TM_TrainToTrack_lib_internal(
  /* TM_TrainToTrack_lib_internal::C_P003_fs_struct_to_array::section */ NID_RADIO section)
{
  /* TM_TrainToTrack_lib_internal::C_P003_fs_struct_to_array::_L1 */
  static NID_RADIO _L1;
  /* TM_TrainToTrack_lib_internal::C_P003_fs_struct_to_array::_L13 */
  static NID_RADIO _L13;
  /* TM_TrainToTrack_lib_internal::C_P003_fs_struct_to_array::section_arrays */
  static kcg_int section_arrays;
  
  _L1 = section;
  _L13 = /* 1 */ CAST_Int_to_NID_RADIO_TM_conversions(_L1);
  section_arrays = _L13;
  return section_arrays;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P003_fs_struct_to_array_TM_TrainToTrack_lib_internal.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

