/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-11T08:52:56
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P041_compr_onboard_TM_conversions.h"

void C_P041_compr_onboard_reset_TM_conversions(
  outC_C_P041_compr_onboard_TM_conversions *outC)
{
  /* 1 */ C_P041_unflatten_sections_reset_TM_lib_internal(&outC->_1_Context_1);
  /* 1 */ CAST_Int_to_D_LEVELTR_reset_TM_conversions(&outC->Context_1);
}

/* TM_conversions::C_P041_compr_onboard */
void C_P041_compr_onboard_TM_conversions(
  /* TM_conversions::C_P041_compr_onboard::PacketData */CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* TM_conversions::C_P041_compr_onboard::Metadata_Element */MetadataElement_T_Common_Types_Pkg *Metadata_Element,
  outC_C_P041_compr_onboard_TM_conversions *outC)
{
  static kcg_bool _26_noname_1;
  static kcg_bool _25_noname_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR _24_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool _23_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR _22_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool _21_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool _20_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR _19_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool _18_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR _17_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR _16_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool _15_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool _14_error_1;
  static kcg_bool _13_noname_1;
  static kcg_bool _12_noname_1;
  static kcg_bool _11_noname_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */
  static Q_SCALE _10_q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */
  static kcg_bool _9_error_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */
  static Q_SCALE _8_q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */
  static kcg_bool _7_error_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */
  static kcg_bool _6_error_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */
  static Q_SCALE _5_q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */
  static kcg_bool _4_error_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */
  static Q_SCALE _3_q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */
  static Q_SCALE _2_q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */
  static kcg_bool _1_error_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */
  static Q_SCALE q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */
  static kcg_bool error_1;
  static kcg_bool noname_1;
  static MetadataElement_T_Common_Types_Pkg noname;
  
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&outC->_L9, PacketData);
  outC->_L27 = outC->_L9[4];
  /* 1 */ CAST_Int_to_D_LEVELTR_TM_conversions(outC->_L27, &outC->Context_1);
  outC->_L28 = outC->Context_1.d_leveltr;
  outC->_L26 = outC->_L9[3];
  outC->_L25 = outC->_L9[1];
  outC->_L18 = outC->_L9[0];
  outC->nid_packet_int_1 = outC->_L18;
  outC->_L1_121 = outC->nid_packet_int_1;
  outC->nid_packet_1 = outC->_L1_121;
  outC->_L12 = outC->nid_packet_1;
  outC->_L21 = 41;
  outC->_L22 = outC->_L12 == outC->_L21;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L20, Metadata_Element);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&noname, &outC->_L20);
  outC->_L17 = outC->_L9[5];
  kcg_copy_array_int_99(&outC->_L13, (array_int_99 *) &outC->_L9[6]);
  outC->q_dir_int_1 = outC->_L25;
  outC->_7__L12_1 = outC->q_dir_int_1;
  outC->q_dir_in_1 = outC->_7__L12_1;
  outC->_9_IfBlock1_clock_1 = outC->q_dir_in_1 ==
    INT_Q_DIR_nomiinal_TM_conversions;
  if (outC->_9_IfBlock1_clock_1) {
    outC->_L4_117_IfBlock1 = ENUM_Q_DIR_nominal_TM_conversions;
    _24_q_dir_1 = outC->_L4_117_IfBlock1;
    outC->q_dir_1 = _24_q_dir_1;
  }
  else {
    outC->_16_else_clock_1_IfBlock1 = outC->q_dir_in_1 ==
      INT_Q_DIR_reverse_TM_conversions;
    if (outC->_16_else_clock_1_IfBlock1) {
      outC->_L3_110_IfBlock1 = ENUM_Q_DIR_reverse_TM_conversions;
      q_dir_1 = outC->_L3_110_IfBlock1;
      _22_q_dir_1 = q_dir_1;
    }
    else {
      outC->_11_else_clock_1_IfBlock1 = outC->q_dir_in_1 ==
        INT_Q_DIR_both_TM_conversions;
      if (outC->_11_else_clock_1_IfBlock1) {
        outC->_L2_114_IfBlock1 = ENUM_Q_DIR_both_TM_conversions;
        _19_q_dir_1 = outC->_L2_114_IfBlock1;
        _16_q_dir_1 = _19_q_dir_1;
      }
      else {
        outC->_L2_112_IfBlock1 = ENUM_Q_DIR_both_TM_conversions;
        _17_q_dir_1 = outC->_L2_112_IfBlock1;
        _16_q_dir_1 = _17_q_dir_1;
      }
      _22_q_dir_1 = _16_q_dir_1;
    }
    outC->q_dir_1 = _22_q_dir_1;
  }
  outC->_L11 = outC->q_dir_1;
  outC->q_scale_int_1 = outC->_L26;
  outC->_L2_1 = outC->q_scale_int_1;
  outC->q_scale_in_1 = outC->_L2_1;
  outC->IfBlock1_clock_1 = outC->q_scale_in_1 ==
    INT_Q_SCALE_10cm_TM_conversions;
  if (outC->IfBlock1_clock_1) {
    outC->_L2_15_IfBlock1 = ENUM_Q_SCALE_10cm_TM_conversions;
    _10_q_scale_1 = outC->_L2_15_IfBlock1;
    outC->q_scale_1 = _10_q_scale_1;
  }
  else {
    outC->_4_else_clock_1_IfBlock1 = outC->q_scale_in_1 ==
      INT_Q_SCALE_1m_TM_conversions;
    if (outC->_4_else_clock_1_IfBlock1) {
      outC->_L1_1_IfBlock1 = ENUM_Q_SCALE_1m_TM_conversions;
      q_scale_1 = outC->_L1_1_IfBlock1;
      _8_q_scale_1 = q_scale_1;
    }
    else {
      outC->else_clock_1_IfBlock1 = outC->q_scale_in_1 ==
        INT_Q_SCALE_10m_TM_conversions;
      if (outC->else_clock_1_IfBlock1) {
        outC->_L1_13_IfBlock1 = ENUM_Q_SCALE_10m_TM_conversions;
        _5_q_scale_1 = outC->_L1_13_IfBlock1;
        _2_q_scale_1 = _5_q_scale_1;
      }
      else {
        outC->_L1_12_IfBlock1 = ENUM_Q_SCALE_10cm_TM_conversions;
        _3_q_scale_1 = outC->_L1_12_IfBlock1;
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
  C_P041_unflatten_sections_TM_lib_internal(
    outC->_L22,
    outC->_L7,
    &outC->_L13,
    &outC->_1_Context_1);
  kcg_copy_P041_OBU_sectionlist_enum_T_TM(
    &outC->_L5,
    &outC->_1_Context_1.sections);
  outC->_L10.valid = outC->_L22;
  outC->_L10.q_dir = outC->_L11;
  outC->_L10.q_scale = outC->_L4;
  outC->_L10.d_leveltr = outC->_L28;
  outC->_L10.n_iter = outC->_L7;
  kcg_copy_P041_OBU_sectionlist_enum_T_TM(&outC->_L10.sections, &outC->_L5);
  kcg_copy_P041_OBU_T_TM(&outC->P041_onboard, &outC->_L10);
  if (outC->IfBlock1_clock_1) {
    outC->_L3_16_IfBlock1 = kcg_false;
    _9_error_1 = outC->_L3_16_IfBlock1;
    outC->error_1 = _9_error_1;
  }
  else {
    if (outC->_4_else_clock_1_IfBlock1) {
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
  if (outC->_9_IfBlock1_clock_1) {
    outC->_L5_118_IfBlock1 = kcg_false;
    _23_error_1 = outC->_L5_118_IfBlock1;
    outC->_8_error_1 = _23_error_1;
  }
  else {
    if (outC->_16_else_clock_1_IfBlock1) {
      outC->_L5_1_IfBlock1 = kcg_false;
      _14_error_1 = outC->_L5_1_IfBlock1;
      _21_error_1 = _14_error_1;
    }
    else {
      if (outC->_11_else_clock_1_IfBlock1) {
        outC->_L4_115_IfBlock1 = kcg_false;
        _20_error_1 = outC->_L4_115_IfBlock1;
        _15_error_1 = _20_error_1;
      }
      else {
        outC->_L1_113_IfBlock1 = kcg_true;
        _18_error_1 = outC->_L1_113_IfBlock1;
        _15_error_1 = _18_error_1;
      }
      _21_error_1 = _15_error_1;
    }
    outC->_8_error_1 = _21_error_1;
  }
  outC->_L13_1 = outC->_8_error_1;
  _13_noname_1 = outC->_L13_1;
  outC->_L5_1 = 0;
  outC->_L4_120 = outC->_L1_121 < outC->_L5_1;
  outC->_L3_1 = 256;
  outC->_L2_119 = outC->_L1_121 > outC->_L3_1;
  _25_noname_1 = outC->_L2_119;
  _26_noname_1 = outC->_L4_120;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P041_compr_onboard_TM_conversions.c
** Generation date: 2015-08-11T08:52:56
*************************************************************$ */

