/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_compr_P011_TM_TrainToTrack.h"

/* TM_TrainToTrack::C_compr_P011 */
void C_compr_P011_TM_TrainToTrack(
  /* TM_TrainToTrack::C_compr_P011::P011_int */ P011_TrainTrack_int_TM_TrainToTrack *P011_int,
  /* TM_TrainToTrack::C_compr_P011::P011_out */ P011_TM_TrainToTrack *P011_out)
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
  static kcg_int _L1_18;
  static kcg_bool _9_noname_1;
  static kcg_bool _10_noname_1;
  /* TM_conversions::CAST_Int_to_L_PACKET::l_packet */
  static L_PACKET l_packet_1;
  /* TM_conversions::CAST_Int_to_L_PACKET::l_packet_int */
  static kcg_int l_packet_int_1;
  /* TM_conversions::CAST_Int_to_L_PACKET::_L13 */
  static kcg_int _L13_1;
  /* TM_conversions::CAST_Int_to_L_PACKET::_L12 */
  static kcg_int _3__L12_1;
  /* TM_conversions::CAST_Int_to_L_PACKET::_L8 */
  static kcg_bool _L8_1;
  /* TM_conversions::CAST_Int_to_L_PACKET::_L9 */
  static kcg_bool _L9_14;
  /* TM_conversions::CAST_Int_to_L_PACKET::_L1 */
  static kcg_int _L1_15;
  static kcg_bool _6_noname_1;
  static kcg_bool _7_noname_1;
  /* TM_conversions::CAST_Int_to_N_ITER::n_iter */
  static N_ITER n_iter_1;
  /* TM_conversions::CAST_Int_to_N_ITER::n_iter_int */
  static kcg_int n_iter_int_1;
  /* TM_conversions::CAST_Int_to_N_ITER::_L9 */
  static kcg_int _L9_1;
  /* TM_conversions::CAST_Int_to_N_ITER::_L10 */
  static kcg_bool _L10_1;
  /* TM_conversions::CAST_Int_to_N_ITER::_L11 */
  static kcg_int _L11_1;
  /* TM_conversions::CAST_Int_to_N_ITER::_L12 */
  static kcg_bool _L12_1;
  /* TM_conversions::CAST_Int_to_N_ITER::_L1 */
  static kcg_int _L1_1;
  static kcg_bool noname_1;
  static kcg_bool _2_noname_1;
  /* TM_conversions::CAST_Int_to_N_ITER::n_iter */
  static N_ITER n_iter_2;
  /* TM_conversions::CAST_Int_to_N_ITER::n_iter_int */
  static kcg_int n_iter_int_2;
  /* TM_conversions::CAST_Int_to_N_ITER::_L9 */
  static kcg_int _L9_2;
  /* TM_conversions::CAST_Int_to_N_ITER::_L10 */
  static kcg_bool _L10_2;
  /* TM_conversions::CAST_Int_to_N_ITER::_L11 */
  static kcg_int _L11_2;
  /* TM_conversions::CAST_Int_to_N_ITER::_L12 */
  static kcg_bool _L12_2;
  /* TM_conversions::CAST_Int_to_N_ITER::_L1 */
  static kcg_int _L1_2;
  static kcg_bool noname_2;
  static kcg_bool _1_noname_2;
  /* TM_TrainToTrack::C_compr_P011 */
  static P011_voltage_list_TM_TrainToTrack _11_op_call;
  /* TM_TrainToTrack::C_compr_P011 */
  static P011_ntc_list_TM_TrainToTrack op_call;
  /* TM_TrainToTrack::C_compr_P011 */
  static kcg_bool ck_every;
  /* TM_TrainToTrack::C_compr_P011 */
  static kcg_bool _12_ck_every;
  /* TM_TrainToTrack::C_compr_P011::_L1 */
  static P011_TrainTrack_int_TM_TrainToTrack _L1;
  /* TM_TrainToTrack::C_compr_P011::_L69 */
  static NID_PACKET _L69;
  /* TM_TrainToTrack::C_compr_P011::_L70 */
  static L_PACKET _L70;
  /* TM_TrainToTrack::C_compr_P011::_L71 */
  static NC_CDTRAIN _L71;
  /* TM_TrainToTrack::C_compr_P011::_L100 */
  static NC_TRAIN _L100;
  /* TM_TrainToTrack::C_compr_P011::_L101 */
  static L_TRAIN _L101;
  /* TM_TrainToTrack::C_compr_P011::_L102 */
  static V_MAXTRAIN _L102;
  /* TM_TrainToTrack::C_compr_P011::_L103 */
  static M_LOADINGGAUGE _L103;
  /* TM_TrainToTrack::C_compr_P011::_L104 */
  static M_AXLELOADCAT _L104;
  /* TM_TrainToTrack::C_compr_P011::_L105 */
  static M_AIRTIGHT _L105;
  /* TM_TrainToTrack::C_compr_P011::_L106 */
  static N_AXLE _L106;
  /* TM_TrainToTrack::C_compr_P011::_L107 */
  static N_ITER _L107;
  /* TM_TrainToTrack::C_compr_P011::_L108 */
  static N_ITER _L108;
  /* TM_TrainToTrack::C_compr_P011::_L114 */
  static P011_ntc_list_TM_TrainToTrack _L114;
  /* TM_TrainToTrack::C_compr_P011::_L116 */
  static P011_TM_TrainToTrack _L116;
  /* TM_TrainToTrack::C_compr_P011::_L127 */
  static array_int_11 _L127;
  /* TM_TrainToTrack::C_compr_P011::_L149 */
  static kcg_int _L149;
  /* TM_TrainToTrack::C_compr_P011::_L148 */
  static kcg_int _L148;
  /* TM_TrainToTrack::C_compr_P011::_L147 */
  static kcg_int _L147;
  /* TM_TrainToTrack::C_compr_P011::_L146 */
  static kcg_int _L146;
  /* TM_TrainToTrack::C_compr_P011::_L145 */
  static kcg_int _L145;
  /* TM_TrainToTrack::C_compr_P011::_L144 */
  static kcg_int _L144;
  /* TM_TrainToTrack::C_compr_P011::_L143 */
  static kcg_int _L143;
  /* TM_TrainToTrack::C_compr_P011::_L142 */
  static kcg_int _L142;
  /* TM_TrainToTrack::C_compr_P011::_L141 */
  static kcg_int _L141;
  /* TM_TrainToTrack::C_compr_P011::_L140 */
  static kcg_int _L140;
  /* TM_TrainToTrack::C_compr_P011::_L139 */
  static kcg_int _L139;
  /* TM_TrainToTrack::C_compr_P011::_L150 */
  static kcg_bool _L150;
  /* TM_TrainToTrack::C_compr_P011::_L151 */
  static kcg_int _L151;
  /* TM_TrainToTrack::C_compr_P011::_L152 */
  static kcg_int _L152;
  /* TM_TrainToTrack::C_compr_P011::_L153 */
  static kcg_int _L153;
  /* TM_TrainToTrack::C_compr_P011::_L154 */
  static kcg_int _L154;
  /* TM_TrainToTrack::C_compr_P011::_L156 */
  static kcg_int _L156;
  /* TM_TrainToTrack::C_compr_P011::_L157 */
  static kcg_int _L157;
  /* TM_TrainToTrack::C_compr_P011::_L158 */
  static kcg_int _L158;
  /* TM_TrainToTrack::C_compr_P011::_L159 */
  static kcg_int _L159;
  /* TM_TrainToTrack::C_compr_P011::_L160 */
  static kcg_int _L160;
  /* TM_TrainToTrack::C_compr_P011::_L161 */
  static kcg_int _L161;
  /* TM_TrainToTrack::C_compr_P011::_L162 */
  static kcg_int _L162;
  /* TM_TrainToTrack::C_compr_P011::_L163 */
  static kcg_int _L163;
  /* TM_TrainToTrack::C_compr_P011::_L164 */
  static kcg_int _L164;
  /* TM_TrainToTrack::C_compr_P011::_L165 */
  static array_int_8 _L165;
  /* TM_TrainToTrack::C_compr_P011::_L166 */
  static array_int_5 _L166;
  /* TM_TrainToTrack::C_compr_P011::_L113 */
  static P011_voltage_list_TM_TrainToTrack _L113;
  
  kcg_copy_P011_TrainTrack_int_TM_TrainToTrack(&_L1, P011_int);
  kcg_copy_array_int_11(&_L127, (array_int_11 *) &_L1[0]);
  _L139 = _L127[0];
  _L150 = /* 1 */ Decode_NID_PACKET_TM_TrainToTrack(_L139, 11);
  ck_every = _L150;
  kcg_copy_array_int_8(&_L165, (array_int_8 *) &_L1[11]);
  /* ck_C_compr_P011 */ if (ck_every) {
    /* 1 */
    C_P011_unflatten_sections_voltage_TM_TrainToTrack_lib_internal(
      &_L165,
      &_11_op_call);
  }
  _12_ck_every = _L150;
  kcg_copy_array_int_5(&_L166, (array_int_5 *) &_L1[20]);
  /* ck_C_compr_P011 */ if (_12_ck_every) {
    /* 1 */
    C_P011_unflatten_sections_ntc_TM_TrainToTrack_lib_internal(
      &_L166,
      &op_call);
  }
  _L151 = /* 1 */ Filter_Variable_TM_TrainToTrack(_L150, _L139);
  nid_packet_int_1 = _L151;
  _L1_18 = nid_packet_int_1;
  nid_packet_1 = _L1_18;
  _L69 = nid_packet_1;
  _L140 = _L127[1];
  _L152 = /* 2 */ Filter_Variable_TM_TrainToTrack(_L150, _L140);
  l_packet_int_1 = _L152;
  _L1_15 = l_packet_int_1;
  l_packet_1 = _L1_15;
  _L70 = l_packet_1;
  _L141 = _L127[2];
  _L153 = /* 3 */ Filter_Variable_TM_TrainToTrack(_L150, _L141);
  _L71 = /* 1 */ CAST_Int_to_NC_CDTRAIN_TM_conversions(_L153);
  _L142 = _L127[3];
  _L154 = /* 4 */ Filter_Variable_TM_TrainToTrack(_L150, _L142);
  _L100 = /* 1 */ CAST_Int_to_NC_TRAIN_TM_conversions(_L154);
  _L143 = _L127[4];
  _L156 = /* 6 */ Filter_Variable_TM_TrainToTrack(_L150, _L143);
  _L101 = /* 1 */ CAST_Int_to_L_TRAIN_TM_conversions(_L156);
  _L144 = _L127[5];
  _L157 = /* 7 */ Filter_Variable_TM_TrainToTrack(_L150, _L144);
  _L102 = /* 1 */ CAST_Int_to_V_MAXTRAIN_TM_conversions(_L157);
  _L145 = _L127[6];
  _L158 = /* 8 */ Filter_Variable_TM_TrainToTrack(_L150, _L145);
  _L103 = /* 1 */ CAST_Int_to_M_LOADINGGAUGE_TM_conversions(_L158);
  _L146 = _L127[7];
  _L160 = /* 10 */ Filter_Variable_TM_TrainToTrack(_L150, _L146);
  _L104 = /* 1 */ CAST_Int_to_M_AXLELOADCAT_TM_conversions(_L160);
  _L147 = _L127[8];
  _L159 = /* 9 */ Filter_Variable_TM_TrainToTrack(_L150, _L147);
  _L105 = /* 1 */ CAST_Int_to_M_AIRTIGHT_TM_conversions(_L159);
  _L148 = _L127[9];
  _L161 = /* 11 */ Filter_Variable_TM_TrainToTrack(_L150, _L148);
  _L106 = /* 1 */ CAST_Int_to_N_AXLE_TM_conversions(_L161);
  _L149 = _L127[10];
  _L162 = /* 12 */ Filter_Variable_TM_TrainToTrack(_L150, _L149);
  n_iter_int_1 = _L162;
  _L1_1 = n_iter_int_1;
  n_iter_1 = _L1_1;
  _L107 = n_iter_1;
  /* ck_C_compr_P011 */ if (ck_every) {
    kcg_copy_P011_voltage_list_TM_TrainToTrack(&_L113, &_11_op_call);
  }
  else {
    kcg_copy_P011_voltage_list_TM_TrainToTrack(
      &_L113,
      (P011_voltage_list_TM_TrainToTrack *)
        &DEFAULT_P011_voltage_list_TM_TrainToTrack);
  }
  _L164 = _L1[19];
  _L163 = /* 13 */ Filter_Variable_TM_TrainToTrack(_L150, _L164);
  n_iter_int_2 = _L163;
  _L1_2 = n_iter_int_2;
  n_iter_2 = _L1_2;
  _L108 = n_iter_2;
  /* ck_C_compr_P011 */ if (_12_ck_every) {
    kcg_copy_P011_ntc_list_TM_TrainToTrack(&_L114, &op_call);
  }
  else {
    kcg_copy_P011_ntc_list_TM_TrainToTrack(
      &_L114,
      (P011_ntc_list_TM_TrainToTrack *) &DEFAULT_P011_ntc_list_TM_TrainToTrack);
  }
  _L116.valid = _L150;
  _L116.nid_packet = _L69;
  _L116.l_packet = _L70;
  _L116.nc_cdtrain = _L71;
  _L116.nc_train = _L100;
  _L116.l_train = _L101;
  _L116.v_maxtrain = _L102;
  _L116.m_loadinggauge = _L103;
  _L116.m_axleloadcat = _L104;
  _L116.m_airtight = _L105;
  _L116.n_axle = _L106;
  _L116.n_iter_voltage = _L107;
  kcg_copy_P011_voltage_list_TM_TrainToTrack(&_L116.voltage_list, &_L113);
  _L116.n_iter_nid_ntc = _L108;
  kcg_copy_P011_ntc_list_TM_TrainToTrack(&_L116.nid_ntc_list, &_L114);
  kcg_copy_P011_TM_TrainToTrack(P011_out, &_L116);
  _L9_2 = 31;
  _L11_2 = 0;
  _L10_2 = _L1_2 < _L11_2;
  _L12_2 = _L1_2 > _L9_2;
  _1_noname_2 = _L12_2;
  noname_2 = _L10_2;
  _L9_1 = 31;
  _L11_1 = 0;
  _L10_1 = _L1_1 < _L11_1;
  _L12_1 = _L1_1 > _L9_1;
  _2_noname_1 = _L12_1;
  noname_1 = _L10_1;
  _L13_1 = 8191;
  _L9_14 = _L1_15 > _L13_1;
  _7_noname_1 = _L9_14;
  _3__L12_1 = 0;
  _L8_1 = _L1_15 < _3__L12_1;
  _6_noname_1 = _L8_1;
  _L5_1 = 0;
  _L4_1 = _L1_18 < _L5_1;
  _10_noname_1 = _L4_1;
  _L3_1 = 256;
  _L2_1 = _L1_18 > _L3_1;
  _9_noname_1 = _L2_1;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_compr_P011_TM_TrainToTrack.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

