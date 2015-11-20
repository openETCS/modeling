/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainMessage__SetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__SetHeader */
void RadioTrackTrainMessage__SetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg(
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__SetHeader::inRadioTrackTrainMessage */CompressedRadioMessage_TM *inRadioTrackTrainMessage,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__SetHeader::inRadioTrackTrainHeader */Radio_TrackTrain_Header_T_TM *inRadioTrackTrainHeader,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RadioTrackTrainMessage__SetHeader::outRadioTrackTrainMessage */CompressedRadioMessage_TM *outRadioTrackTrainMessage)
{
  kcg_copy_CompressedRadioMessage_TM(
    outRadioTrackTrainMessage,
    inRadioTrackTrainMessage);
  kcg_copy_Radio_TrackTrain_Header_T_TM(
    &(*outRadioTrackTrainMessage).Header,
    inRadioTrackTrainHeader);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RadioTrackTrainMessage__SetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.c
** Generation date: 2015-11-20T19:47:23
*************************************************************$ */

