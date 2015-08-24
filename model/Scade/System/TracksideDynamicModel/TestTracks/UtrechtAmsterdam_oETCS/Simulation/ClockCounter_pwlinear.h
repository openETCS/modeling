/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-20T18:20:31
*************************************************************$ */
#ifndef _ClockCounter_pwlinear_H_
#define _ClockCounter_pwlinear_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* pwlinear::ClockCounter::Count */ Count;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_int /* pwlinear::ClockCounter::_L1 */ _L1;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* pwlinear::ClockCounter::_L2 */ _L2;
  kcg_int /* pwlinear::ClockCounter::_L6 */ _L6;
  kcg_int /* pwlinear::ClockCounter::_L7 */ _L7;
  kcg_int /* pwlinear::ClockCounter::_L8 */ _L8;
  kcg_int /* pwlinear::ClockCounter::_L11 */ _L11;
  kcg_bool /* pwlinear::ClockCounter::_L13 */ _L13;
  kcg_int /* pwlinear::ClockCounter::_L16 */ _L16;
} outC_ClockCounter_pwlinear;

/* ===========  node initialization and cycle functions  =========== */
/* pwlinear::ClockCounter */
extern void ClockCounter_pwlinear(
  /* pwlinear::ClockCounter::Reset */kcg_bool Reset,
  outC_ClockCounter_pwlinear *outC);

extern void ClockCounter_reset_pwlinear(outC_ClockCounter_pwlinear *outC);

#endif /* _ClockCounter_pwlinear_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ClockCounter_pwlinear.h
** Generation date: 2015-08-20T18:20:31
*************************************************************$ */

