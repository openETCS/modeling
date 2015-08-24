/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/KCG-Bitwalker/ReadP136\kcg_s2c_config.txt
** Generation date: 2015-08-21T16:12:21
*************************************************************$ */
#ifndef _RECV_LookupPacket_TM_lib_internal_H_
#define _RECV_LookupPacket_TM_lib_internal_H_

#include "kcg_types.h"
#include "RECV_LookupPacketLoop_TM_lib_internal.h"
#include "T_Filter_Metadata_TM_lib_internal.h"

/* =====================  no input structure  ====================== */


/* TM_lib_internal::RECV_LookupPacket */
extern void RECV_LookupPacket_TM_lib_internal(
  /* TM_lib_internal::RECV_LookupPacket::Message_ID */kcg_int Message_ID,
  /* TM_lib_internal::RECV_LookupPacket::HeadersIN */Metadata_T_Common_Types_Pkg *HeadersIN,
  /* TM_lib_internal::RECV_LookupPacket::F_version */kcg_bool F_version,
  /* TM_lib_internal::RECV_LookupPacket::F_id */kcg_bool F_id,
  /* TM_lib_internal::RECV_LookupPacket::Found */kcg_bool *Found,
  /* TM_lib_internal::RECV_LookupPacket::Index */kcg_int *Index,
  /* TM_lib_internal::RECV_LookupPacket::HeaderFound */MetadataElement_T_Common_Types_Pkg *HeaderFound);

#endif /* _RECV_LookupPacket_TM_lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** RECV_LookupPacket_TM_lib_internal.h
** Generation date: 2015-08-21T16:12:21
*************************************************************$ */

