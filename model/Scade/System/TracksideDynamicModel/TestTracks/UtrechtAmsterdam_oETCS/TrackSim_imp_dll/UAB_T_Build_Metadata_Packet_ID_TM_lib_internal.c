/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/TrackSim_imp_dll\kcg_s2c_config.txt
** Generation date: 2015-08-20T20:42:32
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "UAB_T_Build_Metadata_Packet_ID_TM_lib_internal.h"

/* TM_lib_internal::T_Build_Metadata_Packet_ID */
UAB_nid_packet_meta_TM UAB_T_Build_Metadata_Packet_ID_TM_lib_internal(
  /* TM_lib_internal::T_Build_Metadata_Packet_ID::nid_packet_in */kcg_int nid_packet_in,
  /* TM_lib_internal::T_Build_Metadata_Packet_ID::q_dir */kcg_int q_dir,
  /* TM_lib_internal::T_Build_Metadata_Packet_ID::id */kcg_int id,
  /* TM_lib_internal::T_Build_Metadata_Packet_ID::nid_packet_defined */UAB_NID_PACKET nid_packet_defined,
  /* TM_lib_internal::T_Build_Metadata_Packet_ID::m_version */kcg_int m_version)
{
  /* TM_lib_internal::T_Build_Metadata_Packet_ID::nid_packet_meta */
  static UAB_nid_packet_meta_TM nid_packet_meta;
  
  if (nid_packet_in == nid_packet_defined) {
    nid_packet_meta = nid_packet_defined *
      UAB_DIM_offset_metadata_nid_packet_TM_lib_internal + m_version *
      UAB_DIM_offset_metadata_m_version_TM_lib_internal + q_dir *
      UAB_DIM_offset_metadata_q_dir_TM_lib_internal + id *
      UAB_DIM_offset_metadata_id_TM_lib_internal;
  }
  else {
    nid_packet_meta = UAB_ERROR_nid_packet_TM;
  }
  return nid_packet_meta;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** UAB_T_Build_Metadata_Packet_ID_TM_lib_internal.c
** Generation date: 2015-08-20T20:42:32
*************************************************************$ */

