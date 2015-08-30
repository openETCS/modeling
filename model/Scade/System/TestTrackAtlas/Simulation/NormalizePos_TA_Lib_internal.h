/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:05:41
*************************************************************$ */
#ifndef _NormalizePos_TA_Lib_internal_H_
#define _NormalizePos_TA_Lib_internal_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* TA_Lib_internal::NormalizePos::Out */ Out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TA_Lib_internal::NormalizePos::_L1 */ _L1;
  kcg_int /* TA_Lib_internal::NormalizePos::_L2 */ _L2;
  kcg_bool /* TA_Lib_internal::NormalizePos::_L3 */ _L3;
  kcg_int /* TA_Lib_internal::NormalizePos::_L4 */ _L4;
} outC_NormalizePos_TA_Lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Lib_internal::NormalizePos */
extern void NormalizePos_TA_Lib_internal(
  /* TA_Lib_internal::NormalizePos::In */kcg_int In,
  /* TA_Lib_internal::NormalizePos::Value */kcg_int Value,
  outC_NormalizePos_TA_Lib_internal *outC);

extern void NormalizePos_reset_TA_Lib_internal(
  outC_NormalizePos_TA_Lib_internal *outC);

#endif /* _NormalizePos_TA_Lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** NormalizePos_TA_Lib_internal.h
** Generation date: 2015-08-30T07:05:41
*************************************************************$ */

