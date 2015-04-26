/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RECV_ReadPacketKernel.h"

/* RECV_ReadPacketKernel */
void RECV_ReadPacketKernel(
  /* RECV_ReadPacketKernel::Header */ MetadataElement_T_Common_Types_Pkg *Header,
  /* RECV_ReadPacketKernel::PacketData */ CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* RECV_ReadPacketKernel::PacketOut */ CompressedPacketData_T_Common_Types_Pkg *PacketOut)
{
  kcg_bool tmp;
  kcg_int i;
  /* RECV_ReadPacketKernel::_L22 */ kcg_int _L22;
  
  for (i = 0; i < 500; i++) {
    /* 1 */
    RECV_ReadPacketKernelLoop(
      i,
      PacketData,
      (*Header).startAddress,
      (*Header).endAddress,
      &tmp,
      &(*PacketOut)[i]);
    _L22 = i + 1;
    if (!tmp) {
      break;
    }
  }
#ifdef KCG_MAPW_CPY
  
  for (i = _L22; i < 500; i++) {
    (*PacketOut)[i] = 0;
  }
#endif /* KCG_MAPW_CPY */
  
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** RECV_ReadPacketKernel.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

