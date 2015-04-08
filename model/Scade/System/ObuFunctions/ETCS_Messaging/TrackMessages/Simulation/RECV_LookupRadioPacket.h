/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-03-05T15:23:29
*************************************************************$ */
#ifndef _RECV_LookupRadioPacket_H_
#define _RECV_LookupRadioPacket_H_

#include "kcg_types.h"
#include "RECV_LookupRadioPacketLoop.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* RECV_LookupRadioPacket::Found */ Found;
  kcg_int /* RECV_LookupRadioPacket::Index */ Index;
  MetadataElement_T_Common_Types_Pkg /* RECV_LookupRadioPacket::HeaderFound */ HeaderFound;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RECV_LookupRadioPacketLoop /* 1 */ Context_1[30];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  CompressedRadioHeaders /* RECV_LookupRadioPacket::_L1 */ _L1;
  kcg_int /* RECV_LookupRadioPacket::_L2 */ _L2;
  array_int_30 /* RECV_LookupRadioPacket::_L3 */ _L3;
  kcg_int /* RECV_LookupRadioPacket::_L4 */ _L4;
  kcg_bool /* RECV_LookupRadioPacket::_L5 */ _L5;
  MetadataElement_T_Common_Types_Pkg /* RECV_LookupRadioPacket::_L23 */ _L23;
  NID_PACKET /* RECV_LookupRadioPacket::_L24 */ _L24;
  kcg_bool /* RECV_LookupRadioPacket::_L25 */ _L25;
  MetadataElement_T_Common_Types_Pkg /* RECV_LookupRadioPacket::_L26 */ _L26;
  MetadataElement_T_Common_Types_Pkg /* RECV_LookupRadioPacket::_L22 */ _L22;
  MetadataElement_T_Common_Types_Pkg /* RECV_LookupRadioPacket::_L27 */ _L27;
  kcg_int /* RECV_LookupRadioPacket::_L28 */ _L28;
  kcg_int /* RECV_LookupRadioPacket::_L29 */ _L29;
} outC_RECV_LookupRadioPacket;

/* ===========  node initialization and cycle functions  =========== */
/* RECV_LookupRadioPacket */
extern void RECV_LookupRadioPacket(
  /* RECV_LookupRadioPacket::Message_ID */kcg_int Message_ID,
  /* RECV_LookupRadioPacket::HeadersIN */CompressedRadioHeaders *HeadersIN,
  outC_RECV_LookupRadioPacket *outC);

extern void RECV_LookupRadioPacket_reset(outC_RECV_LookupRadioPacket *outC);

#endif /* _RECV_LookupRadioPacket_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** RECV_LookupRadioPacket.h
** Generation date: 2015-03-05T15:23:29
*************************************************************$ */

