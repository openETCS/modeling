/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackPacket000__Get_V_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackP.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_V_TRAIN */
V_TRAIN RadioTrainTrackPacket000__Get_V_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackP(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_V_TRAIN::inRadioTrainTrackPacket */ PT0_PositionReport_T_Packet_TrainTypes_Pkg *inRadioTrainTrackPacket)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_V_TRAIN::_L1 */
  static PT0_PositionReport_T_Packet_TrainTypes_Pkg _L1;
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_V_TRAIN::_L2 */
  static kcg_int _L2;
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_V_TRAIN::out_V_TRAIN */
  static V_TRAIN out_V_TRAIN;
  
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
    &_L1,
    inRadioTrainTrackPacket);
  _L2 = _L1.packet0.V_TRAIN;
  out_V_TRAIN = _L2;
  return out_V_TRAIN;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrainTrackPacket000__Get_V_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackP.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

