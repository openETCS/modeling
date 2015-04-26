/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */
#ifndef _RECV_ReadPackets_H_
#define _RECV_ReadPackets_H_

#include "kcg_types.h"
#include "RECV_LookupPacket.h"
#include "RECV_ReadPacketKernel.h"

/* =====================  no input structure  ====================== */


/* RECV_ReadPackets */
extern void RECV_ReadPackets(
  /* RECV_ReadPackets::Packets */ CompressedPackets_T_Common_Types_Pkg *Packets,
  /* RECV_ReadPackets::PacketID */ kcg_int PacketID,
  /* RECV_ReadPackets::Data */ CompressedPacketData_T_Common_Types_Pkg *Data,
  /* RECV_ReadPackets::Metadata */ MetadataElement_T_Common_Types_Pkg *Metadata);

#endif /* _RECV_ReadPackets_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** RECV_ReadPackets.h
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */

