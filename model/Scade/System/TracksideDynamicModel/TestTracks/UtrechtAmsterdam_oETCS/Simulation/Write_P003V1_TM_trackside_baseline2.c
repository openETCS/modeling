/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-07T00:28:47
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_P003V1_TM_trackside_baseline2.h"

void Write_P003V1_reset_TM_trackside_baseline2(
  outC_Write_P003V1_TM_trackside_baseline2 *outC)
{
  /* 1 */ SEND_MessageData_reset_TM_lib_internal(&outC->_2_Context_1);
  /* 1 */
  SEND_WriteBaliseMessageHeader_reset_TM_lib_internal(&outC->_1_Context_1);
  /* 1 */
  C_P003V1_tracksim_compr_reset_TM_conversions_baseline2(&outC->Context_1);
}

/* TM_trackside_baseline2::Write_P003V1 */
void Write_P003V1_TM_trackside_baseline2(
  /* TM_trackside_baseline2::Write_P003V1::Packet003V1 */P003V1_trackside_int_T_TM_baseline2 *Packet003V1,
  /* TM_trackside_baseline2::Write_P003V1::Packets */CompressedPackets_T_Common_Types_Pkg *Packets,
  outC_Write_P003V1_TM_trackside_baseline2 *outC)
{
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L40, Packets);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->_L42,
    &outC->_L40.PacketData);
  kcg_copy_P003V1_trackside_int_T_TM_baseline2(&outC->_L1, Packet003V1);
  /* 1 */
  C_P003V1_tracksim_compr_TM_conversions_baseline2(
    &outC->_L1,
    &outC->Context_1);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(
    &outC->_L43,
    &outC->Context_1.Header);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->_L44,
    &outC->Context_1.P003V1_compressed);
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
** Write_P003V1_TM_trackside_baseline2.c
** Generation date: 2015-07-07T00:28:47
*************************************************************$ */

