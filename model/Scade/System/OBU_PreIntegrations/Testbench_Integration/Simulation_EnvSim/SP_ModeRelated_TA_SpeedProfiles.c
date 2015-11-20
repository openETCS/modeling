/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:17
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SP_ModeRelated_TA_SpeedProfiles.h"

/* TA_SpeedProfiles::SP_ModeRelated */
void SP_ModeRelated_TA_SpeedProfiles(
  /* TA_SpeedProfiles::SP_ModeRelated::reset */kcg_bool reset,
  /* TA_SpeedProfiles::SP_ModeRelated::SP_available */kcg_bool SP_available,
  /* TA_SpeedProfiles::SP_ModeRelated::MessageIn */ReceivedMessage_T_Common_Types_Pkg *MessageIn,
  /* TA_SpeedProfiles::SP_ModeRelated::ModeDataIn */T_Mode_Level_Level_And_Mode_Types_Pkg *ModeDataIn,
  /* TA_SpeedProfiles::SP_ModeRelated::ModeRelated */SSP_cat_t_TA_MRSP *ModeRelated)
{
  kcg_copy_SSP_cat_t_TA_MRSP(
    ModeRelated,
    (SSP_cat_t_TA_MRSP *) &TOP_SSP_cat_TA_MRSP);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SP_ModeRelated_TA_SpeedProfiles.c
** Generation date: 2015-11-20T19:47:17
*************************************************************$ */

