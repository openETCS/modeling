/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-10T16:11:03
*************************************************************$ */
#ifndef _C_P027V1_tracksim_merge_s_TM_conversions_baseline2_H_
#define _C_P027V1_tracksim_merge_s_TM_conversions_baseline2_H_

#include "kcg_types.h"
#include "SEND_MessageData_TM_lib_internal.h"
#include "SEND_WriteMessageHeader_TM_lib_internal.h"
#include "C_P027V1_tracksim_compr_o_TM_conversions_baseline2.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::cont */ cont;
  CompressedPackets_T_Common_Types_Pkg /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::Packets_Out */ Packets_Out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SEND_MessageData_TM_lib_internal /* 1 */ _1_Context_1;
  outC_SEND_WriteMessageHeader_TM_lib_internal /* 1 */ Context_1;
  outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2 /* 2 */ Context_2;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  CompressedPacketData_T_Common_Types_Pkg /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::_L432 */ _L432;
  MetadataElement_T_Common_Types_Pkg /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::_L431 */ _L431;
  Metadata_T_Common_Types_Pkg /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::_L435 */ _L435;
  kcg_int /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::_L436 */ _L436;
  kcg_int /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::_L437 */ _L437;
  CompressedPackets_T_Common_Types_Pkg /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::_L434 */ _L434;
  CompressedPacketData_T_Common_Types_Pkg /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::_L433 */ _L433;
  kcg_int /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::_L438 */ _L438;
  CompressedPackets_T_Common_Types_Pkg /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::_L439 */ _L439;
  P027V1_section_int_T_TM_baseline2 /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::_L440 */ _L440;
  kcg_int /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::_L441 */ _L441;
  CompressedPacketData_T_Common_Types_Pkg /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::_L443 */ _L443;
  Metadata_T_Common_Types_Pkg /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::_L442 */ _L442;
  kcg_int /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::_L446 */ _L446;
  kcg_bool /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::_L447 */ _L447;
  kcg_int /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::_L448 */ _L448;
} outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2;

/* ===========  node initialization and cycle functions  =========== */
/* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections */
extern void C_P027V1_tracksim_merge_s_TM_conversions_baseline2(
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::i */kcg_int i,
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::PacketStream_in */CompressedPackets_T_Common_Types_Pkg *PacketStream_in,
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::P027V1_sections_from_track */P027V1_section_int_T_TM_baseline2 *P027V1_sections_from_track,
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::n_iter */kcg_int n_iter,
  /* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections::meta_first_section_in */kcg_int meta_first_section_in,
  outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2 *outC);

extern void C_P027V1_tracksim_merge_s_reset_TM_conversions_baseline2(
  outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2 *outC);

#endif /* _C_P027V1_tracksim_merge_s_TM_conversions_baseline2_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** C_P027V1_tracksim_merge_s_TM_conversions_baseline2.h
** Generation date: 2015-08-10T16:11:03
*************************************************************$ */

