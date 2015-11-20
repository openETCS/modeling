/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackPackets__GetP004_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP004 */
void RadioTrainTrackPackets__GetP004_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP004::inRadioTrainTrackPackets */ outPackets_T_Common_Types_Pkg *inRadioTrainTrackPackets,
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP004::outRadioTrainTrackPacket */ PT4_ErrorReporting_T_Packet_TrainTypes_Pkg *outRadioTrainTrackPacket)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP004::_L1 */
  static outPackets_T_Common_Types_Pkg _L1;
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RadioTrainTrackPackets__GetP004::_L2 */
  static PT4_ErrorReporting_T_Packet_TrainTypes_Pkg _L2;
  
  kcg_copy_outPackets_T_Common_Types_Pkg(&_L1, inRadioTrainTrackPackets);
  kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(&_L2, &_L1.p4);
  kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(
    outRadioTrainTrackPacket,
    &_L2);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrainTrackPackets__GetP004_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

