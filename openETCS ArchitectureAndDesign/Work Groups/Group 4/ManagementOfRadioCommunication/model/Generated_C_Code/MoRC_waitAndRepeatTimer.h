/* $************* KCG Version 6.4 beta3 (build i9) **************
** Command: kcg64.exe -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC/KCG/config.txt
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */
#ifndef _MoRC_waitAndRepeatTimer_H_
#define _MoRC_waitAndRepeatTimer_H_

#include "kcg_types.h"
#include "MoRC_countDownTimer.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* waitAndRepeatTimer::triggerAction */ triggerAction;
  kcg_bool /* waitAndRepeatTimer::elapsed */ elapsed;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_int /* waitAndRepeatTimer::_L22 */ _L22;
  /* ---------------------  sub nodes' contexts  --------------------- */
  MoRC_outC_countDownTimer /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} MoRC_outC_waitAndRepeatTimer;

/* ===========  node initialization and cycle functions  =========== */
/* waitAndRepeatTimer */
extern void MoRC_waitAndRepeatTimer(
  /* waitAndRepeatTimer::actualTime */ MoRC_time_Type actualTime,
  /* waitAndRepeatTimer::re_start */ kcg_bool re_start,
  /* waitAndRepeatTimer::stop */ kcg_bool stop,
  /* waitAndRepeatTimer::repeatInterval */ MoRC_time_Type repeatInterval,
  /* waitAndRepeatTimer::maxNoOfRepetitions */ kcg_int maxNoOfRepetitions,
  MoRC_outC_waitAndRepeatTimer *outC);

extern void MoRC_waitAndRepeatTimer_reset(MoRC_outC_waitAndRepeatTimer *outC);
extern void MoRC_waitAndRepeatTimer_init(MoRC_outC_waitAndRepeatTimer *outC);

#endif /* _MoRC_waitAndRepeatTimer_H_ */
/* $************* KCG Version 6.4 beta3 (build i9) **************
** MoRC_waitAndRepeatTimer.h
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */

