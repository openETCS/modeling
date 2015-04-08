/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-03-05T15:23:29
*************************************************************$ */
#ifndef _RECV_ReadRadioMessage_H_
#define _RECV_ReadRadioMessage_H_

#include "kcg_types.h"
#include "RECV_LookupRadioPacket.h"
#include "RECV_ReadRadioPacket.h"

/* ========================  input structure  ====================== */
typedef struct {
  CompressedRadioPackets /* RECV_ReadRadioMessage::Packets */ Packets;
  kcg_int /* RECV_ReadRadioMessage::PacketID */ PacketID;
} inC_RECV_ReadRadioMessage;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_int_500 /* RECV_ReadRadioMessage::Data */ Data;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RECV_ReadRadioPacket /* 1 */ _1_Context_1;
  outC_RECV_LookupRadioPacket /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool tmp;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  MetadataElement_T_Common_Types_Pkg /* RECV_ReadRadioMessage::_L3 */ _L3;
  kcg_int /* RECV_ReadRadioMessage::_L2 */ _L2;
  kcg_bool /* RECV_ReadRadioMessage::_L1 */ _L1;
  array_int_500 /* RECV_ReadRadioMessage::_L4 */ _L4;
  CompressedRadioPackets /* RECV_ReadRadioMessage::_L5 */ _L5;
  CompressedRadioData /* RECV_ReadRadioMessage::_L41 */ _L41;
  CompressedRadioHeaders /* RECV_ReadRadioMessage::_L40 */ _L40;
  CompressedRadioData /* RECV_ReadRadioMessage::_L44 */ _L44;
  kcg_int /* RECV_ReadRadioMessage::_L45 */ _L45;
} outC_RECV_ReadRadioMessage;

/* ===========  node initialization and cycle functions  =========== */
/* RECV_ReadRadioMessage */
extern void RECV_ReadRadioMessage(
  inC_RECV_ReadRadioMessage *inC,
  outC_RECV_ReadRadioMessage *outC);

extern void RECV_ReadRadioMessage_reset(outC_RECV_ReadRadioMessage *outC);

#endif /* _RECV_ReadRadioMessage_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** RECV_ReadRadioMessage.h
** Generation date: 2015-03-05T15:23:29
*************************************************************$ */

