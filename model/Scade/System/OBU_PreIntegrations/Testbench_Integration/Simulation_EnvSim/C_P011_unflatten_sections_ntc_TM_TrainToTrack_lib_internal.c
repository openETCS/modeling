/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P011_unflatten_sections_ntc_TM_TrainToTrack_lib_internal.h"

/* TM_TrainToTrack_lib_internal::C_P011_unflatten_sections_ntc */
void C_P011_unflatten_sections_ntc_TM_TrainToTrack_lib_internal(
  /* TM_TrainToTrack_lib_internal::C_P011_unflatten_sections_ntc::P011 */P011_ntc_list_array_T_TM_TrainToTrack *P011,
  /* TM_TrainToTrack_lib_internal::C_P011_unflatten_sections_ntc::sections */P011_ntc_list_TM_TrainToTrack *sections)
{
  static kcg_int i;
  
  for (i = 0; i < 5; i++) {
    (*sections)[i] = /* 1 */
      C_P011_us_array_ntc_TM_TrainToTrack_lib_internal((*P011)[i]);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P011_unflatten_sections_ntc_TM_TrainToTrack_lib_internal.c
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

