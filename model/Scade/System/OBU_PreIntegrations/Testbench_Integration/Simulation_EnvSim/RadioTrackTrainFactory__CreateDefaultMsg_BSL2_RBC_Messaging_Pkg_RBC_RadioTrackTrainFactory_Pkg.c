/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainFactory__CreateDefaultMsg_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateDefaultMsg_BSL2 */
void RadioTrackTrainFactory__CreateDefaultMsg_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg(
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateDefaultMsg_BSL2::outRadioTrackTrainMessage */CompressedRadioMessage_TM *outRadioTrackTrainMessage)
{
  kcg_copy_CompressedRadioMessage_TM(
    outRadioTrackTrainMessage,
    (CompressedRadioMessage_TM *) &RADIO_TRACK_TRAIN_MESSAGE_DEFAULT);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RadioTrackTrainFactory__CreateDefaultMsg_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

