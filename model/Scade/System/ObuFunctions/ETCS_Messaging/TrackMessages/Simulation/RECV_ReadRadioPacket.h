/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-03-05T15:23:29
*************************************************************$ */
#ifndef _RECV_ReadRadioPacket_H_
#define _RECV_ReadRadioPacket_H_

#include "kcg_types.h"
#include "RECV_ReadRadioPacketLoop.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_int_500 /* RECV_ReadRadioPacket::PacketOut */ PacketOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RECV_ReadRadioPacketLoop /* 1 */ Context_1[500];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  CompressedRadioData /* RECV_ReadRadioPacket::_L3 */ _L3;
  MetadataElement_T_Common_Types_Pkg /* RECV_ReadRadioPacket::_L4 */ _L4;
  array_int_500 /* RECV_ReadRadioPacket::_L6 */ _L6;
  array_int_500 /* RECV_ReadRadioPacket::_L7 */ _L7;
  kcg_bool /* RECV_ReadRadioPacket::_L8 */ _L8;
  array_int_500 /* RECV_ReadRadioPacket::_L10 */ _L10;
  array_int_500_500 /* RECV_ReadRadioPacket::_L18 */ _L18;
  kcg_int /* RECV_ReadRadioPacket::_L22 */ _L22;
  kcg_int /* RECV_ReadRadioPacket::_L24 */ _L24;
  kcg_int /* RECV_ReadRadioPacket::_L23 */ _L23;
} outC_RECV_ReadRadioPacket;

/* ===========  node initialization and cycle functions  =========== */
/* RECV_ReadRadioPacket */
extern void RECV_ReadRadioPacket(
  /* RECV_ReadRadioPacket::Header */MetadataElement_T_Common_Types_Pkg *Header,
  /* RECV_ReadRadioPacket::PacketData */CompressedRadioData *PacketData,
  outC_RECV_ReadRadioPacket *outC);

extern void RECV_ReadRadioPacket_reset(outC_RECV_ReadRadioPacket *outC);

#endif /* _RECV_ReadRadioPacket_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** RECV_ReadRadioPacket.h
** Generation date: 2015-03-05T15:23:29
*************************************************************$ */

