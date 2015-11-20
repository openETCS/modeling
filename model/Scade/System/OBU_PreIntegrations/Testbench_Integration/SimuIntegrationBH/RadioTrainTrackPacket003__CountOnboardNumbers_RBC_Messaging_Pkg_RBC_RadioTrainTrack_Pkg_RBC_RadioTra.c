/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackPacket003__CountOnboardNumbers_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTra.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket003_Pkg::RadioTrainTrackPacket003__CountOnboardNumbers */
kcg_int RadioTrainTrackPacket003__CountOnboardNumbers_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTra(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket003_Pkg::RadioTrainTrackPacket003__CountOnboardNumbers::inRadioTrainTrackPacket */ PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg *inRadioTrainTrackPacket)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket003_Pkg::RadioTrainTrackPacket003__CountOnboardNumbers::_L1 */
  static PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg _L1;
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket003_Pkg::RadioTrainTrackPacket003__CountOnboardNumbers::_L3 */
  static kcg_int _L3;
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket003_Pkg::RadioTrainTrackPacket003__CountOnboardNumbers::outCount */
  static kcg_int outCount;
  
  kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(
    &_L1,
    inRadioTrainTrackPacket);
  _L3 = _L1.number;
  outCount = _L3;
  return outCount;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrainTrackPacket003__CountOnboardNumbers_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTra.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

