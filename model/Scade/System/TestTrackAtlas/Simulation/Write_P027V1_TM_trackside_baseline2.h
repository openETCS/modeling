/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-02T01:48:40
*************************************************************$ */
#ifndef _Write_P027V1_TM_trackside_baseline2_H_
#define _Write_P027V1_TM_trackside_baseline2_H_

#include "kcg_types.h"
#include "SEND_MessageData_TM_lib_internal.h"
#include "SEND_WriteMessageHeader_TM_lib_internal.h"
#include "C_P027V1_tracksim_compr_body_TM_conversions_baseline2.h"
#include "C_P027V1_tracksim_merge_sections_TM_conversions_baseline2.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TM_trackside_baseline2::Write_P027V1::Error */ Error;
  CompressedPackets_T_Common_Types_Pkg /* TM_trackside_baseline2::Write_P027V1::PacketsOut */ PacketsOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_C_P027V1_tracksim_merge_sections_TM_conversions_baseline2 /* 1 */ _3_Context_1[33];
  outC_SEND_MessageData_TM_lib_internal /* 1 */ _2_Context_1;
  outC_SEND_WriteMessageHeader_TM_lib_internal /* 1 */ _1_Context_1;
  outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2 /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P027V1_trackside_int_T_TM_baseline2 /* TM_trackside_baseline2::Write_P027V1::_L1 */ _L1;
  Metadata_T_Common_Types_Pkg /* TM_trackside_baseline2::Write_P027V1::_L4 */ _L4;
  CompressedPacketData_T_Common_Types_Pkg /* TM_trackside_baseline2::Write_P027V1::_L10 */ _L10;
  kcg_bool /* TM_trackside_baseline2::Write_P027V1::_L18 */ _L18;
  kcg_int /* TM_trackside_baseline2::Write_P027V1::_L21 */ _L21;
  kcg_int /* TM_trackside_baseline2::Write_P027V1::_L22 */ _L22;
  CompressedPackets_T_Common_Types_Pkg /* TM_trackside_baseline2::Write_P027V1::_L39 */ _L39;
  CompressedPackets_T_Common_Types_Pkg /* TM_trackside_baseline2::Write_P027V1::_L40 */ _L40;
  CompressedPacketData_T_Common_Types_Pkg /* TM_trackside_baseline2::Write_P027V1::_L42 */ _L42;
  Metadata_T_Common_Types_Pkg /* TM_trackside_baseline2::Write_P027V1::_L41 */ _L41;
  CompressedPacketData_T_Common_Types_Pkg /* TM_trackside_baseline2::Write_P027V1::_L44 */ _L44;
  MetadataElement_T_Common_Types_Pkg /* TM_trackside_baseline2::Write_P027V1::_L43 */ _L43;
  P027V1_OBU_sectionlist_int_T_TM_baseline2 /* TM_trackside_baseline2::Write_P027V1::_L45 */ _L45;
  kcg_int /* TM_trackside_baseline2::Write_P027V1::_L46 */ _L46;
  kcg_int /* TM_trackside_baseline2::Write_P027V1::_L50 */ _L50;
  CompressedPackets_T_Common_Types_Pkg /* TM_trackside_baseline2::Write_P027V1::_L51 */ _L51;
  kcg_bool /* TM_trackside_baseline2::Write_P027V1::_L52 */ _L52;
  array_int_33 /* TM_trackside_baseline2::Write_P027V1::_L54 */ _L54;
  array_int_33 /* TM_trackside_baseline2::Write_P027V1::_L55 */ _L55;
  kcg_int /* TM_trackside_baseline2::Write_P027V1::_L56 */ _L56;
} outC_Write_P027V1_TM_trackside_baseline2;

/* ===========  node initialization and cycle functions  =========== */
/* TM_trackside_baseline2::Write_P027V1 */
extern void Write_P027V1_TM_trackside_baseline2(
  /* TM_trackside_baseline2::Write_P027V1::Packet27V1 */P027V1_trackside_int_T_TM_baseline2 *Packet27V1,
  /* TM_trackside_baseline2::Write_P027V1::Packets */CompressedPackets_T_Common_Types_Pkg *Packets,
  outC_Write_P027V1_TM_trackside_baseline2 *outC);

extern void Write_P027V1_reset_TM_trackside_baseline2(
  outC_Write_P027V1_TM_trackside_baseline2 *outC);

#endif /* _Write_P027V1_TM_trackside_baseline2_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Write_P027V1_TM_trackside_baseline2.h
** Generation date: 2015-09-02T01:48:40
*************************************************************$ */

