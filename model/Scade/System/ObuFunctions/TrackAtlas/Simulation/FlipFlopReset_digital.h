/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T04:52:33
*************************************************************$ */
#ifndef _FlipFlopReset_digital_H_
#define _FlipFlopReset_digital_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* digital::FlipFlopReset::Set */ Set;
  kcg_bool /* digital::FlipFlopReset::Reset */ Reset;
  kcg_bool /* digital::FlipFlopReset::Init */ Init;
} inC_FlipFlopReset_digital;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* digital::FlipFlopReset::FFR_Output */ FFR_Output;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* digital::FlipFlopReset::_L2 */ _L2;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* digital::FlipFlopReset::_L10 */ _L10;
  kcg_bool /* digital::FlipFlopReset::_L4 */ _L4;
  kcg_bool /* digital::FlipFlopReset::_L7 */ _L7;
  kcg_bool /* digital::FlipFlopReset::_L8 */ _L8;
  kcg_bool /* digital::FlipFlopReset::_L11 */ _L11;
  kcg_bool /* digital::FlipFlopReset::_L12 */ _L12;
  kcg_bool /* digital::FlipFlopReset::_L14 */ _L14;
} outC_FlipFlopReset_digital;

/* ===========  node initialization and cycle functions  =========== */
/* digital::FlipFlopReset */
extern void FlipFlopReset_digital(
  inC_FlipFlopReset_digital *inC,
  outC_FlipFlopReset_digital *outC);

extern void FlipFlopReset_reset_digital(outC_FlipFlopReset_digital *outC);

#endif /* _FlipFlopReset_digital_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** FlipFlopReset_digital.h
** Generation date: 2015-08-30T04:52:33
*************************************************************$ */

