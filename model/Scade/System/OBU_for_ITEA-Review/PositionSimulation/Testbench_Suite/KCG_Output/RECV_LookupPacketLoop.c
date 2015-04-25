/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RECV_LookupPacketLoop.h"

/* RECV_LookupPacketLoop */
void RECV_LookupPacketLoop(
  /* RECV_LookupPacketLoop::Index */ kcg_int Index,
  /* RECV_LookupPacketLoop::HeaderInit */ MetadataElement_T_Common_Types_Pkg *HeaderInit,
  /* RECV_LookupPacketLoop::Message_in */ MetadataElement_T_Common_Types_Pkg *Message_in,
  /* RECV_LookupPacketLoop::ID_in */ kcg_int ID_in,
  /* RECV_LookupPacketLoop::Cont */ kcg_bool *Cont,
  /* RECV_LookupPacketLoop::HeaderFound */ MetadataElement_T_Common_Types_Pkg *HeaderFound)
{
  kcg_copy_MetadataElement_T_Common_Types_Pkg(HeaderFound, Message_in);
  *Cont = !(ID_in == (*HeaderFound).nid_packet);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** RECV_LookupPacketLoop.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

