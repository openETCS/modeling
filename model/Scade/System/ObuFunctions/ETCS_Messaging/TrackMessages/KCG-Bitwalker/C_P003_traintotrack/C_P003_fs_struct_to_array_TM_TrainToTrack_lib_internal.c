/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/KCG-Bitwalker/C_P003_traintotrack\kcg_s2c_config.txt
** Generation date: 2015-08-21T16:43:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P003_fs_struct_to_array_TM_TrainToTrack_lib_internal.h"

/* TM_TrainToTrack_lib_internal::C_P003_fs_struct_to_array */
kcg_int C_P003_fs_struct_to_array_TM_TrainToTrack_lib_internal(
  /* TM_TrainToTrack_lib_internal::C_P003_fs_struct_to_array::section */NID_RADIO section)
{
  /* TM_TrainToTrack_lib_internal::C_P003_fs_struct_to_array::section_arrays */ kcg_int section_arrays;
  
  section_arrays = /* 1 */ CAST_NID_RADIO_to_int_TM_conversions(section);
  return section_arrays;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P003_fs_struct_to_array_TM_TrainToTrack_lib_internal.c
** Generation date: 2015-08-21T16:43:59
*************************************************************$ */

