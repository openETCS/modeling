/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-28T11:32:44
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RECV_ReadPacketKernelLoop_TM_lib_internal.h"

void RECV_ReadPacketKernelLoop_reset_TM_lib_internal(
  outC_RECV_ReadPacketKernelLoop_TM_lib_internal *outC)
{
}

/* TM_lib_internal::RECV_ReadPacketKernelLoop */
void RECV_ReadPacketKernelLoop_TM_lib_internal(
  /* TM_lib_internal::RECV_ReadPacketKernelLoop::Index */kcg_int Index,
  /* TM_lib_internal::RECV_ReadPacketKernelLoop::PacketData */CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* TM_lib_internal::RECV_ReadPacketKernelLoop::AddressStart */kcg_int AddressStart,
  /* TM_lib_internal::RECV_ReadPacketKernelLoop::AddressEnd */kcg_int AddressEnd,
  outC_RECV_ReadPacketKernelLoop_TM_lib_internal *outC)
{
  outC->_L34 = 1;
  outC->_L1 = Index;
  outC->_L33 = outC->_L1 + outC->_L34;
  outC->_L4 = AddressEnd;
  outC->_L31 = AddressStart;
  outC->_L32 = outC->_L4 - outC->_L31;
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&outC->_L9, PacketData);
  outC->_L3 = AddressStart;
  outC->_L20 = Index;
  outC->_L29 = outC->_L3 + outC->_L20;
  if ((0 <= outC->_L29) & (outC->_L29 < 500)) {
    outC->_L30 = outC->_L9[outC->_L29];
  }
  else {
    outC->_L30 = 0;
  }
  outC->_L18 = outC->_L33 <= outC->_L32;
  outC->Cont = outC->_L18;
  outC->PacketOut = outC->_L30;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** RECV_ReadPacketKernelLoop_TM_lib_internal.c
** Generation date: 2015-08-28T11:32:44
*************************************************************$ */

