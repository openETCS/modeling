/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-03-05T02:26:49
*************************************************************$ */
#ifndef _RECV_ReadRadioDataElementLoop_H_
#define _RECV_ReadRadioDataElementLoop_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* RECV_ReadRadioDataElementLoop::Cont */ Cont;
  kcg_int /* RECV_ReadRadioDataElementLoop::PacketOut */ PacketOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* RECV_ReadRadioDataElementLoop::_L1 */ _L1;
  MetadataElement_T_Common_Types_Pkg /* RECV_ReadRadioDataElementLoop::_L2 */ _L2;
  CompressedRadioData /* RECV_ReadRadioDataElementLoop::_L3 */ _L3;
  kcg_int /* RECV_ReadRadioDataElementLoop::_L20 */ _L20;
  kcg_bool /* RECV_ReadRadioDataElementLoop::_L21 */ _L21;
  kcg_int /* RECV_ReadRadioDataElementLoop::_L24 */ _L24;
  kcg_int /* RECV_ReadRadioDataElementLoop::_L23 */ _L23;
  kcg_int /* RECV_ReadRadioDataElementLoop::_L22 */ _L22;
  kcg_int /* RECV_ReadRadioDataElementLoop::_L25 */ _L25;
  kcg_int /* RECV_ReadRadioDataElementLoop::_L26 */ _L26;
  kcg_int /* RECV_ReadRadioDataElementLoop::_L27 */ _L27;
} outC_RECV_ReadRadioDataElementLoop;

/* ===========  node initialization and cycle functions  =========== */
/* RECV_ReadRadioDataElementLoop */
extern void RECV_ReadRadioDataElementLoop(
  /* RECV_ReadRadioDataElementLoop::Index */kcg_int Index,
  /* RECV_ReadRadioDataElementLoop::HeaderFound */MetadataElement_T_Common_Types_Pkg *HeaderFound,
  /* RECV_ReadRadioDataElementLoop::DataIn */CompressedRadioData *DataIn,
  outC_RECV_ReadRadioDataElementLoop *outC);

extern void RECV_ReadRadioDataElementLoop_reset(
  outC_RECV_ReadRadioDataElementLoop *outC);

#endif /* _RECV_ReadRadioDataElementLoop_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** RECV_ReadRadioDataElementLoop.h
** Generation date: 2015-03-05T02:26:49
*************************************************************$ */

