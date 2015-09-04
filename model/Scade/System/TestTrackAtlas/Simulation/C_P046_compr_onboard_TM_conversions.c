/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P046_compr_onboard_TM_conversions.h"

void C_P046_compr_onboard_reset_TM_conversions(
  outC_C_P046_compr_onboard_TM_conversions *outC)
{
  /* 1 */ C_P046_unflatten_sections_reset_TM_lib_internal(&outC->Context_1);
}

/* TM_conversions::C_P046_compr_onboard */
void C_P046_compr_onboard_TM_conversions(
  /* TM_conversions::C_P046_compr_onboard::PacketData */CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* TM_conversions::C_P046_compr_onboard::Metadata_Element */MetadataElement_T_Common_Types_Pkg *Metadata_Element,
  outC_C_P046_compr_onboard_TM_conversions *outC)
{
  kcg_bool _14_noname_1;
  kcg_bool _13_noname_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _12_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _11_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _10_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _9_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _8_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _7_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _6_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _5_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _4_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _3_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool error_1;
  kcg_bool _2_noname_1;
  kcg_bool _1_noname_1;
  kcg_bool noname_1;
  MetadataElement_T_Common_Types_Pkg noname;
  kcg_int _15_noname;
  
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&outC->_L9, PacketData);
  kcg_copy_array_int_4(&outC->_L29, (array_int_4 *) &outC->_L9[0]);
  outC->_L37 = outC->_L29[3];
  outC->_L36 = outC->_L29[2];
  outC->_L35 = outC->_L29[1];
  _15_noname = outC->_L36;
  outC->_L34 = outC->_L29[0];
  outC->nid_packet_int_1 = outC->_L34;
  outC->_L1_16 = outC->nid_packet_int_1;
  outC->nid_packet_1 = outC->_L1_16;
  outC->_L12 = outC->nid_packet_1;
  outC->_L21 = 46;
  outC->_L22 = outC->_L12 == outC->_L21;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L20, Metadata_Element);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&noname, &outC->_L20);
  kcg_copy_array_int_66(&outC->_L13, (array_int_66 *) &outC->_L9[4]);
  outC->q_dir_int_1 = outC->_L35;
  outC->_1__L12_1 = outC->q_dir_int_1;
  outC->q_dir_in_1 = outC->_1__L12_1;
  outC->IfBlock1_clock_1 = outC->q_dir_in_1 ==
    INT_Q_DIR_nomiinal_TM_conversions;
  if (outC->IfBlock1_clock_1) {
    outC->_L4_14_IfBlock1 = ENUM_Q_DIR_nominal_TM_conversions;
    _12_q_dir_1 = outC->_L4_14_IfBlock1;
    outC->q_dir_1 = _12_q_dir_1;
  }
  else {
    outC->_3_else_clock_1_IfBlock1 = outC->q_dir_in_1 ==
      INT_Q_DIR_reverse_TM_conversions;
    if (outC->_3_else_clock_1_IfBlock1) {
      outC->_L3_1_IfBlock1 = ENUM_Q_DIR_reverse_TM_conversions;
      q_dir_1 = outC->_L3_1_IfBlock1;
      _10_q_dir_1 = q_dir_1;
    }
    else {
      outC->else_clock_1_IfBlock1 = outC->q_dir_in_1 ==
        INT_Q_DIR_both_TM_conversions;
      if (outC->else_clock_1_IfBlock1) {
        outC->_L2_12_IfBlock1 = ENUM_Q_DIR_both_TM_conversions;
        _7_q_dir_1 = outC->_L2_12_IfBlock1;
        _4_q_dir_1 = _7_q_dir_1;
      }
      else {
        outC->_L2_1_IfBlock1 = ENUM_Q_DIR_both_TM_conversions;
        _5_q_dir_1 = outC->_L2_1_IfBlock1;
        _4_q_dir_1 = _5_q_dir_1;
      }
      _10_q_dir_1 = _4_q_dir_1;
    }
    outC->q_dir_1 = _10_q_dir_1;
  }
  outC->_L11 = outC->q_dir_1;
  outC->n_iter_int_1 = outC->_L37;
  outC->_L1_1 = outC->n_iter_int_1;
  outC->n_iter_1 = outC->_L1_1;
  outC->_L7 = outC->n_iter_1;
  /* 1 */
  C_P046_unflatten_sections_TM_lib_internal(
    outC->_L22,
    outC->_L7,
    &outC->_L13,
    &outC->Context_1);
  kcg_copy_P046_OBU_sectionlist_enum_T_TM(
    &outC->_L5,
    &outC->Context_1.sections);
  outC->_L10.valid = outC->_L22;
  outC->_L10.q_dir = outC->_L11;
  outC->_L10.n_iter = outC->_L7;
  kcg_copy_P046_OBU_sectionlist_enum_T_TM(&outC->_L10.sections, &outC->_L5);
  kcg_copy_P046_OBU_T_TM(&outC->P046_onboard, &outC->_L10);
  outC->_L11_1 = 0;
  outC->_L10_1 = outC->_L1_1 < outC->_L11_1;
  noname_1 = outC->_L10_1;
  outC->_L9_1 = 31;
  outC->_L12_1 = outC->_L1_1 > outC->_L9_1;
  _1_noname_1 = outC->_L12_1;
  if (outC->IfBlock1_clock_1) {
    outC->_L5_15_IfBlock1 = kcg_false;
    _11_error_1 = outC->_L5_15_IfBlock1;
    outC->error_1 = _11_error_1;
  }
  else {
    if (outC->_3_else_clock_1_IfBlock1) {
      outC->_L5_1_IfBlock1 = kcg_false;
      error_1 = outC->_L5_1_IfBlock1;
      _9_error_1 = error_1;
    }
    else {
      if (outC->else_clock_1_IfBlock1) {
        outC->_L4_1_IfBlock1 = kcg_false;
        _8_error_1 = outC->_L4_1_IfBlock1;
        _3_error_1 = _8_error_1;
      }
      else {
        outC->_L1_1_IfBlock1 = kcg_true;
        _6_error_1 = outC->_L1_1_IfBlock1;
        _3_error_1 = _6_error_1;
      }
      _9_error_1 = _3_error_1;
    }
    outC->error_1 = _9_error_1;
  }
  outC->_L13_1 = outC->error_1;
  _2_noname_1 = outC->_L13_1;
  outC->_L5_1 = 0;
  outC->_L4_1 = outC->_L1_16 < outC->_L5_1;
  outC->_L3_1 = 256;
  outC->_L2_1 = outC->_L1_16 > outC->_L3_1;
  _13_noname_1 = outC->_L2_1;
  _14_noname_1 = outC->_L4_1;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P046_compr_onboard_TM_conversions.c
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

