/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Users/GiovanniTrotta/Desktop/SoftwareBGO/Simulation\kcg_s2c_config.txt
** Generation date: 2014-05-13T14:52:26
*************************************************************$ */
#ifndef _Operator7_DetermineBGOrientation_LRBG_H_
#define _Operator7_DetermineBGOrientation_LRBG_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_int /* DetermineBGOrientation_LRBG::Operator7::Input1 */ Input1;
  kcg_bool /* DetermineBGOrientation_LRBG::Operator7::in */ in;
} inC_Operator7_DetermineBGOrientation_LRBG;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* DetermineBGOrientation_LRBG::Operator7::Output1 */ Output1;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_SM1 /* DetermineBGOrientation_LRBG::Operator7::SM1 */ SM1_state_nxt;
  kcg_bool /* DetermineBGOrientation_LRBG::Operator7::SM1 */ SM1_reset_act;
  kcg_bool /* DetermineBGOrientation_LRBG::Operator7::SM1 */ SM1_reset_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* DetermineBGOrientation_LRBG::Operator7::SM1::On::_L4 */ _L4_SM1_On;
  kcg_int /* DetermineBGOrientation_LRBG::Operator7::SM1::On::_L3 */ _L3_SM1_On;
  kcg_int /* DetermineBGOrientation_LRBG::Operator7::SM1::On::_L2 */ _L2_SM1_On;
  kcg_bool /* DetermineBGOrientation_LRBG::Operator7::SM1::On::Signal1 */ Signal1_SM1_On;
  SSM_ST_SM1 /* DetermineBGOrientation_LRBG::Operator7::SM1 */ SM1_state_sel;
  SSM_ST_SM1 /* DetermineBGOrientation_LRBG::Operator7::SM1 */ SM1_state_act;
  SSM_TR_SM1 /* DetermineBGOrientation_LRBG::Operator7::SM1 */ SM1_fired_strong;
  SSM_TR_SM1 /* DetermineBGOrientation_LRBG::Operator7::SM1 */ SM1_fired;
} outC_Operator7_DetermineBGOrientation_LRBG;

/* ===========  node initialization and cycle functions  =========== */
/* DetermineBGOrientation_LRBG::Operator7 */
extern void Operator7_DetermineBGOrientation_LRBG(
  inC_Operator7_DetermineBGOrientation_LRBG *inC,
  outC_Operator7_DetermineBGOrientation_LRBG *outC);

extern void Operator7_reset_DetermineBGOrientation_LRBG(
  outC_Operator7_DetermineBGOrientation_LRBG *outC);

#endif /* _Operator7_DetermineBGOrientation_LRBG_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Operator7_DetermineBGOrientation_LRBG.h
** Generation date: 2014-05-13T14:52:26
*************************************************************$ */

