/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_compr_P005_TM_TrainToTrack.h"

/* TM_TrainToTrack::C_compr_P005 */
void C_compr_P005_TM_TrainToTrack(
  /* TM_TrainToTrack::C_compr_P005::P005_in */ P005_TrainTrack_int_TM_TrainToTrack *P005_in,
  /* TM_TrainToTrack::C_compr_P005::P005_out */ P005_TM_TrainToTrack *P005_out)
{
  /* TM_conversions::CAST_Int_to_NID_PACKET::nid_packet */
  static NID_PACKET nid_packet_1;
  /* TM_conversions::CAST_Int_to_NID_PACKET::nid_packet_int */
  static kcg_int nid_packet_int_1;
  /* TM_conversions::CAST_Int_to_NID_PACKET::_L2 */
  static kcg_bool _L2_1;
  /* TM_conversions::CAST_Int_to_NID_PACKET::_L3 */
  static kcg_int _L3_1;
  /* TM_conversions::CAST_Int_to_NID_PACKET::_L4 */
  static kcg_bool _L4_1;
  /* TM_conversions::CAST_Int_to_NID_PACKET::_L5 */
  static kcg_int _L5_1;
  /* TM_conversions::CAST_Int_to_NID_PACKET::_L1 */
  static kcg_int _L1_12;
  static kcg_bool _3_noname_1;
  static kcg_bool _4_noname_1;
  /* TM_conversions::CAST_Int_to_L_PACKET::l_packet */
  static L_PACKET l_packet_1;
  /* TM_conversions::CAST_Int_to_L_PACKET::l_packet_int */
  static kcg_int l_packet_int_1;
  /* TM_conversions::CAST_Int_to_L_PACKET::_L13 */
  static kcg_int _L13_1;
  /* TM_conversions::CAST_Int_to_L_PACKET::_L12 */
  static kcg_int _L12_1;
  /* TM_conversions::CAST_Int_to_L_PACKET::_L8 */
  static kcg_bool _L8_1;
  /* TM_conversions::CAST_Int_to_L_PACKET::_L9 */
  static kcg_bool _L9_1;
  /* TM_conversions::CAST_Int_to_L_PACKET::_L1 */
  static kcg_int _L1_1;
  static kcg_bool noname_1;
  static kcg_bool _1_noname_1;
  /* TM_TrainToTrack::C_compr_P005::_L1 */
  static P005_TrainTrack_int_TM_TrainToTrack _L1;
  /* TM_TrainToTrack::C_compr_P005::_L4 */
  static kcg_int _L4;
  /* TM_TrainToTrack::C_compr_P005::_L3 */
  static kcg_int _L3;
  /* TM_TrainToTrack::C_compr_P005::_L2 */
  static kcg_int _L2;
  /* TM_TrainToTrack::C_compr_P005::_L69 */
  static NID_PACKET _L69;
  /* TM_TrainToTrack::C_compr_P005::_L70 */
  static L_PACKET _L70;
  /* TM_TrainToTrack::C_compr_P005::_L71 */
  static NID_OPERATIONAL _L71;
  /* TM_TrainToTrack::C_compr_P005::_L72 */
  static P005_TM_TrainToTrack _L72;
  /* TM_TrainToTrack::C_compr_P005::_L73 */
  static kcg_bool _L73;
  /* TM_TrainToTrack::C_compr_P005::_L74 */
  static kcg_int _L74;
  /* TM_TrainToTrack::C_compr_P005::_L75 */
  static kcg_int _L75;
  /* TM_TrainToTrack::C_compr_P005::_L76 */
  static kcg_int _L76;
  
  kcg_copy_P005_TrainTrack_int_TM_TrainToTrack(&_L1, P005_in);
  _L2 = _L1[0];
  _L73 = /* 1 */ Decode_NID_PACKET_TM_TrainToTrack(_L2, 9);
  _L74 = /* 1 */ Filter_Variable_TM_TrainToTrack(_L73, _L2);
  nid_packet_int_1 = _L74;
  _L1_12 = nid_packet_int_1;
  nid_packet_1 = _L1_12;
  _L69 = nid_packet_1;
  _L3 = _L1[1];
  _L75 = /* 2 */ Filter_Variable_TM_TrainToTrack(_L73, _L3);
  l_packet_int_1 = _L75;
  _L1_1 = l_packet_int_1;
  l_packet_1 = _L1_1;
  _L70 = l_packet_1;
  _L4 = _L1[2];
  _L76 = /* 3 */ Filter_Variable_TM_TrainToTrack(_L73, _L4);
  _L71 = /* 1 */ CAST_Int_to_NID_OPERATIONAL_TM_conversions(_L76);
  _L72.valid = _L73;
  _L72.nid_packet = _L69;
  _L72.l_packet = _L70;
  _L72.nid_opeartional = _L71;
  kcg_copy_P005_TM_TrainToTrack(P005_out, &_L72);
  _L13_1 = 8191;
  _L9_1 = _L1_1 > _L13_1;
  _1_noname_1 = _L9_1;
  _L12_1 = 0;
  _L8_1 = _L1_1 < _L12_1;
  noname_1 = _L8_1;
  _L5_1 = 0;
  _L4_1 = _L1_12 < _L5_1;
  _4_noname_1 = _L4_1;
  _L3_1 = 256;
  _L2_1 = _L1_12 > _L3_1;
  _3_noname_1 = _L2_1;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_compr_P005_TM_TrainToTrack.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

