/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SP_MaxTrainSpeed_TA_SpeedProfiles.h"

/* TA_SpeedProfiles::SP_MaxTrainSpeed */
void SP_MaxTrainSpeed_TA_SpeedProfiles(
  /* TA_SpeedProfiles::SP_MaxTrainSpeed::reset */kcg_bool reset,
  /* TA_SpeedProfiles::SP_MaxTrainSpeed::TrainDataIn */kcg_int TrainDataIn,
  /* TA_SpeedProfiles::SP_MaxTrainSpeed::MaxTrainSpeed */SSP_cat_t_TA_MRSP *MaxTrainSpeed)
{
  kcg_copy_SSP_cat_t_TA_MRSP(
    MaxTrainSpeed,
    (SSP_cat_t_TA_MRSP *) &TOP_SSP_cat_TA_MRSP);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SP_MaxTrainSpeed_TA_SpeedProfiles.c
** Generation date: 2015-11-20T19:47:17
*************************************************************$ */

