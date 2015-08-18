/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-12T20:04:58
*************************************************************$ */
#ifndef _TriggerBaliseByIndexLoop_Internal_Tests_H_
#define _TriggerBaliseByIndexLoop_Internal_Tests_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Internal_Tests::TriggerBaliseByIndexLoop::cont */ cont;
  BPos_Single_Internal_Tests /* Internal_Tests::TriggerBaliseByIndexLoop::TrainPos */ TrainPos;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* Internal_Tests::TriggerBaliseByIndexLoop::_L1 */ _L1;
  BPos_Single_Internal_Tests /* Internal_Tests::TriggerBaliseByIndexLoop::_L2 */ _L2;
  kcg_int /* Internal_Tests::TriggerBaliseByIndexLoop::_L3 */ _L3;
  BPos_Internal_Tests /* Internal_Tests::TriggerBaliseByIndexLoop::_L4 */ _L4;
  BPos_Single_Internal_Tests /* Internal_Tests::TriggerBaliseByIndexLoop::_L5 */ _L5;
  kcg_bool /* Internal_Tests::TriggerBaliseByIndexLoop::_L11 */ _L11;
  BPos_Single_Internal_Tests /* Internal_Tests::TriggerBaliseByIndexLoop::_L12 */ _L12;
  kcg_bool /* Internal_Tests::TriggerBaliseByIndexLoop::_L13 */ _L13;
  kcg_int /* Internal_Tests::TriggerBaliseByIndexLoop::_L14 */ _L14;
  kcg_int /* Internal_Tests::TriggerBaliseByIndexLoop::_L16 */ _L16;
} outC_TriggerBaliseByIndexLoop_Internal_Tests;

/* ===========  node initialization and cycle functions  =========== */
/* Internal_Tests::TriggerBaliseByIndexLoop */
extern void TriggerBaliseByIndexLoop_Internal_Tests(
  /* Internal_Tests::TriggerBaliseByIndexLoop::i */kcg_int i,
  /* Internal_Tests::TriggerBaliseByIndexLoop::Acc */BPos_Single_Internal_Tests *Acc,
  /* Internal_Tests::TriggerBaliseByIndexLoop::index */kcg_int index,
  outC_TriggerBaliseByIndexLoop_Internal_Tests *outC);

extern void TriggerBaliseByIndexLoop_reset_Internal_Tests(
  outC_TriggerBaliseByIndexLoop_Internal_Tests *outC);

#endif /* _TriggerBaliseByIndexLoop_Internal_Tests_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TriggerBaliseByIndexLoop_Internal_Tests.h
** Generation date: 2015-08-12T20:04:58
*************************************************************$ */

