/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainFactory__CreateDefaultMsg_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateDefaultMsg_BSL2 */
void RadioTrackTrainFactory__CreateDefaultMsg_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg(
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateDefaultMsg_BSL2::outRadioTrackTrainMessage */ CompressedRadioMessage_TM *outRadioTrackTrainMessage)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrainFactory_Pkg::RadioTrackTrainFactory__CreateDefaultMsg_BSL2::_L1 */
  static CompressedRadioMessage_TM _L1;
  
  kcg_copy_CompressedRadioMessage_TM(
    &_L1,
    (CompressedRadioMessage_TM *) &RADIO_TRACK_TRAIN_MESSAGE_DEFAULT);
  kcg_copy_CompressedRadioMessage_TM(outRadioTrackTrainMessage, &_L1);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrackTrainFactory__CreateDefaultMsg_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

