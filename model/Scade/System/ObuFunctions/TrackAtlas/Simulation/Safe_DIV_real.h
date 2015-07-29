/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */
#ifndef _Safe_DIV_real_H_
#define _Safe_DIV_real_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* Safe_DIV_real::Result */ Result;
  /* -----------------------   local probes  ------------------------- */
  kcg_bool /* Safe_DIV_real::Div0 */ Div0;
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_real /* Safe_DIV_real::_L1 */ _L1;
  kcg_real /* Safe_DIV_real::_L2 */ _L2;
  kcg_real /* Safe_DIV_real::_L3 */ _L3;
  kcg_bool /* Safe_DIV_real::_L4 */ _L4;
  kcg_real /* Safe_DIV_real::_L5 */ _L5;
  kcg_real /* Safe_DIV_real::_L6 */ _L6;
  kcg_real /* Safe_DIV_real::_L7 */ _L7;
  kcg_real /* Safe_DIV_real::_L8 */ _L8;
  kcg_real /* Safe_DIV_real::_L9 */ _L9;
} outC_Safe_DIV_real;

/* ===========  node initialization and cycle functions  =========== */
/* Safe_DIV_real */
extern void Safe_DIV_real(
  /* Safe_DIV_real::Dividend */kcg_real Dividend,
  /* Safe_DIV_real::Divisor */kcg_real Divisor,
  outC_Safe_DIV_real *outC);

extern void Safe_DIV_real_reset(outC_Safe_DIV_real *outC);

#endif /* _Safe_DIV_real_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Safe_DIV_real.h
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

