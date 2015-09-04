/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */
#ifndef _MOD_XCP_numeric_H_
#define _MOD_XCP_numeric_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* XCP_numeric::MOD::Result */ Result;
  kcg_bool /* XCP_numeric::MOD::Exception */ Exception;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* XCP_numeric::MOD::_L1 */ _L1;
  kcg_int /* XCP_numeric::MOD::_L2 */ _L2;
  kcg_int /* XCP_numeric::MOD::_L3 */ _L3;
  kcg_int /* XCP_numeric::MOD::_L4 */ _L4;
  kcg_int /* XCP_numeric::MOD::_L5 */ _L5;
  kcg_int /* XCP_numeric::MOD::_L6 */ _L6;
  kcg_bool /* XCP_numeric::MOD::_L7 */ _L7;
  kcg_bool /* XCP_numeric::MOD::_L8 */ _L8;
} outC_MOD_XCP_numeric;

/* ===========  node initialization and cycle functions  =========== */
/* XCP_numeric::MOD */
extern void MOD_XCP_numeric(
  /* XCP_numeric::MOD::Dividend */kcg_int Dividend,
  /* XCP_numeric::MOD::Divisor */kcg_int Divisor,
  /* XCP_numeric::MOD::Default */kcg_int Default,
  outC_MOD_XCP_numeric *outC);

extern void MOD_reset_XCP_numeric(outC_MOD_XCP_numeric *outC);

#endif /* _MOD_XCP_numeric_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** MOD_XCP_numeric.h
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

