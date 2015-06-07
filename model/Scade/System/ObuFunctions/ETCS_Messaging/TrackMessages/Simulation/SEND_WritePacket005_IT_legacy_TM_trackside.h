/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-05T13:28:38
*************************************************************$ */
#ifndef _SEND_WritePacket005_IT_legacy_TM_trackside_H_
#define _SEND_WritePacket005_IT_legacy_TM_trackside_H_

#include "kcg_types.h"
#include "SIM_SEND_WriteBaliseMessa_DRAFTS.h"
#include "SEND_MessageData_TM_lib_internal.h"
#include "SEND_ConvertP005forWrite_IT_TM_conversions.h"

/* ========================  input structure  ====================== */
typedef struct {
  P005old_TM /* TM_trackside::SEND_WritePacket005_IT_legacy::Packet05 */ Packet05;
  CompressedPackets_T_Common_Types_Pkg /* TM_trackside::SEND_WritePacket005_IT_legacy::Packets */ Packets;
} inC_SEND_WritePacket005_IT_legacy_TM_trackside;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TM_trackside::SEND_WritePacket005_IT_legacy::Error */ Error;
  CompressedPackets_T_Common_Types_Pkg /* TM_trackside::SEND_WritePacket005_IT_legacy::RadioPacketsOut */ RadioPacketsOut;
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
  P005old_TM /* TM_trackside::SEND_WritePacket005_IT_legacy::_L1 */ _L1;
  Metadata_T_Common_Types_Pkg /* TM_trackside::SEND_WritePacket005_IT_legacy::_L4 */ _L4;
  CompressedPacketData_T_Common_Types_Pkg /* TM_trackside::SEND_WritePacket005_IT_legacy::_L10 */ _L10;
  kcg_bool /* TM_trackside::SEND_WritePacket005_IT_legacy::_L18 */ _L18;
  kcg_int /* TM_trackside::SEND_WritePacket005_IT_legacy::_L21 */ _L21;
  kcg_int /* TM_trackside::SEND_WritePacket005_IT_legacy::_L22 */ _L22;
  CompressedPackets_T_Common_Types_Pkg /* TM_trackside::SEND_WritePacket005_IT_legacy::_L39 */ _L39;
  CompressedPackets_T_Common_Types_Pkg /* TM_trackside::SEND_WritePacket005_IT_legacy::_L40 */ _L40;
  CompressedPacketData_T_Common_Types_Pkg /* TM_trackside::SEND_WritePacket005_IT_legacy::_L42 */ _L42;
  Metadata_T_Common_Types_Pkg /* TM_trackside::SEND_WritePacket005_IT_legacy::_L41 */ _L41;
  CompressedPacketData_T_Common_Types_Pkg /* TM_trackside::SEND_WritePacket005_IT_legacy::_L44 */ _L44;
  MetadataElement_T_Common_Types_Pkg /* TM_trackside::SEND_WritePacket005_IT_legacy::_L43 */ _L43;
} outC_SEND_WritePacket005_IT_legacy_TM_trackside;

/* ===========  node initialization and cycle functions  =========== */
/* TM_trackside::SEND_WritePacket005_IT_legacy */
extern void SEND_WritePacket005_IT_legacy_TM_trackside(
  inC_SEND_WritePacket005_IT_legacy_TM_trackside *inC,
  outC_SEND_WritePacket005_IT_legacy_TM_trackside *outC);

extern void SEND_WritePacket005_IT_legacy_reset_TM_trackside(
  outC_SEND_WritePacket005_IT_legacy_TM_trackside *outC);

#endif /* _SEND_WritePacket005_IT_legacy_TM_trackside_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** SEND_WritePacket005_IT_legacy_TM_trackside.h
** Generation date: 2015-06-05T13:28:38
*************************************************************$ */

