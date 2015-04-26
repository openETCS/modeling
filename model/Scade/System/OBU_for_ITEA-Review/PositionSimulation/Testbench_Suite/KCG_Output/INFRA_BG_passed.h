/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _INFRA_BG_passed_H_
#define _INFRA_BG_passed_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* INFRA_BG_passed::BG_passed */ BG_passed;
  kcg_int /* INFRA_BG_passed::LRBG */ LRBG;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init1;
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_SM3_SM1_State1 /* INFRA_BG_passed::SM1::State1::SM3 */ SM3_state_nxt_SM1_State1;
  SSM_ST_SM2_SM1_State1 /* INFRA_BG_passed::SM1::State1::SM2 */ SM2_state_nxt_SM1_State1;
  _1_SSM_ST_SM1 /* INFRA_BG_passed::SM1 */ SM1_state_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_INFRA_BG_passed;

/* ===========  node initialization and cycle functions  =========== */
/* INFRA_BG_passed */
extern void INFRA_BG_passed(
  /* INFRA_BG_passed::other_BG_passed */ kcg_bool other_BG_passed,
  /* INFRA_BG_passed::LRBG_in */ kcg_int LRBG_in,
  /* INFRA_BG_passed::BG */ TM_BaliseGroupData *BG,
  /* INFRA_BG_passed::B1passed */ kcg_bool B1passed,
  /* INFRA_BG_passed::B2passed */ kcg_bool B2passed,
  outC_INFRA_BG_passed *outC);

extern void INFRA_BG_passed_reset(outC_INFRA_BG_passed *outC);
extern void INFRA_BG_passed_init(outC_INFRA_BG_passed *outC);

#endif /* _INFRA_BG_passed_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** INFRA_BG_passed.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

