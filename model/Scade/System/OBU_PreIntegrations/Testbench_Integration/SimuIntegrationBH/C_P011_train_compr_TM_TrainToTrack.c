/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P011_train_compr_TM_TrainToTrack.h"

/* TM_TrainToTrack::C_P011_train_compr */
void C_P011_train_compr_TM_TrainToTrack(
  /* TM_TrainToTrack::C_P011_train_compr::P011_in */ P011_TM_TrainToTrack *P011_in,
  /* TM_TrainToTrack::C_P011_train_compr::P011_int */ P011_TrainTrack_int_TM_TrainToTrack *P011_int)
{
  static kcg_int i;
  static kcg_bool noname;
  /* TM_TrainToTrack::C_P011_train_compr::_L1 */
  static P011_TM_TrainToTrack _L1;
  /* TM_TrainToTrack::C_P011_train_compr::_L5 */
  static NC_CDTRAIN _L5;
  /* TM_TrainToTrack::C_P011_train_compr::_L4 */
  static L_PACKET _L4;
  /* TM_TrainToTrack::C_P011_train_compr::_L3 */
  static NID_PACKET _L3;
  /* TM_TrainToTrack::C_P011_train_compr::_L2 */
  static kcg_bool _L2;
  /* TM_TrainToTrack::C_P011_train_compr::_L68 */
  static array_int_11 _L68;
  /* TM_TrainToTrack::C_P011_train_compr::_L69 */
  static kcg_int _L69;
  /* TM_TrainToTrack::C_P011_train_compr::_L70 */
  static kcg_int _L70;
  /* TM_TrainToTrack::C_P011_train_compr::_L71 */
  static kcg_int _L71;
  /* TM_TrainToTrack::C_P011_train_compr::_L88 */
  static array_int_25 _L88;
  /* TM_TrainToTrack::C_P011_train_compr::_L99 */
  static NC_TRAIN _L99;
  /* TM_TrainToTrack::C_P011_train_compr::_L98 */
  static L_TRAIN _L98;
  /* TM_TrainToTrack::C_P011_train_compr::_L97 */
  static V_MAXTRAIN _L97;
  /* TM_TrainToTrack::C_P011_train_compr::_L96 */
  static M_LOADINGGAUGE _L96;
  /* TM_TrainToTrack::C_P011_train_compr::_L95 */
  static M_AXLELOADCAT _L95;
  /* TM_TrainToTrack::C_P011_train_compr::_L94 */
  static M_AIRTIGHT _L94;
  /* TM_TrainToTrack::C_P011_train_compr::_L93 */
  static N_AXLE _L93;
  /* TM_TrainToTrack::C_P011_train_compr::_L92 */
  static N_ITER _L92;
  /* TM_TrainToTrack::C_P011_train_compr::_L91 */
  static P011_voltage_list_TM_TrainToTrack _L91;
  /* TM_TrainToTrack::C_P011_train_compr::_L90 */
  static N_ITER _L90;
  /* TM_TrainToTrack::C_P011_train_compr::_L89 */
  static P011_ntc_list_TM_TrainToTrack _L89;
  /* TM_TrainToTrack::C_P011_train_compr::_L100 */
  static kcg_int _L100;
  /* TM_TrainToTrack::C_P011_train_compr::_L101 */
  static kcg_int _L101;
  /* TM_TrainToTrack::C_P011_train_compr::_L102 */
  static kcg_int _L102;
  /* TM_TrainToTrack::C_P011_train_compr::_L103 */
  static kcg_int _L103;
  /* TM_TrainToTrack::C_P011_train_compr::_L104 */
  static kcg_int _L104;
  /* TM_TrainToTrack::C_P011_train_compr::_L105 */
  static kcg_int _L105;
  /* TM_TrainToTrack::C_P011_train_compr::_L106 */
  static kcg_int _L106;
  /* TM_TrainToTrack::C_P011_train_compr::_L107 */
  static kcg_int _L107;
  /* TM_TrainToTrack::C_P011_train_compr::_L108 */
  static kcg_int _L108;
  /* TM_TrainToTrack::C_P011_train_compr::_L109 */
  static P044_other_data_TM_TrainToTrack _L109;
  /* TM_TrainToTrack::C_P011_train_compr::_L110 */
  static array_int_20 _L110;
  /* TM_TrainToTrack::C_P011_train_compr::_L111 */
  static array_int_9 _L111;
  /* TM_TrainToTrack::C_P011_train_compr::_L113 */
  static P011_voltage_sections_array_flat_t_TM_TrainToTrack _L113;
  /* TM_TrainToTrack::C_P011_train_compr::_L114 */
  static P011_ntc_list_array_T_TM_TrainToTrack _L114;
  
  kcg_copy_P011_TM_TrainToTrack(&_L1, P011_in);
  _L3 = _L1.nid_packet;
  _L69 = /* 1 */ CAST_NID_PACKET_to_int_TM_conversions(_L3);
  _L4 = _L1.l_packet;
  _L70 = /* 1 */ CAST_L_PACKET_to_int_TM_conversions(_L4);
  _L5 = _L1.nc_cdtrain;
  _L71 = /* 1 */ CAST_NC_CDTRAIN_to_int_TM_conversions(_L5);
  _L99 = _L1.nc_train;
  _L100 = /* 1 */ CAST_NC_TRAIN_to_int_TM_conversions(_L99);
  _L98 = _L1.l_train;
  _L101 = /* 1 */ CAST_L_TRAIN_to_int_TM_conversions(_L98);
  _L97 = _L1.v_maxtrain;
  _L102 = /* 1 */ CAST_V_MAXTRAIN_to_int_TM_conversions(_L97);
  _L96 = _L1.m_loadinggauge;
  _L103 = /* 1 */ CAST_M_LOADINGGAUGE_to_int_TM_conversions(_L96);
  _L95 = _L1.m_axleloadcat;
  _L104 = /* 1 */ CAST_M_AXLELOADCAT_to_int_TM_conversions(_L95);
  _L94 = _L1.m_airtight;
  _L105 = /* 1 */ CAST_M_AIRTIGHT_to_int_TM_conversions(_L94);
  _L93 = _L1.n_axle;
  _L106 = /* 1 */ CAST_N_AXLE_to_int_TM_conversions(_L93);
  _L92 = _L1.n_iter_voltage;
  _L107 = /* 1 */ CAST_N_ITER_to_int_TM_conversions(_L92);
  _L68[0] = _L69;
  _L68[1] = _L70;
  _L68[2] = _L71;
  _L68[3] = _L100;
  _L68[4] = _L101;
  _L68[5] = _L102;
  _L68[6] = _L103;
  _L68[7] = _L104;
  _L68[8] = _L105;
  _L68[9] = _L106;
  _L68[10] = _L107;
  kcg_copy_P011_voltage_list_TM_TrainToTrack(&_L91, &_L1.voltage_list);
  /* 1 */
  C_P011_flatten_sections_voltage_TM_TrainToTrack_lib_internal(&_L91, &_L113);
  _L90 = _L1.n_iter_nid_ntc;
  _L108 = /* 2 */ CAST_N_ITER_to_int_TM_conversions(_L90);
  /* pow */ for (i = 0; i < 1; i++) {
    _L109[i] = _L108;
  }
  kcg_copy_P011_voltage_sections_array_flat_t_TM_TrainToTrack(
    &_L111[0],
    &_L113);
  kcg_copy_P044_other_data_TM_TrainToTrack(&_L111[8], &_L109);
  kcg_copy_array_int_11(&_L110[0], &_L68);
  kcg_copy_array_int_9(&_L110[11], &_L111);
  kcg_copy_P011_ntc_list_TM_TrainToTrack(&_L89, &_L1.nid_ntc_list);
  /* 1 */
  C_P011_flatten_sections_ntc_TM_TrainToTrack_lib_internal(&_L89, &_L114);
  kcg_copy_array_int_20(&_L88[0], &_L110);
  kcg_copy_P011_ntc_list_array_T_TM_TrainToTrack(&_L88[20], &_L114);
  kcg_copy_P011_TrainTrack_int_TM_TrainToTrack(P011_int, &_L88);
  _L2 = _L1.valid;
  noname = _L2;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P011_train_compr_TM_TrainToTrack.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

