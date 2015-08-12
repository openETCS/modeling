/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-12T10:47:32
*************************************************************$ */
#ifndef _RECV_ReadPacketKernel_TM_lib_internal_H_
#define _RECV_ReadPacketKernel_TM_lib_internal_H_

#include "kcg_types.h"
#include "RECV_ReadPacketKernelLoop_TM_lib_internal.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array_int_500 /* TM_lib_internal::RECV_ReadPacketKernel::PacketOut */ PacketOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RECV_ReadPacketKernelLoop_TM_lib_internal /* 1 */ Context_1[500];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  CompressedPacketData_T_Common_Types_Pkg /* TM_lib_internal::RECV_ReadPacketKernel::_L3 */ _L3;
  MetadataElement_T_Common_Types_Pkg /* TM_lib_internal::RECV_ReadPacketKernel::_L4 */ _L4;
  array_int_500 /* TM_lib_internal::RECV_ReadPacketKernel::_L6 */ _L6;
  array_int_500 /* TM_lib_internal::RECV_ReadPacketKernel::_L7 */ _L7;
  kcg_bool /* TM_lib_internal::RECV_ReadPacketKernel::_L8 */ _L8;
  array_int_500 /* TM_lib_internal::RECV_ReadPacketKernel::_L10 */ _L10;
  array_int_500_500 /* TM_lib_internal::RECV_ReadPacketKernel::_L18 */ _L18;
  kcg_int /* TM_lib_internal::RECV_ReadPacketKernel::_L22 */ _L22;
  kcg_int /* TM_lib_internal::RECV_ReadPacketKernel::_L24 */ _L24;
  kcg_int /* TM_lib_internal::RECV_ReadPacketKernel::_L23 */ _L23;
} outC_RECV_ReadPacketKernel_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::RECV_ReadPacketKernel */
extern void RECV_ReadPacketKernel_TM_lib_internal(
  /* TM_lib_internal::RECV_ReadPacketKernel::Header */MetadataElement_T_Common_Types_Pkg *Header,
  /* TM_lib_internal::RECV_ReadPacketKernel::PacketData */CompressedPacketData_T_Common_Types_Pkg *PacketData,
  outC_RECV_ReadPacketKernel_TM_lib_internal *outC);

extern void RECV_ReadPacketKernel_reset_TM_lib_internal(
  outC_RECV_ReadPacketKernel_TM_lib_internal *outC);

#endif /* _RECV_ReadPacketKernel_TM_lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** RECV_ReadPacketKernel_TM_lib_internal.h
** Generation date: 2015-08-12T10:47:32
*************************************************************$ */

