/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackFactory__CreateDefaultMsg_RBC_Messaging_Pkg_RBC_RadioTrainTrackFactory_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrackFactory_Pkg::RadioTrainTrackFactory__CreateDefaultMsg */
void RadioTrainTrackFactory__CreateDefaultMsg_RBC_Messaging_Pkg_RBC_RadioTrainTrackFactory_Pkg(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrackFactory_Pkg::RadioTrainTrackFactory__CreateDefaultMsg::o_RadioTrainTrackMessage */ Radio_TrainTrack_Message_T_Radio_Types_Pkg *o_RadioTrainTrackMessage)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrackFactory_Pkg::RadioTrainTrackFactory__CreateDefaultMsg::_L2 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L2;
  
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &_L2,
    (Radio_TrainTrack_Message_T_Radio_Types_Pkg *)
      &RADIO_TRAIN_TRACK_MESSAGE_DEFAULT);
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    o_RadioTrainTrackMessage,
    &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrainTrackFactory__CreateDefaultMsg_RBC_Messaging_Pkg_RBC_RadioTrainTrackFactory_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

