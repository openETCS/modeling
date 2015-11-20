/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackPacket011__Get_L_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackP.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_L_TRAIN */
L_TRAIN RadioTrainTrackPacket011__Get_L_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackP(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_L_TRAIN::inRadioTrainTrackPacket */ PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg *inRadioTrainTrackPacket)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_L_TRAIN::_L1 */
  static PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg _L1;
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_L_TRAIN::_L2 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L2;
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_L_TRAIN::out_L_TRAIN */
  static L_TRAIN out_L_TRAIN;
  
  kcg_copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(
    &_L1,
    inRadioTrainTrackPacket);
  _L2 = _L1.l_train;
  out_L_TRAIN = _L2;
  return out_L_TRAIN;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrainTrackPacket011__Get_L_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackP.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

