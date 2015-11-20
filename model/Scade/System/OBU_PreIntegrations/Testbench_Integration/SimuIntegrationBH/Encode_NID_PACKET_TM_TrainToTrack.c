/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Encode_NID_PACKET_TM_TrainToTrack.h"

/* TM_TrainToTrack::Encode_NID_PACKET */
kcg_int Encode_NID_PACKET_TM_TrainToTrack(
  /* TM_TrainToTrack::Encode_NID_PACKET::valid */ kcg_bool valid,
  /* TM_TrainToTrack::Encode_NID_PACKET::nid_packet */ NID_PACKET nid_packet)
{
  /* TM_TrainToTrack::Encode_NID_PACKET::_L1 */
  static NID_PACKET _L1;
  /* TM_TrainToTrack::Encode_NID_PACKET::_L6 */
  static kcg_bool _L6;
  /* TM_TrainToTrack::Encode_NID_PACKET::_L7 */
  static kcg_int _L7;
  /* TM_TrainToTrack::Encode_NID_PACKET::_L8 */
  static NID_PACKET _L8;
  /* TM_TrainToTrack::Encode_NID_PACKET::_L9 */
  static kcg_int _L9;
  /* TM_TrainToTrack::Encode_NID_PACKET::_L10 */
  static kcg_bool _L10;
  /* TM_TrainToTrack::Encode_NID_PACKET::_L11 */
  static kcg_int _L11;
  /* TM_TrainToTrack::Encode_NID_PACKET::_L13 */
  static kcg_int _L13;
  /* TM_TrainToTrack::Encode_NID_PACKET::meta */
  static kcg_int meta;
  
  _L1 = nid_packet;
  _L6 = valid;
  _L11 = 0;
  _L10 = _L1 == _L11;
  _L13 = nid_meta_p000_TM_radio_messages;
  /* 2 */ if (_L10) {
    _L9 = _L13;
  }
  else {
    _L9 = _L1;
  }
  _L8 = INVALID_NID_PACKET_TM_TrainToTrack;
  /* 1 */ if (_L6) {
    _L7 = _L9;
  }
  else {
    _L7 = _L8;
  }
  meta = _L7;
  return meta;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Encode_NID_PACKET_TM_TrainToTrack.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

