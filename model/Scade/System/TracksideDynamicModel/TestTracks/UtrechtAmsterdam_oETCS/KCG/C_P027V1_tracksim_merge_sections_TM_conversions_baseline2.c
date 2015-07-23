/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/KCG\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:59:23
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P027V1_tracksim_merge_sections_TM_conversions_baseline2.h"

/* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections */
void C_P027V1_tracksim_merge_sections_TM_conversions_baseline2(
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::i */kcg_int i,
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::PacketStream_in */CompressedPackets_T_Common_Types_Pkg *PacketStream_in,
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::P027V1_sections_from_track */P027V1_section_int_T_TM_baseline2 *P027V1_sections_from_track,
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::n_iter */kcg_int n_iter,
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::meta_first_section_in */kcg_int meta_first_section_in,
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::cont */kcg_bool *cont,
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::Packets_Out */CompressedPackets_T_Common_Types_Pkg *Packets_Out)
{
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::_L432 */
  static CompressedPacketData_T_Common_Types_Pkg _L432;
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::_L431 */
  static MetadataElement_T_Common_Types_Pkg _L431;
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::_L436 */
  static kcg_int _L436;
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::_L437 */
  static kcg_int _L437;
  
  *cont = n_iter > i;
  /* 2 */
  C_P027V1_tracksim_compr_one_section_TM_conversions_baseline2(
    i,
    P027V1_sections_from_track,
    meta_first_section_in,
    &_L431,
    &_L432);
  /* 1 */
  SEND_WriteMessageHeader_TM_lib_internal(
    &(*PacketStream_in).PacketHeaders,
    &_L431,
    &(*Packets_Out).PacketHeaders,
    &_L436,
    &_L437);
  /* 1 */
  SEND_MessageData_TM_lib_internal(
    _L436,
    _L437,
    &(*PacketStream_in).PacketData,
    &_L432,
    &(*Packets_Out).PacketData);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P027V1_tracksim_merge_sections_TM_conversions_baseline2.c
** Generation date: 2015-07-21T17:59:23
*************************************************************$ */

