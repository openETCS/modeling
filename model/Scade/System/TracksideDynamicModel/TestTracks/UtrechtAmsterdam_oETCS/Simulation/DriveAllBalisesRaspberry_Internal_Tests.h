/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-20T18:20:31
*************************************************************$ */
#ifndef _DriveAllBalisesRaspberry_Internal_Tests_H_
#define _DriveAllBalisesRaspberry_Internal_Tests_H_

#include "kcg_types.h"
#include "DriveAllBalises_Internal_Tests.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_DriveAllBalises_Internal_Tests /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  CompressedBaliseMessage_TM /* Internal_Tests::DriveAllBalisesRaspberry::_L1 */ _L1;
  kcg_bool /* Internal_Tests::DriveAllBalisesRaspberry::_L2 */ _L2;
} outC_DriveAllBalisesRaspberry_Internal_Tests;

/* ===========  node initialization and cycle functions  =========== */
/* Internal_Tests::DriveAllBalisesRaspberry */
extern void DriveAllBalisesRaspberry_Internal_Tests(void);

extern void DriveAllBalisesRaspberry_reset_Internal_Tests(void);

extern outC_DriveAllBalisesRaspberry_Internal_Tests Ctxt_DriveAllBalisesRaspberry_Internal_Tests;


/* Internal_Tests::DriveAllBalisesRaspberry::BG_data */
extern CompressedBaliseMessage_TM BG_data;

#endif /* _DriveAllBalisesRaspberry_Internal_Tests_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** DriveAllBalisesRaspberry_Internal_Tests.h
** Generation date: 2015-08-20T18:20:31
*************************************************************$ */

