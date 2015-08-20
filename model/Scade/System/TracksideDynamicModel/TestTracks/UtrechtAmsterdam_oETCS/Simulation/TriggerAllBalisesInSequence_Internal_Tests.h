/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-20T18:20:31
*************************************************************$ */
#ifndef _TriggerAllBalisesInSequence_Internal_Tests_H_
#define _TriggerAllBalisesInSequence_Internal_Tests_H_

#include "kcg_types.h"
#include "TriggerBaliseByIndex_Internal_Tests.h"
#include "ClockCounter_pwlinear.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* Internal_Tests::TriggerAllBalisesInSequence::TrainPos */ TrainPos;
  NID_BG /* Internal_Tests::TriggerAllBalisesInSequence::nid_BG */ nid_BG;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_TriggerBaliseByIndex_Internal_Tests /* 1 */ _1_Context_1;
  outC_ClockCounter_pwlinear /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  NID_BG /* Internal_Tests::TriggerAllBalisesInSequence::_L2 */ _L2;
  kcg_real /* Internal_Tests::TriggerAllBalisesInSequence::_L1 */ _L1;
  kcg_int /* Internal_Tests::TriggerAllBalisesInSequence::_L3 */ _L3;
  kcg_bool /* Internal_Tests::TriggerAllBalisesInSequence::_L4 */ _L4;
  kcg_int /* Internal_Tests::TriggerAllBalisesInSequence::_L5 */ _L5;
  kcg_int /* Internal_Tests::TriggerAllBalisesInSequence::_L6 */ _L6;
  kcg_int /* Internal_Tests::TriggerAllBalisesInSequence::_L7 */ _L7;
  kcg_bool /* Internal_Tests::TriggerAllBalisesInSequence::_L8 */ _L8;
  kcg_real /* Internal_Tests::TriggerAllBalisesInSequence::_L9 */ _L9;
  kcg_real /* Internal_Tests::TriggerAllBalisesInSequence::_L10 */ _L10;
  kcg_real /* Internal_Tests::TriggerAllBalisesInSequence::_L11 */ _L11;
  kcg_real /* Internal_Tests::TriggerAllBalisesInSequence::_L12 */ _L12;
  kcg_int /* Internal_Tests::TriggerAllBalisesInSequence::_L13 */ _L13;
  kcg_int /* Internal_Tests::TriggerAllBalisesInSequence::_L14 */ _L14;
  kcg_int /* Internal_Tests::TriggerAllBalisesInSequence::_L15 */ _L15;
  kcg_int /* Internal_Tests::TriggerAllBalisesInSequence::_L16 */ _L16;
  kcg_real /* Internal_Tests::TriggerAllBalisesInSequence::_L23 */ _L23;
  kcg_bool /* Internal_Tests::TriggerAllBalisesInSequence::_L22 */ _L22;
  kcg_int /* Internal_Tests::TriggerAllBalisesInSequence::_L21 */ _L21;
  kcg_int /* Internal_Tests::TriggerAllBalisesInSequence::_L20 */ _L20;
  kcg_real /* Internal_Tests::TriggerAllBalisesInSequence::_L19 */ _L19;
  kcg_int /* Internal_Tests::TriggerAllBalisesInSequence::_L18 */ _L18;
  kcg_real /* Internal_Tests::TriggerAllBalisesInSequence::_L17 */ _L17;
} outC_TriggerAllBalisesInSequence_Internal_Tests;

/* ===========  node initialization and cycle functions  =========== */
/* Internal_Tests::TriggerAllBalisesInSequence */
extern void TriggerAllBalisesInSequence_Internal_Tests(
  /* Internal_Tests::TriggerAllBalisesInSequence::reset */kcg_bool reset,
  outC_TriggerAllBalisesInSequence_Internal_Tests *outC);

extern void TriggerAllBalisesInSequence_reset_Internal_Tests(
  outC_TriggerAllBalisesInSequence_Internal_Tests *outC);

#endif /* _TriggerAllBalisesInSequence_Internal_Tests_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TriggerAllBalisesInSequence_Internal_Tests.h
** Generation date: 2015-08-20T18:20:31
*************************************************************$ */

