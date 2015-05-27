/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config E:/DMI_TestEnvironment_14_05_15/model/Scade/System/DMI_Control/SCADE Display/Widgets/GenericButtonBehaviour/GenericButtonBehaviour/Simulation\kcg_s2c_config.txt
** Generation date: 2015-05-14T17:18:06
*************************************************************$ */
#ifndef _ButtonBehaviour_H_
#define _ButtonBehaviour_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* ButtonBehaviour::pressed */ pressed;
  kcg_bool /* ButtonBehaviour::released */ released;
} inC_ButtonBehaviour;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* ButtonBehaviour::isPressed */ isPressed;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_SM1 /* ButtonBehaviour::SM1 */ SM1_state_nxt;
  kcg_bool /* ButtonBehaviour::SM1 */ SM1_reset_act;
  kcg_bool /* ButtonBehaviour::SM1 */ SM1_reset_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* ButtonBehaviour::SM1::Released::_L1 */ _L1_SM1_Released;
  kcg_bool /* ButtonBehaviour::SM1::Pressed::_L1 */ _L1_SM1_Pressed;
  SSM_ST_SM1 /* ButtonBehaviour::SM1 */ SM1_state_sel;
  SSM_ST_SM1 /* ButtonBehaviour::SM1 */ SM1_state_act;
  SSM_TR_SM1 /* ButtonBehaviour::SM1 */ SM1_fired_strong;
  SSM_TR_SM1 /* ButtonBehaviour::SM1 */ SM1_fired;
} outC_ButtonBehaviour;

/* ===========  node initialization and cycle functions  =========== */
/* ButtonBehaviour */
extern void ButtonBehaviour(
  inC_ButtonBehaviour *inC,
  outC_ButtonBehaviour *outC);

extern void ButtonBehaviour_reset(outC_ButtonBehaviour *outC);

#endif /* _ButtonBehaviour_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ButtonBehaviour.h
** Generation date: 2015-05-14T17:18:06
*************************************************************$ */

