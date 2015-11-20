/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RECV_ReadPacketKernelLoop_TM_lib_internal.h"

/* TM_lib_internal::RECV_ReadPacketKernelLoop */
void RECV_ReadPacketKernelLoop_TM_lib_internal(
  /* TM_lib_internal::RECV_ReadPacketKernelLoop::Index */kcg_int Index,
  /* TM_lib_internal::RECV_ReadPacketKernelLoop::PacketData */CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* TM_lib_internal::RECV_ReadPacketKernelLoop::AddressStart */kcg_int AddressStart,
  /* TM_lib_internal::RECV_ReadPacketKernelLoop::AddressEnd */kcg_int AddressEnd,
  /* TM_lib_internal::RECV_ReadPacketKernelLoop::Cont */kcg_bool *Cont,
  /* TM_lib_internal::RECV_ReadPacketKernelLoop::PacketOut */kcg_int *PacketOut)
{
  if ((0 <= AddressStart + Index) & (AddressStart + Index < 500)) {
    *PacketOut = (*PacketData)[AddressStart + Index];
  }
  else {
    *PacketOut = 0;
  }
  *Cont = Index + 1 <= AddressEnd - AddressStart;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RECV_ReadPacketKernelLoop_TM_lib_internal.c
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

