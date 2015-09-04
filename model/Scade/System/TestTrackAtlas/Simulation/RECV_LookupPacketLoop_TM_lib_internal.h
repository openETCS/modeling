/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T11:57:29
*************************************************************$ */
#ifndef _RECV_LookupPacketLoop_TM_lib_internal_H_
#define _RECV_LookupPacketLoop_TM_lib_internal_H_

#include "kcg_types.h"
#include "T_Filter_Metadata_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TM_lib_internal::RECV_LookupPacketLoop::Cont */ Cont;
  MetadataElement_T_Common_Types_Pkg /* TM_lib_internal::RECV_LookupPacketLoop::HeaderFound */ HeaderFound;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_T_Filter_Metadata_TM_lib_internal /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TM_lib_internal::RECV_LookupPacketLoop::_L3 */ _L3;
  MetadataElement_T_Common_Types_Pkg /* TM_lib_internal::RECV_LookupPacketLoop::_L4 */ _L4;
  NID_PACKET /* TM_lib_internal::RECV_LookupPacketLoop::_L27 */ _L27;
  kcg_bool /* TM_lib_internal::RECV_LookupPacketLoop::_L29 */ _L29;
  MetadataElement_T_Common_Types_Pkg /* TM_lib_internal::RECV_LookupPacketLoop::_L30 */ _L30;
  kcg_int /* TM_lib_internal::RECV_LookupPacketLoop::_L31 */ _L31;
  kcg_bool /* TM_lib_internal::RECV_LookupPacketLoop::_L32 */ _L32;
  kcg_bool /* TM_lib_internal::RECV_LookupPacketLoop::_L33 */ _L33;
  kcg_bool /* TM_lib_internal::RECV_LookupPacketLoop::_L34 */ _L34;
} outC_RECV_LookupPacketLoop_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::RECV_LookupPacketLoop */
extern void RECV_LookupPacketLoop_TM_lib_internal(
  /* TM_lib_internal::RECV_LookupPacketLoop::Index */kcg_int Index,
  /* TM_lib_internal::RECV_LookupPacketLoop::HeaderInit */MetadataElement_T_Common_Types_Pkg *HeaderInit,
  /* TM_lib_internal::RECV_LookupPacketLoop::Message_in */MetadataElement_T_Common_Types_Pkg *Message_in,
  /* TM_lib_internal::RECV_LookupPacketLoop::ID_in */kcg_int ID_in,
  /* TM_lib_internal::RECV_LookupPacketLoop::F_version */kcg_bool F_version,
  /* TM_lib_internal::RECV_LookupPacketLoop::F_id */kcg_bool F_id,
  outC_RECV_LookupPacketLoop_TM_lib_internal *outC);

extern void RECV_LookupPacketLoop_reset_TM_lib_internal(
  outC_RECV_LookupPacketLoop_TM_lib_internal *outC);

#endif /* _RECV_LookupPacketLoop_TM_lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** RECV_LookupPacketLoop_TM_lib_internal.h
** Generation date: 2015-09-04T11:57:29
*************************************************************$ */

