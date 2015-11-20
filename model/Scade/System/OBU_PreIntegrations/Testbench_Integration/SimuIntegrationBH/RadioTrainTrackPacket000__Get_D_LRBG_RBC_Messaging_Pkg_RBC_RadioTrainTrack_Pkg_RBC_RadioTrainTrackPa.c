/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackPacket000__Get_D_LRBG_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPa.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_D_LRBG */
D_LRBG RadioTrainTrackPacket000__Get_D_LRBG_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPa(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_D_LRBG::inRadioTrainTrackPacket */ PT0_PositionReport_T_Packet_TrainTypes_Pkg *inRadioTrainTrackPacket)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_D_LRBG::_L1 */
  static PT0_PositionReport_T_Packet_TrainTypes_Pkg _L1;
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_D_LRBG::_L2 */
  static kcg_int _L2;
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket000_Pkg::RadioTrainTrackPacket000__Get_D_LRBG::out_D_LRBG */
  static D_LRBG out_D_LRBG;
  
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
    &_L1,
    inRadioTrainTrackPacket);
  _L2 = _L1.packet0.D_LRBG;
  out_D_LRBG = _L2;
  return out_D_LRBG;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrainTrackPacket000__Get_D_LRBG_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPa.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

