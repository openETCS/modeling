/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrainTrackPacket005__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke.h"

/* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket005_Pkg::RadioTrainTrackPacket005__IsValid */
kcg_bool RadioTrainTrackPacket005__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke(
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket005_Pkg::RadioTrainTrackPacket005__IsValid::inRadioTrainTrackPacket */ PT5_TrainRunningNumber_Packet_TrainTypes_Pkg *inRadioTrainTrackPacket)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket005_Pkg::RadioTrainTrackPacket005__IsValid::_L1 */
  static PT5_TrainRunningNumber_Packet_TrainTypes_Pkg _L1;
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket005_Pkg::RadioTrainTrackPacket005__IsValid::_L2 */
  static kcg_bool _L2;
  /* RBC_Messaging_Pkg::RBC_RadioTrainTrack_Pkg::RBC_RadioTrainTrackPacket005_Pkg::RadioTrainTrackPacket005__IsValid::outIsValid */
  static kcg_bool outIsValid;
  
  kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(
    &_L1,
    inRadioTrainTrackPacket);
  _L2 = _L1.valid;
  outIsValid = _L2;
  return outIsValid;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrainTrackPacket005__IsValid_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg_RBC_RadioTrainTrackPacke.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

