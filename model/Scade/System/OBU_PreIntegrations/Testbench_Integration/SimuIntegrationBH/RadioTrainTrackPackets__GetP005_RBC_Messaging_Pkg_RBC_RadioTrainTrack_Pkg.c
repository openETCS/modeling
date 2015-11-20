/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackPackets__GetP005_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP005 */
void RadioTrainTrackPackets__GetP005_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP005::inRadioTrainTrackPackets */ outPackets_T_Common_Types_Pkg *inRadioTrainTrackPackets,
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP005::outRadioTrainTrackPacket */ PT5_TrainRunningNumber_Packet_TrainTypes_Pkg *outRadioTrainTrackPacket)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP005::_L1 */
  static outPackets_T_Common_Types_Pkg _L1;
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP005::_L2 */
  static PT5_TrainRunningNumber_Packet_TrainTypes_Pkg _L2;
  
  kcg_copy_outPackets_T_Common_Types_Pkg(&_L1, inRadioTrainTrackPackets);
  kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(&_L2, &_L1.p5);
  kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(
    outRadioTrainTrackPacket,
    &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrainTrackPackets__GetP005_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

