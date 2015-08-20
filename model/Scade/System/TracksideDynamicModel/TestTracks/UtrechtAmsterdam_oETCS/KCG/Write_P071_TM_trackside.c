/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-17T14:25:09
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_P071_TM_trackside.h"

void Write_P071_reset_TM_trackside(void)
{
}

/* TM_trackside::Write_P071 */
void Write_P071_TM_trackside(void)
{
  static kcg_bool tmp2;
  static kcg_bool tmp1;
  static kcg_int i;
  static MetadataElement_T_Common_Types_Pkg tmp;
  /* TM_conversions::CAST_Int_to_Q_DIR::IfBlock1::else */
  static kcg_bool else_clock_1_1_IfBlock1;
  static kcg_int noname_1;
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L7 */
  static kcg_int _L7_1;
  /* TM_lib_internal::SEND_WriteBaliseMessageHeader::_L3 */
  static kcg_int _L3_1;
  /* TM_trackside::Write_P071::_L10 */
  static CompressedPacketData_T_Common_Types_Pkg _L10;
  /* TM_trackside::Write_P071::_L21 */
  static kcg_int _L21;
  /* TM_trackside::Write_P071::_L44 */
  static CompressedPacketData_T_Common_Types_Pkg _L44;
  
  Error = kcg_false;
  (&_L44[0])[0] = Packet71.NID_PACKET;
  (&_L44[0])[1] = Packet71.Q_DIR;
  (&_L44[0])[2] = Packet71.L_PACKET;
  (&_L44[0])[3] = Packet71.Q_SCALE;
  (&_L44[0])[4] = Packet71.D_ADHESION;
  (&_L44[0])[5] = Packet71.L_ADHESION;
  (&_L44[0])[6] = Packet71.M_ADHESION;
  tmp.valid = Packet71.valid;
  tmp.startAddress = 0;
  tmp.endAddress = DIM_MaxElementsPacket071_TM - 1;
  tmp2 = Packet71.Q_DIR == INT_Q_DIR_nomiinal_TM_conversions;
  if (Packet71.NID_PACKET == 71) {
    tmp.nid_packet = 71 * DIM_offset_metadata_nid_packet_TM_lib_internal +
      INT_M_VERSION_2_0_TM * DIM_offset_metadata_m_version_TM_lib_internal +
      Packet71.Q_DIR * DIM_offset_metadata_q_dir_TM_lib_internal + 0 *
      DIM_offset_metadata_id_TM_lib_internal;
  }
  else {
    tmp.nid_packet = ERROR_nid_packet_TM;
  }
  if (tmp2) {
    tmp.q_dir = ENUM_Q_DIR_nominal_TM_conversions;
  }
  else {
    else_clock_1_1_IfBlock1 = Packet71.Q_DIR ==
      INT_Q_DIR_reverse_TM_conversions;
    if (else_clock_1_1_IfBlock1) {
      tmp.q_dir = ENUM_Q_DIR_reverse_TM_conversions;
    }
    else {
      tmp1 = Packet71.Q_DIR == INT_Q_DIR_both_TM_conversions;
      if (tmp1) {
        tmp.q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
      else {
        tmp.q_dir = ENUM_Q_DIR_both_TM_conversions;
      }
    }
  }
  _L7_1 = 0;
  for (i = 0; i < 30; i++) {
    _L21 = _L7_1;
    tmp2 = Packets.PacketHeaders[i].nid_packet !=
      DEFAULT_Headers_TM[i].nid_packet;
    if (tmp2) {
      _L7_1 = Packets.PacketHeaders[i].endAddress;
    }
    else {
      _L7_1 = _L21;
    }
    _L3_1 = i + 1;
    if (!tmp2) {
      break;
    }
  }
  if (_L7_1 == 0) {
    _L21 = 0;
  }
  else {
    _L21 = _L7_1 + 1;
  }
  _L7_1 = _L21 + (tmp.endAddress - tmp.startAddress);
  for (i = 0; i < 493; i++) {
    (&_L44[7])[i] = 0;
  }
  for (i = 0; i < 500; i++) {
    tmp1 = _L7_1 >= i;
    if (tmp1 & (i >= _L21)) {
      if ((0 <= i - _L21) & (i - _L21 < 500)) {
        _L10[i] = _L44[i - _L21];
      }
      else {
        _L10[i] = 0;
      }
    }
    else {
      _L10[i] = Packets.PacketData[i];
    }
    noname_1 = i + 1;
    if (!tmp1) {
      break;
    }
  }
#ifdef KCG_MAPW_CPY
  
  for (i = noname_1; i < 500; i++) {
    _L10[i] = 0;
  }
#endif /* KCG_MAPW_CPY */
  
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &RadioPacketsOut.PacketData,
    &_L10);
  kcg_copy_Metadata_T_Common_Types_Pkg(
    &RadioPacketsOut.PacketHeaders,
    &Packets.PacketHeaders);
  tmp.startAddress = _L21;
  tmp.endAddress = _L7_1;
  if ((0 <= _L3_1 - 1) & (_L3_1 - 1 < 30)) {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(
      &RadioPacketsOut.PacketHeaders[_L3_1 - 1],
      &tmp);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Write_P071_TM_trackside.c
** Generation date: 2015-08-17T14:25:09
*************************************************************$ */

