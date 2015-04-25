/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RECV_ReadPacketKernelLoop.h"

/* RECV_ReadPacketKernelLoop */
void RECV_ReadPacketKernelLoop(
  /* RECV_ReadPacketKernelLoop::Index */ kcg_int Index,
  /* RECV_ReadPacketKernelLoop::PacketData */ CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* RECV_ReadPacketKernelLoop::AddressStart */ kcg_int AddressStart,
  /* RECV_ReadPacketKernelLoop::AddressEnd */ kcg_int AddressEnd,
  /* RECV_ReadPacketKernelLoop::Cont */ kcg_bool *Cont,
  /* RECV_ReadPacketKernelLoop::PacketOut */ kcg_int *PacketOut)
{
  if ((0 <= AddressStart + Index) & (AddressStart + Index < 500)) {
    *PacketOut = (*PacketData)[AddressStart + Index];
  }
  else {
    *PacketOut = 0;
  }
  *Cont = Index + 1 <= AddressEnd - AddressStart;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** RECV_ReadPacketKernelLoop.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

