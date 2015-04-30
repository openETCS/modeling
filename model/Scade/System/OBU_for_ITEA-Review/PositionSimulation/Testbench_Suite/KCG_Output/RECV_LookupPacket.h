/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */
#ifndef _RECV_LookupPacket_H_
#define _RECV_LookupPacket_H_

#include "kcg_types.h"
#include "RECV_LookupPacketLoop.h"

/* =====================  no input structure  ====================== */


/* RECV_LookupPacket */
extern void RECV_LookupPacket(
  /* RECV_LookupPacket::Message_ID */ kcg_int Message_ID,
  /* RECV_LookupPacket::HeadersIN */ Metadata_T_Common_Types_Pkg *HeadersIN,
  /* RECV_LookupPacket::Found */ kcg_bool *Found,
  /* RECV_LookupPacket::Index */ kcg_int *Index,
  /* RECV_LookupPacket::HeaderFound */ MetadataElement_T_Common_Types_Pkg *HeaderFound);

#endif /* _RECV_LookupPacket_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** RECV_LookupPacket.h
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */

