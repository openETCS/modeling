/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-28T11:32:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P041_tracksim_compr_TM_conversions.h"

void C_P041_tracksim_compr_reset_TM_conversions(
  outC_C_P041_tracksim_compr_TM_conversions *outC)
{
  /* 1 */ T_DeterminePacketSizeInt_reset_TM_lib_internal(&outC->_2_Context_1);
  /* 1 */ C_P041_flatten_sections_reset_TM_lib_internal(&outC->_1_Context_1);
  /* 1 */ T_Build_Metadata_Packet_ID_reset_TM_lib_internal(&outC->Context_1);
}

/* TM_conversions::C_P041_tracksim_compr */
void C_P041_tracksim_compr_TM_conversions(
  /* TM_conversions::C_P041_tracksim_compr::P041_from_track */P041_trackside_int_T_TM *P041_from_track,
  outC_C_P041_tracksim_compr_TM_conversions *outC)
{
  kcg_int i2;
  kcg_int i1;
  kcg_int i;
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
  kcg_bool noname_1;
  
  kcg_copy_P041_trackside_int_T_TM(&outC->_L1, P041_from_track);
  kcg_copy_P041_trackide_sectionlist_T_TM(&outC->_L368, &outC->_L1.SECTIONS);
  outC->_L369 = outC->_L1.N_ITER;
  outC->_L370 = outC->_L1.L_ACKLEVELTR;
  outC->_L371 = outC->_L1.NID_NTC;
  outC->_L219 = outC->_L1.M_LEVELTR;
  outC->_L218 = outC->_L1.D_LEVELTR;
  outC->_L217 = outC->_L1.Q_SCALE;
  outC->_L216 = outC->_L1.L_PACKET;
  outC->_L215 = outC->_L1.Q_DIR;
  outC->_L387 = outC->_L1.NID_PACKET;
  /* 1 */
  T_Build_Metadata_Packet_ID_TM_lib_internal(
    outC->_L387,
    outC->_L215,
    0,
    41,
    INT_M_VERSION_2_0_TM,
    &outC->Context_1);
  outC->_L388 = outC->Context_1.nid_packet_meta;
  outC->_L375.M_LEVELTR = outC->_L219;
  outC->_L375.NID_NTC = outC->_L371;
  outC->_L375.L_ACKLEVELTR = outC->_L370;
  for (i2 = 0; i2 < 1; i2++) {
    kcg_copy_P041_section_int_T_TM(&outC->_L386[i2], &outC->_L375);
  }
  kcg_copy_array__10848(&outC->_L385[0], &outC->_L386);
  kcg_copy_P041_trackide_sectionlist_T_TM(&outC->_L385[1], &outC->_L368);
  outC->_L373[0] = outC->_L387;
  outC->_L373[1] = outC->_L215;
  outC->_L373[2] = outC->_L216;
  outC->_L373[3] = outC->_L217;
  outC->_L373[4] = outC->_L218;
  for (i1 = 0; i1 < 1; i1++) {
    outC->_L376[i1] = outC->_L369;
  }
  kcg_copy_array_int_5(&outC->_L381[0], &outC->_L373);
  kcg_copy_array_int_1(&outC->_L381[5], &outC->_L376);
  /* 1 */
  C_P041_flatten_sections_TM_lib_internal(&outC->_L385, &outC->_1_Context_1);
  kcg_copy_P041_sections_array_flat_T_TM(
    &outC->_L380,
    &outC->_1_Context_1.Flattened);
  kcg_copy_array_int_6(&outC->_L384[0], &outC->_L381);
  kcg_copy_P041_sections_array_flat_T_TM(&outC->_L384[6], &outC->_L380);
  outC->_L336 = 0;
  for (i = 0; i < 395; i++) {
    outC->_L209[i] = outC->_L336;
  }
  kcg_copy_array_int_105(&outC->_L383[0], &outC->_L384);
  kcg_copy_array_int_395(&outC->_L383[105], &outC->_L209);
  /* 1 */
  T_DeterminePacketSizeInt_TM_lib_internal(
    outC->_L369,
    5 + 1 + 3,
    3,
    &outC->_2_Context_1);
  outC->_L379 = outC->_2_Context_1.p_size;
  outC->p_size = outC->_L379;
  outC->_L378 = outC->p_size;
  outC->q_dir_int_1 = outC->_L215;
  outC->_L12_1 = outC->q_dir_int_1;
  outC->q_dir_in_1 = outC->_L12_1;
  outC->IfBlock1_clock_1 = outC->q_dir_in_1 ==
    INT_Q_DIR_nomiinal_TM_conversions;
  if (outC->IfBlock1_clock_1) {
    outC->_L4_15_IfBlock1 = ENUM_Q_DIR_nominal_TM_conversions;
    _12_q_dir_1 = outC->_L4_15_IfBlock1;
    outC->q_dir_1 = _12_q_dir_1;
  }
  else {
    outC->_4_else_clock_1_IfBlock1 = outC->q_dir_in_1 ==
      INT_Q_DIR_reverse_TM_conversions;
    if (outC->_4_else_clock_1_IfBlock1) {
      outC->_L3_1_IfBlock1 = ENUM_Q_DIR_reverse_TM_conversions;
      q_dir_1 = outC->_L3_1_IfBlock1;
      _10_q_dir_1 = q_dir_1;
    }
    else {
      outC->else_clock_1_IfBlock1 = outC->q_dir_in_1 ==
        INT_Q_DIR_both_TM_conversions;
      if (outC->else_clock_1_IfBlock1) {
        outC->_L2_13_IfBlock1 = ENUM_Q_DIR_both_TM_conversions;
        _7_q_dir_1 = outC->_L2_13_IfBlock1;
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
  outC->_L356 = outC->q_dir_1;
  outC->_L214 = outC->_L1.valid;
  outC->_L213 = 1;
  outC->_L212 = outC->_L378 - outC->_L213;
  outC->_L206 = 0;
  outC->_L204.nid_packet = outC->_L388;
  outC->_L204.q_dir = outC->_L356;
  outC->_L204.valid = outC->_L214;
  outC->_L204.startAddress = outC->_L206;
  outC->_L204.endAddress = outC->_L212;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->Header, &outC->_L204);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->P005_compressed,
    &outC->_L383);
  if (outC->IfBlock1_clock_1) {
    outC->_L5_16_IfBlock1 = kcg_false;
    _11_error_1 = outC->_L5_16_IfBlock1;
    outC->error_1 = _11_error_1;
  }
  else {
    if (outC->_4_else_clock_1_IfBlock1) {
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
  noname_1 = outC->_L13_1;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P041_tracksim_compr_TM_conversions.c
** Generation date: 2015-08-28T11:32:44
*************************************************************$ */

