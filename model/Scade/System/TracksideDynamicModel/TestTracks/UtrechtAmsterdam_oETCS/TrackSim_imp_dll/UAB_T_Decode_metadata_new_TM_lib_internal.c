/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/TrackSim_imp_dll\kcg_s2c_config.txt
** Generation date: 2015-08-27T15:14:25
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "UAB_T_Decode_metadata_new_TM_lib_internal.h"

/* TM_lib_internal::T_Decode_metadata_new */
void UAB_T_Decode_metadata_new_TM_lib_internal(
  /* TM_lib_internal::T_Decode_metadata_new::Metadata_in */kcg_int Metadata_in,
  /* TM_lib_internal::T_Decode_metadata_new::nid_packet */kcg_int *nid_packet,
  /* TM_lib_internal::T_Decode_metadata_new::id */kcg_int *id,
  /* TM_lib_internal::T_Decode_metadata_new::m_version */kcg_int *m_version)
{
  /* TM_lib_internal::T_Decode_metadata_new::_L5 */
  static kcg_int _L5;
  
  _L5 = Metadata_in % UAB_DIM_offset_metadata_q_dir_TM_lib_internal;
  *id = _L5 % UAB_DIM_offset_metadata_m_version_TM_lib_internal /
    UAB_DIM_offset_metadata_id_TM_lib_internal;
  *m_version = _L5 / UAB_DIM_offset_metadata_m_version_TM_lib_internal;
  *nid_packet = Metadata_in /
    UAB_DIM_offset_metadata_nid_packet_TM_lib_internal;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** UAB_T_Decode_metadata_new_TM_lib_internal.c
** Generation date: 2015-08-27T15:14:25
*************************************************************$ */

