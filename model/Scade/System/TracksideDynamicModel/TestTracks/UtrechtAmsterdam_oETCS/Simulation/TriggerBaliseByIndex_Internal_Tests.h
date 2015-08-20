/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-20T18:20:31
*************************************************************$ */
#ifndef _TriggerBaliseByIndex_Internal_Tests_H_
#define _TriggerBaliseByIndex_Internal_Tests_H_

#include "kcg_types.h"
#include "TriggerBaliseByIndexLoop_Internal_Tests.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* Internal_Tests::TriggerBaliseByIndex::TrainPos */ TrainPos;
  NID_BG /* Internal_Tests::TriggerBaliseByIndex::nid_BG */ nid_BG;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_TriggerBaliseByIndexLoop_Internal_Tests /* 1 */ Context_1[100];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* Internal_Tests::TriggerBaliseByIndex::_L1 */ _L1;
  kcg_int /* Internal_Tests::TriggerBaliseByIndex::_L2 */ _L2;
  kcg_bool /* Internal_Tests::TriggerBaliseByIndex::_L3 */ _L3;
  BPos_Single_Internal_Tests /* Internal_Tests::TriggerBaliseByIndex::_L4 */ _L4;
  array_int_100 /* Internal_Tests::TriggerBaliseByIndex::_L6 */ _L6;
  BPos_Single_Internal_Tests /* Internal_Tests::TriggerBaliseByIndex::_L7 */ _L7;
  kcg_real /* Internal_Tests::TriggerBaliseByIndex::_L11 */ _L11;
  kcg_int /* Internal_Tests::TriggerBaliseByIndex::_L10 */ _L10;
} outC_TriggerBaliseByIndex_Internal_Tests;

/* ===========  node initialization and cycle functions  =========== */
/* Internal_Tests::TriggerBaliseByIndex */
extern void TriggerBaliseByIndex_Internal_Tests(
  /* Internal_Tests::TriggerBaliseByIndex::index */kcg_int index,
  outC_TriggerBaliseByIndex_Internal_Tests *outC);

extern void TriggerBaliseByIndex_reset_Internal_Tests(
  outC_TriggerBaliseByIndex_Internal_Tests *outC);

#endif /* _TriggerBaliseByIndex_Internal_Tests_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TriggerBaliseByIndex_Internal_Tests.h
** Generation date: 2015-08-20T18:20:31
*************************************************************$ */

