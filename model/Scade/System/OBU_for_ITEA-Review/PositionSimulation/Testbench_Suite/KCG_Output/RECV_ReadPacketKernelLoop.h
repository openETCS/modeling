/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */
#ifndef _RECV_ReadPacketKernelLoop_H_
#define _RECV_ReadPacketKernelLoop_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */


/* RECV_ReadPacketKernelLoop */
extern void RECV_ReadPacketKernelLoop(
  /* RECV_ReadPacketKernelLoop::Index */ kcg_int Index,
  /* RECV_ReadPacketKernelLoop::PacketData */ CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* RECV_ReadPacketKernelLoop::AddressStart */ kcg_int AddressStart,
  /* RECV_ReadPacketKernelLoop::AddressEnd */ kcg_int AddressEnd,
  /* RECV_ReadPacketKernelLoop::Cont */ kcg_bool *Cont,
  /* RECV_ReadPacketKernelLoop::PacketOut */ kcg_int *PacketOut);

#endif /* _RECV_ReadPacketKernelLoop_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** RECV_ReadPacketKernelLoop.h
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */

