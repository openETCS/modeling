/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Write_P027V1_TM_trackside_baseline2.h"

void Write_P027V1_reset_TM_trackside_baseline2(
  outC_Write_P027V1_TM_trackside_baseline2 *outC)
{
  kcg_int i;
  
  for (i = 0; i < 33; i++) {
    /* 1 */
    C_P027V1_tracksim_merge_sections_reset_TM_conversions_baseline2(
      &outC->_3_Context_1[i]);
  }
  /* 1 */ SEND_MessageData_reset_TM_lib_internal(&outC->_2_Context_1);
  /* 1 */ SEND_WriteMessageHeader_reset_TM_lib_internal(&outC->_1_Context_1);
  /* 1 */
  C_P027V1_tracksim_compr_body_reset_TM_conversions_baseline2(&outC->Context_1);
}

/* TM_trackside_baseline2::Write_P027V1 */
void Write_P027V1_TM_trackside_baseline2(
  /* TM_trackside_baseline2::Write_P027V1::Packet27V1 */P027V1_trackside_int_T_TM_baseline2 *Packet27V1,
  /* TM_trackside_baseline2::Write_P027V1::Packets */CompressedPackets_T_Common_Types_Pkg *Packets,
  outC_Write_P027V1_TM_trackside_baseline2 *outC)
{
  kcg_int i2;
  kcg_int i1;
  CompressedPackets_T_Common_Types_Pkg tmp;
  kcg_int i;
  kcg_int noname;
  
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L40, Packets);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->_L42,
    &outC->_L40.PacketData);
  kcg_copy_P027V1_trackside_int_T_TM_baseline2(&outC->_L1, Packet27V1);
  /* 1 */
  C_P027V1_tracksim_compr_body_TM_conversions_baseline2(
    &outC->_L1,
    &outC->Context_1);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(
    &outC->_L43,
    &outC->Context_1.Header);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->_L44,
    &outC->Context_1.P027V1_body_compressed);
  kcg_copy_P027V1_OBU_sectionlist_int_T_TM_baseline2(
    &outC->_L45,
    &outC->Context_1.P027V1_sections);
  outC->_L46 = outC->Context_1.n_iter_k_out;
  outC->_L56 = outC->Context_1.meta_first_section;
  for (i2 = 0; i2 < 33; i2++) {
    outC->_L55[i2] = outC->_L56;
  }
  for (i1 = 0; i1 < 33; i1++) {
    outC->_L54[i1] = outC->_L46;
  }
  outC->_L52 = kcg_true;
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L41, &outC->_L40.PacketHeaders);
  /* 1 */
  SEND_WriteMessageHeader_TM_lib_internal(
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
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L51, &outC->_L39);
  if (outC->_L52) {
    for (i = 0; i < 33; i++) {
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(&tmp, &outC->_L51);
      /* 1 */
      C_P027V1_tracksim_merge_sections_TM_conversions_baseline2(
        i,
        &tmp,
        &outC->_L45[i],
        outC->_L54[i],
        outC->_L55[i],
        &outC->_3_Context_1[i]);
      kcg_copy_CompressedPackets_T_Common_Types_Pkg(
        &outC->_L51,
        &outC->_3_Context_1[i].Packets_Out);
      outC->_L50 = i + 1;
      if (!outC->_3_Context_1[i].cont) {
        break;
      }
    }
  }
  else {
    outC->_L50 = 0;
  }
  noname = outC->_L50;
  outC->_L18 = kcg_false;
  outC->Error = outC->_L18;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->PacketsOut, &outC->_L51);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Write_P027V1_TM_trackside_baseline2.c
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

