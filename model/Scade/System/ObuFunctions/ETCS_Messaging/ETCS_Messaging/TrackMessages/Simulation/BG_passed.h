/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-03-03T05:55:49
*************************************************************$ */
#ifndef _BG_passed_H_
#define _BG_passed_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  BaliseGroupData /* BG_passed::BG */ BG;
  kcg_bool /* BG_passed::B1passed */ B1passed;
  kcg_bool /* BG_passed::B2passed */ B2passed;
} inC_BG_passed;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* BG_passed::BG_passed */ BG_passed;
  kcg_int /* BG_passed::LRBG */ LRBG;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init1;
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* BG_passed::SM1::State1::SM3 */ SM3_reset_nxt_SM1_State1;
  kcg_bool /* BG_passed::SM1::State1::SM3 */ SM3_reset_act_SM1_State1;
  SSM_ST_SM3_SM1_State1 /* BG_passed::SM1::State1::SM3 */ SM3_state_nxt_SM1_State1;
  kcg_bool /* BG_passed::SM1::State1::SM2 */ SM2_reset_nxt_SM1_State1;
  kcg_bool /* BG_passed::SM1::State1::SM2 */ SM2_reset_act_SM1_State1;
  SSM_ST_SM2_SM1_State1 /* BG_passed::SM1::State1::SM2 */ SM2_state_nxt_SM1_State1;
  SSM_ST_SM1 /* BG_passed::SM1 */ SM1_state_nxt;
  kcg_bool /* BG_passed::SM1 */ SM1_reset_act;
  kcg_bool /* BG_passed::SM1 */ SM1_reset_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* BG_passed::SM1::State1 */ State1_weakb_clock_SM1;
  SSM_ST_SM1 /* BG_passed::SM1 */ SM1_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  SSM_TR_SM3_SM1_State1 /* BG_passed::SM1::State1::SM3 */ SM3_fired_SM1_State1;
  SSM_TR_SM3_SM1_State1 /* BG_passed::SM1::State1::SM3 */ SM3_fired_strong_SM1_State1;
  SSM_ST_SM3_SM1_State1 /* BG_passed::SM1::State1::SM3 */ SM3_state_act_SM1_State1;
  SSM_ST_SM3_SM1_State1 /* BG_passed::SM1::State1::SM3 */ SM3_state_sel_SM1_State1;
  SSM_TR_SM2_SM1_State1 /* BG_passed::SM1::State1::SM2 */ SM2_fired_SM1_State1;
  SSM_TR_SM2_SM1_State1 /* BG_passed::SM1::State1::SM2 */ SM2_fired_strong_SM1_State1;
  SSM_ST_SM2_SM1_State1 /* BG_passed::SM1::State1::SM2 */ SM2_state_act_SM1_State1;
  SSM_ST_SM2_SM1_State1 /* BG_passed::SM1::State1::SM2 */ SM2_state_sel_SM1_State1;
  SSM_ST_SM2_SM1_State1 /* BG_passed::SM1::State1::SM2 */ _3_SM2_clock_SM1_State1;
  SSM_ST_SM2_SM1_State1 /* BG_passed::SM1::State1::SM2 */ SM2_clock_SM1_State1;
  SSM_ST_SM3_SM1_State1 /* BG_passed::SM1::State1::SM3 */ _2_SM3_clock_SM1_State1;
  SSM_ST_SM3_SM1_State1 /* BG_passed::SM1::State1::SM3 */ SM3_clock_SM1_State1;
  kcg_bool /* BG_passed::SM1::State1 */ br_1_clock_SM1_State1;
  kcg_bool /* BG_passed::passed */ passed;
  SSM_ST_SM1 /* BG_passed::SM1 */ SM1_state_sel;
  SSM_TR_SM1 /* BG_passed::SM1 */ SM1_fired_strong;
  SSM_TR_SM1 /* BG_passed::SM1 */ SM1_fired;
  BaliseGroupData /* BG_passed::_L1 */ _L1;
  kcg_int /* BG_passed::_L4 */ _L4;
  kcg_bool /* BG_passed::_L19 */ _L19;
} outC_BG_passed;

/* ===========  node initialization and cycle functions  =========== */
/* BG_passed */
extern void BG_passed(inC_BG_passed *inC, outC_BG_passed *outC);

extern void BG_passed_reset(outC_BG_passed *outC);

#endif /* _BG_passed_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** BG_passed.h
** Generation date: 2015-03-03T05:55:49
*************************************************************$ */

