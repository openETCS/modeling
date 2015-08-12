/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-12T18:07:48
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_P255_TM_trackside.h"

void Write_P255_reset_TM_trackside(outC_Write_P255_TM_trackside *outC)
{
  /* 1 */ SEND_MessageData_reset_TM_lib_internal(&outC->_2_Context_1);
  /* 1 */
  SEND_WriteBaliseMessageHeader_reset_TM_lib_internal(&outC->_1_Context_1);
  /* 1 */ C_P255_tracksim_compr_reset_TM_conversions(&outC->Context_1);
}

/* TM_trackside::Write_P255 */
void Write_P255_TM_trackside(
  /* TM_trackside::Write_P255::Packet255 */P255_trackside_int_T_TM *Packet255,
  /* TM_trackside::Write_P255::Packets */CompressedPackets_T_Common_Types_Pkg *Packets,
  outC_Write_P255_TM_trackside *outC)
{
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L40, Packets);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->_L42,
    &outC->_L40.PacketData);
  kcg_copy_P255_trackside_int_T_TM(&outC->_L1, Packet255);
  /* 1 */ C_P255_tracksim_compr_TM_conversions(&outC->_L1, &outC->Context_1);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(
    &outC->_L43,
    &outC->Context_1.Header);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->_L44,
    &outC->Context_1.P005_compressed);
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L41, &outC->_L40.PacketHeaders);
  /* 1 */
  SEND_WriteBaliseMessageHeader_TM_lib_internal(
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
** Write_P255_TM_trackside.c
** Generation date: 2015-08-12T18:07:48
*************************************************************$ */

