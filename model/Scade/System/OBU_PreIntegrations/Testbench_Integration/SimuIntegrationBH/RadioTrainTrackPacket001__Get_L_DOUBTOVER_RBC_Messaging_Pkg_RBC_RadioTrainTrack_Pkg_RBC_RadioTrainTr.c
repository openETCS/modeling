/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackPacket001__Get_L_DOUBTOVER_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTr.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__Get_L_DOUBTOVER */
L_DOUBTOVER RadioTrainTrackPacket001__Get_L_DOUBTOVER_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTr(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__Get_L_DOUBTOVER::inRadioTrainTrackPacket */ PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *inRadioTrainTrackPacket)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__Get_L_DOUBTOVER::_L1 */
  static PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg _L1;
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__Get_L_DOUBTOVER::_L2 */
  static kcg_int _L2;
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket001_Pkg::RadioTrainTrackPacket001__Get_L_DOUBTOVER::out_L_DOUBTOVER */
  static L_DOUBTOVER out_L_DOUBTOVER;
  
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
    &_L1,
    inRadioTrainTrackPacket);
  _L2 = _L1.packet1.L_DOUBTOVER;
  out_L_DOUBTOVER = _L2;
  return out_L_DOUBTOVER;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrainTrackPacket001__Get_L_DOUBTOVER_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTr.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

