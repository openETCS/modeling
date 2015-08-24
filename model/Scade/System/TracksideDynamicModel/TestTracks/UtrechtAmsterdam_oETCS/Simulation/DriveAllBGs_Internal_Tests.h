/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-20T14:44:45
*************************************************************$ */
#ifndef _DriveAllBGs_Internal_Tests_H_
#define _DriveAllBGs_Internal_Tests_H_

#include "kcg_types.h"
#include "TriggerAllBalisesInSequence_Internal_Tests.h"
#include "Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Amsterdam_Utrecht_Lijn1_b_AmsterdamUtrechtL2_AmsterdamUtrechtTrack1 /* 1 */ _1_Context_1;
  outC_TriggerAllBalisesInSequence_Internal_Tests /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* Internal_Tests::DriveAllBGs::_L1 */ _L1;
  NID_BG /* Internal_Tests::DriveAllBGs::_L3 */ _L3;
  kcg_real /* Internal_Tests::DriveAllBGs::_L2 */ _L2;
  CompressedBaliseMessage_TM /* Internal_Tests::DriveAllBGs::_L4 */ _L4;
} outC_DriveAllBGs_Internal_Tests;

/* ===========  node initialization and cycle functions  =========== */
/* Internal_Tests::DriveAllBGs */
extern void DriveAllBGs_Internal_Tests(void);

extern void DriveAllBGs_reset_Internal_Tests(void);

extern outC_DriveAllBGs_Internal_Tests Ctxt_DriveAllBGs_Internal_Tests;

/* Internal_Tests::DriveAllBGs::reset */
extern kcg_bool reset;

/* Internal_Tests::DriveAllBGs::BG_data */
extern CompressedBaliseMessage_TM BG_data;

#endif /* _DriveAllBGs_Internal_Tests_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** DriveAllBGs_Internal_Tests.h
** Generation date: 2015-08-20T14:44:45
*************************************************************$ */

