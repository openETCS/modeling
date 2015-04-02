/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-03-06T10:15:02
*************************************************************$ */
#ifndef _INFRA_BG_passed_H_
#define _INFRA_BG_passed_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* INFRA_BG_passed::other_BG_passed */ other_BG_passed;
  kcg_int /* INFRA_BG_passed::LRBG_in */ LRBG_in;
  BaliseGroupData /* INFRA_BG_passed::BG */ BG;
  kcg_bool /* INFRA_BG_passed::B1passed */ B1passed;
  kcg_bool /* INFRA_BG_passed::B2passed */ B2passed;
} inC_INFRA_BG_passed;

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
  kcg_bool /* INFRA_BG_passed::SM1::State1::SM3 */ SM3_reset_nxt_SM1_State1;
  kcg_bool /* INFRA_BG_passed::SM1::State1::SM3 */ SM3_reset_act_SM1_State1;
  SSM_ST_SM3_SM1_State1 /* INFRA_BG_passed::SM1::State1::SM3 */ SM3_state_nxt_SM1_State1;
  kcg_bool /* INFRA_BG_passed::SM1::State1::SM2 */ SM2_reset_nxt_SM1_State1;
  kcg_bool /* INFRA_BG_passed::SM1::State1::SM2 */ SM2_reset_act_SM1_State1;
  SSM_ST_SM2_SM1_State1 /* INFRA_BG_passed::SM1::State1::SM2 */ SM2_state_nxt_SM1_State1;
  SSM_ST_SM1 /* INFRA_BG_passed::SM1 */ SM1_state_nxt;
  kcg_bool /* INFRA_BG_passed::SM1 */ SM1_reset_act;
  kcg_bool /* INFRA_BG_passed::SM1 */ SM1_reset_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* INFRA_BG_passed::SM1::State1 */ State1_weakb_clock_SM1;
  SSM_ST_SM1 /* INFRA_BG_passed::SM1 */ SM1_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  SSM_TR_SM3_SM1_State1 /* INFRA_BG_passed::SM1::State1::SM3 */ SM3_fired_SM1_State1;
  SSM_TR_SM3_SM1_State1 /* INFRA_BG_passed::SM1::State1::SM3 */ SM3_fired_strong_SM1_State1;
  SSM_ST_SM3_SM1_State1 /* INFRA_BG_passed::SM1::State1::SM3 */ SM3_state_act_SM1_State1;
  SSM_ST_SM3_SM1_State1 /* INFRA_BG_passed::SM1::State1::SM3 */ SM3_state_sel_SM1_State1;
  SSM_TR_SM2_SM1_State1 /* INFRA_BG_passed::SM1::State1::SM2 */ SM2_fired_SM1_State1;
  SSM_TR_SM2_SM1_State1 /* INFRA_BG_passed::SM1::State1::SM2 */ SM2_fired_strong_SM1_State1;
  SSM_ST_SM2_SM1_State1 /* INFRA_BG_passed::SM1::State1::SM2 */ SM2_state_act_SM1_State1;
  SSM_ST_SM2_SM1_State1 /* INFRA_BG_passed::SM1::State1::SM2 */ SM2_state_sel_SM1_State1;
  SSM_ST_SM2_SM1_State1 /* INFRA_BG_passed::SM1::State1::SM2 */ _3_SM2_clock_SM1_State1;
  SSM_ST_SM2_SM1_State1 /* INFRA_BG_passed::SM1::State1::SM2 */ SM2_clock_SM1_State1;
  SSM_ST_SM3_SM1_State1 /* INFRA_BG_passed::SM1::State1::SM3 */ _2_SM3_clock_SM1_State1;
  SSM_ST_SM3_SM1_State1 /* INFRA_BG_passed::SM1::State1::SM3 */ SM3_clock_SM1_State1;
  kcg_bool /* INFRA_BG_passed::SM1::State1 */ br_1_clock_SM1_State1;
  kcg_bool /* INFRA_BG_passed::passed */ passed;
  SSM_ST_SM1 /* INFRA_BG_passed::SM1 */ SM1_state_sel;
  SSM_TR_SM1 /* INFRA_BG_passed::SM1 */ SM1_fired_strong;
  SSM_TR_SM1 /* INFRA_BG_passed::SM1 */ SM1_fired;
  BaliseGroupData /* INFRA_BG_passed::_L1 */ _L1;
  kcg_int /* INFRA_BG_passed::_L4 */ _L4;
  kcg_bool /* INFRA_BG_passed::_L19 */ _L19;
  kcg_int /* INFRA_BG_passed::_L21 */ _L21;
  kcg_int /* INFRA_BG_passed::_L22 */ _L22;
  kcg_bool /* INFRA_BG_passed::_L23 */ _L23;
  kcg_bool /* INFRA_BG_passed::_L24 */ _L24;
} outC_INFRA_BG_passed;

/* ===========  node initialization and cycle functions  =========== */
/* INFRA_BG_passed */
extern void INFRA_BG_passed(
  inC_INFRA_BG_passed *inC,
  outC_INFRA_BG_passed *outC);

extern void INFRA_BG_passed_reset(outC_INFRA_BG_passed *outC);

#endif /* _INFRA_BG_passed_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** INFRA_BG_passed.h
** Generation date: 2015-03-06T10:15:02
*************************************************************$ */

