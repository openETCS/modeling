/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-02T15:02:41
*************************************************************$ */
#ifndef _SEND_WritePacket005_IT_TM_trackside_H_
#define _SEND_WritePacket005_IT_TM_trackside_H_

#include "kcg_types.h"
#include "SEND_ConvertP005forWrite_IT_TM_conversions.h"
#include "SIM_SEND_WriteBaliseMessa_DRAFTS.h"
#include "SEND_MessageData_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TM_trackside::SEND_WritePacket005_IT::Error */ Error;
  CompressedPackets_T_Common_Types_Pkg /* TM_trackside::SEND_WritePacket005_IT::RadioPacketsOut */ RadioPacketsOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_SEND_MessageData_TM_lib_internal /* 1 */ _2_Context_1;
  outC_SIM_SEND_WriteBaliseMessa_DRAFTS /* 1 */ _1_Context_1;
  outC_SEND_ConvertP005forWrite_IT_TM_conversions /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  P005_TM /* TM_trackside::SEND_WritePacket005_IT::_L1 */ _L1;
  Metadata_T_Common_Types_Pkg /* TM_trackside::SEND_WritePacket005_IT::_L4 */ _L4;
  CompressedPacketData_T_Common_Types_Pkg /* TM_trackside::SEND_WritePacket005_IT::_L10 */ _L10;
  kcg_bool /* TM_trackside::SEND_WritePacket005_IT::_L18 */ _L18;
  kcg_int /* TM_trackside::SEND_WritePacket005_IT::_L21 */ _L21;
  kcg_int /* TM_trackside::SEND_WritePacket005_IT::_L22 */ _L22;
  CompressedPackets_T_Common_Types_Pkg /* TM_trackside::SEND_WritePacket005_IT::_L39 */ _L39;
  CompressedPackets_T_Common_Types_Pkg /* TM_trackside::SEND_WritePacket005_IT::_L40 */ _L40;
  CompressedPacketData_T_Common_Types_Pkg /* TM_trackside::SEND_WritePacket005_IT::_L42 */ _L42;
  Metadata_T_Common_Types_Pkg /* TM_trackside::SEND_WritePacket005_IT::_L41 */ _L41;
  CompressedPacketData_T_Common_Types_Pkg /* TM_trackside::SEND_WritePacket005_IT::_L44 */ _L44;
  MetadataElement_T_Common_Types_Pkg /* TM_trackside::SEND_WritePacket005_IT::_L43 */ _L43;
} outC_SEND_WritePacket005_IT_TM_trackside;

/* ===========  node initialization and cycle functions  =========== */
/* TM_trackside::SEND_WritePacket005_IT */
extern void SEND_WritePacket005_IT_TM_trackside(
  /* TM_trackside::SEND_WritePacket005_IT::Packet05 */P005_TM *Packet05,
  /* TM_trackside::SEND_WritePacket005_IT::Packets */CompressedPackets_T_Common_Types_Pkg *Packets,
  outC_SEND_WritePacket005_IT_TM_trackside *outC);

extern void SEND_WritePacket005_IT_reset_TM_trackside(
  outC_SEND_WritePacket005_IT_TM_trackside *outC);

#endif /* _SEND_WritePacket005_IT_TM_trackside_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** SEND_WritePacket005_IT_TM_trackside.h
** Generation date: 2015-06-02T15:02:41
*************************************************************$ */
