/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RECV_LookupPacketLoop_TM_lib_internal.h"

/* TM_lib_internal::RECV_LookupPacketLoop */
void RECV_LookupPacketLoop_TM_lib_internal(
  /* TM_lib_internal::RECV_LookupPacketLoop::Index */kcg_int Index,
  /* TM_lib_internal::RECV_LookupPacketLoop::HeaderInit */MetadataElement_T_Common_Types_Pkg *HeaderInit,
  /* TM_lib_internal::RECV_LookupPacketLoop::Message_in */MetadataElement_T_Common_Types_Pkg *Message_in,
  /* TM_lib_internal::RECV_LookupPacketLoop::ID_in */kcg_int ID_in,
  /* TM_lib_internal::RECV_LookupPacketLoop::F_version */kcg_bool F_version,
  /* TM_lib_internal::RECV_LookupPacketLoop::F_id */kcg_bool F_id,
  /* TM_lib_internal::RECV_LookupPacketLoop::Cont */kcg_bool *Cont,
  /* TM_lib_internal::RECV_LookupPacketLoop::HeaderFound */MetadataElement_T_Common_Types_Pkg *HeaderFound)
{
  kcg_copy_MetadataElement_T_Common_Types_Pkg(HeaderFound, Message_in);
  *Cont = !/* 1 */
    T_Filter_Metadata_TM_lib_internal(
      ID_in,
      (*HeaderFound).nid_packet,
      F_version,
      F_id);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RECV_LookupPacketLoop_TM_lib_internal.c
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

