/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackFactory__CreateDefaultMsg_RBC_Messaging_Pkg_RBC_RadioTrainTrackFactory_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrackFactory_Pkg::RadioTrainTrackFactory__CreateDefaultMsg */
void RadioTrainTrackFactory__CreateDefaultMsg_RBC_Messaging_Pkg_RBC_RadioTrainTrackFactory_Pkg(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrackFactory_Pkg::RadioTrainTrackFactory__CreateDefaultMsg::o_RadioTrainTrackMessage */Radio_TrainTrack_Message_T_Radio_Types_Pkg *o_RadioTrainTrackMessage)
{
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    o_RadioTrainTrackMessage,
    (Radio_TrainTrack_Message_T_Radio_Types_Pkg *)
      &RADIO_TRAIN_TRACK_MESSAGE_DEFAULT);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RadioTrainTrackFactory__CreateDefaultMsg_RBC_Messaging_Pkg_RBC_RadioTrainTrackFactory_Pkg.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

