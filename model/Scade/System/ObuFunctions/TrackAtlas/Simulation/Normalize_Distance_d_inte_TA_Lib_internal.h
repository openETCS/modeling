/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */
#ifndef _Normalize_Distance_d_inte_TA_Lib_internal_H_
#define _Normalize_Distance_d_inte_TA_Lib_internal_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_Lib_internal::Normalize_Distance_d_internal_t::d_internal */ d_internal;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* TA_Lib_internal::Normalize_Distance_d_internal_t::IfBlock1 */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TA_Lib_internal::Normalize_Distance_d_internal_t::IfBlock1::then::_L3 */ _L3_IfBlock1;
  kcg_int /* TA_Lib_internal::Normalize_Distance_d_internal_t::IfBlock1::then::_L2 */ _L2_IfBlock1;
  kcg_int /* TA_Lib_internal::Normalize_Distance_d_internal_t::IfBlock1::then::_L1 */ _L1_IfBlock1;
  kcg_bool /* TA_Lib_internal::Normalize_Distance_d_internal_t::IfBlock1::else */ else_clock_IfBlock1;
  kcg_int /* TA_Lib_internal::Normalize_Distance_d_internal_t::IfBlock1::else::else::_L3 */ _L36_IfBlock1;
  kcg_int /* TA_Lib_internal::Normalize_Distance_d_internal_t::IfBlock1::else::else::_L2 */ _L25_IfBlock1;
  kcg_int /* TA_Lib_internal::Normalize_Distance_d_internal_t::IfBlock1::else::else::_L1 */ _L14_IfBlock1;
  kcg_int /* TA_Lib_internal::Normalize_Distance_d_internal_t::IfBlock1::else::then::_L3 */ _L33_IfBlock1;
  kcg_int /* TA_Lib_internal::Normalize_Distance_d_internal_t::IfBlock1::else::then::_L2 */ _L22_IfBlock1;
  kcg_int /* TA_Lib_internal::Normalize_Distance_d_internal_t::IfBlock1::else::then::_L1 */ _L11_IfBlock1;
  Q_SCALE /* TA_Lib_internal::Normalize_Distance_d_internal_t::q_scale_in */ q_scale_in;
  Q_SCALE /* TA_Lib_internal::Normalize_Distance_d_internal_t::_L1 */ _L1;
} outC_Normalize_Distance_d_inte_TA_Lib_internal;

/* ===========  node initialization and cycle functions  =========== */
/* TA_Lib_internal::Normalize_Distance_d_internal_t */
extern void Normalize_Distance_d_inte_TA_Lib_internal(
  /* TA_Lib_internal::Normalize_Distance_d_internal_t::q_scale */Q_SCALE q_scale,
  /* TA_Lib_internal::Normalize_Distance_d_internal_t::d */kcg_int d,
  outC_Normalize_Distance_d_inte_TA_Lib_internal *outC);

extern void Normalize_Distance_d_inte_reset_TA_Lib_internal(
  outC_Normalize_Distance_d_inte_TA_Lib_internal *outC);

#endif /* _Normalize_Distance_d_inte_TA_Lib_internal_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Normalize_Distance_d_inte_TA_Lib_internal.h
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */

