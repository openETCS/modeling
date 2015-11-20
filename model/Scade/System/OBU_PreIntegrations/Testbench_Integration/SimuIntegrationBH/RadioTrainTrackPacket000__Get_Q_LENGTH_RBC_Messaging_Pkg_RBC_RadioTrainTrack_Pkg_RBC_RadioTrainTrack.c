/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackPacket000__Get_Q_LENGTH_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrack.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_Q_LENGTH */
Q_LENGTH RadioTrainTrackPacket000__Get_Q_LENGTH_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrack(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_Q_LENGTH::inRadioTrainTrackPacket */ PT0_PositionReport_T_Packet_TrainTypes_Pkg *inRadioTrainTrackPacket)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_Q_LENGTH::_L1 */
  static PT0_PositionReport_T_Packet_TrainTypes_Pkg _L1;
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_Q_LENGTH::_L2 */
  static Q_LENGTH _L2;
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_Q_LENGTH::out_Q_LENGTH */
  static Q_LENGTH out_Q_LENGTH;
  
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
    &_L1,
    inRadioTrainTrackPacket);
  _L2 = _L1.packet0.length;
  out_Q_LENGTH = _L2;
  return out_Q_LENGTH;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrainTrackPacket000__Get_Q_LENGTH_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrack.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

