/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P057_compr_onboard_TM_conversions.h"

void C_P057_compr_onboard_reset_TM_conversions(
  outC_C_P057_compr_onboard_TM_conversions *outC)
{
  /* 1 */ CAST_Int_to_T_MAR_reset_TM_conversions(&outC->_2_Context_1);
  /* 1 */ CAST_Int_to_T_TIMEOUTRQST_reset_TM_conversions(&outC->_1_Context_1);
  /* 1 */ CAST_Int_to_T_CYCRQST_reset_TM_conversions(&outC->Context_1);
}

/* TM_conversions::C_P057_compr_onboard */
void C_P057_compr_onboard_TM_conversions(
  /* TM_conversions::C_P057_compr_onboard::PacketData */CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* TM_conversions::C_P057_compr_onboard::Metadata_Element */MetadataElement_T_Common_Types_Pkg *Metadata_Element,
  outC_C_P057_compr_onboard_TM_conversions *outC)
{
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
  kcg_int _13_noname;
  
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&outC->_L9, PacketData);
  kcg_copy_array_int_6(&outC->_L34, (array_int_6 *) &outC->_L9[0]);
  outC->_L46 = outC->_L34[5];
  outC->_L45 = outC->_L34[4];
  outC->_L44 = outC->_L34[3];
  outC->_L43 = outC->_L34[2];
  outC->_L42 = outC->_L34[1];
  _13_noname = outC->_L43;
  outC->_L41 = outC->_L34[0];
  /* 1 */ CAST_Int_to_T_CYCRQST_TM_conversions(outC->_L46, &outC->Context_1);
  outC->_L29 = outC->Context_1.t_cycloc;
  /* 1 */
  CAST_Int_to_T_TIMEOUTRQST_TM_conversions(outC->_L45, &outC->_1_Context_1);
  outC->_L27 = outC->_1_Context_1.t_timeoutrqst;
  outC->nid_packet_int_1 = outC->_L41;
  outC->_L1_1 = outC->nid_packet_int_1;
  outC->nid_packet_1 = outC->_L1_1;
  outC->_L12 = outC->nid_packet_1;
  outC->_L21 = 57;
  outC->_L22 = outC->_L12 == outC->_L21;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L20, Metadata_Element);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&noname, &outC->_L20);
  outC->q_dir_int_1 = outC->_L42;
  outC->_L12_1 = outC->q_dir_int_1;
  outC->q_dir_in_1 = outC->_L12_1;
  outC->IfBlock1_clock_1 = outC->q_dir_in_1 ==
    INT_Q_DIR_nomiinal_TM_conversions;
  if (outC->IfBlock1_clock_1) {
    outC->_L4_15_IfBlock1 = ENUM_Q_DIR_nominal_TM_conversions;
    _10_q_dir_1 = outC->_L4_15_IfBlock1;
    outC->q_dir_1 = _10_q_dir_1;
  }
  else {
    outC->_4_else_clock_1_IfBlock1 = outC->q_dir_in_1 ==
      INT_Q_DIR_reverse_TM_conversions;
    if (outC->_4_else_clock_1_IfBlock1) {
      outC->_L3_1_IfBlock1 = ENUM_Q_DIR_reverse_TM_conversions;
      q_dir_1 = outC->_L3_1_IfBlock1;
      _8_q_dir_1 = q_dir_1;
    }
    else {
      outC->else_clock_1_IfBlock1 = outC->q_dir_in_1 ==
        INT_Q_DIR_both_TM_conversions;
      if (outC->else_clock_1_IfBlock1) {
        outC->_L2_13_IfBlock1 = ENUM_Q_DIR_both_TM_conversions;
        _5_q_dir_1 = outC->_L2_13_IfBlock1;
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
  /* 1 */ CAST_Int_to_T_MAR_TM_conversions(outC->_L44, &outC->_2_Context_1);
  outC->_L4 = outC->_2_Context_1.t_mar;
  outC->_L10.valid = outC->_L22;
  outC->_L10.q_dir = outC->_L11;
  outC->_L10.t_mar = outC->_L4;
  outC->_L10.t_timeoutrqst = outC->_L27;
  outC->_L10.t_cycrqst = outC->_L29;
  kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg(
    &outC->P057_onboard,
    &outC->_L10);
  if (outC->IfBlock1_clock_1) {
    outC->_L5_16_IfBlock1 = kcg_false;
    _9_error_1 = outC->_L5_16_IfBlock1;
    outC->error_1 = _9_error_1;
  }
  else {
    if (outC->_4_else_clock_1_IfBlock1) {
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
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P057_compr_onboard_TM_conversions.c
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

