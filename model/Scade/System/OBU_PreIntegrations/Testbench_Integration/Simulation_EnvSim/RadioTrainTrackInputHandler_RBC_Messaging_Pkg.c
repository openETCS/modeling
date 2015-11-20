/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackInputHandler_RBC_Messaging_Pkg.h"

void RadioTrainTrackInputHandler_reset_RBC_Messaging_Pkg(
  outC_RadioTrainTrackInputHandler_RBC_Messaging_Pkg *outC)
{
  /* 1 */
  RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_reset_RBC_Messaging_Pkg_RBC_Consistency_Pk(
    &outC->Context_1);
}

/* RBC_Messaging_Pkg::RadioTrainTrackInputHandler */
void RadioTrainTrackInputHandler_RBC_Messaging_Pkg(
  /* RBC_Messaging_Pkg::RadioTrainTrackInputHandler::inRadioTrainTrack */Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrack,
  outC_RadioTrainTrackInputHandler_RBC_Messaging_Pkg *outC)
{
  /* 1 */
  RadioTrainTrackMessageConsistencyChecker__IsConsistentMsg_RBC_Messaging_Pkg_RBC_Consistency_Pkg(
    inRadioTrainTrack,
    &outC->Context_1);
  if (outC->Context_1.outIsConsistent) {
    kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
      &outC->outRadioTrainTrack,
      inRadioTrainTrack);
  }
  else {
    /* 1 */
    RadioTrainTrackFactory__CreateDefaultMsg_RBC_Messaging_Pkg_RBC_RadioTrainTrackFactory_Pkg(
      &outC->outRadioTrainTrack);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RadioTrainTrackInputHandler_RBC_Messaging_Pkg.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

