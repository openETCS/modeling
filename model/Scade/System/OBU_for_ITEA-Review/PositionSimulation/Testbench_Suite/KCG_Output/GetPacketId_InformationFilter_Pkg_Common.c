/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GetPacketId_InformationFilter_Pkg_Common.h"

/* InformationFilter_Pkg::Common::GetPacketId */
kcg_int GetPacketId_InformationFilter_Pkg_Common(
  /* InformationFilter_Pkg::Common::GetPacketId::inPacket */ MetadataElement_T_Common_Types_Pkg *inPacket)
{
  /* InformationFilter_Pkg::Common::GetPacketId::outPacketId */ kcg_int outPacketId;
  
  outPacketId = (*inPacket).nid_packet;
  return outPacketId;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** GetPacketId_InformationFilter_Pkg_Common.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

