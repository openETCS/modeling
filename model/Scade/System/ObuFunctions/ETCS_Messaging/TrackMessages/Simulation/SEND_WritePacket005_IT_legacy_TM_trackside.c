/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-05T13:28:38
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SEND_WritePacket005_IT_legacy_TM_trackside.h"

void SEND_WritePacket005_IT_legacy_reset_TM_trackside(
  outC_SEND_WritePacket005_IT_legacy_TM_trackside *outC)
{
  /* 1 */ SEND_MessageData_reset_TM_lib_internal(&outC->_2_Context_1);
  /* 1 */ SIM_SEND_WriteBaliseMessa_reset_DRAFTS(&outC->_1_Context_1);
  /* 1 */ SEND_ConvertP005forWrite_IT_reset_TM_conversions(&outC->Context_1);
}

/* TM_trackside::SEND_WritePacket005_IT_legacy */
void SEND_WritePacket005_IT_legacy_TM_trackside(
  inC_SEND_WritePacket005_IT_legacy_TM_trackside *inC,
  outC_SEND_WritePacket005_IT_legacy_TM_trackside *outC)
{
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L40, &inC->Packets);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->_L42,
    &outC->_L40.PacketData);
  kcg_copy_P005old_TM(&outC->_L1, &inC->Packet05);
  /* 1 */
  SEND_ConvertP005forWrite_IT_TM_conversions(&outC->_L1, &outC->Context_1);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(
    &outC->_L43,
    &outC->Context_1.Header);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->_L44,
    &outC->Context_1.RM05_out);
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L41, &outC->_L40.PacketHeaders);
  /* 1 */
  SIM_SEND_WriteBaliseMessa_DRAFTS(
    &outC->_L41,
    &outC->_L43,
    &outC->_1_Context_1);
  kcg_copy_Metadata_T_Common_Types_Pkg(
    &outC->_L4,
    &outC->_1_Context_1.HeadersOut);
  outC->_L21 = outC->_1_Context_1.NewStartAddr;
  outC->_L22 = outC->_1_Context_1.NewEndAddr;
  /* 1 */
  SEND_MessageData_TM_lib_internal(
    outC->_L21,
    outC->_L22,
    &outC->_L42,
    &outC->_L44,
    &outC->_2_Context_1);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->_L10,
    &outC->_2_Context_1.DataOut);
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L39.PacketHeaders, &outC->_L4);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->_L39.PacketData,
    &outC->_L10);
  outC->_L18 = kcg_false;
  outC->Error = outC->_L18;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->RadioPacketsOut,
    &outC->_L39);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SEND_WritePacket005_IT_legacy_TM_trackside.c
** Generation date: 2015-06-05T13:28:38
*************************************************************$ */

