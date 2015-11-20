/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "T_Build_Metadata_Packet_ID_TM_lib_internal.h"

/* TM_lib_internal::T_Build_Metadata_Packet_ID */
nid_packet_meta_TM T_Build_Metadata_Packet_ID_TM_lib_internal(
  /* TM_lib_internal::T_Build_Metadata_Packet_ID::nid_packet_in */ kcg_int nid_packet_in,
  /* TM_lib_internal::T_Build_Metadata_Packet_ID::q_dir */ kcg_int q_dir,
  /* TM_lib_internal::T_Build_Metadata_Packet_ID::id */ kcg_int id,
  /* TM_lib_internal::T_Build_Metadata_Packet_ID::nid_packet_defined */ NID_PACKET nid_packet_defined,
  /* TM_lib_internal::T_Build_Metadata_Packet_ID::m_version */ kcg_int m_version)
{
  static kcg_bool noname;
  /* TM_lib_internal::T_Build_Metadata_Packet_ID::_L1 */
  static kcg_int _L1;
  /* TM_lib_internal::T_Build_Metadata_Packet_ID::_L2 */
  static kcg_int _L2;
  /* TM_lib_internal::T_Build_Metadata_Packet_ID::_L3 */
  static NID_PACKET _L3;
  /* TM_lib_internal::T_Build_Metadata_Packet_ID::_L4 */
  static kcg_bool _L4;
  /* TM_lib_internal::T_Build_Metadata_Packet_ID::_L6 */
  static kcg_bool _L6;
  /* TM_lib_internal::T_Build_Metadata_Packet_ID::_L8 */
  static kcg_int _L8;
  /* TM_lib_internal::T_Build_Metadata_Packet_ID::_L9 */
  static kcg_int _L9;
  /* TM_lib_internal::T_Build_Metadata_Packet_ID::_L10 */
  static kcg_int _L10;
  /* TM_lib_internal::T_Build_Metadata_Packet_ID::_L11 */
  static kcg_int _L11;
  /* TM_lib_internal::T_Build_Metadata_Packet_ID::_L12 */
  static kcg_int _L12;
  /* TM_lib_internal::T_Build_Metadata_Packet_ID::_L13 */
  static kcg_int _L13;
  /* TM_lib_internal::T_Build_Metadata_Packet_ID::_L14 */
  static kcg_int _L14;
  /* TM_lib_internal::T_Build_Metadata_Packet_ID::_L18 */
  static kcg_int _L18;
  /* TM_lib_internal::T_Build_Metadata_Packet_ID::_L20 */
  static kcg_int _L20;
  /* TM_lib_internal::T_Build_Metadata_Packet_ID::_L22 */
  static kcg_int _L22;
  /* TM_lib_internal::T_Build_Metadata_Packet_ID::_L17 */
  static kcg_int _L17;
  /* TM_lib_internal::T_Build_Metadata_Packet_ID::_L16 */
  static kcg_int _L16;
  /* TM_lib_internal::T_Build_Metadata_Packet_ID::_L15 */
  static kcg_int _L15;
  /* TM_lib_internal::T_Build_Metadata_Packet_ID::nid_packet_meta */
  static nid_packet_meta_TM nid_packet_meta;
  
  _L1 = nid_packet_in;
  _L2 = m_version;
  _L3 = nid_packet_defined;
  _L4 = _L1 == _L3;
  _L10 = DIM_offset_metadata_nid_packet_TM_lib_internal;
  _L9 = _L3 * _L10;
  _L13 = DIM_offset_metadata_m_version_TM_lib_internal;
  _L14 = _L2 * _L13;
  _L15 = q_dir;
  _L16 = DIM_offset_metadata_q_dir_TM_lib_internal;
  _L17 = _L15 * _L16;
  _L18 = id;
  _L20 = DIM_offset_metadata_id_TM_lib_internal;
  _L22 = _L18 * _L20;
  _L11 = _L9 + _L14 + _L17 + _L22;
  _L8 = ERROR_nid_packet_TM;
  /* 1 */ if (_L4) {
    _L12 = _L11;
  }
  else {
    _L12 = _L8;
  }
  nid_packet_meta = _L12;
  _L6 = !_L4;
  noname = _L6;
  return nid_packet_meta;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** T_Build_Metadata_Packet_ID_TM_lib_internal.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

