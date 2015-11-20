/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackPacket011__GetTractionIdentities_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioT.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__GetTractionIdentities */
void RadioTrainTrackPacket011__GetTractionIdentities_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioT(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__GetTractionIdentities::inRadioTrainTrackPacket */ PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg *inRadioTrainTrackPacket,
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__GetTractionIdentities::outTractionIdentities */ aTractionIdentity_T_Packet_TrainTypes_Pkg *outTractionIdentities)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__GetTractionIdentities::_L1 */
  static PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg _L1;
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__GetTractionIdentities::_L2 */
  static aTractionIdentity_T_Packet_TrainTypes_Pkg _L2;
  
  kcg_copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(
    &_L1,
    inRadioTrainTrackPacket);
  kcg_copy_aTractionIdentity_T_Packet_TrainTypes_Pkg(
    &_L2,
    &_L1.tractionIdentity);
  kcg_copy_aTractionIdentity_T_Packet_TrainTypes_Pkg(
    outTractionIdentities,
    &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrainTrackPacket011__GetTractionIdentities_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioT.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

