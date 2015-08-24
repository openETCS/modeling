/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/KCG-Bitwalker/ReadP071\kcg_s2c_config.txt
** Generation date: 2015-08-21T16:11:55
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RECV_LookupPacket_TM_lib_internal.h"

/* TM_lib_internal::RECV_LookupPacket */
void RECV_LookupPacket_TM_lib_internal(
  /* TM_lib_internal::RECV_LookupPacket::Message_ID */kcg_int Message_ID,
  /* TM_lib_internal::RECV_LookupPacket::HeadersIN */Metadata_T_Common_Types_Pkg *HeadersIN,
  /* TM_lib_internal::RECV_LookupPacket::F_version */kcg_bool F_version,
  /* TM_lib_internal::RECV_LookupPacket::F_id */kcg_bool F_id,
  /* TM_lib_internal::RECV_LookupPacket::Found */kcg_bool *Found,
  /* TM_lib_internal::RECV_LookupPacket::Index */kcg_int *Index,
  /* TM_lib_internal::RECV_LookupPacket::HeaderFound */MetadataElement_T_Common_Types_Pkg *HeaderFound)
{
  MetadataElement_T_Common_Types_Pkg tmp1;
  kcg_bool tmp;
  kcg_int i;
  /* TM_lib_internal::RECV_LookupPacket::_L4 */ kcg_int _L4;
  /* TM_lib_internal::RECV_LookupPacket::_L23 */ MetadataElement_T_Common_Types_Pkg _L23;
  
  kcg_copy_MetadataElement_T_Common_Types_Pkg(
    &_L23,
    (MetadataElement_T_Common_Types_Pkg *) &DEFAULT_PHeader_TM);
  for (i = 0; i < 30; i++) {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(&tmp1, &_L23);
    /* 1 */
    RECV_LookupPacketLoop_TM_lib_internal(
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
    T_Filter_Metadata_TM_lib_internal(
      _L23.nid_packet,
      Message_ID,
      F_version,
      F_id);
  *Index = _L4 - 1;
  if (*Found) {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(HeaderFound, &_L23);
  }
  else {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(
      HeaderFound,
      (MetadataElement_T_Common_Types_Pkg *) &DEFAULT_PHeader_TM);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RECV_LookupPacket_TM_lib_internal.c
** Generation date: 2015-08-21T16:11:55
*************************************************************$ */

