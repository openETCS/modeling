/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Filter_Variable_TM_TrainToTrack.h"

/* TM_TrainToTrack::Filter_Variable */
kcg_int Filter_Variable_TM_TrainToTrack(
  /* TM_TrainToTrack::Filter_Variable::valid */kcg_bool valid,
  /* TM_TrainToTrack::Filter_Variable::int_in */kcg_int int_in)
{
  /* TM_TrainToTrack::Filter_Variable::int_out */
  static kcg_int int_out;
  
  if (valid) {
    int_out = int_in;
  }
  else {
    int_out = INVALID_VARIABLE_TM_TrainToTrack;
  }
  return int_out;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Filter_Variable_TM_TrainToTrack.c
** Generation date: 2015-11-20T19:47:24
*************************************************************$ */

