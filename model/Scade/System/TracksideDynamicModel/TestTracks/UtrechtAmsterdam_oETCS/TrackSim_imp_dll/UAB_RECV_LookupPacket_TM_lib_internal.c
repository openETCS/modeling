/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/TrackSim_imp_dll\kcg_s2c_config.txt
** Generation date: 2015-08-27T15:14:25
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "UAB_RECV_LookupPacket_TM_lib_internal.h"

/* TM_lib_internal::RECV_LookupPacket */
void UAB_RECV_LookupPacket_TM_lib_internal(
  /* TM_lib_internal::RECV_LookupPacket::Message_ID */kcg_int Message_ID,
  /* TM_lib_internal::RECV_LookupPacket::HeadersIN */UAB_Metadata_T_Common_Types_Pkg *HeadersIN,
  /* TM_lib_internal::RECV_LookupPacket::F_version */kcg_bool F_version,
  /* TM_lib_internal::RECV_LookupPacket::F_id */kcg_bool F_id,
  /* TM_lib_internal::RECV_LookupPacket::Found */kcg_bool *Found,
  /* TM_lib_internal::RECV_LookupPacket::Index */kcg_int *Index,
  /* TM_lib_internal::RECV_LookupPacket::HeaderFound */UAB_MetadataElement_T_Common_Types_Pkg *HeaderFound)
{
  static UAB_MetadataElement_T_Common_Types_Pkg tmp1;
  static kcg_bool tmp;
  static kcg_int i;
  /* TM_lib_internal::RECV_LookupPacket::_L4 */
  static kcg_int _L4;
  /* TM_lib_internal::RECV_LookupPacket::_L23 */
  static UAB_MetadataElement_T_Common_Types_Pkg _L23;
  
  UAB_kcg_copy_MetadataElement_T_Common_Types_Pkg(
    &_L23,
    (UAB_MetadataElement_T_Common_Types_Pkg *) &UAB_DEFAULT_PHeader_TM);
  for (i = 0; i < 30; i++) {
    UAB_kcg_copy_MetadataElement_T_Common_Types_Pkg(&tmp1, &_L23);
    /* 1 */
    UAB_RECV_LookupPacketLoop_TM_lib_internal(
      i,
      &tmp1,
      &(*HeadersIN)[i],
      Message_ID,
      F_version,
      F_id,
      &tmp,
      &_L23);
    _L4 = i + 1;
    if (!tmp) {
      break;
    }
  }
  *Found = /* 1 */
    UAB_T_Filter_Metadata_TM_lib_internal(
      _L23.nid_packet,
      Message_ID,
      F_version,
      F_id);
  *Index = _L4 - 1;
  if (*Found) {
    UAB_kcg_copy_MetadataElement_T_Common_Types_Pkg(HeaderFound, &_L23);
  }
  else {
    UAB_kcg_copy_MetadataElement_T_Common_Types_Pkg(
      HeaderFound,
      (UAB_MetadataElement_T_Common_Types_Pkg *) &UAB_DEFAULT_PHeader_TM);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** UAB_RECV_LookupPacket_TM_lib_internal.c
** Generation date: 2015-08-27T15:14:25
*************************************************************$ */

