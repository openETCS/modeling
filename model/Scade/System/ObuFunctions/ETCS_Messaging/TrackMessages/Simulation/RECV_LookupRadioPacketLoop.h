/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-03-05T15:23:29
*************************************************************$ */
#ifndef _RECV_LookupRadioPacketLoop_H_
#define _RECV_LookupRadioPacketLoop_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* RECV_LookupRadioPacketLoop::Cont */ Cont;
  MetadataElement_T_Common_Types_Pkg /* RECV_LookupRadioPacketLoop::HeaderFound */ HeaderFound;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* RECV_LookupRadioPacketLoop::_L3 */ _L3;
  MetadataElement_T_Common_Types_Pkg /* RECV_LookupRadioPacketLoop::_L4 */ _L4;
  NID_PACKET /* RECV_LookupRadioPacketLoop::_L27 */ _L27;
  kcg_bool /* RECV_LookupRadioPacketLoop::_L28 */ _L28;
  kcg_bool /* RECV_LookupRadioPacketLoop::_L29 */ _L29;
  MetadataElement_T_Common_Types_Pkg /* RECV_LookupRadioPacketLoop::_L30 */ _L30;
  kcg_int /* RECV_LookupRadioPacketLoop::_L31 */ _L31;
} outC_RECV_LookupRadioPacketLoop;

/* ===========  node initialization and cycle functions  =========== */
/* RECV_LookupRadioPacketLoop */
extern void RECV_LookupRadioPacketLoop(
  /* RECV_LookupRadioPacketLoop::Index */kcg_int Index,
  /* RECV_LookupRadioPacketLoop::HeaderInit */MetadataElement_T_Common_Types_Pkg *HeaderInit,
  /* RECV_LookupRadioPacketLoop::Message_in */MetadataElement_T_Common_Types_Pkg *Message_in,
  /* RECV_LookupRadioPacketLoop::ID_in */kcg_int ID_in,
  outC_RECV_LookupRadioPacketLoop *outC);

extern void RECV_LookupRadioPacketLoop_reset(
  outC_RECV_LookupRadioPacketLoop *outC);

#endif /* _RECV_LookupRadioPacketLoop_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** RECV_LookupRadioPacketLoop.h
** Generation date: 2015-03-05T15:23:29
*************************************************************$ */

