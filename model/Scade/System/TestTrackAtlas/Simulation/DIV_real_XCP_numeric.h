/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */
#ifndef _DIV_real_XCP_numeric_H_
#define _DIV_real_XCP_numeric_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* XCP_numeric::DIV_real::Result */ Result;
  kcg_bool /* XCP_numeric::DIV_real::Exception */ Exception;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_real /* XCP_numeric::DIV_real::_L1 */ _L1;
  kcg_real /* XCP_numeric::DIV_real::_L2 */ _L2;
  kcg_real /* XCP_numeric::DIV_real::_L3 */ _L3;
  kcg_real /* XCP_numeric::DIV_real::_L4 */ _L4;
  kcg_real /* XCP_numeric::DIV_real::_L5 */ _L5;
  kcg_real /* XCP_numeric::DIV_real::_L6 */ _L6;
  kcg_bool /* XCP_numeric::DIV_real::_L7 */ _L7;
  kcg_bool /* XCP_numeric::DIV_real::_L8 */ _L8;
} outC_DIV_real_XCP_numeric;

/* ===========  node initialization and cycle functions  =========== */
/* XCP_numeric::DIV_real */
extern void DIV_real_XCP_numeric(
  /* XCP_numeric::DIV_real::Dividend */kcg_real Dividend,
  /* XCP_numeric::DIV_real::Divisor */kcg_real Divisor,
  /* XCP_numeric::DIV_real::Default */kcg_real Default,
  outC_DIV_real_XCP_numeric *outC);

extern void DIV_real_reset_XCP_numeric(outC_DIV_real_XCP_numeric *outC);

#endif /* _DIV_real_XCP_numeric_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** DIV_real_XCP_numeric.h
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

