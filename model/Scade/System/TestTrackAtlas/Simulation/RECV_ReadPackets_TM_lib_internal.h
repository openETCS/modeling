/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T11:57:29
*************************************************************$ */
#ifndef _RECV_ReadPackets_TM_lib_internal_H_
#define _RECV_ReadPackets_TM_lib_internal_H_

#include "kcg_types.h"
#include "RECV_LookupPacket_TM_lib_internal.h"
#include "RECV_ReadPacketKernel_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_int_500 /* TM_lib_internal::RECV_ReadPackets::Data */ Data;
  MetadataElement_T_Common_Types_Pkg /* TM_lib_internal::RECV_ReadPackets::Metadata */ Metadata;
  kcg_bool /* TM_lib_internal::RECV_ReadPackets::received */ received;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RECV_ReadPacketKernel_TM_lib_internal /* 1 */ _1_Context_1;
  outC_RECV_LookupPacket_TM_lib_internal /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool tmp;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  MetadataElement_T_Common_Types_Pkg /* TM_lib_internal::RECV_ReadPackets::_L3 */ _L3;
  kcg_int /* TM_lib_internal::RECV_ReadPackets::_L2 */ _L2;
  kcg_bool /* TM_lib_internal::RECV_ReadPackets::_L1 */ _L1;
  array_int_500 /* TM_lib_internal::RECV_ReadPackets::_L4 */ _L4;
  CompressedPacketData_T_Common_Types_Pkg /* TM_lib_internal::RECV_ReadPackets::_L44 */ _L44;
  kcg_int /* TM_lib_internal::RECV_ReadPackets::_L45 */ _L45;
  CompressedPackets_T_Common_Types_Pkg /* TM_lib_internal::RECV_ReadPackets::_L46 */ _L46;
  CompressedPacketData_T_Common_Types_Pkg /* TM_lib_internal::RECV_ReadPackets::_L48 */ _L48;
  Metadata_T_Common_Types_Pkg /* TM_lib_internal::RECV_ReadPackets::_L47 */ _L47;
  kcg_bool /* TM_lib_internal::RECV_ReadPackets::_L49 */ _L49;
  kcg_bool /* TM_lib_internal::RECV_ReadPackets::_L50 */ _L50;
} outC_RECV_ReadPackets_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::RECV_ReadPackets */
extern void RECV_ReadPackets_TM_lib_internal(
  /* TM_lib_internal::RECV_ReadPackets::Packets */CompressedPackets_T_Common_Types_Pkg *Packets,
  /* TM_lib_internal::RECV_ReadPackets::PacketID */kcg_int PacketID,
  /* TM_lib_internal::RECV_ReadPackets::F_version */kcg_bool F_version,
  /* TM_lib_internal::RECV_ReadPackets::F_id */kcg_bool F_id,
  outC_RECV_ReadPackets_TM_lib_internal *outC);

extern void RECV_ReadPackets_reset_TM_lib_internal(
  outC_RECV_ReadPackets_TM_lib_internal *outC);

#endif /* _RECV_ReadPackets_TM_lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** RECV_ReadPackets_TM_lib_internal.h
** Generation date: 2015-09-04T11:57:29
*************************************************************$ */

