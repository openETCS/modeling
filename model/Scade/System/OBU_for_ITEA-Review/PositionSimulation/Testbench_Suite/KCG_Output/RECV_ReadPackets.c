/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "RECV_ReadPackets.h"

/* RECV_ReadPackets */
void RECV_ReadPackets(
  /* RECV_ReadPackets::Packets */ CompressedPackets_T_Common_Types_Pkg *Packets,
  /* RECV_ReadPackets::PacketID */ kcg_int PacketID,
  /* RECV_ReadPackets::Data */ CompressedPacketData_T_Common_Types_Pkg *Data,
  /* RECV_ReadPackets::Metadata */ MetadataElement_T_Common_Types_Pkg *Metadata)
{
  /* RECV_ReadPackets::_L2 */ kcg_int _L2;
  /* RECV_ReadPackets::_L1 */ kcg_bool _L1;
  
  /* 1 */
  RECV_LookupPacket(PacketID, &(*Packets).PacketHeaders, &_L1, &_L2, Metadata);
  if (_L1) {
    /* 1 */ RECV_ReadPacketKernel(Metadata, &(*Packets).PacketData, Data);
  }
  else {
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      Data,
      (CompressedPacketData_T_Common_Types_Pkg *) &DEFAULT_RadioData);
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** RECV_ReadPackets.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

