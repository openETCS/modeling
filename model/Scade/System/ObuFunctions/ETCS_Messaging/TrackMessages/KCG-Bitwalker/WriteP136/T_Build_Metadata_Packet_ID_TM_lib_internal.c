/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/KCG-Bitwalker/WriteP136\kcg_s2c_config.txt
** Generation date: 2015-08-21T16:10:26
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "T_Build_Metadata_Packet_ID_TM_lib_internal.h"

/* TM_lib_internal::T_Build_Metadata_Packet_ID */
nid_packet_meta_TM T_Build_Metadata_Packet_ID_TM_lib_internal(
  /* TM_lib_internal::T_Build_Metadata_Packet_ID::nid_packet_in */kcg_int nid_packet_in,
  /* TM_lib_internal::T_Build_Metadata_Packet_ID::q_dir */kcg_int q_dir,
  /* TM_lib_internal::T_Build_Metadata_Packet_ID::id */kcg_int id,
  /* TM_lib_internal::T_Build_Metadata_Packet_ID::nid_packet_defined */NID_PACKET nid_packet_defined,
  /* TM_lib_internal::T_Build_Metadata_Packet_ID::m_version */kcg_int m_version)
{
  /* TM_lib_internal::T_Build_Metadata_Packet_ID::nid_packet_meta */ nid_packet_meta_TM nid_packet_meta;
  
  if (nid_packet_in == nid_packet_defined) {
    nid_packet_meta = nid_packet_defined *
      DIM_offset_metadata_nid_packet_TM_lib_internal + m_version *
      DIM_offset_metadata_m_version_TM_lib_internal + q_dir *
      DIM_offset_metadata_q_dir_TM_lib_internal + id *
      DIM_offset_metadata_id_TM_lib_internal;
  }
  else {
    nid_packet_meta = ERROR_nid_packet_TM;
  }
  return nid_packet_meta;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** T_Build_Metadata_Packet_ID_TM_lib_internal.c
** Generation date: 2015-08-21T16:10:26
*************************************************************$ */

