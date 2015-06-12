/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-11T11:38:20
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P027V1_tracksim_compr_body_TM_conversions.h"

void C_P027V1_tracksim_compr_body_reset_TM_conversions(
  outC_C_P027V1_tracksim_compr_body_TM_conversions *outC)
{
  /* 1 */ T_Build_Metadata_Packet_ID_reset_TM_lib_internal(&outC->Context_1);
}

/* TM_conversions::C_P027V1_tracksim_compr_body */
void C_P027V1_tracksim_compr_body_TM_conversions(
  inC_C_P027V1_tracksim_compr_body_TM_conversions *inC,
  outC_C_P027V1_tracksim_compr_body_TM_conversions *outC)
{
  kcg_int i1;
  kcg_int i;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _11_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _10_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _9_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _8_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _7_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _6_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _5_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _4_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR _3_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool _2_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */ Q_DIR q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */ kcg_bool error_1;
  kcg_bool noname_1;
  
  kcg_copy_P027V1_trackside_int_T_TM(&outC->_L1, &inC->P027V1_from_track);
  kcg_copy_P027V1_trackide_sectionlist_T_TM(
    &outC->_L367,
    &outC->_L1.SECTIONS_SSP);
  outC->_L368 = outC->_L1.N_ITER_k;
  kcg_copy_P027V1_trackide_qdifflist_T_TM(
    &outC->_L369,
    &outC->_L1.SECTIONS_q_diff);
  outC->_L370 = outC->_L1.N_ITER_n;
  outC->_L371 = outC->_L1.Q_FRONT;
  outC->_L219 = outC->_L1.V_STATIC;
  outC->_L218 = outC->_L1.D_STATIC;
  outC->_L217 = outC->_L1.Q_SCALE;
  outC->_L216 = outC->_L1.L_PACKET;
  outC->_L215 = outC->_L1.Q_DIR;
  outC->_L387 = outC->_L1.NID_PACKET;
  outC->_L401 = NID_META_P27V1_sections_TM;
  outC->n_iter_k = outC->_L368;
  outC->_L400 = outC->n_iter_k;
  outC->n_iter_k_out = outC->_L400;
  /* 1 */
  T_Build_Metadata_Packet_ID_TM_lib_internal(
    outC->_L387,
    1000,
    27,
    &outC->Context_1);
  outC->_L397 = outC->Context_1.nid_packet_meta;
  outC->_L396 = 6;
  outC->_L394.D_STATIC = outC->_L218;
  outC->_L394.V_STATIC = outC->_L219;
  outC->_L394.Q_FRONT = outC->_L371;
  outC->_L394.N_ITER = outC->_L370;
  kcg_copy_P027V1_trackide_qdifflist_T_TM(
    &outC->_L394.SECTIONS_q_diff,
    &outC->_L369);
  for (i1 = 0; i1 < 1; i1++) {
    kcg_copy_P027V1_section_int_T_TM(&outC->_L386[i1], &outC->_L394);
  }
  kcg_copy_array__467(&outC->_L385[0], &outC->_L386);
  kcg_copy_P027V1_trackide_sectionlist_T_TM(&outC->_L385[1], &outC->_L367);
  kcg_copy_P027V1_OBU_sectionlist_int_T_TM(
    &outC->P027V1_sections,
    &outC->_L385);
  outC->_L391 = outC->n_iter_k;
  outC->_L373[0] = outC->_L387;
  outC->_L373[1] = outC->_L215;
  outC->_L373[2] = outC->_L216;
  outC->_L373[3] = outC->_L217;
  outC->_L373[4] = outC->_L391;
  outC->_L373[5] = outC->_L401;
  outC->_L336 = 0;
  for (i = 0; i < 494; i++) {
    outC->_L209[i] = outC->_L336;
  }
  kcg_copy_array_int_6(&outC->_L383[0], &outC->_L373);
  kcg_copy_array_int_494(&outC->_L383[6], &outC->_L209);
  outC->q_dir_int_1 = outC->_L215;
  outC->_L12_1 = outC->q_dir_int_1;
  outC->q_dir_in_1 = outC->_L12_1;
  outC->IfBlock1_clock_1 = outC->q_dir_in_1 ==
    INT_Q_DIR_nomiinal_TM_conversions;
  if (outC->IfBlock1_clock_1) {
    outC->_L4_13_IfBlock1 = ENUM_Q_DIR_nominal_TM_conversions;
    _11_q_dir_1 = outC->_L4_13_IfBlock1;
    outC->q_dir_1 = _11_q_dir_1;
  }
  else {
    outC->_2_else_clock_1_IfBlock1 = outC->q_dir_in_1 ==
      INT_Q_DIR_reverse_TM_conversions;
    if (outC->_2_else_clock_1_IfBlock1) {
      outC->_L3_1_IfBlock1 = ENUM_Q_DIR_reverse_TM_conversions;
      q_dir_1 = outC->_L3_1_IfBlock1;
      _9_q_dir_1 = q_dir_1;
    }
    else {
      outC->else_clock_1_IfBlock1 = outC->q_dir_in_1 ==
        INT_Q_DIR_both_TM_conversions;
      if (outC->else_clock_1_IfBlock1) {
        outC->_L2_11_IfBlock1 = ENUM_Q_DIR_both_TM_conversions;
        _6_q_dir_1 = outC->_L2_11_IfBlock1;
        _3_q_dir_1 = _6_q_dir_1;
      }
      else {
        outC->_L2_1_IfBlock1 = ENUM_Q_DIR_both_TM_conversions;
        _4_q_dir_1 = outC->_L2_1_IfBlock1;
        _3_q_dir_1 = _4_q_dir_1;
      }
      _9_q_dir_1 = _3_q_dir_1;
    }
    outC->q_dir_1 = _9_q_dir_1;
  }
  outC->_L356 = outC->q_dir_1;
  outC->_L214 = outC->_L1.valid;
  outC->_L213 = 1;
  outC->_L212 = outC->_L396 - outC->_L213;
  outC->_L206 = 0;
  outC->_L204.nid_packet = outC->_L397;
  outC->_L204.q_dir = outC->_L356;
  outC->_L204.valid = outC->_L214;
  outC->_L204.startAddress = outC->_L206;
  outC->_L204.endAddress = outC->_L212;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->Header, &outC->_L204);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->P027V1_body_compressed,
    &outC->_L383);
  if (outC->IfBlock1_clock_1) {
    outC->_L5_14_IfBlock1 = kcg_false;
    _10_error_1 = outC->_L5_14_IfBlock1;
    outC->error_1 = _10_error_1;
  }
  else {
    if (outC->_2_else_clock_1_IfBlock1) {
      outC->_L5_1_IfBlock1 = kcg_false;
      error_1 = outC->_L5_1_IfBlock1;
      _8_error_1 = error_1;
    }
    else {
      if (outC->else_clock_1_IfBlock1) {
        outC->_L4_1_IfBlock1 = kcg_false;
        _7_error_1 = outC->_L4_1_IfBlock1;
        _2_error_1 = _7_error_1;
      }
      else {
        outC->_L1_1_IfBlock1 = kcg_true;
        _5_error_1 = outC->_L1_1_IfBlock1;
        _2_error_1 = _5_error_1;
      }
      _8_error_1 = _2_error_1;
    }
    outC->error_1 = _8_error_1;
  }
  outC->_L13_1 = outC->error_1;
  noname_1 = outC->_L13_1;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P027V1_tracksim_compr_body_TM_conversions.c
** Generation date: 2015-06-11T11:38:20
*************************************************************$ */

