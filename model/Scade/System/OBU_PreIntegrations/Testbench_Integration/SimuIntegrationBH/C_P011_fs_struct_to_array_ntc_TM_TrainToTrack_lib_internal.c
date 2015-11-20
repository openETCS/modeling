/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P011_fs_struct_to_array_ntc_TM_TrainToTrack_lib_internal.h"

/* TM_TrainToTrack_lib_internal::C_P011_fs_struct_to_array_ntc */
kcg_int C_P011_fs_struct_to_array_ntc_TM_TrainToTrack_lib_internal(
  /* TM_TrainToTrack_lib_internal::C_P011_fs_struct_to_array_ntc::section */ NID_NTC section)
{
  /* TM_TrainToTrack_lib_internal::C_P011_fs_struct_to_array_ntc::_L1 */
  static NID_NTC _L1;
  /* TM_TrainToTrack_lib_internal::C_P011_fs_struct_to_array_ntc::_L13 */
  static kcg_int _L13;
  /* TM_TrainToTrack_lib_internal::C_P011_fs_struct_to_array_ntc::section_arrays */
  static kcg_int section_arrays;
  
  _L1 = section;
  _L13 = /* 1 */ CAST_NID_NTC_to_int_TM_conversions(_L1);
  section_arrays = _L13;
  return section_arrays;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P011_fs_struct_to_array_ntc_TM_TrainToTrack_lib_internal.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

