/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackPacket011__Get_M_LOADINGGAUGE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrai.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_M_LOADINGGAUGE */
M_LOADINGGAUGE RadioTrainTrackPacket011__Get_M_LOADINGGAUGE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrai(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_M_LOADINGGAUGE::inRadioTrainTrackPacket */ PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg *inRadioTrainTrackPacket)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_M_LOADINGGAUGE::_L1 */
  static PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg _L1;
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_M_LOADINGGAUGE::_L2 */
  static M_LOADINGGAUGE _L2;
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket011_Pkg::RadioTrainTrackPacket011__Get_M_LOADINGGAUGE::out_M_LOADINGGAUGE */
  static M_LOADINGGAUGE out_M_LOADINGGAUGE;
  
  kcg_copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(
    &_L1,
    inRadioTrainTrackPacket);
  _L2 = _L1.m_loadinggoage;
  out_M_LOADINGGAUGE = _L2;
  return out_M_LOADINGGAUGE;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrainTrackPacket011__Get_M_LOADINGGAUGE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrai.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

