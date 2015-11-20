/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackPacket011__GetNationalSystemIdentities_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__GetNationalSystemIdentities */
void RadioTrainTrackPacket011__GetNationalSystemIdentities_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__GetNationalSystemIdentities::inRadioTrainTrackPacket */ PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg *inRadioTrainTrackPacket,
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__GetNationalSystemIdentities::outNationalSystemIdentities */ aNID_NTC_T_Packet_TrainTypes_Pkg *outNationalSystemIdentities)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__GetNationalSystemIdentities::_L1 */
  static PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg _L1;
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__GetNationalSystemIdentities::_L2 */
  static aNID_NTC_T_Packet_TrainTypes_Pkg _L2;
  
  kcg_copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(
    &_L1,
    inRadioTrainTrackPacket);
  kcg_copy_aNID_NTC_T_Packet_TrainTypes_Pkg(&_L2, &_L1.nid_ntc);
  kcg_copy_aNID_NTC_T_Packet_TrainTypes_Pkg(outNationalSystemIdentities, &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrainTrackPacket011__GetNationalSystemIdentities_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

