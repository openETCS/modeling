/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P015_compr_onboard_TM_conversions.h"

/* TM_conversions::C_P015_compr_onboard */
void C_P015_compr_onboard_TM_conversions(
  /* TM_conversions::C_P015_compr_onboard::PacketData */ CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* TM_conversions::C_P015_compr_onboard::Metadata_Element */ MetadataElement_T_Common_Types_Pkg *Metadata_Element,
  /* TM_conversions::C_P015_compr_onboard::P015_onboard */ P015_OBU_T_TM *P015_onboard)
{
  /* TM_conversions::CAST_Int_to_NID_PACKET::nid_packet */
  static NID_PACKET nid_packet_2;
  /* TM_conversions::CAST_Int_to_NID_PACKET::nid_packet_int */
  static kcg_int nid_packet_int_2;
  /* TM_conversions::CAST_Int_to_NID_PACKET::_L2 */
  static kcg_bool _L2_243;
  /* TM_conversions::CAST_Int_to_NID_PACKET::_L3 */
  static kcg_int _L3_2;
  /* TM_conversions::CAST_Int_to_NID_PACKET::_L4 */
  static kcg_bool _L4_244;
  /* TM_conversions::CAST_Int_to_NID_PACKET::_L5 */
  static kcg_int _L5_2;
  /* TM_conversions::CAST_Int_to_NID_PACKET::_L1 */
  static kcg_int _L1_2;
  static kcg_bool _45_noname_2;
  static kcg_bool _46_noname_2;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */
  static Q_SCALE _42_q_scale_2;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale_int */
  static kcg_int q_scale_int_2;
  /* TM_conversions::CAST_Int_to_Q_SCALE::_L4 */
  static kcg_bool _L4_2;
  /* TM_conversions::CAST_Int_to_Q_SCALE::_L2 */
  static kcg_int _L2_2;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */
  static kcg_bool _18_error_2;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale_in */
  static kcg_int q_scale_in_2;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1 */
  static kcg_bool _19_IfBlock1_clock_2;
  static kcg_bool _20_noname_2;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */
  static kcg_bool _21_error_2;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */
  static Q_SCALE q_scale_2;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::then::_L3 */
  static kcg_bool _L3_222_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::then::_L1 */
  static Q_SCALE _L1_223_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */
  static kcg_bool _24_error_2;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */
  static Q_SCALE _25_q_scale_2;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else */
  static kcg_bool _26_else_clock_2_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::else::_L2 */
  static kcg_bool _L2_227_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::else::_L1 */
  static Q_SCALE _L1_228_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */
  static Q_SCALE _29_q_scale_2;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */
  static kcg_bool _30_error_2;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::then::_L1 */
  static Q_SCALE _L1_231_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else::then::_L4 */
  static kcg_bool _L4_232_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */
  static Q_SCALE _33_q_scale_2;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */
  static kcg_bool _34_error_2;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else */
  static kcg_bool _35_else_clock_2_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */
  static Q_SCALE _36_q_scale_2;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */
  static kcg_bool _37_error_2;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::then::_L2 */
  static Q_SCALE _L2_238_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::then::_L3 */
  static kcg_bool _L3_239_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */
  static Q_SCALE _40_q_scale_2;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */
  static kcg_bool _41_error_2;
  /* TM_conversions::CAST_Int_to_N_ITER::n_iter */
  static N_ITER n_iter_3;
  /* TM_conversions::CAST_Int_to_N_ITER::n_iter_int */
  static kcg_int n_iter_int_3;
  /* TM_conversions::CAST_Int_to_N_ITER::_L9 */
  static kcg_int _L9_3;
  /* TM_conversions::CAST_Int_to_N_ITER::_L10 */
  static kcg_bool _L10_3;
  /* TM_conversions::CAST_Int_to_N_ITER::_L11 */
  static kcg_int _L11_3;
  /* TM_conversions::CAST_Int_to_N_ITER::_L12 */
  static kcg_bool _L12_3;
  /* TM_conversions::CAST_Int_to_N_ITER::_L1 */
  static kcg_int _L1_3;
  static kcg_bool noname_3;
  static kcg_bool _17_noname_3;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR _16_q_dir_2;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir_int */
  static kcg_int q_dir_int_2;
  /* TM_conversions::CAST_Int_to_Q_DIR::_L12 */
  static kcg_int _L12_2;
  /* TM_conversions::CAST_Int_to_Q_DIR::_L13 */
  static kcg_bool _L13_2;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir_in */
  static kcg_int q_dir_in_2;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool error_2;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1 */
  static kcg_bool IfBlock1_clock_2;
  static kcg_bool noname_2;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool _1_error_2;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR q_dir_2;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::then::_L5 */
  static kcg_bool _L5_2_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::then::_L3 */
  static Q_DIR _L3_2_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool _2_error_2;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR _3_q_dir_2;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */
  static kcg_bool else_clock_2_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::else::_L2 */
  static Q_DIR _L2_2_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::else::_L1 */
  static kcg_bool _L1_2_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR _4_q_dir_2;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool _5_error_2;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::then::_L2 */
  static Q_DIR _L2_26_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else::then::_L4 */
  static kcg_bool _L4_2_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR _7_q_dir_2;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool _8_error_2;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */
  static kcg_bool _9_else_clock_2_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR _10_q_dir_2;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool _11_error_2;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::then::_L4 */
  static Q_DIR _L4_212_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::then::_L5 */
  static kcg_bool _L5_213_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR _14_q_dir_2;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool _15_error_2;
  static MetadataElement_T_Common_Types_Pkg noname;
  static kcg_int _47_noname;
  /* TM_conversions::C_P015_compr_onboard::n_iter */
  static N_ITER n_iter;
  /* TM_conversions::C_P015_compr_onboard::nid_packet_ok */
  static kcg_bool nid_packet_ok;
  /* TM_conversions::C_P015_compr_onboard::sections */
  static P015_OBU_sectionlist_enum_T_TM sections;
  /* TM_conversions::C_P015_compr_onboard::_L139 */
  static kcg_int _L139;
  /* TM_conversions::C_P015_compr_onboard::_L138 */
  static array_int_15 _L138;
  /* TM_conversions::C_P015_compr_onboard::_L137 */
  static D_SECTIONTIMERSTOPLOC _L137;
  /* TM_conversions::C_P015_compr_onboard::_L136 */
  static Q_DIR _L136;
  /* TM_conversions::C_P015_compr_onboard::_L135 */
  static N_ITER _L135;
  /* TM_conversions::C_P015_compr_onboard::_L134 */
  static D_STARTOL _L134;
  /* TM_conversions::C_P015_compr_onboard::_L133 */
  static D_ENDTIMERSTARTLOC _L133;
  /* TM_conversions::C_P015_compr_onboard::_L132 */
  static kcg_bool _L132;
  /* TM_conversions::C_P015_compr_onboard::_L131 */
  static V_RELEASEOL _L131;
  /* TM_conversions::C_P015_compr_onboard::_L130 */
  static Q_SCALE _L130;
  /* TM_conversions::C_P015_compr_onboard::_L129 */
  static L_ENDSECTION _L129;
  /* TM_conversions::C_P015_compr_onboard::_L128 */
  static NID_PACKET _L128;
  /* TM_conversions::C_P015_compr_onboard::_L127 */
  static V_RELEASEDP _L127;
  /* TM_conversions::C_P015_compr_onboard::_L126 */
  static Q_ENDTIMER _L126;
  /* TM_conversions::C_P015_compr_onboard::_L125 */
  static array_int_6 _L125;
  /* TM_conversions::C_P015_compr_onboard::_L124 */
  static kcg_int _L124;
  /* TM_conversions::C_P015_compr_onboard::_L123 */
  static T_OL _L123;
  /* TM_conversions::C_P015_compr_onboard::_L122 */
  static P015_OBU_T_TM _L122;
  /* TM_conversions::C_P015_compr_onboard::_L121 */
  static T_LOA _L121;
  /* TM_conversions::C_P015_compr_onboard::_L120 */
  static array_int_128 _L120;
  /* TM_conversions::C_P015_compr_onboard::_L119 */
  static Q_DANGERPOINT _L119;
  /* TM_conversions::C_P015_compr_onboard::_L118 */
  static Q_SECTIONTIMER _L118;
  /* TM_conversions::C_P015_compr_onboard::_L104 */
  static kcg_int _L104;
  /* TM_conversions::C_P015_compr_onboard::_L105 */
  static kcg_int _L105;
  /* TM_conversions::C_P015_compr_onboard::_L106 */
  static kcg_int _L106;
  /* TM_conversions::C_P015_compr_onboard::_L107 */
  static kcg_int _L107;
  /* TM_conversions::C_P015_compr_onboard::_L108 */
  static kcg_int _L108;
  /* TM_conversions::C_P015_compr_onboard::_L109 */
  static kcg_int _L109;
  /* TM_conversions::C_P015_compr_onboard::_L110 */
  static kcg_int _L110;
  /* TM_conversions::C_P015_compr_onboard::_L111 */
  static kcg_int _L111;
  /* TM_conversions::C_P015_compr_onboard::_L112 */
  static kcg_int _L112;
  /* TM_conversions::C_P015_compr_onboard::_L113 */
  static kcg_int _L113;
  /* TM_conversions::C_P015_compr_onboard::_L114 */
  static kcg_int _L114;
  /* TM_conversions::C_P015_compr_onboard::_L115 */
  static kcg_int _L115;
  /* TM_conversions::C_P015_compr_onboard::_L116 */
  static kcg_int _L116;
  /* TM_conversions::C_P015_compr_onboard::_L117 */
  static kcg_int _L117;
  /* TM_conversions::C_P015_compr_onboard::_L103 */
  static Q_OVERLAP _L103;
  /* TM_conversions::C_P015_compr_onboard::_L102 */
  static P015_OBU_sectionlist_enum_T_TM _L102;
  /* TM_conversions::C_P015_compr_onboard::_L96 */
  static kcg_int _L96;
  /* TM_conversions::C_P015_compr_onboard::_L97 */
  static kcg_int _L97;
  /* TM_conversions::C_P015_compr_onboard::_L98 */
  static kcg_int _L98;
  /* TM_conversions::C_P015_compr_onboard::_L99 */
  static kcg_int _L99;
  /* TM_conversions::C_P015_compr_onboard::_L100 */
  static kcg_int _L100;
  /* TM_conversions::C_P015_compr_onboard::_L101 */
  static kcg_int _L101;
  /* TM_conversions::C_P015_compr_onboard::_L95 */
  static N_ITER _L95;
  /* TM_conversions::C_P015_compr_onboard::_L94 */
  static T_ENDTIMER _L94;
  /* TM_conversions::C_P015_compr_onboard::_L93 */
  static CompressedPacketData_T_Common_Types_Pkg _L93;
  /* TM_conversions::C_P015_compr_onboard::_L92 */
  static V_LOA _L92;
  /* TM_conversions::C_P015_compr_onboard::_L91 */
  static D_OL _L91;
  /* TM_conversions::C_P015_compr_onboard::_L90 */
  static D_DP _L90;
  /* TM_conversions::C_P015_compr_onboard::_L89 */
  static MetadataElement_T_Common_Types_Pkg _L89;
  /* TM_conversions::C_P015_compr_onboard::_L140 */
  static kcg_bool _L140;
  /* TM_conversions::C_P015_compr_onboard::_L141 */
  static P015_OBU_sectionlist_enum_T_TM _L141;
  /* TM_conversions::C_P015_compr_onboard::_L142 */
  static kcg_int _L142;
  /* TM_conversions::C_P015_compr_onboard::_L143 */
  static T_SECTIONTIMER _L143;
  
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&_L89, Metadata_Element);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&_L93, PacketData);
  kcg_copy_array_int_15(&_L138, (array_int_15 *) &_L93[6]);
  _L112 = _L138[8];
  _L90 = /* 2 */ CAST_Int_to_D_DP_TM_conversions(_L112);
  _L117 = _L138[13];
  _L91 = /* 2 */ CAST_Int_to_D_OL_TM_conversions(_L117);
  kcg_copy_array_int_6(&_L125, (array_int_6 *) &_L93[0]);
  _L100 = _L125[4];
  _L92 = /* 2 */ CAST_Int_to_V_LOA_TM_conversions(_L100);
  _L109 = _L138[5];
  _L94 = /* 2 */ CAST_Int_to_T_ENDTIMER_TM_conversions(_L109);
  _L139 = _L93[21];
  n_iter_int_3 = _L139;
  _L1_3 = n_iter_int_3;
  n_iter_3 = _L1_3;
  _L135 = n_iter_3;
  n_iter = _L135;
  _L95 = n_iter;
  _L101 = _L125[5];
  _L99 = _L125[3];
  _L98 = _L125[2];
  _L97 = _L125[1];
  _L96 = _L125[0];
  _L124 = 15;
  nid_packet_int_2 = _L96;
  _L1_2 = nid_packet_int_2;
  nid_packet_2 = _L1_2;
  _L128 = nid_packet_2;
  _L132 = _L124 == _L128;
  nid_packet_ok = _L132;
  _L140 = nid_packet_ok;
  kcg_copy_array_int_128(&_L120, (array_int_128 *) &_L93[22]);
  /* 1 */
  C_P015_unflatten_sections_TM_lib_internal(_L140, _L135, &_L120, &_L102);
  q_dir_int_2 = _L97;
  _L12_2 = q_dir_int_2;
  q_dir_in_2 = _L12_2;
  IfBlock1_clock_2 = q_dir_in_2 == INT_Q_DIR_nomiinal_TM_conversions;
  /* 2_ck_IfBlock1 */ if (IfBlock1_clock_2) {
    _L4_212_IfBlock1 = ENUM_Q_DIR_nominal_TM_conversions;
    _14_q_dir_2 = _L4_212_IfBlock1;
    _16_q_dir_2 = _14_q_dir_2;
  }
  else {
    _9_else_clock_2_IfBlock1 = q_dir_in_2 == INT_Q_DIR_reverse_TM_conversions;
    /* 2_ck_anon_activ */ if (_9_else_clock_2_IfBlock1) {
      _L3_2_IfBlock1 = ENUM_Q_DIR_reverse_TM_conversions;
      q_dir_2 = _L3_2_IfBlock1;
      _10_q_dir_2 = q_dir_2;
    }
    else {
      else_clock_2_IfBlock1 = q_dir_in_2 == INT_Q_DIR_both_TM_conversions;
      /* 2_ck_anon_activ */ if (else_clock_2_IfBlock1) {
        _L2_26_IfBlock1 = ENUM_Q_DIR_both_TM_conversions;
        _7_q_dir_2 = _L2_26_IfBlock1;
        _3_q_dir_2 = _7_q_dir_2;
      }
      else {
        _L2_2_IfBlock1 = ENUM_Q_DIR_both_TM_conversions;
        _4_q_dir_2 = _L2_2_IfBlock1;
        _3_q_dir_2 = _4_q_dir_2;
      }
      _10_q_dir_2 = _3_q_dir_2;
    }
    _16_q_dir_2 = _10_q_dir_2;
  }
  _L136 = _16_q_dir_2;
  q_scale_int_2 = _L99;
  _L2_2 = q_scale_int_2;
  q_scale_in_2 = _L2_2;
  _19_IfBlock1_clock_2 = q_scale_in_2 == INT_Q_SCALE_10cm_TM_conversions;
  /* 2_ck_IfBlock1 */ if (_19_IfBlock1_clock_2) {
    _L2_238_IfBlock1 = ENUM_Q_SCALE_10cm_TM_conversions;
    _40_q_scale_2 = _L2_238_IfBlock1;
    _42_q_scale_2 = _40_q_scale_2;
  }
  else {
    _35_else_clock_2_IfBlock1 = q_scale_in_2 == INT_Q_SCALE_1m_TM_conversions;
    /* 2_ck_anon_activ */ if (_35_else_clock_2_IfBlock1) {
      _L1_223_IfBlock1 = ENUM_Q_SCALE_1m_TM_conversions;
      q_scale_2 = _L1_223_IfBlock1;
      _36_q_scale_2 = q_scale_2;
    }
    else {
      _26_else_clock_2_IfBlock1 = q_scale_in_2 ==
        INT_Q_SCALE_10m_TM_conversions;
      /* 2_ck_anon_activ */ if (_26_else_clock_2_IfBlock1) {
        _L1_231_IfBlock1 = ENUM_Q_SCALE_10m_TM_conversions;
        _33_q_scale_2 = _L1_231_IfBlock1;
        _25_q_scale_2 = _33_q_scale_2;
      }
      else {
        _L1_228_IfBlock1 = ENUM_Q_SCALE_10cm_TM_conversions;
        _29_q_scale_2 = _L1_228_IfBlock1;
        _25_q_scale_2 = _29_q_scale_2;
      }
      _36_q_scale_2 = _25_q_scale_2;
    }
    _42_q_scale_2 = _36_q_scale_2;
  }
  _L130 = _42_q_scale_2;
  _L121 = /* 2 */ CAST_Int_to_T_LOA_TM_conversions(_L101);
  kcg_copy_P015_OBU_sectionlist_enum_T_TM(&sections, &_L102);
  kcg_copy_P015_OBU_sectionlist_enum_T_TM(&_L141, &sections);
  _L104 = _L138[0];
  _L129 = /* 2 */ CAST_Int_to_L_ENDSECTION_TM_conversions(_L104);
  _L105 = _L138[1];
  _L118 = /* 2 */ CAST_Int_to_Q_SECTIONTIMER_TM_conversions(_L105);
  _L106 = _L138[2];
  _L143 = /* 1 */ CAST_Int_to_T_SECTIONTIMER_TM_conversions(_L106);
  _L107 = _L138[3];
  _L137 = /* 2 */ CAST_Int_to_D_SECTIONTIMERSTOPLOC_TM_conversions(_L107);
  _L108 = _L138[4];
  _L126 = /* 2 */ CAST_Int_to_Q_ENDTIMER_TM_conversions(_L108);
  _L110 = _L138[6];
  _L133 = /* 2 */ CAST_Int_to_D_ENDTIMERSTARTLOC_TM_conversions(_L110);
  _L111 = _L138[7];
  _L119 = /* 2 */ CAST_Int_to_Q_DANGERPOINT_TM_conversions(_L111);
  _L113 = _L138[9];
  _L127 = /* 2 */ CAST_Int_to_V_RELEASEDP_TM_conversions(_L113);
  _L114 = _L138[10];
  _L103 = /* 2 */ CAST_Int_to_Q_OVERLAP_TM_conversions(_L114);
  _L115 = _L138[11];
  _L134 = /* 2 */ CAST_Int_to_D_STARTOL_TM_conversions(_L115);
  _L116 = _L138[12];
  _L123 = /* 2 */ CAST_Int_to_T_OL_TM_conversions(_L116);
  _L142 = _L138[14];
  _L131 = /* 2 */ CAST_Int_to_V_RELEASEOL_TM_conversions(_L142);
  _L122.valid = _L132;
  _L122.q_dir = _L136;
  _L122.q_scale = _L130;
  _L122.v_loa = _L92;
  _L122.t_loa = _L121;
  _L122.n_iter = _L95;
  kcg_copy_P015_OBU_sectionlist_enum_T_TM(&_L122.sections, &_L141);
  _L122.l_endsection = _L129;
  _L122.q_sectiontimer = _L118;
  _L122.t_sectiontimer = _L143;
  _L122.d_sectiontimerstoploc = _L137;
  _L122.q_endtimer = _L126;
  _L122.t_endtimer = _L94;
  _L122.d_endtimerstartloc = _L133;
  _L122.q_dangerpoint = _L119;
  _L122.d_dp = _L90;
  _L122.v_releasedp = _L127;
  _L122.q_overlap = _L103;
  _L122.d_startol = _L134;
  _L122.t_ol = _L123;
  _L122.d_ol = _L91;
  _L122.v_releaseol = _L131;
  kcg_copy_P015_OBU_T_TM(P015_onboard, &_L122);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&noname, &_L89);
  _47_noname = _L98;
  /* 2_ck_IfBlock1 */ if (IfBlock1_clock_2) {
    _L5_213_IfBlock1 = kcg_false;
    _15_error_2 = _L5_213_IfBlock1;
    error_2 = _15_error_2;
  }
  else {
    /* 2_ck_anon_activ */ if (_9_else_clock_2_IfBlock1) {
      _L5_2_IfBlock1 = kcg_false;
      _1_error_2 = _L5_2_IfBlock1;
      _11_error_2 = _1_error_2;
    }
    else {
      /* 2_ck_anon_activ */ if (else_clock_2_IfBlock1) {
        _L4_2_IfBlock1 = kcg_false;
        _8_error_2 = _L4_2_IfBlock1;
        _2_error_2 = _8_error_2;
      }
      else {
        _L1_2_IfBlock1 = kcg_true;
        _5_error_2 = _L1_2_IfBlock1;
        _2_error_2 = _5_error_2;
      }
      _11_error_2 = _2_error_2;
    }
    error_2 = _11_error_2;
  }
  _L13_2 = error_2;
  noname_2 = _L13_2;
  _L9_3 = 31;
  _L11_3 = 0;
  _L10_3 = _L1_3 < _L11_3;
  _L12_3 = _L1_3 > _L9_3;
  _17_noname_3 = _L12_3;
  noname_3 = _L10_3;
  /* 2_ck_IfBlock1 */ if (_19_IfBlock1_clock_2) {
    _L3_239_IfBlock1 = kcg_false;
    _41_error_2 = _L3_239_IfBlock1;
    _18_error_2 = _41_error_2;
  }
  else {
    /* 2_ck_anon_activ */ if (_35_else_clock_2_IfBlock1) {
      _L3_222_IfBlock1 = kcg_false;
      _21_error_2 = _L3_222_IfBlock1;
      _37_error_2 = _21_error_2;
    }
    else {
      /* 2_ck_anon_activ */ if (_26_else_clock_2_IfBlock1) {
        _L4_232_IfBlock1 = kcg_false;
        _34_error_2 = _L4_232_IfBlock1;
        _24_error_2 = _34_error_2;
      }
      else {
        _L2_227_IfBlock1 = kcg_true;
        _30_error_2 = _L2_227_IfBlock1;
        _24_error_2 = _30_error_2;
      }
      _37_error_2 = _24_error_2;
    }
    _18_error_2 = _37_error_2;
  }
  _L4_2 = _18_error_2;
  _20_noname_2 = _L4_2;
  _L5_2 = 0;
  _L4_244 = _L1_2 < _L5_2;
  _46_noname_2 = _L4_244;
  _L3_2 = 256;
  _L2_243 = _L1_2 > _L3_2;
  _45_noname_2 = _L2_243;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P015_compr_onboard_TM_conversions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

