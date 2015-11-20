/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GetPacketId_InformationFilter_Pkg_Common.h"

/* InformationFilter_Pkg::Common::GetPacketId */
kcg_int GetPacketId_InformationFilter_Pkg_Common(
  /* InformationFilter_Pkg::Common::GetPacketId::inPacket */ MetadataElement_T_Common_Types_Pkg *inPacket)
{
  /* InformationFilter_Pkg::Common::GetPacketId::_L1 */
  static MetadataElement_T_Common_Types_Pkg _L1;
  /* InformationFilter_Pkg::Common::GetPacketId::_L5 */
  static kcg_int _L5;
  /* InformationFilter_Pkg::Common::GetPacketId::_L6 */
  static NID_PACKET _L6;
  /* InformationFilter_Pkg::Common::GetPacketId::outPacketId */
  static kcg_int outPacketId;
  
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&_L1, inPacket);
  _L6 = _L1.nid_packet;
  _L5 = /* 1 */ T_extract_nid_packet_from_metadata_selector_TM(_L6);
  outPacketId = _L5;
  return outPacketId;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** GetPacketId_InformationFilter_Pkg_Common.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

