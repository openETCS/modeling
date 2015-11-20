/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SP_TSR_TA_SpeedProfiles.h"

/* TA_SpeedProfiles::SP_TSR */
void SP_TSR_TA_SpeedProfiles(
  /* TA_SpeedProfiles::SP_TSR::reset */kcg_bool reset,
  /* TA_SpeedProfiles::SP_TSR::PacketsIn */ReceivedMessage_T_Common_Types_Pkg *PacketsIn,
  /* TA_SpeedProfiles::SP_TSR::TSR */SSP_cat_t_TA_MRSP *TSR)
{
  kcg_copy_SSP_cat_t_TA_MRSP(TSR, (SSP_cat_t_TA_MRSP *) &TOP_SSP_cat_TA_MRSP);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SP_TSR_TA_SpeedProfiles.c
** Generation date: 2015-11-20T19:47:17
*************************************************************$ */

