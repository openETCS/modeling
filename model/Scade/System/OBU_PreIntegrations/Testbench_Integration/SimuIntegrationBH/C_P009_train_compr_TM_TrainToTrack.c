/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P009_train_compr_TM_TrainToTrack.h"

/* TM_TrainToTrack::C_P009_train_compr */
void C_P009_train_compr_TM_TrainToTrack(
  /* TM_TrainToTrack::C_P009_train_compr::P009_in */ P009_TM_TrainToTrack *P009_in,
  /* TM_TrainToTrack::C_P009_train_compr::P009_int */ P009_TrainTrack_int_TM_TrainToTrack *P009_int)
{
  /* TM_TrainToTrack::C_P009_train_compr::_L1 */
  static P009_TM_TrainToTrack _L1;
  /* TM_TrainToTrack::C_P009_train_compr::_L5 */
  static NID_LTRBG _L5;
  /* TM_TrainToTrack::C_P009_train_compr::_L4 */
  static L_PACKET _L4;
  /* TM_TrainToTrack::C_P009_train_compr::_L3 */
  static NID_PACKET _L3;
  /* TM_TrainToTrack::C_P009_train_compr::_L2 */
  static kcg_bool _L2;
  /* TM_TrainToTrack::C_P009_train_compr::_L68 */
  static array_int_3 _L68;
  /* TM_TrainToTrack::C_P009_train_compr::_L69 */
  static kcg_int _L69;
  /* TM_TrainToTrack::C_P009_train_compr::_L70 */
  static kcg_int _L70;
  /* TM_TrainToTrack::C_P009_train_compr::_L71 */
  static kcg_int _L71;
  /* TM_TrainToTrack::C_P009_train_compr::_L89 */
  static kcg_int _L89;
  
  kcg_copy_P009_TM_TrainToTrack(&_L1, P009_in);
  _L2 = _L1.valid;
  _L3 = _L1.nid_packet;
  _L69 = /* 1 */ CAST_NID_PACKET_to_int_TM_conversions(_L3);
  _L89 = /* 1 */ Encode_NID_PACKET_TM_TrainToTrack(_L2, _L69);
  _L4 = _L1.l_packet;
  _L70 = /* 1 */ CAST_L_PACKET_to_int_TM_conversions(_L4);
  _L5 = _L1.nid_ltrbg;
  _L71 = /* 1 */ CAST_NID_LTRBG_to_int_TM_conversions(_L5);
  _L68[0] = _L89;
  _L68[1] = _L70;
  _L68[2] = _L71;
  kcg_copy_P009_TrainTrack_int_TM_TrainToTrack(P009_int, &_L68);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P009_train_compr_TM_TrainToTrack.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

