/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "T_DeterminePacketSizeInt_TM_lib_internal.h"

/* TM_lib_internal::T_DeterminePacketSizeInt */
kcg_int T_DeterminePacketSizeInt_TM_lib_internal(
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
** T_DeterminePacketSizeInt_TM_lib_internal.c
** Generation date: 2015-11-20T19:47:22
*************************************************************$ */

