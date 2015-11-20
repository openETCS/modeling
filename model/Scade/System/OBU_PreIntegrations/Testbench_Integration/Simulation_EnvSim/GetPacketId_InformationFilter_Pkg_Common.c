/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GetPacketId_InformationFilter_Pkg_Common.h"

/* InformationFilter_Pkg::Common::GetPacketId */
kcg_int GetPacketId_InformationFilter_Pkg_Common(
  /* InformationFilter_Pkg::Common::GetPacketId::inPacket */MetadataElement_T_Common_Types_Pkg *inPacket)
{
  /* InformationFilter_Pkg::Common::GetPacketId::outPacketId */
  static kcg_int outPacketId;
  
  outPacketId = /* 1 */
    T_extract_nid_packet_from_metadata_selector_TM((*inPacket).nid_packet);
  return outPacketId;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** GetPacketId_InformationFilter_Pkg_Common.c
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

