/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:22
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackPacket003__GetOnboardNumbers_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrain.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket003_Pkg::RadioTrainTrackPacket003__GetOnboardNumbers */
void RadioTrainTrackPacket003__GetOnboardNumbers_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrain(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket003_Pkg::RadioTrainTrackPacket003__GetOnboardNumbers::inRadioTrainTrackPacket */PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg *inRadioTrainTrackPacket,
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket003_Pkg::RadioTrainTrackPacket003__GetOnboardNumbers::outOnboardPhoneNumbers */aNID_RADIO_T_Packet_TrainTypes_Pkg *outOnboardPhoneNumbers)
{
  kcg_copy_aNID_RADIO_T_Packet_TrainTypes_Pkg(
    outOnboardPhoneNumbers,
    &(*inRadioTrainTrackPacket).aNID_RADIO);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RadioTrainTrackPacket003__GetOnboardNumbers_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrain.c
** Generation date: 2015-11-20T19:47:22
*************************************************************$ */

