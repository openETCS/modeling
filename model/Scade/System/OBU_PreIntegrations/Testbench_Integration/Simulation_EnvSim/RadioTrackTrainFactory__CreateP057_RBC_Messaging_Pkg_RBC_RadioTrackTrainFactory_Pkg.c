/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainFactory__CreateP057_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateP057 */
void RadioTrackTrainFactory__CreateP057_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg(
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateP057::in_Q_DIR */Q_DIR in_Q_DIR,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateP057::in_T_MAR */T_MAR in_T_MAR,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateP057::in_T_TIMEOUTRQST */T_TIMEOUTRQST in_T_TIMEOUTRQST,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateP057::in_T_CYCRQST */T_CYCRQST in_T_CYCRQST,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateP057::outRadioTrackTrainPacket */P057_trackside_int_T_TM *outRadioTrackTrainPacket)
{
  /* 1 */
  RadioTrackTrainPacket057__Create_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTrainPacket(
    in_Q_DIR,
    in_T_MAR,
    in_T_TIMEOUTRQST,
    in_T_CYCRQST,
    outRadioTrackTrainPacket);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RadioTrackTrainFactory__CreateP057_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

