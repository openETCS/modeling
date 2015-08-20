/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/KCG_MEN_QNX\kcg_s2c_config.txt
** Generation date: 2015-08-20T18:54:31
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "EVC_stub_QNX_Internal_Tests.h"

void EVC_stub_QNX_reset_Internal_Tests(void)
{
}

/* Internal_Tests::EVC_stub_QNX */
void EVC_stub_QNX_Internal_Tests(void)
{
  /* TM_conversions::CAST_Int_to_M_LEVELTR::IfBlock1 */
  static kcg_bool IfBlock1_clock_1_1_1_1_1;
  /* TM_conversions::CAST_Int_to_M_LEVELTR::IfBlock1::else::else */
  static kcg_bool _3_else_clock_1_1_1_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_LEVELTR::IfBlock1::else::else::else::else */
  static kcg_bool _2_else_clock_1_1_1_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_LEVELTR::IfBlock1::else::else::else */
  static kcg_bool _1_else_clock_1_1_1_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_LEVELTR::IfBlock1::else */
  static kcg_bool else_clock_1_1_1_1_1_IfBlock1;
  /* TM_lib_internal::T_Decode_metadata_new::_L5 */
  static kcg_int _L5_1_1_1_1_1_1;
  /* TM_lib_internal::T_Decode_metadata_new::_L5 */
  static kcg_int _L5_2_1_1_1_1_1;
  static kcg_int i;
  static kcg_int _14_noname_1_1_1;
  /* TM_lib_internal::RECV_ReadPacketKernel::_L10 */
  static array_int_500 _L10_1_1_1;
  /* TM_lib_internal::RECV_LookupPacket::_L23 */
  static MetadataElement_T_Common_Types_Pkg _L23_1_1_1;
  /* TM_lib_internal::RECV_ReadPackets::_L4 */
  static array_int_500 _L4_1_1;
  /* TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES::IfBlock1::else */
  static kcg_bool _13_else_clock_1_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_NVDRIVER_ADHES::IfBlock1 */
  static kcg_bool _12_IfBlock1_clock_1_1_1;
  /* TM_conversions::CAST_Int_to_M_NVDERUN::IfBlock1::else */
  static kcg_bool _11_else_clock_1_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_M_NVDERUN::IfBlock1 */
  static kcg_bool _10_IfBlock1_clock_1_1_1;
  /* TM_lib_internal::C_P003V1_unflatten_sections::_L1 */
  static P003V1_OBU_sectionlist_int_T_TM_baseline2 _9__L1_1_1_1;
  /* TM_lib_internal::C_P003V1_unflatten_sections::_L9 */
  static array__11866 _8__L9_1_1_1;
  /* TM_conversions_baseline2::C_P003V1_compr_onboard::_L1 */
  static array_int_24 _L1_1_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */
  static kcg_bool _7_else_clock_1_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */
  static kcg_bool _6_else_clock_1_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1 */
  static kcg_bool _5_IfBlock1_clock_1_1_1;
  /* TM_lib_internal::C_P041_unflatten_sections::_L1 */
  static P041_sections_array_flat_T_TM _L1_1_1_1;
  /* TM_lib_internal::C_P041_unflatten_sections::_L9 */
  static array__11953 _L9_1_1_1;
  /* TM_lib_internal::C_P041_unflatten_sections::_L11 */
  static kcg_bool _L11_1_1_1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else */
  static kcg_bool _4_else_clock_1_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1::else::else */
  static kcg_bool else_clock_1_1_1_IfBlock1;
  /* TM_conversions::CAST_Int_to_Q_SCALE::IfBlock1 */
  static kcg_bool IfBlock1_clock_1_1_1;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else::else */
  static kcg_bool else_clock_1_2_1_IfBlock1;
  static kcg_int noname_1_1_1;
  /* Internal_Tests::EVC_stub_QNX::_L10 */
  static kcg_bool _L10;
  /* Internal_Tests::EVC_stub_QNX::_L12 */
  static kcg_bool _L12;
  /* Internal_Tests::EVC_stub_QNX::_L14 */
  static kcg_bool _L14;
  
  kcg_copy_MetadataElement_T_Common_Types_Pkg(
    &_L23_1_1_1,
    (MetadataElement_T_Common_Types_Pkg *) &DEFAULT_PHeader_TM);
  for (i = 0; i < 30; i++) {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(
      &_L23_1_1_1,
      &BG_data.Messages.PacketHeaders[i]);
    if (!!(137032000 / DIM_offset_metadata_nid_packet_TM_lib_internal ==
        _L23_1_1_1.nid_packet /
        DIM_offset_metadata_nid_packet_TM_lib_internal)) {
      break;
    }
  }
  _L14 = _L23_1_1_1.nid_packet /
    DIM_offset_metadata_nid_packet_TM_lib_internal == 137032000 /
    DIM_offset_metadata_nid_packet_TM_lib_internal;
  if (_L14) {
    for (i = 0; i < 500; i++) {
      if ((0 <= _L23_1_1_1.startAddress + i) & (_L23_1_1_1.startAddress + i <
          500)) {
        _L4_1_1[i] = BG_data.Messages.PacketData[_L23_1_1_1.startAddress + i];
      }
      else {
        _L4_1_1[i] = 0;
      }
      _14_noname_1_1_1 = i + 1;
      if (!(i + 1 <= _L23_1_1_1.endAddress - _L23_1_1_1.startAddress)) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _14_noname_1_1_1; i < 500; i++) {
      _L4_1_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_array_int_500(&_L10_1_1_1, &_L4_1_1);
  }
  else {
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &_L10_1_1_1,
      (array_int_500 *) &DEFAULT_CompressedPackets_TM);
  }
  packet_137.valid = _L10_1_1_1[0] == 137;
  _L12 = _L10_1_1_1[1] == INT_Q_DIR_nomiinal_TM_conversions;
  _10_IfBlock1_clock_1_1_1 = _L10_1_1_1[3] == INT_Q_SRSTOP_go_TM_conversions;
  if (_L12) {
    packet_137.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
  }
  else {
    _13_else_clock_1_1_1_IfBlock1 = _L10_1_1_1[1] ==
      INT_Q_DIR_reverse_TM_conversions;
    if (_13_else_clock_1_1_1_IfBlock1) {
      packet_137.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else {
      _12_IfBlock1_clock_1_1_1 = _L10_1_1_1[1] == INT_Q_DIR_both_TM_conversions;
      if (_12_IfBlock1_clock_1_1_1) {
        packet_137.q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
      else {
        packet_137.q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
    }
  }
  if (_10_IfBlock1_clock_1_1_1) {
    packet_137.q_srstop = ENUM_Q_SRSTOP_go_TM_conversions;
  }
  else {
    _11_else_clock_1_1_1_IfBlock1 = _L10_1_1_1[3] ==
      INT_Q_SRSTOP_stop_TM_conversions;
    if (_11_else_clock_1_1_1_IfBlock1) {
      packet_137.q_srstop = ENUM_Q_SRSTOP_stop_TM_conversions;
    }
    else {
      packet_137.q_srstop = ENUM_Q_SRSTOP_stop_TM_conversions;
    }
  }
  kcg_copy_MetadataElement_T_Common_Types_Pkg(
    &_L23_1_1_1,
    (MetadataElement_T_Common_Types_Pkg *) &DEFAULT_PHeader_TM);
  for (i = 0; i < 30; i++) {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(
      &_L23_1_1_1,
      &BG_data.Messages.PacketHeaders[i]);
    _L5_2_1_1_1_1_1 = _L23_1_1_1.nid_packet %
      DIM_offset_metadata_q_dir_TM_lib_internal;
    _14_noname_1_1_1 = 3016000 % DIM_offset_metadata_q_dir_TM_lib_internal;
    if (!!((3016000 / DIM_offset_metadata_nid_packet_TM_lib_internal ==
          _L23_1_1_1.nid_packet /
          DIM_offset_metadata_nid_packet_TM_lib_internal) & (_L5_2_1_1_1_1_1 /
          DIM_offset_metadata_m_version_TM_lib_internal == _14_noname_1_1_1 /
          DIM_offset_metadata_m_version_TM_lib_internal))) {
      break;
    }
  }
  _L12 = (_L23_1_1_1.nid_packet /
      DIM_offset_metadata_nid_packet_TM_lib_internal == 3016000 /
      DIM_offset_metadata_nid_packet_TM_lib_internal) & (3016000 %
      DIM_offset_metadata_q_dir_TM_lib_internal /
      DIM_offset_metadata_m_version_TM_lib_internal == _L23_1_1_1.nid_packet %
      DIM_offset_metadata_q_dir_TM_lib_internal /
      DIM_offset_metadata_m_version_TM_lib_internal);
  if (_L12) {
    for (i = 0; i < 500; i++) {
      if ((0 <= _L23_1_1_1.startAddress + i) & (_L23_1_1_1.startAddress + i <
          500)) {
        _L10_1_1_1[i] = BG_data.Messages.PacketData[_L23_1_1_1.startAddress +
          i];
      }
      else {
        _L10_1_1_1[i] = 0;
      }
      _14_noname_1_1_1 = i + 1;
      if (!(i + 1 <= _L23_1_1_1.endAddress - _L23_1_1_1.startAddress)) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _14_noname_1_1_1; i < 500; i++) {
      _L10_1_1_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_array_int_500(&_L4_1_1, &_L10_1_1_1);
  }
  else {
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &_L4_1_1,
      (array_int_500 *) &DEFAULT_CompressedPackets_TM);
  }
  kcg_copy_array_int_24(&_L1_1_1, (array_int_24 *) &_L4_1_1[0]);
  packet_003.d_validnv = _L1_1_1[4];
  packet_003.n_iter = _L1_1_1[5];
  packet_003.v_nvshunt = _L1_1_1[6] * 5;
  packet_003.v_nvstff = _L1_1_1[7] * 5;
  packet_003.v_nvonsight = _L1_1_1[8] * 5;
  packet_003.v_nvunfit = _L1_1_1[9] * 5;
  packet_003.v_nvrel = _L1_1_1[10] * 5;
  packet_003.d_nvroll = _L1_1_1[11];
  packet_003.v_nvallowovtrp = _L1_1_1[14] * 5;
  packet_003.v_nvsopovtrp = _L1_1_1[15] * 5;
  packet_003.d_nvovtrp = _L1_1_1[16];
  packet_003.t_nvovtrp = _L1_1_1[17];
  packet_003.d_nvpotrp = _L1_1_1[18];
  packet_003.t_nvcontact = _L1_1_1[20];
  packet_003.d_nvstff = _L1_1_1[22];
  _12_IfBlock1_clock_1_1_1 = _L1_1_1[23] ==
    INT_Q_NVDRIVER_ADHES_Allowed_TM_conversions;
  _10_IfBlock1_clock_1_1_1 = _L1_1_1[21] == INT_M_NVDERUN_no_TM_conversions;
  IfBlock1_clock_1_1_1 = _L1_1_1[19] ==
    INT_M_NVCONTACT_Apply_service_brake_TM_conversions;
  _3_else_clock_1_1_1_1_1_IfBlock1 = _L1_1_1[13] ==
    INT_Q_NVEMRRLS_revoke_at_standstill_TM_conversions;
  _1_else_clock_1_1_1_1_1_IfBlock1 = _L1_1_1[12] ==
    INT_Q_NVSBTSMPERM_Yes_TM_conversions;
  _L10 = _L1_1_1[1] == INT_Q_DIR_nomiinal_TM_conversions;
  kcg_copy_P003V1_OBU_sectionlist_int_T_TM_baseline2(
    &_9__L1_1_1_1,
    (P003V1_OBU_sectionlist_int_T_TM_baseline2 *) &_L4_1_1[24]);
  else_clock_1_2_1_IfBlock1 = _L1_1_1[0] == 3;
  packet_003.valid = else_clock_1_2_1_IfBlock1;
  if (else_clock_1_2_1_IfBlock1) {
    for (i = 0; i < 32; i++) {
      _8__L9_1_1_1[i].valid = kcg_true;
      _8__L9_1_1_1[i].nid_c = _9__L1_1_1_1[i];
      _L5_2_1_1_1_1_1 = i + 1;
      if (!(_L1_1_1[5] > i)) {
        break;
      }
    }
  }
  else {
    _L5_2_1_1_1_1_1 = 0;
  }
#ifdef KCG_MAPW_CPY
  
  for (i = _L5_2_1_1_1_1_1; i < 32; i++) {
    kcg_copy_P003V1_section_enum_T_TM_baseline2(
      &_8__L9_1_1_1[i],
      (P003V1_section_enum_T_TM_baseline2 *)
        &DEFAULT_P003V1_OBU_section_TM_baseline2);
  }
#endif /* KCG_MAPW_CPY */
  
  kcg_copy_P003V1_sectionlist_enum_T_TM_baseline2(
    &packet_003.SECTIONS,
    &_8__L9_1_1_1);
  _7_else_clock_1_1_1_IfBlock1 = _L1_1_1[3] == INT_Q_SCALE_10cm_TM_conversions;
  if (_L10) {
    packet_003.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
  }
  else {
    _6_else_clock_1_1_1_IfBlock1 = _L1_1_1[1] ==
      INT_Q_DIR_reverse_TM_conversions;
    if (_6_else_clock_1_1_1_IfBlock1) {
      packet_003.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else {
      _5_IfBlock1_clock_1_1_1 = _L1_1_1[1] == INT_Q_DIR_both_TM_conversions;
      if (_5_IfBlock1_clock_1_1_1) {
        packet_003.q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
      else {
        packet_003.q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
    }
  }
  if (_7_else_clock_1_1_1_IfBlock1) {
    packet_003.q_scale = ENUM_Q_SCALE_10cm_TM_conversions;
  }
  else {
    else_clock_1_1_1_1_1_IfBlock1 = _L1_1_1[3] == INT_Q_SCALE_1m_TM_conversions;
    if (else_clock_1_1_1_1_1_IfBlock1) {
      packet_003.q_scale = ENUM_Q_SCALE_1m_TM_conversions;
    }
    else {
      _L11_1_1_1 = _L1_1_1[3] == INT_Q_SCALE_10m_TM_conversions;
      if (_L11_1_1_1) {
        packet_003.q_scale = ENUM_Q_SCALE_10m_TM_conversions;
      }
      else {
        packet_003.q_scale = ENUM_Q_SCALE_10cm_TM_conversions;
      }
    }
  }
  if (_1_else_clock_1_1_1_1_1_IfBlock1) {
    packet_003.q_nvsbtsmperm = ENUM_Q_NVSBTSMPERM_Yes_TM_conversions;
  }
  else {
    _2_else_clock_1_1_1_1_1_IfBlock1 = _L1_1_1[12] ==
      INT_Q_NVSBTSMPERM_No_TM_conversions;
    if (_2_else_clock_1_1_1_1_1_IfBlock1) {
      packet_003.q_nvsbtsmperm = ENUM_Q_NVSBTSMPERM_No_TM_conversions;
    }
    else {
      packet_003.q_nvsbtsmperm = ENUM_Q_NVSBTSMPERM_No_TM_conversions;
    }
  }
  if (_3_else_clock_1_1_1_1_1_IfBlock1) {
    packet_003.q_nvemrrls = ENUM_Q_NVEMRRLS_revoke_at_standstill_TM_conversions;
  }
  else {
    IfBlock1_clock_1_1_1_1_1 = _L1_1_1[13] ==
      INT_Q_NVEMRRLS_revoke_when_no_speed_exceeded_TM_conversions;
    if (IfBlock1_clock_1_1_1_1_1) {
      packet_003.q_nvemrrls =
        ENUM_Q_NVEMRRLS_revoke_when_no_speed_exceeded_TM_conversions;
    }
    else {
      packet_003.q_nvemrrls =
        ENUM_Q_NVEMRRLS_revoke_at_standstill_TM_conversions;
    }
  }
  if (IfBlock1_clock_1_1_1) {
    packet_003.m_nvcontact = ENUM_M_NVCONTACT_No_Reaction_TM_conversions;
  }
  else {
    _4_else_clock_1_1_1_IfBlock1 = _L1_1_1[19] ==
      INT_M_NVCONTACT_No_Reaction_TM_conversions;
    if (_4_else_clock_1_1_1_IfBlock1) {
      packet_003.m_nvcontact =
        ENUM_M_NVCONTACT_Apply_service_brake_TM_conversions;
    }
    else {
      else_clock_1_1_1_IfBlock1 = _L1_1_1[19] ==
        INT_M_NVCONTACT_Train_trip_TM_conversions;
      if (else_clock_1_1_1_IfBlock1) {
        packet_003.m_nvcontact = ENUM_M_NVCONTACT_Train_trip_TM_conversions;
      }
      else {
        packet_003.m_nvcontact = ENUM_M_NVCONTACT_Train_trip_TM_conversions;
      }
    }
  }
  if (_10_IfBlock1_clock_1_1_1) {
    packet_003.m_nvderun = ENUM_M_NVDERUN_no_TM_conversions;
  }
  else {
    _11_else_clock_1_1_1_IfBlock1 = _L1_1_1[21] ==
      INT_M_NVDERUN_yes_TM_conversions;
    if (_11_else_clock_1_1_1_IfBlock1) {
      packet_003.m_nvderun = ENUM_M_NVDERUN_yes_TM_conversions;
    }
    else {
      packet_003.m_nvderun = ENUM_M_NVDERUN_yes_TM_conversions;
    }
  }
  if (_12_IfBlock1_clock_1_1_1) {
    packet_003.q_nvdriver_adhes = ENUM_Q_NVDRIVER_ADHES_Allowed_TM_conversions;
  }
  else {
    _13_else_clock_1_1_1_IfBlock1 = _L1_1_1[23] ==
      INT_Q_NVDRIVER_ADHES_NotAllowed_TM_conversions;
    if (_13_else_clock_1_1_1_IfBlock1) {
      packet_003.q_nvdriver_adhes =
        ENUM_Q_NVDRIVER_ADHES_NotAllowed_TM_conversions;
    }
    else {
      packet_003.q_nvdriver_adhes =
        ENUM_Q_NVDRIVER_ADHES_NotAllowed_TM_conversions;
    }
  }
  kcg_copy_MetadataElement_T_Common_Types_Pkg(
    &_L23_1_1_1,
    (MetadataElement_T_Common_Types_Pkg *) &DEFAULT_PHeader_TM);
  for (i = 0; i < 30; i++) {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(
      &_L23_1_1_1,
      &BG_data.Messages.PacketHeaders[i]);
    if (!!(41032000 / DIM_offset_metadata_nid_packet_TM_lib_internal ==
        _L23_1_1_1.nid_packet /
        DIM_offset_metadata_nid_packet_TM_lib_internal)) {
      break;
    }
  }
  _L10 = _L23_1_1_1.nid_packet /
    DIM_offset_metadata_nid_packet_TM_lib_internal == 41032000 /
    DIM_offset_metadata_nid_packet_TM_lib_internal;
  if (_L10) {
    for (i = 0; i < 500; i++) {
      if ((0 <= _L23_1_1_1.startAddress + i) & (_L23_1_1_1.startAddress + i <
          500)) {
        _L10_1_1_1[i] = BG_data.Messages.PacketData[_L23_1_1_1.startAddress +
          i];
      }
      else {
        _L10_1_1_1[i] = 0;
      }
      _14_noname_1_1_1 = i + 1;
      if (!(i + 1 <= _L23_1_1_1.endAddress - _L23_1_1_1.startAddress)) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _14_noname_1_1_1; i < 500; i++) {
      _L10_1_1_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_array_int_500(&_L4_1_1, &_L10_1_1_1);
  }
  else {
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &_L4_1_1,
      (array_int_500 *) &DEFAULT_CompressedPackets_TM);
  }
  packet_041.d_leveltr = _L4_1_1[4];
  packet_041.n_iter = _L4_1_1[5];
  _5_IfBlock1_clock_1_1_1 = _L4_1_1[1] == INT_Q_DIR_nomiinal_TM_conversions;
  kcg_copy_P041_sections_array_flat_T_TM(
    &_L1_1_1_1,
    (P041_sections_array_flat_T_TM *) &_L4_1_1[6]);
  _L11_1_1_1 = _L4_1_1[0] == 41;
  packet_041.valid = _L11_1_1_1;
  if (_L11_1_1_1) {
    for (i = 0; i < 33; i++) {
      _L9_1_1_1[i].valid = kcg_true;
      _L5_2_1_1_1_1_1 = i * DIM_P041_n_sections_TM_lib_internal;
      if ((0 <= _L5_2_1_1_1_1_1 + 0) & (_L5_2_1_1_1_1_1 + 0 < 99)) {
        noname_1_1_1 = _L1_1_1_1[_L5_2_1_1_1_1_1 + 0];
      }
      else {
        noname_1_1_1 = 0;
      }
      IfBlock1_clock_1_1_1_1_1 = noname_1_1_1 ==
        INT_M_LEVELTR_Level_0_TM_conversions;
      if (IfBlock1_clock_1_1_1_1_1) {
        _L9_1_1_1[i].m_leveltr = ENUM_M_LEVELTR_Level_0_TM_conversions;
      }
      else {
        else_clock_1_1_1_1_1_IfBlock1 = noname_1_1_1 ==
          INT_M_LEVELTR_Level_1_TM_conversions;
        if (else_clock_1_1_1_1_1_IfBlock1) {
          _L9_1_1_1[i].m_leveltr = ENUM_M_LEVELTR_Level_1_TM_conversions;
        }
        else {
          _3_else_clock_1_1_1_1_1_IfBlock1 = noname_1_1_1 ==
            INT_M_LEVELTR_Level_2_TM_conversions;
          if (_3_else_clock_1_1_1_1_1_IfBlock1) {
            _L9_1_1_1[i].m_leveltr = ENUM_M_LEVELTR_Level_2_TM_conversions;
          }
          else {
            _1_else_clock_1_1_1_1_1_IfBlock1 = noname_1_1_1 ==
              INT_M_LEVELTR_Level_3_TM_conversions;
            if (_1_else_clock_1_1_1_1_1_IfBlock1) {
              _L9_1_1_1[i].m_leveltr = ENUM_M_LEVELTR_Level_3_TM_conversions;
            }
            else {
              _2_else_clock_1_1_1_1_1_IfBlock1 = noname_1_1_1 ==
                INT_M_LEVELTR_Level_NTC_TM_conversions;
              if (_2_else_clock_1_1_1_1_1_IfBlock1) {
                _L9_1_1_1[i].m_leveltr =
                  ENUM_M_LEVELTR_Level_NTC_TM_conversions;
              }
              else {
                _L9_1_1_1[i].m_leveltr =
                  ENUM_M_LEVELTR_Level_NTC_TM_conversions;
              }
            }
          }
        }
      }
      if ((0 <= _L5_2_1_1_1_1_1 + 1) & (_L5_2_1_1_1_1_1 + 1 < 99)) {
        _L9_1_1_1[i].nid_ntc = _L1_1_1_1[_L5_2_1_1_1_1_1 + 1];
      }
      else {
        _L9_1_1_1[i].nid_ntc = 0;
      }
      if ((0 <= _L5_2_1_1_1_1_1 + 2) & (_L5_2_1_1_1_1_1 + 2 < 99)) {
        _L9_1_1_1[i].l_ackleveltr = _L1_1_1_1[_L5_2_1_1_1_1_1 + 2];
      }
      else {
        _L9_1_1_1[i].l_ackleveltr = 0;
      }
      _L5_1_1_1_1_1_1 = i + 1;
      if (!(_L4_1_1[5] > i)) {
        break;
      }
    }
  }
  else {
    _L5_1_1_1_1_1_1 = 0;
  }
#ifdef KCG_MAPW_CPY
  
  for (i = _L5_1_1_1_1_1_1; i < 33; i++) {
    kcg_copy_P041_section_enum_T_TM(
      &_L9_1_1_1[i],
      (P041_section_enum_T_TM *) &DEFAULT_P041_OBU_section_TM_lib_internal);
  }
#endif /* KCG_MAPW_CPY */
  
  kcg_copy_P041_OBU_sectionlist_enum_T_TM(&packet_041.sections, &_L9_1_1_1);
  IfBlock1_clock_1_1_1 = _L4_1_1[3] == INT_Q_SCALE_10cm_TM_conversions;
  if (_5_IfBlock1_clock_1_1_1) {
    packet_041.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
  }
  else {
    _7_else_clock_1_1_1_IfBlock1 = _L4_1_1[1] ==
      INT_Q_DIR_reverse_TM_conversions;
    if (_7_else_clock_1_1_1_IfBlock1) {
      packet_041.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else {
      _6_else_clock_1_1_1_IfBlock1 = _L4_1_1[1] ==
        INT_Q_DIR_both_TM_conversions;
      if (_6_else_clock_1_1_1_IfBlock1) {
        packet_041.q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
      else {
        packet_041.q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
    }
  }
  if (IfBlock1_clock_1_1_1) {
    packet_041.q_scale = ENUM_Q_SCALE_10cm_TM_conversions;
  }
  else {
    _4_else_clock_1_1_1_IfBlock1 = _L4_1_1[3] == INT_Q_SCALE_1m_TM_conversions;
    if (_4_else_clock_1_1_1_IfBlock1) {
      packet_041.q_scale = ENUM_Q_SCALE_1m_TM_conversions;
    }
    else {
      else_clock_1_1_1_IfBlock1 = _L4_1_1[3] == INT_Q_SCALE_10m_TM_conversions;
      if (else_clock_1_1_1_IfBlock1) {
        packet_041.q_scale = ENUM_Q_SCALE_10m_TM_conversions;
      }
      else {
        packet_041.q_scale = ENUM_Q_SCALE_10cm_TM_conversions;
      }
    }
  }
  kcg_copy_MetadataElement_T_Common_Types_Pkg(
    &_L23_1_1_1,
    (MetadataElement_T_Common_Types_Pkg *) &DEFAULT_PHeader_TM);
  for (i = 0; i < 30; i++) {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(
      &_L23_1_1_1,
      &BG_data.Messages.PacketHeaders[i]);
    if (!!(42032000 / DIM_offset_metadata_nid_packet_TM_lib_internal ==
        _L23_1_1_1.nid_packet /
        DIM_offset_metadata_nid_packet_TM_lib_internal)) {
      break;
    }
  }
  _10_IfBlock1_clock_1_1_1 = _L23_1_1_1.nid_packet /
    DIM_offset_metadata_nid_packet_TM_lib_internal == 42032000 /
    DIM_offset_metadata_nid_packet_TM_lib_internal;
  if (_10_IfBlock1_clock_1_1_1) {
    for (i = 0; i < 500; i++) {
      if ((0 <= _L23_1_1_1.startAddress + i) & (_L23_1_1_1.startAddress + i <
          500)) {
        _L10_1_1_1[i] = BG_data.Messages.PacketData[_L23_1_1_1.startAddress +
          i];
      }
      else {
        _L10_1_1_1[i] = 0;
      }
      noname_1_1_1 = i + 1;
      if (!(i + 1 <= _L23_1_1_1.endAddress - _L23_1_1_1.startAddress)) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = noname_1_1_1; i < 500; i++) {
      _L10_1_1_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_array_int_500(&_L4_1_1, &_L10_1_1_1);
  }
  else {
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &_L4_1_1,
      (array_int_500 *) &DEFAULT_CompressedPackets_TM);
  }
  packet_042.valid = _L4_1_1[0] == 42;
  packet_042.nid_c = _L4_1_1[4];
  packet_042.nid_rbc = _L4_1_1[5];
  packet_042.nid_radio = _L4_1_1[6];
  _11_else_clock_1_1_1_IfBlock1 = _L4_1_1[7] ==
    INT_Q_SLEEPSESSION_execute_TM_conversions;
  _13_else_clock_1_1_1_IfBlock1 = _L4_1_1[1] ==
    INT_Q_DIR_nomiinal_TM_conversions;
  _1_else_clock_1_1_1_1_1_IfBlock1 = _L4_1_1[3] ==
    INT_Q_RBC_establish_TM_conversions;
  if (_13_else_clock_1_1_1_IfBlock1) {
    packet_042.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
  }
  else {
    else_clock_1_1_1_1_1_IfBlock1 = _L4_1_1[1] ==
      INT_Q_DIR_reverse_TM_conversions;
    if (else_clock_1_1_1_1_1_IfBlock1) {
      packet_042.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else {
      else_clock_1_2_1_IfBlock1 = _L4_1_1[1] == INT_Q_DIR_both_TM_conversions;
      if (else_clock_1_2_1_IfBlock1) {
        packet_042.q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
      else {
        packet_042.q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
    }
  }
  if (_1_else_clock_1_1_1_1_1_IfBlock1) {
    packet_042.q_rbc = ENUM_Q_RBC_establish_TM_conversions;
  }
  else {
    _2_else_clock_1_1_1_1_1_IfBlock1 = _L4_1_1[3] ==
      INT_Q_RBC_terminate_TM_conversions;
    if (_2_else_clock_1_1_1_1_1_IfBlock1) {
      packet_042.q_rbc = ENUM_Q_RBC_terminate_TM_conversions;
    }
    else {
      packet_042.q_rbc = ENUM_Q_RBC_terminate_TM_conversions;
    }
  }
  if (_11_else_clock_1_1_1_IfBlock1) {
    packet_042.q_sleepsession = ENUM_Q_SLEEPSESSION_execute_TM_conversions;
  }
  else {
    _12_IfBlock1_clock_1_1_1 = _L4_1_1[7] ==
      INT_Q_SLEEPSESSION_ignore_TM_conversions;
    if (_12_IfBlock1_clock_1_1_1) {
      packet_042.q_sleepsession = ENUM_Q_SLEEPSESSION_ignore_TM_conversions;
    }
    else {
      packet_042.q_sleepsession = ENUM_Q_SLEEPSESSION_execute_TM_conversions;
    }
  }
  kcg_copy_MetadataElement_T_Common_Types_Pkg(
    &_L23_1_1_1,
    (MetadataElement_T_Common_Types_Pkg *) &DEFAULT_PHeader_TM);
  for (i = 0; i < 30; i++) {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(
      &_L23_1_1_1,
      &BG_data.Messages.PacketHeaders[i]);
    if (!!(45032000 / DIM_offset_metadata_nid_packet_TM_lib_internal ==
        _L23_1_1_1.nid_packet /
        DIM_offset_metadata_nid_packet_TM_lib_internal)) {
      break;
    }
  }
  _3_else_clock_1_1_1_1_1_IfBlock1 = _L23_1_1_1.nid_packet /
    DIM_offset_metadata_nid_packet_TM_lib_internal == 45032000 /
    DIM_offset_metadata_nid_packet_TM_lib_internal;
  if (_3_else_clock_1_1_1_1_1_IfBlock1) {
    for (i = 0; i < 500; i++) {
      if ((0 <= _L23_1_1_1.startAddress + i) & (_L23_1_1_1.startAddress + i <
          500)) {
        _L10_1_1_1[i] = BG_data.Messages.PacketData[_L23_1_1_1.startAddress +
          i];
      }
      else {
        _L10_1_1_1[i] = 0;
      }
      _14_noname_1_1_1 = i + 1;
      if (!(i + 1 <= _L23_1_1_1.endAddress - _L23_1_1_1.startAddress)) {
        break;
      }
    }
#ifdef KCG_MAPW_CPY
    
    for (i = _14_noname_1_1_1; i < 500; i++) {
      _L10_1_1_1[i] = 0;
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_array_int_500(&_L4_1_1, &_L10_1_1_1);
  }
  else {
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &_L4_1_1,
      (array_int_500 *) &DEFAULT_CompressedPackets_TM);
  }
  packet_045.valid = _L4_1_1[0] == 45;
  packet_045.nid_mn = _L4_1_1[3];
  IfBlock1_clock_1_1_1_1_1 = _L4_1_1[1] == INT_Q_DIR_nomiinal_TM_conversions;
  if (IfBlock1_clock_1_1_1_1_1) {
    packet_045.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
  }
  else {
    _6_else_clock_1_1_1_IfBlock1 = _L4_1_1[1] ==
      INT_Q_DIR_reverse_TM_conversions;
    if (_6_else_clock_1_1_1_IfBlock1) {
      packet_045.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else {
      _5_IfBlock1_clock_1_1_1 = _L4_1_1[1] == INT_Q_DIR_both_TM_conversions;
      if (_5_IfBlock1_clock_1_1_1) {
        packet_045.q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
      else {
        packet_045.q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
    }
  }
  kcg_copy_BaliseTelegramHeader_int_T_TM(&BaliseHeader, &BG_data.Header);
  packet_received = _L12 | _L10 | _10_IfBlock1_clock_1_1_1 |
    _3_else_clock_1_1_1_1_1_IfBlock1 | _L14;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** EVC_stub_QNX_Internal_Tests.c
** Generation date: 2015-08-20T18:54:31
*************************************************************$ */

