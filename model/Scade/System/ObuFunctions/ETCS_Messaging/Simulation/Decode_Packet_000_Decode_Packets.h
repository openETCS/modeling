/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config Z:/Documents/projects/openETCS/github/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/Simulation\kcg_s2c_config.txt
** Generation date: 2015-02-07T17:55:09
*************************************************************$ */
#ifndef _Decode_Packet_000_Decode_Packets_H_
#define _Decode_Packet_000_Decode_Packets_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  Information_T_BM_Types_Flat /* Decode_Packets::Decode_Packet_000::PacketInfoIn */ PacketInfoIn;
} inC_Decode_Packet_000_Decode_Packets;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  NID_VBCMK_T_Types_Notfound /* Decode_Packets::Decode_Packet_000::VBCMK */ VBCMK;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Information_T_BM_Types_Flat /* Decode_Packets::Decode_Packet_000::_L41 */ _L41;
  InfoElement_T_BM_Types_Flat /* Decode_Packets::Decode_Packet_000::_L43 */ _L43;
} outC_Decode_Packet_000_Decode_Packets;

/* ===========  node initialization and cycle functions  =========== */
/* Decode_Packets::Decode_Packet_000 */
extern void Decode_Packet_000_Decode_Packets(
  inC_Decode_Packet_000_Decode_Packets *inC,
  outC_Decode_Packet_000_Decode_Packets *outC);

extern void Decode_Packet_000_reset_Decode_Packets(
  outC_Decode_Packet_000_Decode_Packets *outC);

#endif /* _Decode_Packet_000_Decode_Packets_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Decode_Packet_000_Decode_Packets.h
** Generation date: 2015-02-07T17:55:09
*************************************************************$ */

