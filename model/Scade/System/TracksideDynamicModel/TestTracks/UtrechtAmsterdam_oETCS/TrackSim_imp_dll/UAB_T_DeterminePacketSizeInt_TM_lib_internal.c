/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/TrackSim_imp_dll\kcg_s2c_config.txt
** Generation date: 2015-08-27T15:14:25
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "UAB_T_DeterminePacketSizeInt_TM_lib_internal.h"

/* TM_lib_internal::T_DeterminePacketSizeInt */
kcg_int UAB_T_DeterminePacketSizeInt_TM_lib_internal(
  /* TM_lib_internal::T_DeterminePacketSizeInt::n_iter */kcg_int n_iter,
  /* TM_lib_internal::T_DeterminePacketSizeInt::size_body */kcg_int size_body,
  /* TM_lib_internal::T_DeterminePacketSizeInt::size_section */kcg_int size_section)
{
  /* TM_lib_internal::T_DeterminePacketSizeInt::p_size */
  static kcg_int p_size;
  
  p_size = size_body + n_iter * size_section;
  return p_size;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** UAB_T_DeterminePacketSizeInt_TM_lib_internal.c
** Generation date: 2015-08-27T15:14:25
*************************************************************$ */

