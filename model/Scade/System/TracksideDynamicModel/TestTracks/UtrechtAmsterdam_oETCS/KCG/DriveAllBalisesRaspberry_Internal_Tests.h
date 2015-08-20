/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-20T18:24:03
*************************************************************$ */
#ifndef _DriveAllBalisesRaspberry_Internal_Tests_H_
#define _DriveAllBalisesRaspberry_Internal_Tests_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_int /* pwlinear::ClockCounter::_L1 */ _L1_1_1_1;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
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
** Generation date: 2015-08-20T18:24:03
*************************************************************$ */

