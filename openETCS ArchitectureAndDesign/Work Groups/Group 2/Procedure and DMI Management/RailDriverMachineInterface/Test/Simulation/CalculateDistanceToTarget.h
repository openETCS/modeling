/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config C:/Users/Valerio/Desktop/DMI Funzionante/2014-09-02 RailDriverMachineInterface/RailDriverMachineInterface/Test/Simulation/config.txt
** Generation date: 2015-01-20T14:34:49
*************************************************************$ */
#ifndef _CalculateDistanceToTarget_H_
#define _CalculateDistanceToTarget_H_

#include "kcg_types.h"
#include "kcg_imported_functions.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* CalculateDistanceToTarget::InterpolatedDistanceToTarget */ InterpolatedDistanceToTarget;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* CalculateDistanceToTarget::IfBlock1::else */ _1_else_clock_IfBlock1;
  kcg_bool /* CalculateDistanceToTarget::IfBlock1::else::else */ else_clock_IfBlock1;
  kcg_bool /* CalculateDistanceToTarget::IfBlock1 */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_real /* CalculateDistanceToTarget::IfBlock1::then::_L8 */ _L8_IfBlock1;
  kcg_real /* CalculateDistanceToTarget::IfBlock1::else::else::then::_L1 */ _L12_IfBlock1;
  kcg_real /* CalculateDistanceToTarget::IfBlock1::else::else::else::_L10 */ _L10_IfBlock1;
  kcg_real /* CalculateDistanceToTarget::IfBlock1::else::else::else::_L9 */ _L9_IfBlock1;
  kcg_real /* CalculateDistanceToTarget::IfBlock1::else::else::else::_L8 */ _L83_IfBlock1;
  kcg_real /* CalculateDistanceToTarget::IfBlock1::else::else::else::_L7 */ _L7_IfBlock1;
  kcg_real /* CalculateDistanceToTarget::IfBlock1::else::else::else::_L6 */ _L6_IfBlock1;
  kcg_real /* CalculateDistanceToTarget::IfBlock1::else::else::else::_L2 */ _L24_IfBlock1;
  kcg_real /* CalculateDistanceToTarget::IfBlock1::else::else::else::_L3 */ _L35_IfBlock1;
  kcg_real /* CalculateDistanceToTarget::IfBlock1::else::else::else::_L5 */ _L56_IfBlock1;
  kcg_real /* CalculateDistanceToTarget::IfBlock1::else::then::_L5 */ _L5_IfBlock1;
  kcg_real /* CalculateDistanceToTarget::IfBlock1::else::then::_L4 */ _L4_IfBlock1;
  kcg_real /* CalculateDistanceToTarget::IfBlock1::else::then::_L3 */ _L3_IfBlock1;
  kcg_real /* CalculateDistanceToTarget::IfBlock1::else::then::_L2 */ _L2_IfBlock1;
  kcg_real /* CalculateDistanceToTarget::IfBlock1::else::then::_L1 */ _L1_IfBlock1;
} outC_CalculateDistanceToTarget;

/* ===========  node initialization and cycle functions  =========== */
/* CalculateDistanceToTarget */
extern void CalculateDistanceToTarget(
  /* CalculateDistanceToTarget::DistanceToTarget */ kcg_real DistanceToTarget,
  outC_CalculateDistanceToTarget *outC);

extern void CalculateDistanceToTarget_reset(
  outC_CalculateDistanceToTarget *outC);
extern void CalculateDistanceToTarget_init(
  outC_CalculateDistanceToTarget *outC);

#endif /* _CalculateDistanceToTarget_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** CalculateDistanceToTarget.h
** Generation date: 2015-01-20T14:34:49
*************************************************************$ */

