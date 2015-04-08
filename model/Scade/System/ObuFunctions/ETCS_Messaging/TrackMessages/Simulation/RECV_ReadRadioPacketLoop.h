/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-03-05T15:23:29
*************************************************************$ */
#ifndef _RECV_ReadRadioPacketLoop_H_
#define _RECV_ReadRadioPacketLoop_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* RECV_ReadRadioPacketLoop::Cont */ Cont;
  kcg_int /* RECV_ReadRadioPacketLoop::PacketOut */ PacketOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* RECV_ReadRadioPacketLoop::_L1 */ _L1;
  kcg_int /* RECV_ReadRadioPacketLoop::_L3 */ _L3;
  kcg_int /* RECV_ReadRadioPacketLoop::_L4 */ _L4;
  CompressedRadioData /* RECV_ReadRadioPacketLoop::_L9 */ _L9;
  kcg_bool /* RECV_ReadRadioPacketLoop::_L18 */ _L18;
  kcg_int /* RECV_ReadRadioPacketLoop::_L20 */ _L20;
  kcg_int /* RECV_ReadRadioPacketLoop::_L29 */ _L29;
  kcg_int /* RECV_ReadRadioPacketLoop::_L30 */ _L30;
  kcg_int /* RECV_ReadRadioPacketLoop::_L31 */ _L31;
  kcg_int /* RECV_ReadRadioPacketLoop::_L32 */ _L32;
  kcg_int /* RECV_ReadRadioPacketLoop::_L33 */ _L33;
  kcg_int /* RECV_ReadRadioPacketLoop::_L34 */ _L34;
} outC_RECV_ReadRadioPacketLoop;

/* ===========  node initialization and cycle functions  =========== */
/* RECV_ReadRadioPacketLoop */
extern void RECV_ReadRadioPacketLoop(
  /* RECV_ReadRadioPacketLoop::Index */kcg_int Index,
  /* RECV_ReadRadioPacketLoop::PacketData */CompressedRadioData *PacketData,
  /* RECV_ReadRadioPacketLoop::AddressStart */kcg_int AddressStart,
  /* RECV_ReadRadioPacketLoop::AddressEnd */kcg_int AddressEnd,
  outC_RECV_ReadRadioPacketLoop *outC);

extern void RECV_ReadRadioPacketLoop_reset(outC_RECV_ReadRadioPacketLoop *outC);

#endif /* _RECV_ReadRadioPacketLoop_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** RECV_ReadRadioPacketLoop.h
** Generation date: 2015-03-05T15:23:29
*************************************************************$ */

