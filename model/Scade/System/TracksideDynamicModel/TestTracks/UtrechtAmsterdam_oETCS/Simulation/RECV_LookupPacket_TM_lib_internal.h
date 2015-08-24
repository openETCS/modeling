/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-20T16:18:38
*************************************************************$ */
#ifndef _RECV_LookupPacket_TM_lib_internal_H_
#define _RECV_LookupPacket_TM_lib_internal_H_

#include "kcg_types.h"
#include "RECV_LookupPacketLoop_TM_lib_internal.h"
#include "T_Filter_Metadata_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TM_lib_internal::RECV_LookupPacket::Found */ Found;
  kcg_int /* TM_lib_internal::RECV_LookupPacket::Index */ Index;
  MetadataElement_T_Common_Types_Pkg /* TM_lib_internal::RECV_LookupPacket::HeaderFound */ HeaderFound;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_T_Filter_Metadata_TM_lib_internal /* 1 */ _1_Context_1;
  outC_RECV_LookupPacketLoop_TM_lib_internal /* 1 */ Context_1[30];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Metadata_T_Common_Types_Pkg /* TM_lib_internal::RECV_LookupPacket::_L1 */ _L1;
  kcg_int /* TM_lib_internal::RECV_LookupPacket::_L2 */ _L2;
  array_int_30 /* TM_lib_internal::RECV_LookupPacket::_L3 */ _L3;
  kcg_int /* TM_lib_internal::RECV_LookupPacket::_L4 */ _L4;
  kcg_bool /* TM_lib_internal::RECV_LookupPacket::_L5 */ _L5;
  MetadataElement_T_Common_Types_Pkg /* TM_lib_internal::RECV_LookupPacket::_L23 */ _L23;
  NID_PACKET /* TM_lib_internal::RECV_LookupPacket::_L24 */ _L24;
  MetadataElement_T_Common_Types_Pkg /* TM_lib_internal::RECV_LookupPacket::_L26 */ _L26;
  MetadataElement_T_Common_Types_Pkg /* TM_lib_internal::RECV_LookupPacket::_L22 */ _L22;
  MetadataElement_T_Common_Types_Pkg /* TM_lib_internal::RECV_LookupPacket::_L27 */ _L27;
  kcg_int /* TM_lib_internal::RECV_LookupPacket::_L28 */ _L28;
  kcg_int /* TM_lib_internal::RECV_LookupPacket::_L29 */ _L29;
  kcg_bool /* TM_lib_internal::RECV_LookupPacket::_L30 */ _L30;
  kcg_bool /* TM_lib_internal::RECV_LookupPacket::_L31 */ _L31;
  kcg_bool /* TM_lib_internal::RECV_LookupPacket::_L32 */ _L32;
  kcg_int /* TM_lib_internal::RECV_LookupPacket::_L34 */ _L34;
  kcg_bool /* TM_lib_internal::RECV_LookupPacket::_L35 */ _L35;
  kcg_bool /* TM_lib_internal::RECV_LookupPacket::_L36 */ _L36;
  array_bool_30 /* TM_lib_internal::RECV_LookupPacket::_L38 */ _L38;
  array_bool_30 /* TM_lib_internal::RECV_LookupPacket::_L40 */ _L40;
} outC_RECV_LookupPacket_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::RECV_LookupPacket */
extern void RECV_LookupPacket_TM_lib_internal(
  /* TM_lib_internal::RECV_LookupPacket::Message_ID */kcg_int Message_ID,
  /* TM_lib_internal::RECV_LookupPacket::HeadersIN */Metadata_T_Common_Types_Pkg *HeadersIN,
  /* TM_lib_internal::RECV_LookupPacket::F_version */kcg_bool F_version,
  /* TM_lib_internal::RECV_LookupPacket::F_id */kcg_bool F_id,
  outC_RECV_LookupPacket_TM_lib_internal *outC);

extern void RECV_LookupPacket_reset_TM_lib_internal(
  outC_RECV_LookupPacket_TM_lib_internal *outC);

#endif /* _RECV_LookupPacket_TM_lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** RECV_LookupPacket_TM_lib_internal.h
** Generation date: 2015-08-20T16:18:38
*************************************************************$ */

