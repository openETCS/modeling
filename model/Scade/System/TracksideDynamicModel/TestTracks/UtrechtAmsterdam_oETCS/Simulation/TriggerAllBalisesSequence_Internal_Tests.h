/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-12T20:04:58
*************************************************************$ */
#ifndef _TriggerAllBalisesSequence_Internal_Tests_H_
#define _TriggerAllBalisesSequence_Internal_Tests_H_

#include "kcg_types.h"
#include "TriggerBaliseByIndex_Internal_Tests.h"
#include "ClockCounter_pwlinear.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* Internal_Tests::TriggerAllBalisesSequence::TrainPos */ TrainPos;
  NID_BG /* Internal_Tests::TriggerAllBalisesSequence::nid_BG */ nid_BG;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_TriggerBaliseByIndex_Internal_Tests /* 1 */ _1_Context_1;
  outC_ClockCounter_pwlinear /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  NID_BG /* Internal_Tests::TriggerAllBalisesSequence::_L2 */ _L2;
  kcg_real /* Internal_Tests::TriggerAllBalisesSequence::_L1 */ _L1;
  kcg_int /* Internal_Tests::TriggerAllBalisesSequence::_L3 */ _L3;
  kcg_bool /* Internal_Tests::TriggerAllBalisesSequence::_L4 */ _L4;
} outC_TriggerAllBalisesSequence_Internal_Tests;

/* ===========  node initialization and cycle functions  =========== */
/* Internal_Tests::TriggerAllBalisesSequence */
extern void TriggerAllBalisesSequence_Internal_Tests(
  /* Internal_Tests::TriggerAllBalisesSequence::reset */kcg_bool reset1,
  outC_TriggerAllBalisesSequence_Internal_Tests *outC);

extern void TriggerAllBalisesSequence_reset_Internal_Tests(
  outC_TriggerAllBalisesSequence_Internal_Tests *outC);

#endif /* _TriggerAllBalisesSequence_Internal_Tests_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TriggerAllBalisesSequence_Internal_Tests.h
** Generation date: 2015-08-12T20:04:58
*************************************************************$ */

