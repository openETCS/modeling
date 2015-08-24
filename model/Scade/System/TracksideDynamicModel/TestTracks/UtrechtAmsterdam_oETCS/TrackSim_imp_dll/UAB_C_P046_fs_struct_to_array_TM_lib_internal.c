/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/TrackSim_imp_dll\kcg_s2c_config.txt
** Generation date: 2015-08-20T20:42:32
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "UAB_C_P046_fs_struct_to_array_TM_lib_internal.h"

/* TM_lib_internal::C_P046_fs_struct_to_array */
void UAB_C_P046_fs_struct_to_array_TM_lib_internal(
  /* TM_lib_internal::C_P046_fs_struct_to_array::section */UAB_P046_section_int_T_TM *section,
  /* TM_lib_internal::C_P046_fs_struct_to_array::section_arrays */UAB_P046_section_array_T_TM *section_arrays)
{
  (*section_arrays)[0] = (*section).M_LEVELTR;
  (*section_arrays)[1] = (*section).NID_NTC;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** UAB_C_P046_fs_struct_to_array_TM_lib_internal.c
** Generation date: 2015-08-20T20:42:32
*************************************************************$ */

