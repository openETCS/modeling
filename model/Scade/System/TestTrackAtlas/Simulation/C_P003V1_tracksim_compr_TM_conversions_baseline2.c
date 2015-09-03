/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-28T11:32:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P003V1_tracksim_compr_TM_conversions_baseline2.h"

void C_P003V1_tracksim_compr_reset_TM_conversions_baseline2(
  outC_C_P003V1_tracksim_compr_TM_conversions_baseline2 *outC)
{
  /* 1 */ T_DeterminePacketSizeInt_reset_TM_lib_internal(&outC->Context_1);
  /* 2 */ T_Build_Metadata_Packet_ID_reset_TM_lib_internal(&outC->Context_2);
}

/* TM_conversions_baseline2::C_P003V1_tracksim_compr */
void C_P003V1_tracksim_compr_TM_conversions_baseline2(
  /* TM_conversions_baseline2::C_P003V1_tracksim_compr::P003V1_from_track */P003V1_trackside_int_T_TM_baseline2 *P003V1_from_track,
  outC_C_P003V1_tracksim_compr_TM_conversions_baseline2 *outC)
{
  kcg_int i;
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
  
  kcg_copy_P003V1_trackside_int_T_TM_baseline2(&outC->_L1, P003V1_from_track);
  outC->_L404 = outC->_L1.Q_NVDRIVER_ADHES;
  outC->_L403 = outC->_L1.D_NVSTFF;
  outC->_L402 = outC->_L1.M_NVDERUN;
  outC->_L401 = outC->_L1.T_NVCONTACT;
  outC->_L400 = outC->_L1.M_NVCONTACT;
  outC->_L399 = outC->_L1.D_NVPOTRP;
  outC->_L398 = outC->_L1.T_NVOVTRP;
  outC->_L397 = outC->_L1.D_NVOVTRP;
  outC->_L396 = outC->_L1.V_NVSUPOVTRP;
  outC->_L395 = outC->_L1.V_NVALLOWOVTRP;
  outC->_L409 = outC->_L1.Q_NVEMRRLS;
  outC->_L394 = outC->_L1.Q_NVSRBKTRG;
  outC->_L393 = outC->_L1.D_NVROLL;
  outC->_L392 = outC->_L1.V_NVREL;
  outC->_L391 = outC->_L1.V_NVUNFIT;
  outC->_L390 = outC->_L1.V_NVONSIGHT;
  outC->_L389 = outC->_L1.V_NVSTFF;
  outC->_L388 = outC->_L1.V_NVSHUNT;
  kcg_copy_P003V1_trackide_sectionlist_T_TM_baseline2(
    &outC->_L365,
    &outC->_L1.SECTIONS);
  outC->_L366 = outC->_L1.N_ITER;
  outC->_L218 = outC->_L1.D_VALIDNV;
  outC->_L217 = outC->_L1.Q_SCALE;
  outC->_L216 = outC->_L1.L_PACKET;
  outC->_L215 = outC->_L1.Q_DIR;
  outC->_L387 = outC->_L1.NID_PACKET;
  /* 2 */
  T_Build_Metadata_Packet_ID_TM_lib_internal(
    outC->_L387,
    outC->_L215,
    0,
    3,
    INT_M_VERSION_1_0_TM,
    &outC->Context_2);
  outC->_L412 = outC->Context_2.nid_packet_meta;
  kcg_copy_P003V1_trackide_sectionlist_T_TM_baseline2(
    &outC->sections,
    &outC->_L365);
  kcg_copy_P003V1_trackide_sectionlist_T_TM_baseline2(
    &outC->_L408,
    &outC->sections);
  outC->_L407[0] = outC->_L388;
  outC->_L407[1] = outC->_L389;
  outC->_L407[2] = outC->_L390;
  outC->_L407[3] = outC->_L391;
  outC->_L407[4] = outC->_L392;
  outC->_L407[5] = outC->_L393;
  outC->_L407[6] = outC->_L394;
  outC->_L407[7] = outC->_L409;
  outC->_L407[8] = outC->_L395;
  outC->_L407[9] = outC->_L396;
  outC->_L407[10] = outC->_L397;
  outC->_L407[11] = outC->_L398;
  outC->_L407[12] = outC->_L399;
  outC->_L407[13] = outC->_L400;
  outC->_L407[14] = outC->_L401;
  outC->_L407[15] = outC->_L402;
  outC->_L407[16] = outC->_L403;
  outC->_L407[17] = outC->_L404;
  outC->_L373[0] = outC->_L387;
  outC->_L373[1] = outC->_L215;
  outC->_L373[2] = outC->_L216;
  outC->_L373[3] = outC->_L217;
  outC->_L373[4] = outC->_L218;
  outC->_L373[5] = outC->_L366;
  kcg_copy_array_int_6(&outC->_L381[0], &outC->_L373);
  kcg_copy_array_int_18(&outC->_L381[6], &outC->_L407);
  kcg_copy_array_int_24(&outC->_L384[0], &outC->_L381);
  kcg_copy_P003V1_trackide_sectionlist_T_TM_baseline2(
    &outC->_L384[24],
    &outC->_L408);
  outC->_L336 = 0;
  for (i = 0; i < 444; i++) {
    outC->_L209[i] = outC->_L336;
  }
  kcg_copy_array_int_56(&outC->_L383[0], &outC->_L384);
  kcg_copy_array_int_444(&outC->_L383[56], &outC->_L209);
  /* 1 */
  T_DeterminePacketSizeInt_TM_lib_internal(
    outC->_L366,
    6 + 17,
    1,
    &outC->Context_1);
  outC->_L379 = outC->Context_1.p_size;
  outC->p_size = outC->_L379;
  outC->_L378 = outC->p_size;
  outC->q_dir_int_1 = outC->_L215;
  outC->_L12_1 = outC->q_dir_int_1;
  outC->q_dir_in_1 = outC->_L12_1;
  outC->IfBlock1_clock_1 = outC->q_dir_in_1 ==
    INT_Q_DIR_nomiinal_TM_conversions;
  if (outC->IfBlock1_clock_1) {
    outC->_L4_13_IfBlock1 = ENUM_Q_DIR_nominal_TM_conversions;
    _10_q_dir_1 = outC->_L4_13_IfBlock1;
    outC->q_dir_1 = _10_q_dir_1;
  }
  else {
    outC->_2_else_clock_1_IfBlock1 = outC->q_dir_in_1 ==
      INT_Q_DIR_reverse_TM_conversions;
    if (outC->_2_else_clock_1_IfBlock1) {
      outC->_L3_1_IfBlock1 = ENUM_Q_DIR_reverse_TM_conversions;
      q_dir_1 = outC->_L3_1_IfBlock1;
      _8_q_dir_1 = q_dir_1;
    }
    else {
      outC->else_clock_1_IfBlock1 = outC->q_dir_in_1 ==
        INT_Q_DIR_both_TM_conversions;
      if (outC->else_clock_1_IfBlock1) {
        outC->_L2_11_IfBlock1 = ENUM_Q_DIR_both_TM_conversions;
        _5_q_dir_1 = outC->_L2_11_IfBlock1;
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
  outC->_L356 = outC->q_dir_1;
  outC->_L214 = outC->_L1.valid;
  outC->_L213 = 1;
  outC->_L212 = outC->_L378 - outC->_L213;
  outC->_L206 = 0;
  outC->_L204.nid_packet = outC->_L412;
  outC->_L204.q_dir = outC->_L356;
  outC->_L204.valid = outC->_L214;
  outC->_L204.startAddress = outC->_L206;
  outC->_L204.endAddress = outC->_L212;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->Header, &outC->_L204);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->P003V1_compressed,
    &outC->_L383);
  if (outC->IfBlock1_clock_1) {
    outC->_L5_14_IfBlock1 = kcg_false;
    _9_error_1 = outC->_L5_14_IfBlock1;
    outC->error_1 = _9_error_1;
  }
  else {
    if (outC->_2_else_clock_1_IfBlock1) {
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
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P003V1_tracksim_compr_TM_conversions_baseline2.c
** Generation date: 2015-08-28T11:32:44
*************************************************************$ */

