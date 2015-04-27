/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */
#ifndef _RECV_LookupPacketLoop_H_
#define _RECV_LookupPacketLoop_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */


/* RECV_LookupPacketLoop */
extern void RECV_LookupPacketLoop(
  /* RECV_LookupPacketLoop::Index */ kcg_int Index,
  /* RECV_LookupPacketLoop::HeaderInit */ MetadataElement_T_Common_Types_Pkg *HeaderInit,
  /* RECV_LookupPacketLoop::Message_in */ MetadataElement_T_Common_Types_Pkg *Message_in,
  /* RECV_LookupPacketLoop::ID_in */ kcg_int ID_in,
  /* RECV_LookupPacketLoop::Cont */ kcg_bool *Cont,
  /* RECV_LookupPacketLoop::HeaderFound */ MetadataElement_T_Common_Types_Pkg *HeaderFound);

#endif /* _RECV_LookupPacketLoop_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** RECV_LookupPacketLoop.h
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */

