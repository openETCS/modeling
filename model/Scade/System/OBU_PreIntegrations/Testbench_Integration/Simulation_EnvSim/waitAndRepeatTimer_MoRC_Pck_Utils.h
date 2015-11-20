/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:59
*************************************************************$ */
#ifndef _waitAndRepeatTimer_MoRC_Pck_Utils_H_
#define _waitAndRepeatTimer_MoRC_Pck_Utils_H_

#include "kcg_types.h"
#include "countDownTimer_MoRC_Pck_Utils.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* MoRC_Pck::Utils::waitAndRepeatTimer::triggerAction */ triggerAction;
  kcg_bool /* MoRC_Pck::Utils::waitAndRepeatTimer::elapsed */ elapsed;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_int /* MoRC_Pck::Utils::waitAndRepeatTimer::_L22 */ _L22;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_countDownTimer_MoRC_Pck_Utils /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_waitAndRepeatTimer_MoRC_Pck_Utils;

/* ===========  node initialization and cycle functions  =========== */
/* MoRC_Pck::Utils::waitAndRepeatTimer */
extern void waitAndRepeatTimer_MoRC_Pck_Utils(
  /* MoRC_Pck::Utils::waitAndRepeatTimer::actualTime */time_Type_MoRC_Pck actualTime,
  /* MoRC_Pck::Utils::waitAndRepeatTimer::re_start */kcg_bool re_start,
  /* MoRC_Pck::Utils::waitAndRepeatTimer::stop */kcg_bool stop,
  /* MoRC_Pck::Utils::waitAndRepeatTimer::repeatInterval */time_Type_MoRC_Pck repeatInterval,
  /* MoRC_Pck::Utils::waitAndRepeatTimer::maxNoOfRepetitions */kcg_int maxNoOfRepetitions,
  outC_waitAndRepeatTimer_MoRC_Pck_Utils *outC);

extern void waitAndRepeatTimer_reset_MoRC_Pck_Utils(
  outC_waitAndRepeatTimer_MoRC_Pck_Utils *outC);

#endif /* _waitAndRepeatTimer_MoRC_Pck_Utils_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** waitAndRepeatTimer_MoRC_Pck_Utils.h
** Generation date: 2015-11-20T19:46:59
*************************************************************$ */

