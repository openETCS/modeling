/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T16:21:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P027V1_TM_baseline2.h"

void Read_P027V1_reset_TM_baseline2(outC_Read_P027V1_TM_baseline2 *outC)
{
  kcg_int i;
  
  for (i = 0; i < 33; i++) {
    /* 1 */ Read_P027V1_sections_reset_TM_baseline2(&outC->_1_Context_1[i]);
  }
  /* 1 */ RECV_ReadPackets_reset_TM_lib_internal(&outC->Context_1);
}

/* TM_baseline2::Read_P027V1 */
void Read_P027V1_TM_baseline2(
  /* TM_baseline2::Read_P027V1::Message_IN */CompressedPackets_T_Common_Types_Pkg *Message_IN,
  outC_Read_P027V1_TM_baseline2 *outC)
{
  kcg_int i3;
  kcg_int i2;
  kcg_int i1;
  kcg_int i;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _28_q_dir_1_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _27_error_1_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _26_q_dir_1_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _25_error_1_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _24_error_1_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _23_q_dir_1_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _22_error_1_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _21_q_dir_1_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _20_q_dir_1_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _19_error_1_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR q_dir_1_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _18_error_1_1;
  kcg_bool _17_noname_1_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */ Q_SCALE _16_q_scale_1_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */ kcg_bool _15_error_1_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */ Q_SCALE _14_q_scale_1_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */ kcg_bool _13_error_1_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */ kcg_bool _12_error_1_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */ Q_SCALE _11_q_scale_1_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */ kcg_bool _10_error_1_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */ Q_SCALE _9_q_scale_1_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */ Q_SCALE _8_q_scale_1_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */ kcg_bool _7_error_1_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */ Q_SCALE q_scale_1_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */ kcg_bool error_1_1;
  kcg_bool _6_noname_1_1;
  kcg_bool _5_noname_1_1;
  kcg_bool noname_1_1;
  MetadataElement_T_Common_Types_Pkg _4_noname_1;
  kcg_int noname_1;
  kcg_int noname;
  
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L169, Message_IN);
  /* 1 */
  RECV_ReadPackets_TM_lib_internal(
    &outC->_L169,
    NID_META_P027V1_body_TM_baseline2,
    kcg_true,
    kcg_true,
    &outC->Context_1);
  kcg_copy_array_int_500(&outC->_L5, &outC->Context_1.Data);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(
    &outC->_L30,
    &outC->Context_1.Metadata);
  outC->_L186 = outC->Context_1.received;
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->PacketData_1,
    &outC->_L5);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->_L9_1,
    &outC->PacketData_1);
  outC->_L18_1 = outC->_L9_1[0];
  outC->nid_packet_int_1_1 = outC->_L18_1;
  outC->_L1_1_1 = outC->nid_packet_int_1_1;
  outC->nid_packet_1_1 = outC->_L1_1_1;
  outC->_L28_1 = outC->nid_packet_1_1;
  outC->_L21_1 = 27;
  outC->_L22_1 = outC->_L28_1 == outC->_L21_1;
  kcg_copy_array_int_5(&outC->_L6_1, (array_int_5 *) &outC->_L9_1[1]);
  outC->_L14_1 = outC->_L6_1[0];
  outC->q_dir_int_1_1 = outC->_L14_1;
  outC->_L12_1_1 = outC->q_dir_int_1_1;
  outC->q_dir_in_1_1 = outC->_L12_1_1;
  outC->_10_IfBlock1_clock_1_1 = outC->q_dir_in_1_1 ==
    INT_Q_DIR_nomiinal_TM_conversions;
  if (outC->_10_IfBlock1_clock_1_1) {
    outC->_18__L4_1_1_IfBlock1 = ENUM_Q_DIR_nominal_TM_conversions;
    _28_q_dir_1_1 = outC->_18__L4_1_1_IfBlock1;
    outC->q_dir_1_1 = _28_q_dir_1_1;
  }
  else {
    outC->_17_else_clock_1_1_IfBlock1 = outC->q_dir_in_1_1 ==
      INT_Q_DIR_reverse_TM_conversions;
    if (outC->_17_else_clock_1_1_IfBlock1) {
      outC->_11__L3_1_1_IfBlock1 = ENUM_Q_DIR_reverse_TM_conversions;
      q_dir_1_1 = outC->_11__L3_1_1_IfBlock1;
      _26_q_dir_1_1 = q_dir_1_1;
    }
    else {
      outC->_12_else_clock_1_1_IfBlock1 = outC->q_dir_in_1_1 ==
        INT_Q_DIR_both_TM_conversions;
      if (outC->_12_else_clock_1_1_IfBlock1) {
        outC->_15__L2_1_1_IfBlock1 = ENUM_Q_DIR_both_TM_conversions;
        _23_q_dir_1_1 = outC->_15__L2_1_1_IfBlock1;
        _20_q_dir_1_1 = _23_q_dir_1_1;
      }
      else {
        outC->_13__L2_1_1_IfBlock1 = ENUM_Q_DIR_both_TM_conversions;
        _21_q_dir_1_1 = outC->_13__L2_1_1_IfBlock1;
        _20_q_dir_1_1 = _21_q_dir_1_1;
      }
      _26_q_dir_1_1 = _20_q_dir_1_1;
    }
    outC->q_dir_1_1 = _26_q_dir_1_1;
  }
  outC->_L30_1 = outC->q_dir_1_1;
  outC->_L16_1 = outC->_L6_1[2];
  outC->q_scale_int_1_1 = outC->_L16_1;
  outC->_3__L2_1_1 = outC->q_scale_int_1_1;
  outC->q_scale_in_1_1 = outC->_3__L2_1_1;
  outC->IfBlock1_clock_1_1 = outC->q_scale_in_1_1 ==
    INT_Q_SCALE_10cm_TM_conversions;
  if (outC->IfBlock1_clock_1_1) {
    outC->_7__L2_1_1_IfBlock1 = ENUM_Q_SCALE_10cm_TM_conversions;
    _16_q_scale_1_1 = outC->_7__L2_1_1_IfBlock1;
    outC->q_scale_1_1 = _16_q_scale_1_1;
  }
  else {
    outC->_6_else_clock_1_1_IfBlock1 = outC->q_scale_in_1_1 ==
      INT_Q_SCALE_1m_TM_conversions;
    if (outC->_6_else_clock_1_1_IfBlock1) {
      outC->_L1_1_1_IfBlock1 = ENUM_Q_SCALE_1m_TM_conversions;
      q_scale_1_1 = outC->_L1_1_1_IfBlock1;
      _14_q_scale_1_1 = q_scale_1_1;
    }
    else {
      outC->else_clock_1_1_IfBlock1 = outC->q_scale_in_1_1 ==
        INT_Q_SCALE_10m_TM_conversions;
      if (outC->else_clock_1_1_IfBlock1) {
        outC->_5__L1_1_1_IfBlock1 = ENUM_Q_SCALE_10m_TM_conversions;
        _11_q_scale_1_1 = outC->_5__L1_1_1_IfBlock1;
        _8_q_scale_1_1 = _11_q_scale_1_1;
      }
      else {
        outC->_4__L1_1_1_IfBlock1 = ENUM_Q_SCALE_10cm_TM_conversions;
        _9_q_scale_1_1 = outC->_4__L1_1_1_IfBlock1;
        _8_q_scale_1_1 = _9_q_scale_1_1;
      }
      _14_q_scale_1_1 = _8_q_scale_1_1;
    }
    outC->q_scale_1_1 = _14_q_scale_1_1;
  }
  outC->_L29_1 = outC->q_scale_1_1;
  outC->_L10_1.valid = outC->_L22_1;
  outC->_L10_1.q_dir = outC->_L30_1;
  outC->_L10_1.q_scale = outC->_L29_1;
  kcg_copy_P027V1_OBU_body_enum_T_TM_baseline2(
    &outC->P027V1_OBU_body_1,
    &outC->_L10_1);
  kcg_copy_P027V1_OBU_body_enum_T_TM_baseline2(
    &outC->_L166,
    &outC->P027V1_OBU_body_1);
  kcg_copy_P027V1_OBU_body_enum_T_TM_baseline2(&outC->body_1, &outC->_L166);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(
    &outC->Metadata_Element_1,
    &outC->_L30);
  outC->_L24_1 = outC->_L6_1[4];
  outC->meta_qdiff_1 = outC->_L24_1;
  outC->_L168 = outC->meta_qdiff_1;
  outC->received = outC->_L186;
  outC->_L185 = kcg_true;
  for (i3 = 0; i3 < 33; i3++) {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &outC->_L172[i3],
      &outC->_L169);
  }
  outC->_L25_1 = outC->_L6_1[3];
  outC->n_iter_sections_1 = outC->_L25_1;
  outC->_L167 = outC->n_iter_sections_1;
  for (i2 = 0; i2 < 33; i2++) {
    outC->_L170[i2] = outC->_L167;
  }
  for (i1 = 0; i1 < 33; i1++) {
    outC->_L171[i1] = outC->_L168;
  }
  if (outC->_L185) {
    for (i = 0; i < 33; i++) {
      /* 1 */
      Read_P027V1_sections_TM_baseline2(
        i,
        &outC->_L172[i],
        outC->_L170[i],
        outC->_L171[i],
        &outC->_1_Context_1[i]);
      kcg_copy_P027V1_section_enum_T_TM_baseline2(
        &outC->_L182[i],
        &outC->_1_Context_1[i].P027V1_OBU_section_out);
      outC->_L184 = i + 1;
      if (!outC->_1_Context_1[i].cont) {
        break;
      }
    }
  }
  else {
    outC->_L184 = 0;
  }
#ifdef KCG_MAPW_CPY
  
  for (i = outC->_L184; i < 33; i++) {
    kcg_copy_P027V1_section_enum_T_TM_baseline2(
      &outC->_L182[i],
      (P027V1_section_enum_T_TM_baseline2 *)
        &DEFAULT_P027V1_section_enum_TM_baseline2);
  }
#endif /* KCG_MAPW_CPY */
  
  noname = outC->_L184;
  kcg_copy_P027V1_OBU_body_enum_T_TM_baseline2(&outC->_L68_1, &outC->body_1);
  outC->_L69_1 = outC->_L68_1.valid;
  outC->_L70_1 = outC->_L68_1.q_dir;
  outC->_L71_1 = outC->_L68_1.q_scale;
  kcg_copy_P027V1_OBU_sectionlist_enum_T_TM_baseline2(
    &outC->sections_1,
    &outC->_L182);
  kcg_copy_P027V1_OBU_sectionlist_enum_T_TM_baseline2(
    &outC->_L1_1,
    &outC->sections_1);
  outC->_L75_1.valid = outC->_L69_1;
  outC->_L75_1.q_dir = outC->_L70_1;
  outC->_L75_1.q_scale = outC->_L71_1;
  kcg_copy_P027V1_OBU_sectionlist_enum_T_TM_baseline2(
    &outC->_L75_1.sections,
    &outC->_L1_1);
  kcg_copy_P027V1_OBU_T_TM_baseline2(&outC->P027V1_out_1, &outC->_L75_1);
  kcg_copy_P027V1_OBU_T_TM_baseline2(&outC->_L178, &outC->P027V1_out_1);
  kcg_copy_P027V1_OBU_T_TM_baseline2(&outC->P027V1_out, &outC->_L178);
  outC->_L15_1 = outC->_L6_1[1];
  noname_1 = outC->_L15_1;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(
    &outC->_L20_1,
    &outC->Metadata_Element_1);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&_4_noname_1, &outC->_L20_1);
  outC->_L5_1_1 = 0;
  outC->_L4_1_1 = outC->_L1_1_1 < outC->_L5_1_1;
  outC->_L3_1_1 = 256;
  outC->_L2_1_1 = outC->_L1_1_1 > outC->_L3_1_1;
  noname_1_1 = outC->_L2_1_1;
  _5_noname_1_1 = outC->_L4_1_1;
  if (outC->IfBlock1_clock_1_1) {
    outC->_8__L3_1_1_IfBlock1 = kcg_false;
    _15_error_1_1 = outC->_8__L3_1_1_IfBlock1;
    outC->error_1_1 = _15_error_1_1;
  }
  else {
    if (outC->_6_else_clock_1_1_IfBlock1) {
      outC->_L3_1_1_IfBlock1 = kcg_false;
      error_1_1 = outC->_L3_1_1_IfBlock1;
      _13_error_1_1 = error_1_1;
    }
    else {
      if (outC->else_clock_1_1_IfBlock1) {
        outC->_L4_1_1_IfBlock1 = kcg_false;
        _12_error_1_1 = outC->_L4_1_1_IfBlock1;
        _7_error_1_1 = _12_error_1_1;
      }
      else {
        outC->_L2_1_1_IfBlock1 = kcg_true;
        _10_error_1_1 = outC->_L2_1_1_IfBlock1;
        _7_error_1_1 = _10_error_1_1;
      }
      _13_error_1_1 = _7_error_1_1;
    }
    outC->error_1_1 = _13_error_1_1;
  }
  outC->_2__L4_1_1 = outC->error_1_1;
  _6_noname_1_1 = outC->_2__L4_1_1;
  if (outC->_10_IfBlock1_clock_1_1) {
    outC->_19__L5_1_1_IfBlock1 = kcg_false;
    _27_error_1_1 = outC->_19__L5_1_1_IfBlock1;
    outC->_9_error_1_1 = _27_error_1_1;
  }
  else {
    if (outC->_17_else_clock_1_1_IfBlock1) {
      outC->_L5_1_1_IfBlock1 = kcg_false;
      _18_error_1_1 = outC->_L5_1_1_IfBlock1;
      _25_error_1_1 = _18_error_1_1;
    }
    else {
      if (outC->_12_else_clock_1_1_IfBlock1) {
        outC->_16__L4_1_1_IfBlock1 = kcg_false;
        _24_error_1_1 = outC->_16__L4_1_1_IfBlock1;
        _19_error_1_1 = _24_error_1_1;
      }
      else {
        outC->_14__L1_1_1_IfBlock1 = kcg_true;
        _22_error_1_1 = outC->_14__L1_1_1_IfBlock1;
        _19_error_1_1 = _22_error_1_1;
      }
      _25_error_1_1 = _19_error_1_1;
    }
    outC->_9_error_1_1 = _25_error_1_1;
  }
  outC->_L13_1_1 = outC->_9_error_1_1;
  _17_noname_1_1 = outC->_L13_1_1;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Read_P027V1_TM_baseline2.c
** Generation date: 2015-09-04T16:21:02
*************************************************************$ */

