/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-20T16:26:57
*************************************************************$ */
#ifndef _GetSpecific_BG_Internal_Tests_H_
#define _GetSpecific_BG_Internal_Tests_H_

#include "kcg_types.h"
#include "TriggerSpecificBalise_Internal_Tests.h"
#include "Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1 /* 1 */ _1_Context_1;
  outC_TriggerSpecificBalise_Internal_Tests /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_real /* Internal_Tests::GetSpecific_BG::_L1 */ _L1;
  CompressedBaliseMessage_TM /* Internal_Tests::GetSpecific_BG::_L2 */ _L2;
  kcg_int /* Internal_Tests::GetSpecific_BG::_L3 */ _L3;
} outC_GetSpecific_BG_Internal_Tests;

/* ===========  node initialization and cycle functions  =========== */
/* Internal_Tests::GetSpecific_BG */
extern void GetSpecific_BG_Internal_Tests(void);

extern void GetSpecific_BG_reset_Internal_Tests(void);

extern outC_GetSpecific_BG_Internal_Tests Ctxt_GetSpecific_BG_Internal_Tests;

/* Internal_Tests::GetSpecific_BG::BG_that_I_want */
extern kcg_int BG_that_I_want;

/* Internal_Tests::GetSpecific_BG::BG_data */
extern CompressedBaliseMessage_TM BG_data;

#endif /* _GetSpecific_BG_Internal_Tests_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** GetSpecific_BG_Internal_Tests.h
** Generation date: 2015-08-20T16:26:57
*************************************************************$ */

