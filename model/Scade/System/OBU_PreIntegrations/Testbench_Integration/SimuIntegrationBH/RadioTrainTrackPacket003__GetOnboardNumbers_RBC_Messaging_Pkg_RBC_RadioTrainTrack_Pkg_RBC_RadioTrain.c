/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackPacket003__GetOnboardNumbers_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrain.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket003_Pkg::RadioTrainTrackPacket003__GetOnboardNumbers */
void RadioTrainTrackPacket003__GetOnboardNumbers_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrain(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket003_Pkg::RadioTrainTrackPacket003__GetOnboardNumbers::inRadioTrainTrackPacket */ PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg *inRadioTrainTrackPacket,
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket003_Pkg::RadioTrainTrackPacket003__GetOnboardNumbers::outOnboardPhoneNumbers */ aNID_RADIO_T_Packet_TrainTypes_Pkg *outOnboardPhoneNumbers)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket003_Pkg::RadioTrainTrackPacket003__GetOnboardNumbers::_L1 */
  static PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg _L1;
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket003_Pkg::RadioTrainTrackPacket003__GetOnboardNumbers::_L2 */
  static aNID_RADIO_T_Packet_TrainTypes_Pkg _L2;
  
  kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(
    &_L1,
    inRadioTrainTrackPacket);
  kcg_copy_aNID_RADIO_T_Packet_TrainTypes_Pkg(&_L2, &_L1.aNID_RADIO);
  kcg_copy_aNID_RADIO_T_Packet_TrainTypes_Pkg(outOnboardPhoneNumbers, &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrainTrackPacket003__GetOnboardNumbers_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrain.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

