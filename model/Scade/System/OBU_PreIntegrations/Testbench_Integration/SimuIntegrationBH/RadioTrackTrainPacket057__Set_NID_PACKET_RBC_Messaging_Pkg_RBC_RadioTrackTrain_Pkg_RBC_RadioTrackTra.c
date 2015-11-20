/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RadioTrackTrainPacket057__Set_NID_PACKET_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTra.h"

/* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Set_NID_PACKET */
void RadioTrackTrainPacket057__Set_NID_PACKET_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTra(
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Set_NID_PACKET::inRadioTrackTrainPacket */ P057_trackside_int_T_TM *inRadioTrackTrainPacket,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Set_NID_PACKET::in_NID_PACKET */ NID_PACKET in_NID_PACKET,
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Set_NID_PACKET::outRadioTrackTrainPacket */ P057_trackside_int_T_TM *outRadioTrackTrainPacket)
{
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Set_NID_PACKET::_L1 */
  static P057_trackside_int_T_TM _L1;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Set_NID_PACKET::_L2 */
  static NID_PACKET _L2;
  /* RBC_Messaging_Pkg::RBC_RadioTrackTrain_Pkg::RBC_RadioTrackTrainPacket057_Pkg::RadioTrackTrainPacket057__Set_NID_PACKET::_L3 */
  static P057_trackside_int_T_TM _L3;
  
  kcg_copy_P057_trackside_int_T_TM(&_L1, inRadioTrackTrainPacket);
  _L2 = in_NID_PACKET;
  kcg_copy_P057_trackside_int_T_TM(&_L3, &_L1);
  if (kcg_true) {
    _L3.NID_PACKET = _L2;
  }
  kcg_copy_P057_trackside_int_T_TM(outRadioTrackTrainPacket, &_L3);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** RadioTrackTrainPacket057__Set_NID_PACKET_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg_RBC_RadioTrackTra.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

