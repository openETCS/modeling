/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "C_P027V1_tracksim_merge_sections_TM_conversions_baseline2.h"

/* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections */
void C_P027V1_tracksim_merge_sections_TM_conversions_baseline2(
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::i */ kcg_int i,
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::PacketStream_in */ CompressedPackets_T_Common_Types_Pkg *PacketStream_in,
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::P027V1_sections_from_track */ P027V1_section_int_T_TM_baseline2 *P027V1_sections_from_track,
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::n_iter */ kcg_int n_iter,
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::meta_first_section_in */ kcg_int meta_first_section_in,
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::q_dir */ Q_DIR q_dir,
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::cont */ kcg_bool *cont,
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::Packets_Out */ CompressedPackets_T_Common_Types_Pkg *Packets_Out)
{
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::_L432 */
  static CompressedPacketData_T_Common_Types_Pkg _L432;
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::_L431 */
  static MetadataElement_T_Common_Types_Pkg _L431;
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::_L435 */
  static Metadata_T_Common_Types_Pkg _L435;
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::_L436 */
  static kcg_int _L436;
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::_L437 */
  static kcg_int _L437;
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::_L434 */
  static CompressedPackets_T_Common_Types_Pkg _L434;
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::_L433 */
  static CompressedPacketData_T_Common_Types_Pkg _L433;
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::_L438 */
  static kcg_int _L438;
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::_L439 */
  static CompressedPackets_T_Common_Types_Pkg _L439;
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::_L440 */
  static P027V1_section_int_T_TM_baseline2 _L440;
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::_L441 */
  static kcg_int _L441;
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::_L443 */
  static CompressedPacketData_T_Common_Types_Pkg _L443;
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::_L442 */
  static Metadata_T_Common_Types_Pkg _L442;
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::_L446 */
  static kcg_int _L446;
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::_L447 */
  static kcg_bool _L447;
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::_L448 */
  static kcg_int _L448;
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::_L449 */
  static Q_DIR _L449;
  
  _L446 = i;
  kcg_copy_P027V1_section_int_T_TM_baseline2(
    &_L440,
    P027V1_sections_from_track);
  _L448 = meta_first_section_in;
  _L449 = q_dir;
  /* 2 */
  C_P027V1_tracksim_compr_one_section_TM_conversions_baseline2(
    _L446,
    &_L440,
    _L448,
    _L449,
    &_L431,
    &_L432);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L439, PacketStream_in);
  kcg_copy_Metadata_T_Common_Types_Pkg(&_L442, &_L439.PacketHeaders);
  /* 1 */
  SEND_WriteMessageHeader_TM_lib_internal(
    &_L442,
    &_L431,
    &_L435,
    &_L436,
    &_L437);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&_L443, &_L439.PacketData);
  /* 1 */
  SEND_MessageData_TM_lib_internal(_L436, _L437, &_L443, &_L432, &_L433);
  kcg_copy_Metadata_T_Common_Types_Pkg(&_L434.PacketHeaders, &_L435);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&_L434.PacketData, &_L433);
  _L438 = i;
  _L441 = n_iter;
  _L447 = _L441 > _L438;
  *cont = _L447;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(Packets_Out, &_L434);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** C_P027V1_tracksim_merge_sections_TM_conversions_baseline2.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

