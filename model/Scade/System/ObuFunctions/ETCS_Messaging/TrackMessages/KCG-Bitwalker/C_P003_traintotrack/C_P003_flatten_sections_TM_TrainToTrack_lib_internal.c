/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/KCG-Bitwalker/C_P003_traintotrack\kcg_s2c_config.txt
** Generation date: 2015-08-21T16:43:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P003_flatten_sections_TM_TrainToTrack_lib_internal.h"

/* TM_TrainToTrack_lib_internal::C_P003_flatten_sections */
void C_P003_flatten_sections_TM_TrainToTrack_lib_internal(
  /* TM_TrainToTrack_lib_internal::C_P003_flatten_sections::MergedSections */P003_nid_radio_list_t_TM_TrainToTrack *MergedSections,
  /* TM_TrainToTrack_lib_internal::C_P003_flatten_sections::Flattened */P003_nid_radio_list_int_t_TM_TrainToTrack *Flattened)
{
  kcg_int i;
  
  for (i = 0; i < 32; i++) {
    (*Flattened)[i] = /* 1 */
      C_P003_fs_struct_to_array_TM_TrainToTrack_lib_internal(
        (*MergedSections)[i]);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P003_flatten_sections_TM_TrainToTrack_lib_internal.c
** Generation date: 2015-08-21T16:43:59
*************************************************************$ */

