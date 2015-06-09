/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-09T12:04:05
*************************************************************$ */
#ifndef _DeterminePacketSizeInt_TM_lib_internal_H_
#define _DeterminePacketSizeInt_TM_lib_internal_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* TM_lib_internal::DeterminePacketSizeInt::p_size */ p_size;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TM_lib_internal::DeterminePacketSizeInt::_L1 */ _L1;
  kcg_int /* TM_lib_internal::DeterminePacketSizeInt::_L2 */ _L2;
  kcg_int /* TM_lib_internal::DeterminePacketSizeInt::_L3 */ _L3;
  kcg_int /* TM_lib_internal::DeterminePacketSizeInt::_L6 */ _L6;
  kcg_int /* TM_lib_internal::DeterminePacketSizeInt::_L7 */ _L7;
} outC_DeterminePacketSizeInt_TM_lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TM_lib_internal::DeterminePacketSizeInt */
extern void DeterminePacketSizeInt_TM_lib_internal(
  /* TM_lib_internal::DeterminePacketSizeInt::n_iter */kcg_int n_iter,
  /* TM_lib_internal::DeterminePacketSizeInt::size_body */kcg_int size_body,
  /* TM_lib_internal::DeterminePacketSizeInt::size_section */kcg_int size_section,
  outC_DeterminePacketSizeInt_TM_lib_internal *outC);

extern void DeterminePacketSizeInt_reset_TM_lib_internal(
  outC_DeterminePacketSizeInt_TM_lib_internal *outC);

#endif /* _DeterminePacketSizeInt_TM_lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** DeterminePacketSizeInt_TM_lib_internal.h
** Generation date: 2015-06-09T12:04:05
*************************************************************$ */

