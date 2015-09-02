/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P003V1_compr_onboard_TM_conversions_baseline2.h"

void C_P003V1_compr_onboard_reset_TM_conversions_baseline2(
  outC_C_P003V1_compr_onboard_TM_conversions_baseline2 *outC)
{
  /* 1 */
  C_P003V1_unflatten_sections_reset_TM_lib_internal(&outC->_18_Context_1);
  /* 1 */ CAST_Int_to_D_VALIDNV_reset_TM_conversions(&outC->_17_Context_1);
  /* 1 */ CAST_Int_to_V_NVSHUNT_reset_TM_conversions(&outC->_16_Context_1);
  /* 1 */ CAST_Int_to_V_NVSTFF_reset_TM_conversions(&outC->_15_Context_1);
  /* 1 */ CAST_Int_to_V_NVONSIGHT_reset_TM_conversions(&outC->_14_Context_1);
  /* 1 */ CAST_Int_to_V_NVUNFIT_reset_TM_conversions(&outC->_13_Context_1);
  /* 1 */ CAST_Int_to_V_NVREL_reset_TM_conversions(&outC->_12_Context_1);
  /* 1 */ CAST_Int_to_D_NVROLL_reset_TM_conversions(&outC->_11_Context_1);
  /* 1 */ CAST_Int_to_Q_NVSBTSMPERM_reset_TM_conversions(&outC->_10_Context_1);
  /* 1 */ CAST_Int_to_V_NVALLOWOVTRP_reset_TM_conversions(&outC->_9_Context_1);
  /* 2 */ CAST_Int_to_V_NVSUPOVTRP_reset_TM_conversions(&outC->_8_Context_2);
  /* 1 */ CAST_Int_to_D_NVOVTRP_reset_TM_conversions(&outC->_7_Context_1);
  /* 1 */ CAST_Int_to_T_NVOVTRP_reset_TM_conversions(&outC->_6_Context_1);
  /* 1 */ CAST_Int_to_Q_NVEMRRLS_reset_TM_conversions(&outC->_5_Context_1);
  /* 2 */ CAST_Int_to_D_NVPOTRP_reset_TM_conversions(&outC->Context_2);
  /* 1 */ CAST_Int_to_M_NVCONTACT_reset_TM_conversions(&outC->_4_Context_1);
  /* 1 */ CAST_Int_to_T_NVCONTACT_reset_TM_conversions(&outC->_3_Context_1);
  /* 1 */ CAST_Int_to_M_NVDERUN_reset_TM_conversions(&outC->_2_Context_1);
  /* 1 */
  CAST_Int_to_Q_NVDRIVER_ADHES_reset_TM_conversions(&outC->_1_Context_1);
  /* 1 */ CAST_Int_to_D_NVSTFF_reset_TM_conversions(&outC->Context_1);
}

/* TM_conversions_baseline2::C_P003V1_compr_onboard */
void C_P003V1_compr_onboard_TM_conversions_baseline2(
  /* TM_conversions_baseline2::C_P003V1_compr_onboard::PacketData */CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* TM_conversions_baseline2::C_P003V1_compr_onboard::Metadata_Element */MetadataElement_T_Common_Types_Pkg *Metadata_Element,
  outC_C_P003V1_compr_onboard_TM_conversions_baseline2 *outC)
{
  kcg_bool _26_noname_1;
  kcg_bool _25_noname_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _24_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _23_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _22_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _21_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _20_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _19_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _18_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _17_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _16_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _15_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _14_error_1;
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
  kcg_int _27_noname;
  
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&outC->_L9, PacketData);
  kcg_copy_array_int_24(&outC->_L1, (array_int_24 *) &outC->_L9[0]);
  outC->_L59 = outC->_L1[23];
  outC->_L23 = outC->_L1[22];
  outC->_L24 = outC->_L1[21];
  outC->_L25 = outC->_L1[20];
  outC->_L26 = outC->_L1[19];
  outC->_L27 = outC->_L1[18];
  outC->_L28 = outC->_L1[17];
  outC->_L29 = outC->_L1[16];
  outC->_L30 = outC->_L1[15];
  outC->_L31 = outC->_L1[14];
  outC->_L32 = outC->_L1[13];
  outC->_L33 = outC->_L1[12];
  outC->_L34 = outC->_L1[11];
  outC->_L35 = outC->_L1[10];
  outC->_L36 = outC->_L1[9];
  outC->_L37 = outC->_L1[8];
  outC->_L38 = outC->_L1[7];
  outC->_L39 = outC->_L1[6];
  outC->_L40 = outC->_L1[5];
  outC->_L41 = outC->_L1[4];
  outC->_L42 = outC->_L1[3];
  outC->_L16 = outC->_L1[2];
  outC->_L15 = outC->_L1[1];
  /* 1 */ CAST_Int_to_D_NVSTFF_TM_conversions(outC->_L23, &outC->Context_1);
  outC->_L67 = outC->Context_1.d_nvstff;
  /* 1 */
  CAST_Int_to_Q_NVDRIVER_ADHES_TM_conversions(outC->_L59, &outC->_1_Context_1);
  outC->_L66 = outC->_1_Context_1.q_nvdriveradhes;
  /* 1 */ CAST_Int_to_M_NVDERUN_TM_conversions(outC->_L24, &outC->_2_Context_1);
  outC->_L65 = outC->_2_Context_1.m_nvderun;
  /* 1 */
  CAST_Int_to_T_NVCONTACT_TM_conversions(outC->_L25, &outC->_3_Context_1);
  outC->_L64 = outC->_3_Context_1.t_nvcontact;
  /* 1 */
  CAST_Int_to_M_NVCONTACT_TM_conversions(outC->_L26, &outC->_4_Context_1);
  outC->_L63 = outC->_4_Context_1.m_nvcontact;
  /* 2 */ CAST_Int_to_D_NVPOTRP_TM_conversions(outC->_L27, &outC->Context_2);
  outC->_L62 = outC->Context_2.d_nvpotrp;
  /* 1 */
  CAST_Int_to_Q_NVEMRRLS_TM_conversions(outC->_L32, &outC->_5_Context_1);
  outC->_L60 = outC->_5_Context_1.q_nvemrrls;
  /* 1 */ CAST_Int_to_T_NVOVTRP_TM_conversions(outC->_L28, &outC->_6_Context_1);
  outC->_L58 = outC->_6_Context_1.t_nvovtrp;
  /* 1 */ CAST_Int_to_D_NVOVTRP_TM_conversions(outC->_L29, &outC->_7_Context_1);
  outC->_L57 = outC->_7_Context_1.d_nvovtrp;
  /* 2 */
  CAST_Int_to_V_NVSUPOVTRP_TM_conversions(outC->_L30, &outC->_8_Context_2);
  outC->_L56 = outC->_8_Context_2.v_nvsupovtrp;
  /* 1 */
  CAST_Int_to_V_NVALLOWOVTRP_TM_conversions(outC->_L31, &outC->_9_Context_1);
  outC->_L54 = outC->_9_Context_1.v_nvallowovtrp;
  /* 1 */
  CAST_Int_to_Q_NVSBTSMPERM_TM_conversions(outC->_L33, &outC->_10_Context_1);
  outC->_L53 = outC->_10_Context_1.q_nvsbtsmperm;
  /* 1 */ CAST_Int_to_D_NVROLL_TM_conversions(outC->_L34, &outC->_11_Context_1);
  outC->_L52 = outC->_11_Context_1.d_nvroll;
  /* 1 */ CAST_Int_to_V_NVREL_TM_conversions(outC->_L35, &outC->_12_Context_1);
  outC->_L51 = outC->_12_Context_1.v_nvrel;
  /* 1 */
  CAST_Int_to_V_NVUNFIT_TM_conversions(outC->_L36, &outC->_13_Context_1);
  outC->_L50 = outC->_13_Context_1.v_nvunfit;
  /* 1 */
  CAST_Int_to_V_NVONSIGHT_TM_conversions(outC->_L37, &outC->_14_Context_1);
  outC->_L49 = outC->_14_Context_1.v_nvonsight;
  /* 1 */ CAST_Int_to_V_NVSTFF_TM_conversions(outC->_L38, &outC->_15_Context_1);
  outC->_L48 = outC->_15_Context_1.v_nvstff;
  /* 1 */
  CAST_Int_to_V_NVSHUNT_TM_conversions(outC->_L39, &outC->_16_Context_1);
  outC->_L47 = outC->_16_Context_1.v_nvshunt;
  outC->n_iter_int_1 = outC->_L40;
  outC->_L1_1 = outC->n_iter_int_1;
  outC->n_iter_1 = outC->_L1_1;
  outC->_L7 = outC->n_iter_1;
  outC->n_iter = outC->_L7;
  outC->_L46 = outC->n_iter;
  outC->_L45 = outC->n_iter;
  /* 1 */
  CAST_Int_to_D_VALIDNV_TM_conversions(outC->_L41, &outC->_17_Context_1);
  outC->_L43 = outC->_17_Context_1.d_validnv;
  _27_noname = outC->_L16;
  outC->_L14 = outC->_L1[0];
  outC->nid_packet_int_1 = outC->_L14;
  outC->_L1_138 = outC->nid_packet_int_1;
  outC->nid_packet_1 = outC->_L1_138;
  outC->_L12 = outC->nid_packet_1;
  outC->_L21 = 3;
  outC->_L22 = outC->_L12 == outC->_L21;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L20, Metadata_Element);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&noname, &outC->_L20);
  kcg_copy_array_int_32(&outC->_L13, (array_int_32 *) &outC->_L9[24]);
  outC->q_dir_int_1 = outC->_L15;
  outC->_24__L12_1 = outC->q_dir_int_1;
  outC->q_dir_in_1 = outC->_24__L12_1;
  outC->_26_IfBlock1_clock_1 = outC->q_dir_in_1 ==
    INT_Q_DIR_nomiinal_TM_conversions;
  if (outC->_26_IfBlock1_clock_1) {
    outC->_L4_134_IfBlock1 = ENUM_Q_DIR_nominal_TM_conversions;
    _24_q_dir_1 = outC->_L4_134_IfBlock1;
    outC->q_dir_1 = _24_q_dir_1;
  }
  else {
    outC->_33_else_clock_1_IfBlock1 = outC->q_dir_in_1 ==
      INT_Q_DIR_reverse_TM_conversions;
    if (outC->_33_else_clock_1_IfBlock1) {
      outC->_L3_127_IfBlock1 = ENUM_Q_DIR_reverse_TM_conversions;
      q_dir_1 = outC->_L3_127_IfBlock1;
      _22_q_dir_1 = q_dir_1;
    }
    else {
      outC->_28_else_clock_1_IfBlock1 = outC->q_dir_in_1 ==
        INT_Q_DIR_both_TM_conversions;
      if (outC->_28_else_clock_1_IfBlock1) {
        outC->_L2_131_IfBlock1 = ENUM_Q_DIR_both_TM_conversions;
        _19_q_dir_1 = outC->_L2_131_IfBlock1;
        _16_q_dir_1 = _19_q_dir_1;
      }
      else {
        outC->_L2_129_IfBlock1 = ENUM_Q_DIR_both_TM_conversions;
        _17_q_dir_1 = outC->_L2_129_IfBlock1;
        _16_q_dir_1 = _17_q_dir_1;
      }
      _22_q_dir_1 = _16_q_dir_1;
    }
    outC->q_dir_1 = _22_q_dir_1;
  }
  outC->_L11 = outC->q_dir_1;
  outC->q_scale_int_1 = outC->_L42;
  outC->_L2_1 = outC->q_scale_int_1;
  outC->q_scale_in_1 = outC->_L2_1;
  outC->IfBlock1_clock_1 = outC->q_scale_in_1 ==
    INT_Q_SCALE_10cm_TM_conversions;
  if (outC->IfBlock1_clock_1) {
    outC->_L2_122_IfBlock1 = ENUM_Q_SCALE_10cm_TM_conversions;
    _10_q_scale_1 = outC->_L2_122_IfBlock1;
    outC->q_scale_1 = _10_q_scale_1;
  }
  else {
    outC->_21_else_clock_1_IfBlock1 = outC->q_scale_in_1 ==
      INT_Q_SCALE_1m_TM_conversions;
    if (outC->_21_else_clock_1_IfBlock1) {
      outC->_L1_1_IfBlock1 = ENUM_Q_SCALE_1m_TM_conversions;
      q_scale_1 = outC->_L1_1_IfBlock1;
      _8_q_scale_1 = q_scale_1;
    }
    else {
      outC->else_clock_1_IfBlock1 = outC->q_scale_in_1 ==
        INT_Q_SCALE_10m_TM_conversions;
      if (outC->else_clock_1_IfBlock1) {
        outC->_L1_120_IfBlock1 = ENUM_Q_SCALE_10m_TM_conversions;
        _5_q_scale_1 = outC->_L1_120_IfBlock1;
        _2_q_scale_1 = _5_q_scale_1;
      }
      else {
        outC->_L1_119_IfBlock1 = ENUM_Q_SCALE_10cm_TM_conversions;
        _3_q_scale_1 = outC->_L1_119_IfBlock1;
        _2_q_scale_1 = _3_q_scale_1;
      }
      _8_q_scale_1 = _2_q_scale_1;
    }
    outC->q_scale_1 = _8_q_scale_1;
  }
  outC->_L4 = outC->q_scale_1;
  /* 1 */
  C_P003V1_unflatten_sections_TM_lib_internal(
    outC->_L22,
    outC->_L46,
    &outC->_L13,
    &outC->_18_Context_1);
  kcg_copy_P003V1_sectionlist_enum_T_TM_baseline2(
    &outC->_L5,
    &outC->_18_Context_1.sections);
  outC->_L10.valid = outC->_L22;
  outC->_L10.q_dir = outC->_L11;
  outC->_L10.q_scale = outC->_L4;
  outC->_L10.d_validnv = outC->_L43;
  outC->_L10.n_iter = outC->_L45;
  kcg_copy_P003V1_sectionlist_enum_T_TM_baseline2(
    &outC->_L10.SECTIONS,
    &outC->_L5);
  outC->_L10.v_nvshunt = outC->_L47;
  outC->_L10.v_nvstff = outC->_L48;
  outC->_L10.v_nvonsight = outC->_L49;
  outC->_L10.v_nvunfit = outC->_L50;
  outC->_L10.v_nvrel = outC->_L51;
  outC->_L10.d_nvroll = outC->_L52;
  outC->_L10.q_nvsbtsmperm = outC->_L53;
  outC->_L10.q_nvemrrls = outC->_L60;
  outC->_L10.v_nvallowovtrp = outC->_L54;
  outC->_L10.v_nvsopovtrp = outC->_L56;
  outC->_L10.d_nvovtrp = outC->_L57;
  outC->_L10.t_nvovtrp = outC->_L58;
  outC->_L10.d_nvpotrp = outC->_L62;
  outC->_L10.m_nvcontact = outC->_L63;
  outC->_L10.t_nvcontact = outC->_L64;
  outC->_L10.m_nvderun = outC->_L65;
  outC->_L10.d_nvstff = outC->_L67;
  outC->_L10.q_nvdriver_adhes = outC->_L66;
  kcg_copy_P003V1_OBU_T_TM_baseline2(&outC->P003V1_onboard, &outC->_L10);
  if (outC->IfBlock1_clock_1) {
    outC->_L3_123_IfBlock1 = kcg_false;
    _9_error_1 = outC->_L3_123_IfBlock1;
    outC->error_1 = _9_error_1;
  }
  else {
    if (outC->_21_else_clock_1_IfBlock1) {
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
  if (outC->_26_IfBlock1_clock_1) {
    outC->_L5_135_IfBlock1 = kcg_false;
    _23_error_1 = outC->_L5_135_IfBlock1;
    outC->_25_error_1 = _23_error_1;
  }
  else {
    if (outC->_33_else_clock_1_IfBlock1) {
      outC->_L5_1_IfBlock1 = kcg_false;
      _14_error_1 = outC->_L5_1_IfBlock1;
      _21_error_1 = _14_error_1;
    }
    else {
      if (outC->_28_else_clock_1_IfBlock1) {
        outC->_L4_132_IfBlock1 = kcg_false;
        _20_error_1 = outC->_L4_132_IfBlock1;
        _15_error_1 = _20_error_1;
      }
      else {
        outC->_L1_130_IfBlock1 = kcg_true;
        _18_error_1 = outC->_L1_130_IfBlock1;
        _15_error_1 = _18_error_1;
      }
      _21_error_1 = _15_error_1;
    }
    outC->_25_error_1 = _21_error_1;
  }
  outC->_L13_1 = outC->_25_error_1;
  _13_noname_1 = outC->_L13_1;
  outC->_L5_1 = 0;
  outC->_L4_137 = outC->_L1_138 < outC->_L5_1;
  outC->_L3_1 = 256;
  outC->_L2_136 = outC->_L1_138 > outC->_L3_1;
  _25_noname_1 = outC->_L2_136;
  _26_noname_1 = outC->_L4_137;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P003V1_compr_onboard_TM_conversions_baseline2.c
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

