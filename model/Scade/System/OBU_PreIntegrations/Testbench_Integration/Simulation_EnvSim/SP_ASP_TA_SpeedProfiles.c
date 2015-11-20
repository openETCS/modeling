/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SP_ASP_TA_SpeedProfiles.h"

/* TA_SpeedProfiles::SP_ASP */
void SP_ASP_TA_SpeedProfiles(
  /* TA_SpeedProfiles::SP_ASP::reset */kcg_bool reset,
  /* TA_SpeedProfiles::SP_ASP::PacketsIn */ReceivedMessage_T_Common_Types_Pkg *PacketsIn,
  /* TA_SpeedProfiles::SP_ASP::ASP */SSP_cat_t_TA_MRSP *ASP)
{
  kcg_copy_SSP_cat_t_TA_MRSP(ASP, (SSP_cat_t_TA_MRSP *) &TOP_SSP_cat_TA_MRSP);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SP_ASP_TA_SpeedProfiles.c
** Generation date: 2015-11-20T19:47:17
*************************************************************$ */

