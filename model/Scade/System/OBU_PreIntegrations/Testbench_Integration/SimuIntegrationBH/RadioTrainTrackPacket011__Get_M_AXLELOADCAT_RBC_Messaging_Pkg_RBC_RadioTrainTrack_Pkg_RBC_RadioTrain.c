/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackPacket011__Get_M_AXLELOADCAT_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrain.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_M_AXLELOADCAT */
M_AXLELOADCAT RadioTrainTrackPacket011__Get_M_AXLELOADCAT_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrain(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_M_AXLELOADCAT::inRadioTrainTrackPacket */ PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg *inRadioTrainTrackPacket)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_M_AXLELOADCAT::_L1 */
  static PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg _L1;
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_M_AXLELOADCAT::_L2 */
  static M_AXLELOADCAT _L2;
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_M_AXLELOADCAT::out_M_AXLELOADCAT */
  static M_AXLELOADCAT out_M_AXLELOADCAT;
  
  kcg_copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(
    &_L1,
    inRadioTrainTrackPacket);
  _L2 = _L1.m_axleloadcat;
  out_M_AXLELOADCAT = _L2;
  return out_M_AXLELOADCAT;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrainTrackPacket011__Get_M_AXLELOADCAT_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrain.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

