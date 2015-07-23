/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P057_tracksim_compr_TM_conversions.h"

void C_P057_tracksim_compr_reset_TM_conversions(
  outC_C_P057_tracksim_compr_TM_conversions *outC)
{
  /* 2 */ T_Build_Metadata_Packet_ID_reset_TM_lib_internal(&outC->Context_2);
}

/* TM_conversions::C_P057_tracksim_compr */
void C_P057_tracksim_compr_TM_conversions(
  /* TM_conversions::C_P057_tracksim_compr::P057_from_track */P057_trackside_int_T_TM *P057_from_track,
  outC_C_P057_tracksim_compr_TM_conversions *outC)
{
  static kcg_int i;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR _10_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool _9_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR _8_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool _7_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool _6_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR _5_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool _4_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR _3_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR _2_q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool _1_error_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::q_dir */
  static Q_DIR q_dir_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::error */
  static kcg_bool error_1;
  static kcg_bool noname_1;
  
  kcg_copy_P057_trackside_int_T_TM(&outC->_L1, P057_from_track);
  outC->_L391 = outC->_L1.T_CYCRQST;
  outC->_L392 = outC->_L1.T_TIMEOUTRQST;
  outC->_L217 = outC->_L1.T_MAR;
  outC->_L216 = outC->_L1.L_PACKET;
  outC->_L215 = outC->_L1.Q_DIR;
  outC->_L387 = outC->_L1.NID_PACKET;
  /* 2 */
  T_Build_Metadata_Packet_ID_TM_lib_internal(
    outC->_L387,
    outC->_L215,
    0,
    57,
    INT_M_VERSION_2_0_TM,
    &outC->Context_2);
  outC->_L394 = outC->Context_2.nid_packet_meta;
  outC->_L388 = DIM_MaxElementsPacket057_TM;
  outC->_L373[0] = outC->_L387;
  outC->_L373[1] = outC->_L215;
  outC->_L373[2] = outC->_L216;
  outC->_L373[3] = outC->_L217;
  outC->_L373[4] = outC->_L392;
  outC->_L373[5] = outC->_L391;
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
  outC->_L212 = outC->_L388 - outC->_L213;
  outC->_L206 = 0;
  outC->_L204.nid_packet = outC->_L394;
  outC->_L204.q_dir = outC->_L356;
  outC->_L204.valid = outC->_L214;
  outC->_L204.startAddress = outC->_L206;
  outC->_L204.endAddress = outC->_L212;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->Header, &outC->_L204);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->P005_compressed,
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
** C_P057_tracksim_compr_TM_conversions.c
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

