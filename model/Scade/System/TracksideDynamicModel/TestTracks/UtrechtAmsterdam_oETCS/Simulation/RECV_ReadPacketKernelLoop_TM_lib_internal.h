/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-08T18:54:31
*************************************************************$ */
#ifndef _RECV_ReadPacketKernelLoop_TM_lib_internal_H_
#define _RECV_ReadPacketKernelLoop_TM_lib_internal_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TM_lib_internal::RECV_ReadPacketKernelLoop::Cont */ Cont;
  kcg_int /* TM_lib_internal::RECV_ReadPacketKernelLoop::PacketOut */ PacketOut;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TM_lib_internal::RECV_ReadPacketKernelLoop::_L1 */ _L1;
  kcg_int /* TM_lib_internal::RECV_ReadPacketKernelLoop::_L3 */ _L3;
  kcg_int /* TM_lib_internal::RECV_ReadPacketKernelLoop::_L4 */ _L4;
  CompressedPacketData_T_Common_Types_Pkg /* TM_lib_internal::RECV_ReadPacketKernelLoop::_L9 */ _L9;
  kcg_bool /* TM_lib_internal::RECV_ReadPacketKernelLoop::_L18 */ _L18;
  kcg_int /* TM_lib_internal::RECV_ReadPacketKernelLoop::_L20 */ _L20;
  kcg_int /* TM_lib_internal::RECV_ReadPacketKernelLoop::_L29 */ _L29;
  kcg_int /* TM_lib_internal::RECV_ReadPacketKernelLoop::_L30 */ _L30;
  kcg_int /* TM_lib_internal::RECV_ReadPacketKernelLoop::_L31 */ _L31;
  kcg_int /* TM_lib_internal::RECV_ReadPacketKernelLoop::_L32 */ _L32;
  kcg_int /* TM_lib_internal::RECV_ReadPacketKernelLoop::_L33 */ _L33;
  kcg_int /* TM_lib_internal::RECV_ReadPacketKernelLoop::_L34 */ _L34;
} outC_RECV_ReadPacketKernelLoop_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::RECV_ReadPacketKernelLoop */
extern void RECV_ReadPacketKernelLoop_TM_lib_internal(
  /* TM_lib_internal::RECV_ReadPacketKernelLoop::Index */kcg_int Index,
  /* TM_lib_internal::RECV_ReadPacketKernelLoop::PacketData */CompressedPacketData_T_Common_Types_Pkg *PacketData,
  /* TM_lib_internal::RECV_ReadPacketKernelLoop::AddressStart */kcg_int AddressStart,
  /* TM_lib_internal::RECV_ReadPacketKernelLoop::AddressEnd */kcg_int AddressEnd,
  outC_RECV_ReadPacketKernelLoop_TM_lib_internal *outC);

extern void RECV_ReadPacketKernelLoop_reset_TM_lib_internal(
  outC_RECV_ReadPacketKernelLoop_TM_lib_internal *outC);

#endif /* _RECV_ReadPacketKernelLoop_TM_lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** RECV_ReadPacketKernelLoop_TM_lib_internal.h
** Generation date: 2015-06-08T18:54:31
*************************************************************$ */

