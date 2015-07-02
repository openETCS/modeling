/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-03T00:32:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P065_compr_onboard_TM_conversions.h"

void C_P065_compr_onboard_reset_TM_conversions(
  outC_C_P065_compr_onboard_TM_conversions *outC)
{
  /* 1 */ CAST_Int_to_NID_MN_reset_TM_conversions(&outC->_4_Context_1);
  /* 1 */ CAST_Int_to_NID_TSR_reset_TM_conversions(&outC->_3_Context_1);
  /* 1 */ CAST_Int_to_L_TSR_reset_TM_conversions(&outC->_2_Context_1);
  /* 1 */ CAST_Int_to_Q_FRONT_reset_TM_conversions(&outC->_1_Context_1);
  /* 1 */ CAST_Int_to_V_TSR_reset_TM_conversions(&outC->Context_1);
}

/* TM_conversions::C_P065_compr_onboard */
void C_P065_compr_onboard_TM_conversions(
  /* TM_conversions::C_P065_compr_onboard::PacketData */CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* TM_conversions::C_P065_compr_onboard::Metadata_Element */MetadataElement_T_Common_Types_Pkg *Metadata_Element,
  outC_C_P065_compr_onboard_TM_conversions *outC)
{
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */ Q_SCALE _24_q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */ kcg_bool _23_error_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */ Q_SCALE _22_q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */ kcg_bool _21_error_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */ kcg_bool _20_error_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */ Q_SCALE _19_q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */ kcg_bool _18_error_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */ Q_SCALE _17_q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */ Q_SCALE _16_q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */ kcg_bool _15_error_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */ Q_SCALE q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */ kcg_bool _14_error_1;
  kcg_bool _13_noname_1;
  kcg_bool _12_noname_1;
  kcg_bool _11_noname_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _10_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _9_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _8_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _7_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _6_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _5_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _4_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _3_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _2_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _1_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool error_1;
  kcg_bool noname_1;
  MetadataElement_T_Common_Types_Pkg noname;
  kcg_int _25_noname;
  
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&outC->_L9, PacketData);
  kcg_copy_array_int_9(&outC->_L46, (array_int_9 *) &outC->_L9[0]);
  outC->_L47 = outC->_L46[8];
  outC->_L41 = outC->_L46[7];
  outC->_L40 = outC->_L46[6];
  outC->_L39 = outC->_L46[5];
  outC->_L38 = outC->_L46[4];
  outC->_L37 = outC->_L46[3];
  outC->_L36 = outC->_L46[2];
  outC->_L35 = outC->_L46[1];
  outC->q_scale_int_1 = outC->_L37;
  outC->_L2_110 = outC->q_scale_int_1;
  outC->q_scale_in_1 = outC->_L2_110;
  outC->_12_IfBlock1_clock_1 = outC->q_scale_in_1 ==
    INT_Q_SCALE_10cm_TM_conversions;
  if (outC->_12_IfBlock1_clock_1) {
    outC->_L2_121_IfBlock1 = ENUM_Q_SCALE_10cm_TM_conversions;
    _24_q_scale_1 = outC->_L2_121_IfBlock1;
    outC->q_scale_1 = _24_q_scale_1;
  }
  else {
    outC->_20_else_clock_1_IfBlock1 = outC->q_scale_in_1 ==
      INT_Q_SCALE_1m_TM_conversions;
    if (outC->_20_else_clock_1_IfBlock1) {
      outC->_L1_114_IfBlock1 = ENUM_Q_SCALE_1m_TM_conversions;
      q_scale_1 = outC->_L1_114_IfBlock1;
      _22_q_scale_1 = q_scale_1;
    }
    else {
      outC->_15_else_clock_1_IfBlock1 = outC->q_scale_in_1 ==
        INT_Q_SCALE_10m_TM_conversions;
      if (outC->_15_else_clock_1_IfBlock1) {
        outC->_L1_118_IfBlock1 = ENUM_Q_SCALE_10m_TM_conversions;
        _19_q_scale_1 = outC->_L1_118_IfBlock1;
        _16_q_scale_1 = _19_q_scale_1;
      }
      else {
        outC->_L1_117_IfBlock1 = ENUM_Q_SCALE_10cm_TM_conversions;
        _17_q_scale_1 = outC->_L1_117_IfBlock1;
        _16_q_scale_1 = _17_q_scale_1;
      }
      _22_q_scale_1 = _16_q_scale_1;
    }
    outC->q_scale_1 = _22_q_scale_1;
  }
  outC->_L48 = outC->q_scale_1;
  /* 1 */ CAST_Int_to_V_TSR_TM_conversions(outC->_L47, &outC->Context_1);
  outC->_L45 = outC->Context_1.v_tsr;
  /* 1 */ CAST_Int_to_Q_FRONT_TM_conversions(outC->_L41, &outC->_1_Context_1);
  outC->_L44 = outC->_1_Context_1.q_front;
  /* 1 */ CAST_Int_to_L_TSR_TM_conversions(outC->_L40, &outC->_2_Context_1);
  outC->_L43 = outC->_2_Context_1.l_tsr;
  /* 1 */ CAST_Int_to_NID_TSR_TM_conversions(outC->_L39, &outC->_3_Context_1);
  outC->_L42 = outC->_3_Context_1.nid_tsr;
  _25_noname = outC->_L36;
  outC->_L34 = outC->_L46[0];
  outC->nid_packet_int_1 = outC->_L34;
  outC->_L1_1 = outC->nid_packet_int_1;
  outC->nid_packet_1 = outC->_L1_1;
  outC->_L12 = outC->nid_packet_1;
  outC->_L21 = 65;
  outC->_L22 = outC->_L12 == outC->_L21;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L20, Metadata_Element);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&noname, &outC->_L20);
  outC->q_dir_int_1 = outC->_L35;
  outC->_L12_1 = outC->q_dir_int_1;
  outC->q_dir_in_1 = outC->_L12_1;
  outC->IfBlock1_clock_1 = outC->q_dir_in_1 ==
    INT_Q_DIR_nomiinal_TM_conversions;
  if (outC->IfBlock1_clock_1) {
    outC->_L4_17_IfBlock1 = ENUM_Q_DIR_nominal_TM_conversions;
    _10_q_dir_1 = outC->_L4_17_IfBlock1;
    outC->q_dir_1 = _10_q_dir_1;
  }
  else {
    outC->_6_else_clock_1_IfBlock1 = outC->q_dir_in_1 ==
      INT_Q_DIR_reverse_TM_conversions;
    if (outC->_6_else_clock_1_IfBlock1) {
      outC->_L3_1_IfBlock1 = ENUM_Q_DIR_reverse_TM_conversions;
      q_dir_1 = outC->_L3_1_IfBlock1;
      _8_q_dir_1 = q_dir_1;
    }
    else {
      outC->else_clock_1_IfBlock1 = outC->q_dir_in_1 ==
        INT_Q_DIR_both_TM_conversions;
      if (outC->else_clock_1_IfBlock1) {
        outC->_L2_15_IfBlock1 = ENUM_Q_DIR_both_TM_conversions;
        _5_q_dir_1 = outC->_L2_15_IfBlock1;
        _2_q_dir_1 = _5_q_dir_1;
      }
      else {
        outC->_L2_1_IfBlock1 = ENUM_Q_DIR_both_TM_conversions;
        _3_q_dir_1 = outC->_L2_1_IfBlock1;
        _2_q_dir_1 = _3_q_dir_1;
      }
      _8_q_dir_1 = _2_q_dir_1;
    }
    outC->q_dir_1 = _8_q_dir_1;
  }
  outC->_L11 = outC->q_dir_1;
  /* 1 */ CAST_Int_to_NID_MN_TM_conversions(outC->_L38, &outC->_4_Context_1);
  outC->_L4 = outC->_4_Context_1.nid_mn;
  outC->_L10.valid = outC->_L22;
  outC->_L10.q_dir = outC->_L11;
  outC->_L10.q_scale = outC->_L48;
  outC->_L10.nid_tsr = outC->_L4;
  outC->_L10.d_tsr = outC->_L42;
  outC->_L10.l_tsr = outC->_L43;
  outC->_L10.q_front = outC->_L44;
  outC->_L10.v_tsr = outC->_L45;
  kcg_copy_P065_OBU_T_TM(&outC->P065_onboard, &outC->_L10);
  if (outC->IfBlock1_clock_1) {
    outC->_L5_18_IfBlock1 = kcg_false;
    _9_error_1 = outC->_L5_18_IfBlock1;
    outC->error_1 = _9_error_1;
  }
  else {
    if (outC->_6_else_clock_1_IfBlock1) {
      outC->_L5_1_IfBlock1 = kcg_false;
      error_1 = outC->_L5_1_IfBlock1;
      _7_error_1 = error_1;
    }
    else {
      if (outC->else_clock_1_IfBlock1) {
        outC->_L4_1_IfBlock1 = kcg_false;
        _6_error_1 = outC->_L4_1_IfBlock1;
        _1_error_1 = _6_error_1;
      }
      else {
        outC->_L1_1_IfBlock1 = kcg_true;
        _4_error_1 = outC->_L1_1_IfBlock1;
        _1_error_1 = _4_error_1;
      }
      _7_error_1 = _1_error_1;
    }
    outC->error_1 = _7_error_1;
  }
  outC->_L13_1 = outC->error_1;
  noname_1 = outC->_L13_1;
  outC->_L5_1 = 0;
  outC->_L4_1 = outC->_L1_1 < outC->_L5_1;
  outC->_L3_1 = 256;
  outC->_L2_1 = outC->_L1_1 > outC->_L3_1;
  _11_noname_1 = outC->_L2_1;
  _12_noname_1 = outC->_L4_1;
  if (outC->_12_IfBlock1_clock_1) {
    outC->_L3_122_IfBlock1 = kcg_false;
    _23_error_1 = outC->_L3_122_IfBlock1;
    outC->_11_error_1 = _23_error_1;
  }
  else {
    if (outC->_20_else_clock_1_IfBlock1) {
      outC->_L3_113_IfBlock1 = kcg_false;
      _14_error_1 = outC->_L3_113_IfBlock1;
      _21_error_1 = _14_error_1;
    }
    else {
      if (outC->_15_else_clock_1_IfBlock1) {
        outC->_L4_119_IfBlock1 = kcg_false;
        _20_error_1 = outC->_L4_119_IfBlock1;
        _15_error_1 = _20_error_1;
      }
      else {
        outC->_L2_116_IfBlock1 = kcg_true;
        _18_error_1 = outC->_L2_116_IfBlock1;
        _15_error_1 = _18_error_1;
      }
      _21_error_1 = _15_error_1;
    }
    outC->_11_error_1 = _21_error_1;
  }
  outC->_L4_19 = outC->_11_error_1;
  _13_noname_1 = outC->_L4_19;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P065_compr_onboard_TM_conversions.c
** Generation date: 2015-07-03T00:32:13
*************************************************************$ */

