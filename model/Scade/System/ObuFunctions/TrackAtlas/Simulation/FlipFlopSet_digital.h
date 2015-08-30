/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T04:54:49
*************************************************************$ */
#ifndef _FlipFlopSet_digital_H_
#define _FlipFlopSet_digital_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* digital::FlipFlopSet::Set */ Set;
  kcg_bool /* digital::FlipFlopSet::Reset */ Reset;
  kcg_bool /* digital::FlipFlopSet::Init */ Init;
} inC_FlipFlopSet_digital;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* digital::FlipFlopSet::FFS_Output */ FFS_Output;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* digital::FlipFlopSet::_L2 */ _L2;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* digital::FlipFlopSet::_L10 */ _L10;
  kcg_bool /* digital::FlipFlopSet::_L4 */ _L4;
  kcg_bool /* digital::FlipFlopSet::_L5 */ _L5;
  kcg_bool /* digital::FlipFlopSet::_L6 */ _L6;
  kcg_bool /* digital::FlipFlopSet::_L11 */ _L11;
  kcg_bool /* digital::FlipFlopSet::_L12 */ _L12;
  kcg_bool /* digital::FlipFlopSet::_L13 */ _L13;
} outC_FlipFlopSet_digital;

/* ===========  node initialization and cycle functions  =========== */
/* digital::FlipFlopSet */
extern void FlipFlopSet_digital(
  inC_FlipFlopSet_digital *inC,
  outC_FlipFlopSet_digital *outC);

extern void FlipFlopSet_reset_digital(outC_FlipFlopSet_digital *outC);

#endif /* _FlipFlopSet_digital_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** FlipFlopSet_digital.h
** Generation date: 2015-08-30T04:54:49
*************************************************************$ */

