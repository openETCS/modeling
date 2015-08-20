/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-20T16:26:56
*************************************************************$ */
#ifndef _TriggerSpecificBalise_Internal_Tests_H_
#define _TriggerSpecificBalise_Internal_Tests_H_

#include "kcg_types.h"
#include "TriggerSpecificBaliseLoop_Internal_Tests.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* Internal_Tests::TriggerSpecificBalise::TrainPos */ TrainPos;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_TriggerSpecificBaliseLoop_Internal_Tests /* 1 */ Context_1[100];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* Internal_Tests::TriggerSpecificBalise::_L1 */ _L1;
  kcg_int /* Internal_Tests::TriggerSpecificBalise::_L2 */ _L2;
  kcg_bool /* Internal_Tests::TriggerSpecificBalise::_L3 */ _L3;
  kcg_real /* Internal_Tests::TriggerSpecificBalise::_L4 */ _L4;
  kcg_real /* Internal_Tests::TriggerSpecificBalise::_L5 */ _L5;
  array_int_100 /* Internal_Tests::TriggerSpecificBalise::_L6 */ _L6;
} outC_TriggerSpecificBalise_Internal_Tests;

/* ===========  node initialization and cycle functions  =========== */
/* Internal_Tests::TriggerSpecificBalise */
extern void TriggerSpecificBalise_Internal_Tests(
  /* Internal_Tests::TriggerSpecificBalise::nid_BG_looked_for */kcg_int nid_BG_looked_for,
  outC_TriggerSpecificBalise_Internal_Tests *outC);

extern void TriggerSpecificBalise_reset_Internal_Tests(
  outC_TriggerSpecificBalise_Internal_Tests *outC);

#endif /* _TriggerSpecificBalise_Internal_Tests_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TriggerSpecificBalise_Internal_Tests.h
** Generation date: 2015-08-20T16:26:56
*************************************************************$ */

