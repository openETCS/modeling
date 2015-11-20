/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackPackets__GetP000_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP000 */
void RadioTrainTrackPackets__GetP000_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP000::inRadioTrainTrackPackets */ outPackets_T_Common_Types_Pkg *inRadioTrainTrackPackets,
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP000::outRadioTrainTrackPacket */ PT0_PositionReport_T_Packet_TrainTypes_Pkg *outRadioTrainTrackPacket)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP000::_L1 */
  static outPackets_T_Common_Types_Pkg _L1;
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP000::_L3 */
  static PT0_PositionReport_T_Packet_TrainTypes_Pkg _L3;
  
  kcg_copy_outPackets_T_Common_Types_Pkg(&_L1, inRadioTrainTrackPackets);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&_L3, &_L1.p0);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
    outRadioTrainTrackPacket,
    &_L3);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrainTrackPackets__GetP000_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

