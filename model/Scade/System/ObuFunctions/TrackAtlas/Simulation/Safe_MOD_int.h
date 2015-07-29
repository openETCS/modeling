/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */
#ifndef _Safe_MOD_int_H_
#define _Safe_MOD_int_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* Safe_MOD_int::Result */ Result;
  /* -----------------------   local probes  ------------------------- */
  kcg_bool /* Safe_MOD_int::Div0 */ Div0;
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* Safe_MOD_int::_L1 */ _L1;
  kcg_int /* Safe_MOD_int::_L2 */ _L2;
  kcg_int /* Safe_MOD_int::_L3 */ _L3;
  kcg_bool /* Safe_MOD_int::_L4 */ _L4;
  kcg_int /* Safe_MOD_int::_L5 */ _L5;
  kcg_int /* Safe_MOD_int::_L6 */ _L6;
  kcg_int /* Safe_MOD_int::_L7 */ _L7;
  kcg_int /* Safe_MOD_int::_L8 */ _L8;
  kcg_int /* Safe_MOD_int::_L9 */ _L9;
} outC_Safe_MOD_int;

/* ===========  node initialization and cycle functions  =========== */
/* Safe_MOD_int */
extern void Safe_MOD_int(
  /* Safe_MOD_int::Dividend */kcg_int Dividend,
  /* Safe_MOD_int::Divisor */kcg_int Divisor,
  outC_Safe_MOD_int *outC);

extern void Safe_MOD_int_reset(outC_Safe_MOD_int *outC);

#endif /* _Safe_MOD_int_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Safe_MOD_int.h
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */

