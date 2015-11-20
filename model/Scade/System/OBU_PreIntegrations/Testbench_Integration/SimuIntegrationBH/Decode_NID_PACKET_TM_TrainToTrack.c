/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Decode_NID_PACKET_TM_TrainToTrack.h"

/* TM_TrainToTrack::Decode_NID_PACKET */
kcg_bool Decode_NID_PACKET_TM_TrainToTrack(
  /* TM_TrainToTrack::Decode_NID_PACKET::Meta */ kcg_int Meta,
  /* TM_TrainToTrack::Decode_NID_PACKET::Packet_ID */ kcg_int Packet_ID)
{
  /* TM_TrainToTrack::Decode_NID_PACKET::_L1 */
  static kcg_int _L1;
  /* TM_TrainToTrack::Decode_NID_PACKET::_L2 */
  static kcg_int _L2;
  /* TM_TrainToTrack::Decode_NID_PACKET::_L3 */
  static kcg_bool _L3;
  /* TM_TrainToTrack::Decode_NID_PACKET::Valid */
  static kcg_bool Valid;
  
  _L1 = Meta;
  _L2 = Packet_ID;
  _L3 = _L1 == _L2;
  Valid = _L3;
  return Valid;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Decode_NID_PACKET_TM_TrainToTrack.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

