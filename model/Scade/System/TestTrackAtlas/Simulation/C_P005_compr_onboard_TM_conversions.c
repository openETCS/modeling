/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P005_compr_onboard_TM_conversions.h"

void C_P005_compr_onboard_reset_TM_conversions(
  outC_C_P005_compr_onboard_TM_conversions *outC)
{
  /* 1 */ C_P005_unflatten_sections_reset_TM_lib_internal(&outC->Context_1);
}

/* TM_conversions::C_P005_compr_onboard */
void C_P005_compr_onboard_TM_conversions(
  /* TM_conversions::C_P005_compr_onboard::PacketData */CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* TM_conversions::C_P005_compr_onboard::Metadata_Element */MetadataElement_T_Common_Types_Pkg *Metadata_Element,
  outC_C_P005_compr_onboard_TM_conversions *outC)
{
  kcg_bool _28_noname_1;
  kcg_bool _27_noname_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _26_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _25_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _24_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _23_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _22_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _21_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _20_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _19_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _18_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _17_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _16_error_1;
  kcg_bool _15_noname_1;
  kcg_bool _14_noname_1;
  kcg_bool _13_noname_1;
  kcg_bool _12_noname_1;
  kcg_bool _11_noname_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */ Q_SCALE _10_q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */ kcg_bool _9_error_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */ Q_SCALE _8_q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */ kcg_bool _7_error_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */ kcg_bool _6_error_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */ Q_SCALE _5_q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */ kcg_bool _4_error_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */ Q_SCALE _3_q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */ Q_SCALE _2_q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */ kcg_bool _1_error_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */ Q_SCALE q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */ kcg_bool error_1;
  kcg_bool noname_1;
  MetadataElement_T_Common_Types_Pkg noname;
  
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&outC->_L9, PacketData);
  kcg_copy_array_int_3(&outC->_L6, (array_int_3 *) &outC->_L9[1]);
  outC->_L16 = outC->_L6[2];
  outC->_L15 = outC->_L6[1];
  kcg_copy_array_int_1(&outC->_L1, (array_int_1 *) &outC->_L9[0]);
  outC->_L18 = outC->_L1[0];
  outC->nid_packet_int_1 = outC->_L18;
  outC->_L1_124 = outC->nid_packet_int_1;
  outC->nid_packet_1 = outC->_L1_124;
  outC->_L12 = outC->nid_packet_1;
  outC->_L21 = 5;
  outC->_L22 = outC->_L12 == outC->_L21;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L20, Metadata_Element);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&noname, &outC->_L20);
  kcg_copy_array_int_1(&outC->_L2, (array_int_1 *) &outC->_L9[4]);
  outC->_L17 = outC->_L2[0];
  outC->_L14 = outC->_L6[0];
  kcg_copy_array_int_231(&outC->_L13, (array_int_231 *) &outC->_L9[5]);
  outC->q_dir_int_1 = outC->_L14;
  outC->_9__L12_1 = outC->q_dir_int_1;
  outC->q_dir_in_1 = outC->_9__L12_1;
  outC->_12_IfBlock1_clock_1 = outC->q_dir_in_1 ==
    INT_Q_DIR_nomiinal_TM_conversions;
  if (outC->_12_IfBlock1_clock_1) {
    outC->_L4_120_IfBlock1 = ENUM_Q_DIR_nominal_TM_conversions;
    _26_q_dir_1 = outC->_L4_120_IfBlock1;
    outC->q_dir_1 = _26_q_dir_1;
  }
  else {
    outC->_19_else_clock_1_IfBlock1 = outC->q_dir_in_1 ==
      INT_Q_DIR_reverse_TM_conversions;
    if (outC->_19_else_clock_1_IfBlock1) {
      outC->_L3_113_IfBlock1 = ENUM_Q_DIR_reverse_TM_conversions;
      q_dir_1 = outC->_L3_113_IfBlock1;
      _24_q_dir_1 = q_dir_1;
    }
    else {
      outC->_14_else_clock_1_IfBlock1 = outC->q_dir_in_1 ==
        INT_Q_DIR_both_TM_conversions;
      if (outC->_14_else_clock_1_IfBlock1) {
        outC->_L2_117_IfBlock1 = ENUM_Q_DIR_both_TM_conversions;
        _21_q_dir_1 = outC->_L2_117_IfBlock1;
        _18_q_dir_1 = _21_q_dir_1;
      }
      else {
        outC->_L2_115_IfBlock1 = ENUM_Q_DIR_both_TM_conversions;
        _19_q_dir_1 = outC->_L2_115_IfBlock1;
        _18_q_dir_1 = _19_q_dir_1;
      }
      _24_q_dir_1 = _18_q_dir_1;
    }
    outC->q_dir_1 = _24_q_dir_1;
  }
  outC->_L11 = outC->q_dir_1;
  outC->l_packet_int_1 = outC->_L15;
  outC->_L1_18 = outC->l_packet_int_1;
  outC->l_packet_1 = outC->_L1_18;
  outC->_L8 = outC->l_packet_1;
  outC->q_scale_int_1 = outC->_L16;
  outC->_L2_1 = outC->q_scale_int_1;
  outC->q_scale_in_1 = outC->_L2_1;
  outC->IfBlock1_clock_1 = outC->q_scale_in_1 ==
    INT_Q_SCALE_10cm_TM_conversions;
  if (outC->IfBlock1_clock_1) {
    outC->_L2_14_IfBlock1 = ENUM_Q_SCALE_10cm_TM_conversions;
    _10_q_scale_1 = outC->_L2_14_IfBlock1;
    outC->q_scale_1 = _10_q_scale_1;
  }
  else {
    outC->_3_else_clock_1_IfBlock1 = outC->q_scale_in_1 ==
      INT_Q_SCALE_1m_TM_conversions;
    if (outC->_3_else_clock_1_IfBlock1) {
      outC->_L1_1_IfBlock1 = ENUM_Q_SCALE_1m_TM_conversions;
      q_scale_1 = outC->_L1_1_IfBlock1;
      _8_q_scale_1 = q_scale_1;
    }
    else {
      outC->else_clock_1_IfBlock1 = outC->q_scale_in_1 ==
        INT_Q_SCALE_10m_TM_conversions;
      if (outC->else_clock_1_IfBlock1) {
        outC->_L1_12_IfBlock1 = ENUM_Q_SCALE_10m_TM_conversions;
        _5_q_scale_1 = outC->_L1_12_IfBlock1;
        _2_q_scale_1 = _5_q_scale_1;
      }
      else {
        outC->_L1_11_IfBlock1 = ENUM_Q_SCALE_10cm_TM_conversions;
        _3_q_scale_1 = outC->_L1_11_IfBlock1;
        _2_q_scale_1 = _3_q_scale_1;
      }
      _8_q_scale_1 = _2_q_scale_1;
    }
    outC->q_scale_1 = _8_q_scale_1;
  }
  outC->_L4 = outC->q_scale_1;
  outC->n_iter_int_1 = outC->_L17;
  outC->_L1_1 = outC->n_iter_int_1;
  outC->n_iter_1 = outC->_L1_1;
  outC->_L7 = outC->n_iter_1;
  /* 1 */
  C_P005_unflatten_sections_TM_lib_internal(
    outC->_L22,
    outC->_L7,
    &outC->_L13,
    &outC->Context_1);
  kcg_copy_P005_OBU_sectionlist_enum_T_TM(
    &outC->_L5,
    &outC->Context_1.sections);
  outC->_L10.valid = outC->_L22;
  outC->_L10.q_dir = outC->_L11;
  outC->_L10.l_packet = outC->_L8;
  outC->_L10.q_scale = outC->_L4;
  outC->_L10.n_iter = outC->_L7;
  kcg_copy_P005_OBU_sectionlist_enum_T_TM(&outC->_L10.sections, &outC->_L5);
  kcg_copy_P005_OBU_T_TM(&outC->P005_onboard, &outC->_L10);
  if (outC->IfBlock1_clock_1) {
    outC->_L3_15_IfBlock1 = kcg_false;
    _9_error_1 = outC->_L3_15_IfBlock1;
    outC->error_1 = _9_error_1;
  }
  else {
    if (outC->_3_else_clock_1_IfBlock1) {
      outC->_L3_1_IfBlock1 = kcg_false;
      error_1 = outC->_L3_1_IfBlock1;
      _7_error_1 = error_1;
    }
    else {
      if (outC->else_clock_1_IfBlock1) {
        outC->_L4_1_IfBlock1 = kcg_false;
        _6_error_1 = outC->_L4_1_IfBlock1;
        _1_error_1 = _6_error_1;
      }
      else {
        outC->_L2_1_IfBlock1 = kcg_true;
        _4_error_1 = outC->_L2_1_IfBlock1;
        _1_error_1 = _4_error_1;
      }
      _7_error_1 = _1_error_1;
    }
    outC->error_1 = _7_error_1;
  }
  outC->_L4_1 = outC->error_1;
  noname_1 = outC->_L4_1;
  outC->_L11_1 = 0;
  outC->_L10_1 = outC->_L1_1 < outC->_L11_1;
  _11_noname_1 = outC->_L10_1;
  outC->_L9_1 = 31;
  outC->_L12_1 = outC->_L1_1 > outC->_L9_1;
  _12_noname_1 = outC->_L12_1;
  outC->_L13_1 = 8191;
  outC->_6__L12_1 = 0;
  outC->_L9_17 = outC->_L1_18 > outC->_L13_1;
  outC->_L8_1 = outC->_L1_18 < outC->_6__L12_1;
  _13_noname_1 = outC->_L8_1;
  _14_noname_1 = outC->_L9_17;
  if (outC->_12_IfBlock1_clock_1) {
    outC->_L5_121_IfBlock1 = kcg_false;
    _25_error_1 = outC->_L5_121_IfBlock1;
    outC->_11_error_1 = _25_error_1;
  }
  else {
    if (outC->_19_else_clock_1_IfBlock1) {
      outC->_L5_1_IfBlock1 = kcg_false;
      _16_error_1 = outC->_L5_1_IfBlock1;
      _23_error_1 = _16_error_1;
    }
    else {
      if (outC->_14_else_clock_1_IfBlock1) {
        outC->_L4_118_IfBlock1 = kcg_false;
        _22_error_1 = outC->_L4_118_IfBlock1;
        _17_error_1 = _22_error_1;
      }
      else {
        outC->_L1_116_IfBlock1 = kcg_true;
        _20_error_1 = outC->_L1_116_IfBlock1;
        _17_error_1 = _20_error_1;
      }
      _23_error_1 = _17_error_1;
    }
    outC->_11_error_1 = _23_error_1;
  }
  outC->_10__L13_1 = outC->_11_error_1;
  _15_noname_1 = outC->_10__L13_1;
  outC->_L5_1 = 0;
  outC->_L4_123 = outC->_L1_124 < outC->_L5_1;
  outC->_L3_1 = 256;
  outC->_L2_122 = outC->_L1_124 > outC->_L3_1;
  _27_noname_1 = outC->_L2_122;
  _28_noname_1 = outC->_L4_123;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P005_compr_onboard_TM_conversions.c
** Generation date: 2015-08-30T07:02:46
*************************************************************$ */

