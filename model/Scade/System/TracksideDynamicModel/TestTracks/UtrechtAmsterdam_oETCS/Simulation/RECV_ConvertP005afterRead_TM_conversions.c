/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-04T16:57:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RECV_ConvertP005afterRead_TM_conversions.h"

void RECV_ConvertP005afterRead_reset_TM_conversions(
  outC_RECV_ConvertP005afterRead_TM_conversions *outC)
{
  /* 1 */ CAST_Int_to_Q_LINKREACTION_reset_TM_conversions(&outC->_2_Context_1);
  /* 1 */
  CAST_Int_to_Q_LINKORIENTATION_reset_TM_conversions(&outC->_1_Context_1);
  /* 2 */ CAST_Int_to_Q_NEWCOUNTRY_reset_TM_conversions(&outC->Context_2);
  /* 1 */ TOOLS_evaluate_N_ITER_reset_TM_conversions(&outC->Context_1);
}

/* TM_conversions::RECV_ConvertP005afterRead_Element_CT */
void RECV_ConvertP005afterRead_TM_conversions(
  /* TM_conversions::RECV_ConvertP005afterRead_Element_CT::LRBG */NID_LRBG LRBG,
  /* TM_conversions::RECV_ConvertP005afterRead_Element_CT::Common */Array4_TM *Common,
  /* TM_conversions::RECV_ConvertP005afterRead_Element_CT::Element */P005E_array_Told_TM *Element,
  /* TM_conversions::RECV_ConvertP005afterRead_Element_CT::valid_metadata */kcg_bool valid_metadata,
  /* TM_conversions::RECV_ConvertP005afterRead_Element_CT::n_section */kcg_int n_section,
  outC_RECV_ConvertP005afterRead_TM_conversions *outC)
{
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */ Q_SCALE _22_q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */ kcg_bool _21_error_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */ Q_SCALE _20_q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */ kcg_bool _19_error_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */ kcg_bool _18_error_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */ Q_SCALE _17_q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */ kcg_bool _16_error_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */ Q_SCALE _15_q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */ Q_SCALE _14_q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */ kcg_bool _13_error_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::q_scale */ Q_SCALE q_scale_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::error */ kcg_bool _12_error_1;
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
  kcg_int noname;
  kcg_bool _23_noname;
  
  kcg_copy_Array4_TM(&outC->_L1, Common);
  outC->_L6 = outC->_L1[3];
  outC->_L5 = outC->_L1[2];
  outC->_L4 = outC->_L1[1];
  kcg_copy_P005E_array_Told_TM(&outC->_L2, Element);
  outC->_L46 = outC->_L2[6];
  outC->_L28 = outC->_L2[5];
  outC->_L27 = outC->_L2[4];
  outC->_L26 = outC->_L2[3];
  outC->_L25 = outC->_L2[2];
  outC->_L24 = outC->_L2[1];
  outC->_L49 = kcg_true;
  outC->_L41 = valid_metadata;
  outC->_L48 = n_section;
  /* 1 */
  TOOLS_evaluate_N_ITER_TM_conversions(
    outC->_L41,
    outC->_L48,
    outC->_L6,
    &outC->Context_1);
  outC->_L47 = outC->Context_1.valid;
  _23_noname = outC->_L47;
  outC->q_scale_int_1 = outC->_L5;
  outC->_L2_1 = outC->q_scale_int_1;
  outC->q_scale_in_1 = outC->_L2_1;
  outC->_8_IfBlock1_clock_1 = outC->q_scale_in_1 ==
    INT_Q_SCALE_10cm_TM_conversions;
  if (outC->_8_IfBlock1_clock_1) {
    outC->_L2_117_IfBlock1 = ENUM_Q_SCALE_10cm_TM_conversions;
    _22_q_scale_1 = outC->_L2_117_IfBlock1;
    outC->q_scale_1 = _22_q_scale_1;
  }
  else {
    outC->_16_else_clock_1_IfBlock1 = outC->q_scale_in_1 ==
      INT_Q_SCALE_1m_TM_conversions;
    if (outC->_16_else_clock_1_IfBlock1) {
      outC->_L1_110_IfBlock1 = ENUM_Q_SCALE_1m_TM_conversions;
      q_scale_1 = outC->_L1_110_IfBlock1;
      _20_q_scale_1 = q_scale_1;
    }
    else {
      outC->_11_else_clock_1_IfBlock1 = outC->q_scale_in_1 ==
        INT_Q_SCALE_10m_TM_conversions;
      if (outC->_11_else_clock_1_IfBlock1) {
        outC->_L1_114_IfBlock1 = ENUM_Q_SCALE_10m_TM_conversions;
        _17_q_scale_1 = outC->_L1_114_IfBlock1;
        _14_q_scale_1 = _17_q_scale_1;
      }
      else {
        outC->_L1_113_IfBlock1 = ENUM_Q_SCALE_10cm_TM_conversions;
        _15_q_scale_1 = outC->_L1_113_IfBlock1;
        _14_q_scale_1 = _15_q_scale_1;
      }
      _20_q_scale_1 = _14_q_scale_1;
    }
    outC->q_scale_1 = _20_q_scale_1;
  }
  outC->_L45 = outC->q_scale_1;
  outC->_L42 = LRBG;
  outC->_L3 = outC->_L1[0];
  outC->q_dir_int_1 = outC->_L3;
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
  outC->_L40 = outC->q_dir_1;
  outC->_L23 = outC->_L2[0];
  /* 2 */ CAST_Int_to_Q_NEWCOUNTRY_TM_conversions(outC->_L24, &outC->Context_2);
  outC->_L39 = outC->Context_2.q_newcountry;
  /* 1 */
  CAST_Int_to_Q_LINKORIENTATION_TM_conversions(outC->_L27, &outC->_1_Context_1);
  outC->_L37 = outC->_1_Context_1.q_linkorientation;
  /* 1 */
  CAST_Int_to_Q_LINKREACTION_TM_conversions(outC->_L28, &outC->_2_Context_1);
  outC->_L36 = outC->_2_Context_1.q_linkreaction;
  outC->_L44.valid = outC->_L49;
  outC->_L44.nid_LRBG = outC->_L42;
  outC->_L44.q_dir = outC->_L40;
  outC->_L44.q_scale = outC->_L45;
  outC->_L44.d_link = outC->_L23;
  outC->_L44.q_newcountry = outC->_L39;
  outC->_L44.nid_c = outC->_L25;
  outC->_L44.nid_bg = outC->_L26;
  outC->_L44.q_linkorientation = outC->_L37;
  outC->_L44.q_linkreaction = outC->_L36;
  outC->_L44.q_locacc = outC->_L46;
  noname = outC->_L4;
  kcg_copy_LinkedBG_T_BG_Types_Pkg(&outC->Linked_BG, &outC->_L44);
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
  if (outC->_8_IfBlock1_clock_1) {
    outC->_L3_118_IfBlock1 = kcg_false;
    _21_error_1 = outC->_L3_118_IfBlock1;
    outC->_7_error_1 = _21_error_1;
  }
  else {
    if (outC->_16_else_clock_1_IfBlock1) {
      outC->_L3_19_IfBlock1 = kcg_false;
      _12_error_1 = outC->_L3_19_IfBlock1;
      _19_error_1 = _12_error_1;
    }
    else {
      if (outC->_11_else_clock_1_IfBlock1) {
        outC->_L4_115_IfBlock1 = kcg_false;
        _18_error_1 = outC->_L4_115_IfBlock1;
        _13_error_1 = _18_error_1;
      }
      else {
        outC->_L2_112_IfBlock1 = kcg_true;
        _16_error_1 = outC->_L2_112_IfBlock1;
        _13_error_1 = _16_error_1;
      }
      _19_error_1 = _13_error_1;
    }
    outC->_7_error_1 = _19_error_1;
  }
  outC->_L4_1 = outC->_7_error_1;
  _11_noname_1 = outC->_L4_1;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RECV_ConvertP005afterRead_TM_conversions.c
** Generation date: 2015-06-04T16:57:14
*************************************************************$ */

