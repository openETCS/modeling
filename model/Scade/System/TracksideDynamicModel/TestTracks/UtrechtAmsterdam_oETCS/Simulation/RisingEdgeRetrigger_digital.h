/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-05T13:04:05
*************************************************************$ */
#ifndef _RisingEdgeRetrigger_digital_H_
#define _RisingEdgeRetrigger_digital_H_

#include "kcg_types.h"
#include "count_down_digital.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* digital::RisingEdgeRetrigger::RER_Output */ RER_Output;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* digital::RisingEdgeRetrigger::_L31 */ _L31;
  kcg_bool /* digital::RisingEdgeRetrigger::_L43 */ _L43;
  kcg_int /* digital::RisingEdgeRetrigger::_L48 */ _L48;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_count_down_digital /* 11 */ Context_11;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool tmp;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* digital::RisingEdgeRetrigger::_L13 */ _L13;
  kcg_bool /* digital::RisingEdgeRetrigger::_L14 */ _L14;
  kcg_bool /* digital::RisingEdgeRetrigger::_L16 */ _L16;
  kcg_int /* digital::RisingEdgeRetrigger::_L44 */ _L44;
  kcg_int /* digital::RisingEdgeRetrigger::_L41 */ _L41;
  kcg_bool /* digital::RisingEdgeRetrigger::_L39 */ _L39;
  kcg_bool /* digital::RisingEdgeRetrigger::_L38 */ _L38;
  kcg_bool /* digital::RisingEdgeRetrigger::_L36 */ _L36;
  kcg_bool /* digital::RisingEdgeRetrigger::_L35 */ _L35;
  kcg_bool /* digital::RisingEdgeRetrigger::_L46 */ _L46;
  kcg_bool /* digital::RisingEdgeRetrigger::_L47 */ _L47;
  kcg_int /* digital::RisingEdgeRetrigger::_L50 */ _L50;
} outC_RisingEdgeRetrigger_digital;

/* ===========  node initialization and cycle functions  =========== */
/* digital::RisingEdgeRetrigger */
extern void RisingEdgeRetrigger_digital(
  /* digital::RisingEdgeRetrigger::RER_Input */kcg_bool RER_Input,
  /* digital::RisingEdgeRetrigger::NumberOfCycle */kcg_int NumberOfCycle,
  outC_RisingEdgeRetrigger_digital *outC);

extern void RisingEdgeRetrigger_reset_digital(
  outC_RisingEdgeRetrigger_digital *outC);

#endif /* _RisingEdgeRetrigger_digital_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** RisingEdgeRetrigger_digital.h
** Generation date: 2015-06-05T13:04:05
*************************************************************$ */

