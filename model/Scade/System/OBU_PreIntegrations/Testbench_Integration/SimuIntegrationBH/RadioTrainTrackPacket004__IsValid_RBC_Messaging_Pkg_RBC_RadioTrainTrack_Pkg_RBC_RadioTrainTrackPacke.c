/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackPacket004__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket004_Pkg::RadioTrainTrackPacket004__IsValid */
kcg_bool RadioTrainTrackPacket004__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket004_Pkg::RadioTrainTrackPacket004__IsValid::inRadioTrainTrackPacket */ PT4_ErrorReporting_T_Packet_TrainTypes_Pkg *inRadioTrainTrackPacket)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket004_Pkg::RadioTrainTrackPacket004__IsValid::_L1 */
  static PT4_ErrorReporting_T_Packet_TrainTypes_Pkg _L1;
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket004_Pkg::RadioTrainTrackPacket004__IsValid::_L2 */
  static kcg_bool _L2;
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket004_Pkg::RadioTrainTrackPacket004__IsValid::out_IsValid */
  static kcg_bool out_IsValid;
  
  kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(
    &_L1,
    inRadioTrainTrackPacket);
  _L2 = _L1.valid;
  out_IsValid = _L2;
  return out_IsValid;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrainTrackPacket004__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

