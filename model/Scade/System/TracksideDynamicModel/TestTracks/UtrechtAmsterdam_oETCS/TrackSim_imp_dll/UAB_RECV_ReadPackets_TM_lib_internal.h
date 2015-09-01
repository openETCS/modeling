/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/TrackSim_imp_dll\kcg_s2c_config.txt
** Generation date: 2015-08-27T15:14:25
*************************************************************$ */
#ifndef _UAB_RECV_ReadPackets_TM_lib_internal_H_
#define _UAB_RECV_ReadPackets_TM_lib_internal_H_

#include "kcg_types.h"
#include "UAB_RECV_LookupPacket_TM_lib_internal.h"
#include "UAB_RECV_ReadPacketKernel_TM_lib_internal.h"

/* =====================  no input structure  ====================== */


/* TM_lib_internal::RECV_ReadPackets */
extern void UAB_RECV_ReadPackets_TM_lib_internal(
  /* TM_lib_internal::RECV_ReadPackets::Packets */UAB_CompressedPackets_T_Common_Types_Pkg *Packets,
  /* TM_lib_internal::RECV_ReadPackets::PacketID */kcg_int PacketID,
  /* TM_lib_internal::RECV_ReadPackets::F_version */kcg_bool F_version,
  /* TM_lib_internal::RECV_ReadPackets::F_id */kcg_bool F_id,
  /* TM_lib_internal::RECV_ReadPackets::Data */UAB_array_int_500 *Data,
  /* TM_lib_internal::RECV_ReadPackets::Metadata */UAB_MetadataElement_T_Common_Types_Pkg *Metadata,
  /* TM_lib_internal::RECV_ReadPackets::received */kcg_bool *received);

#endif /* _UAB_RECV_ReadPackets_TM_lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** UAB_RECV_ReadPackets_TM_lib_internal.h
** Generation date: 2015-08-27T15:14:25
*************************************************************$ */

