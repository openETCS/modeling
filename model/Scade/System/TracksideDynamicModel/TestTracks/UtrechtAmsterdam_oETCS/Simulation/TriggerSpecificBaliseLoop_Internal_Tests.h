/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-12T19:26:02
*************************************************************$ */
#ifndef _TriggerSpecificBaliseLoop_Internal_Tests_H_
#define _TriggerSpecificBaliseLoop_Internal_Tests_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Internal_Tests::TriggerSpecificBaliseLoop::cont */ cont;
  kcg_real /* Internal_Tests::TriggerSpecificBaliseLoop::TrainPos */ TrainPos;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* Internal_Tests::TriggerSpecificBaliseLoop::_L1 */ _L1;
  kcg_real /* Internal_Tests::TriggerSpecificBaliseLoop::_L2 */ _L2;
  kcg_int /* Internal_Tests::TriggerSpecificBaliseLoop::_L3 */ _L3;
  BPos_Internal_Tests /* Internal_Tests::TriggerSpecificBaliseLoop::_L4 */ _L4;
  BPos_Single_Internal_Tests /* Internal_Tests::TriggerSpecificBaliseLoop::_L5 */ _L5;
  kcg_real /* Internal_Tests::TriggerSpecificBaliseLoop::_L10 */ _L10;
  kcg_int /* Internal_Tests::TriggerSpecificBaliseLoop::_L9 */ _L9;
  kcg_bool /* Internal_Tests::TriggerSpecificBaliseLoop::_L11 */ _L11;
  kcg_real /* Internal_Tests::TriggerSpecificBaliseLoop::_L12 */ _L12;
  kcg_bool /* Internal_Tests::TriggerSpecificBaliseLoop::_L13 */ _L13;
} outC_TriggerSpecificBaliseLoop_Internal_Tests;

/* ===========  node initialization and cycle functions  =========== */
/* Internal_Tests::TriggerSpecificBaliseLoop */
extern void TriggerSpecificBaliseLoop_Internal_Tests(
  /* Internal_Tests::TriggerSpecificBaliseLoop::i */kcg_int i,
  /* Internal_Tests::TriggerSpecificBaliseLoop::Acc */kcg_real Acc,
  /* Internal_Tests::TriggerSpecificBaliseLoop::nid_BG */kcg_int nid_BG,
  outC_TriggerSpecificBaliseLoop_Internal_Tests *outC);

extern void TriggerSpecificBaliseLoop_reset_Internal_Tests(
  outC_TriggerSpecificBaliseLoop_Internal_Tests *outC);

#endif /* _TriggerSpecificBaliseLoop_Internal_Tests_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TriggerSpecificBaliseLoop_Internal_Tests.h
** Generation date: 2015-08-12T19:26:02
*************************************************************$ */

