/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _countDownTimer_MoRC_Pck_Utils_H_
#define _countDownTimer_MoRC_Pck_Utils_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* MoRC_Pck::Utils::countDownTimer::expired */ expired;
  kcg_bool /* MoRC_Pck::Utils::countDownTimer::started */ started;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init1;
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_int /* linear::MemoryBasic::_L4 */ _L4_1;
  SSM_ST_TimerStatus_SM /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM */ TimerStatus_SM_state_nxt;
  kcg_bool /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM */ TimerStatus_SM_reset_act;
  kcg_bool /* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM */ TimerStatus_SM_reset_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_countDownTimer_MoRC_Pck_Utils;

/* ===========  node initialization and cycle functions  =========== */
/* MoRC_Pck::Utils::countDownTimer */
extern void countDownTimer_MoRC_Pck_Utils(
  /* MoRC_Pck::Utils::countDownTimer::re_start */ kcg_bool re_start,
  /* MoRC_Pck::Utils::countDownTimer::stop */ kcg_bool stop,
  /* MoRC_Pck::Utils::countDownTimer::actualTime */ time_Type_MoRC_Pck actualTime,
  /* MoRC_Pck::Utils::countDownTimer::autoretrigger */ kcg_bool autoretrigger,
  /* MoRC_Pck::Utils::countDownTimer::interval */ time_Type_MoRC_Pck interval,
  outC_countDownTimer_MoRC_Pck_Utils *outC);

extern void countDownTimer_reset_MoRC_Pck_Utils(
  outC_countDownTimer_MoRC_Pck_Utils *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void countDownTimer_init_MoRC_Pck_Utils(
  outC_countDownTimer_MoRC_Pck_Utils *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _countDownTimer_MoRC_Pck_Utils_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** countDownTimer_MoRC_Pck_Utils.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

