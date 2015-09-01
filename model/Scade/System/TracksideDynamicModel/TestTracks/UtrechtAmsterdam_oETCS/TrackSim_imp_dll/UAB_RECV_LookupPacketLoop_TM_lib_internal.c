/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/TrackSim_imp_dll\kcg_s2c_config.txt
** Generation date: 2015-08-27T15:14:25
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "UAB_RECV_LookupPacketLoop_TM_lib_internal.h"

/* TM_lib_internal::RECV_LookupPacketLoop */
void UAB_RECV_LookupPacketLoop_TM_lib_internal(
  /* TM_lib_internal::RECV_LookupPacketLoop::Index */kcg_int Index,
  /* TM_lib_internal::RECV_LookupPacketLoop::HeaderInit */UAB_MetadataElement_T_Common_Types_Pkg *HeaderInit,
  /* TM_lib_internal::RECV_LookupPacketLoop::Message_in */UAB_MetadataElement_T_Common_Types_Pkg *Message_in,
  /* TM_lib_internal::RECV_LookupPacketLoop::ID_in */kcg_int ID_in,
  /* TM_lib_internal::RECV_LookupPacketLoop::F_version */kcg_bool F_version,
  /* TM_lib_internal::RECV_LookupPacketLoop::F_id */kcg_bool F_id,
  /* TM_lib_internal::RECV_LookupPacketLoop::Cont */kcg_bool *Cont,
  /* TM_lib_internal::RECV_LookupPacketLoop::HeaderFound */UAB_MetadataElement_T_Common_Types_Pkg *HeaderFound)
{
  UAB_kcg_copy_MetadataElement_T_Common_Types_Pkg(HeaderFound, Message_in);
  *Cont = !/* 1 */
    UAB_T_Filter_Metadata_TM_lib_internal(
      ID_in,
      (*HeaderFound).nid_packet,
      F_version,
      F_id);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** UAB_RECV_LookupPacketLoop_TM_lib_internal.c
** Generation date: 2015-08-27T15:14:25
*************************************************************$ */

