/* $************* KCG Version 6.4 beta3 (build i9) **************
** Command: kcg64.exe -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC/KCG/config.txt
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */
#ifndef _MoRC_countDownTimer_H_
#define _MoRC_countDownTimer_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* countDownTimer::expired */ expired;
  kcg_bool /* countDownTimer::started */ started;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init1;
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  MoRC_time_Type /* countDownTimer::TimerStatus_SM::Counting::_L4 */ _L4_TimerStatus_SM_Counting;
  MoRC_SSM_ST_TimerStatus_SM /* countDownTimer::TimerStatus_SM */ TimerStatus_SM_state_nxt;
  kcg_bool /* countDownTimer::TimerStatus_SM */ TimerStatus_SM_reset_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} MoRC_outC_countDownTimer;

/* ===========  node initialization and cycle functions  =========== */
/* countDownTimer */
extern void MoRC_countDownTimer(
  /* countDownTimer::re_start */ kcg_bool re_start,
  /* countDownTimer::stop */ kcg_bool stop,
  /* countDownTimer::actualTime */ MoRC_time_Type actualTime,
  /* countDownTimer::autoretrigger */ kcg_bool autoretrigger,
  /* countDownTimer::interval */ MoRC_time_Type interval,
  MoRC_outC_countDownTimer *outC);

extern void MoRC_countDownTimer_reset(MoRC_outC_countDownTimer *outC);
extern void MoRC_countDownTimer_init(MoRC_outC_countDownTimer *outC);

#endif /* _MoRC_countDownTimer_H_ */
/* $************* KCG Version 6.4 beta3 (build i9) **************
** MoRC_countDownTimer.h
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */

