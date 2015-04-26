/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-25T17:50:04
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SEND_WritePacket005_IT.h"

void SEND_WritePacket005_IT_reset(outC_SEND_WritePacket005_IT *outC)
{
  /* 1 */ SIM_SEND_WriteRadioMessageData_reset(&outC->_2_Context_1);
  /* 1 */ SIM_SEND_WriteRadioMessag_reset(&outC->_1_Context_1);
  /* 1 */ SEND_ConvertP005forWrite_IT_reset(&outC->Context_1);
}

/* SEND_WritePacket005_IT */
void SEND_WritePacket005_IT(
  /* SEND_WritePacket005_IT::Packet05 */TM_P005 *Packet05,
  /* SEND_WritePacket005_IT::Packets */CompressedPackets_T_Common_Types_Pkg *Packets,
  outC_SEND_WritePacket005_IT *outC)
{
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L40, Packets);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->_L42,
    &outC->_L40.PacketData);
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L41, &outC->_L40.PacketHeaders);
  kcg_copy_TM_P005(&outC->_L1, Packet05);
  /* 1 */ SEND_ConvertP005forWrite_IT(&outC->_L1, &outC->Context_1);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(
    &outC->_L3,
    &outC->Context_1.Header);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->_L2,
    &outC->Context_1.RM05_out);
  /* 1 */
  SIM_SEND_WriteRadioMessag(&outC->_L41, &outC->_L3, &outC->_1_Context_1);
  kcg_copy_Metadata_T_Common_Types_Pkg(
    &outC->_L4,
    &outC->_1_Context_1.HeadersOut);
  outC->_L21 = outC->_1_Context_1.NewStartAddr;
  outC->_L22 = outC->_1_Context_1.NewEndAddr;
  /* 1 */
  SIM_SEND_WriteRadioMessageData(
    outC->_L21,
    outC->_L22,
    &outC->_L2,
    &outC->_L42,
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
** SEND_WritePacket005_IT.c
** Generation date: 2015-04-25T17:50:04
*************************************************************$ */

