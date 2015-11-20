/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P001_train_compr_TM_TrainToTrack.h"

/* TM_TrainToTrack::C_P001_train_compr */
void C_P001_train_compr_TM_TrainToTrack(
  /* TM_TrainToTrack::C_P001_train_compr::P001_in */ P001_TM_TrainToTrack *P001_in,
  /* TM_TrainToTrack::C_P001_train_compr::P001_int */ P001_TrainTrack_int_TM_TrainToTrack *P001_int)
{
  /* TM_TrainToTrack::C_P001_train_compr::_L1 */
  static P001_TM_TrainToTrack _L1;
  /* TM_TrainToTrack::C_P001_train_compr::_L16 */
  static M_LEVEL _L16;
  /* TM_TrainToTrack::C_P001_train_compr::_L15 */
  static M_MODE _L15;
  /* TM_TrainToTrack::C_P001_train_compr::_L14 */
  static Q_DIRTRAIN _L14;
  /* TM_TrainToTrack::C_P001_train_compr::_L13 */
  static V_TRAIN _L13;
  /* TM_TrainToTrack::C_P001_train_compr::_L12 */
  static L_TRAININT _L12;
  /* TM_TrainToTrack::C_P001_train_compr::_L11 */
  static Q_LENGTH _L11;
  /* TM_TrainToTrack::C_P001_train_compr::_L10 */
  static L_DOUBTUNDER _L10;
  /* TM_TrainToTrack::C_P001_train_compr::_L9 */
  static L_DOUBTOVER _L9;
  /* TM_TrainToTrack::C_P001_train_compr::_L8 */
  static Q_DLRBG _L8;
  /* TM_TrainToTrack::C_P001_train_compr::_L7 */
  static Q_DIRLRBG _L7;
  /* TM_TrainToTrack::C_P001_train_compr::_L6 */
  static NID_LRBG _L6;
  /* TM_TrainToTrack::C_P001_train_compr::_L5 */
  static Q_SCALE _L5;
  /* TM_TrainToTrack::C_P001_train_compr::_L4 */
  static L_PACKET _L4;
  /* TM_TrainToTrack::C_P001_train_compr::_L3 */
  static NID_PACKET _L3;
  /* TM_TrainToTrack::C_P001_train_compr::_L2 */
  static kcg_bool _L2;
  /* TM_TrainToTrack::C_P001_train_compr::_L68 */
  static array_int_17 _L68;
  /* TM_TrainToTrack::C_P001_train_compr::_L69 */
  static kcg_int _L69;
  /* TM_TrainToTrack::C_P001_train_compr::_L70 */
  static kcg_int _L70;
  /* TM_TrainToTrack::C_P001_train_compr::_L71 */
  static kcg_int _L71;
  /* TM_TrainToTrack::C_P001_train_compr::_L72 */
  static kcg_int _L72;
  /* TM_TrainToTrack::C_P001_train_compr::_L73 */
  static NID_NTC _L73;
  /* TM_TrainToTrack::C_P001_train_compr::_L74 */
  static kcg_int _L74;
  /* TM_TrainToTrack::C_P001_train_compr::_L75 */
  static kcg_int _L75;
  /* TM_TrainToTrack::C_P001_train_compr::_L77 */
  static kcg_int _L77;
  /* TM_TrainToTrack::C_P001_train_compr::_L78 */
  static kcg_int _L78;
  /* TM_TrainToTrack::C_P001_train_compr::_L79 */
  static kcg_int _L79;
  /* TM_TrainToTrack::C_P001_train_compr::_L80 */
  static kcg_int _L80;
  /* TM_TrainToTrack::C_P001_train_compr::_L81 */
  static kcg_int _L81;
  /* TM_TrainToTrack::C_P001_train_compr::_L82 */
  static kcg_int _L82;
  /* TM_TrainToTrack::C_P001_train_compr::_L83 */
  static kcg_int _L83;
  /* TM_TrainToTrack::C_P001_train_compr::_L84 */
  static kcg_int _L84;
  /* TM_TrainToTrack::C_P001_train_compr::_L85 */
  static kcg_int _L85;
  /* TM_TrainToTrack::C_P001_train_compr::_L89 */
  static kcg_int _L89;
  /* TM_TrainToTrack::C_P001_train_compr::_L90 */
  static D_LRBG _L90;
  /* TM_TrainToTrack::C_P001_train_compr::_L91 */
  static kcg_int _L91;
  /* TM_TrainToTrack::C_P001_train_compr::_L92 */
  static NID_PRVLRBG _L92;
  /* TM_TrainToTrack::C_P001_train_compr::_L93 */
  static kcg_int _L93;
  
  kcg_copy_P001_TM_TrainToTrack(&_L1, P001_in);
  _L2 = _L1.valid;
  _L3 = _L1.nid_packet;
  _L69 = /* 1 */ CAST_NID_PACKET_to_int_TM_conversions(_L3);
  _L89 = /* 1 */ Encode_NID_PACKET_TM_TrainToTrack(_L2, _L69);
  _L4 = _L1.l_packet;
  _L70 = /* 1 */ CAST_L_PACKET_to_int_TM_conversions(_L4);
  _L5 = _L1.q_scale;
  _L71 = /* 1 */ CAST_Q_SCALE_to_int_TM_conversions(_L5);
  _L6 = _L1.nid_lrbg;
  _L72 = /* 1 */ CAST_NID_LRBG_to_int_TM_conversions(_L6);
  _L92 = _L1.nid_prvlrbg;
  _L93 = /* 1 */ CAST_NID_PRVLRBG_to_int_TM_conversions(_L92);
  _L90 = _L1.d_lrbg;
  _L91 = /* 1 */ CAST_D_LRBG_to_int_TM_conversions(_L90);
  _L7 = _L1.q_dirlrbg;
  _L74 = /* 1 */ CAST_Q_DIRLRBG_to_int_TM_conversions(_L7);
  _L8 = _L1.q_dlrbg;
  _L75 = /* 1 */ CAST_Q_DRLRBG_to_int_TM_conversions(_L8);
  _L9 = _L1.l_doubtover;
  _L77 = /* 1 */ CAST_L_DOUBTOVER_to_int_TM_conversions(_L9);
  _L10 = _L1.l_doubtunder;
  _L78 = /* 1 */ CAST_L_DOUBTUNDER_to_int_TM_conversions(_L10);
  _L11 = _L1.q_length;
  _L79 = /* 1 */ CAST_Q_LENGTH_to_int_TM_conversions(_L11);
  _L12 = _L1.l_trainint;
  _L80 = /* 1 */ CAST_L_TRAININT_to_int_TM_conversions(_L12);
  _L13 = _L1.v_train;
  _L81 = /* 1 */ CAST_V_TRAIN_to_int_TM_conversions(_L13);
  _L14 = _L1.q_dirtrain;
  _L82 = /* 1 */ CAST_Q_DIRTRAIN_to_int_TM_conversions(_L14);
  _L15 = _L1.m_mode;
  _L83 = /* 1 */ CAST_M_MODE_to_int_TM_conversions(_L15);
  _L16 = _L1.m_level;
  _L84 = /* 1 */ CAST_M_LEVEL_to_int_TM_conversions(_L16);
  _L73 = _L1.nid_ntc;
  _L85 = /* 1 */ CAST_NID_NTC_to_int_TM_conversions(_L73);
  _L68[0] = _L89;
  _L68[1] = _L70;
  _L68[2] = _L71;
  _L68[3] = _L72;
  _L68[4] = _L93;
  _L68[5] = _L91;
  _L68[6] = _L74;
  _L68[7] = _L75;
  _L68[8] = _L77;
  _L68[9] = _L78;
  _L68[10] = _L79;
  _L68[11] = _L80;
  _L68[12] = _L81;
  _L68[13] = _L82;
  _L68[14] = _L83;
  _L68[15] = _L84;
  _L68[16] = _L85;
  kcg_copy_P001_TrainTrack_int_TM_TrainToTrack(P001_int, &_L68);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P001_train_compr_TM_TrainToTrack.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

