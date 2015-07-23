/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P027V1_tracksim_merge_s_TM_conversions_baseline2.h"

void C_P027V1_tracksim_merge_s_reset_TM_conversions_baseline2(
  outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2 *outC)
{
  /* 1 */ SEND_MessageData_reset_TM_lib_internal(&outC->_1_Context_1);
  /* 1 */ SEND_WriteMessageHeader_reset_TM_lib_internal(&outC->Context_1);
  /* 2 */
  C_P027V1_tracksim_compr_o_reset_TM_conversions_baseline2(&outC->Context_2);
}

/* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections */
void C_P027V1_tracksim_merge_s_TM_conversions_baseline2(
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::i */kcg_int i,
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::PacketStream_in */CompressedPackets_T_Common_Types_Pkg *PacketStream_in,
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::P027V1_sections_from_track */P027V1_section_int_T_TM_baseline2 *P027V1_sections_from_track,
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::n_iter */kcg_int n_iter,
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::meta_first_section_in */kcg_int meta_first_section_in,
  outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2 *outC)
{
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L439, PacketStream_in);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->_L443,
    &outC->_L439.PacketData);
  outC->_L448 = meta_first_section_in;
  outC->_L441 = n_iter;
  outC->_L438 = i;
  outC->_L447 = outC->_L441 > outC->_L438;
  outC->_L446 = i;
  kcg_copy_Metadata_T_Common_Types_Pkg(
    &outC->_L442,
    &outC->_L439.PacketHeaders);
  kcg_copy_P027V1_section_int_T_TM_baseline2(
    &outC->_L440,
    P027V1_sections_from_track);
  /* 2 */
  C_P027V1_tracksim_compr_o_TM_conversions_baseline2(
    outC->_L446,
    &outC->_L440,
    outC->_L448,
    &outC->Context_2);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(
    &outC->_L431,
    &outC->Context_2.Header);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->_L432,
    &outC->Context_2.P027V1_sections_compressed);
  /* 1 */
  SEND_WriteMessageHeader_TM_lib_internal(
    &outC->_L442,
    &outC->_L431,
    &outC->Context_1);
  kcg_copy_Metadata_T_Common_Types_Pkg(
    &outC->_L435,
    &outC->Context_1.HeadersOut);
  outC->_L436 = outC->Context_1.NewStartAddr;
  outC->_L437 = outC->Context_1.NewEndAddr;
  /* 1 */
  SEND_MessageData_TM_lib_internal(
    outC->_L436,
    outC->_L437,
    &outC->_L443,
    &outC->_L432,
    &outC->_1_Context_1);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->_L433,
    &outC->_1_Context_1.DataOut);
  kcg_copy_Metadata_T_Common_Types_Pkg(
    &outC->_L434.PacketHeaders,
    &outC->_L435);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->_L434.PacketData,
    &outC->_L433);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->Packets_Out,
    &outC->_L434);
  outC->cont = outC->_L447;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P027V1_tracksim_merge_s_TM_conversions_baseline2.c
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */

