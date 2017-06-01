/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config P:/modeling/model/Scade/System/DMI_Control/SCADE Display/DMI_Code/config.txt
** Generation date: 2017-05-30T13:27:39
*************************************************************$ */
#ifndef _aol_ButtonBehaviour_behavior_H_
#define _aol_ButtonBehaviour_behavior_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* aol_ButtonBehaviour_behavior::pressed */ pressed;
  kcg_bool /* aol_ButtonBehaviour_behavior::released */ released;
} inC_aol_ButtonBehaviour_behavior;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* aol_ButtonBehaviour_behavior::isPressed */ isPressed;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* ButtonBehaviour::SM1 */ SM1_reset_nxt_ButtonBehaviour;
  kcg_bool /* ButtonBehaviour::SM1 */ SM1_reset_act_ButtonBehaviour;
  BHVR_SSM_ST_SM1 /* ButtonBehaviour::SM1 */ SM1_state_nxt_ButtonBehaviour;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_aol_ButtonBehaviour_behavior;

/* ===========  node initialization and cycle functions  =========== */
/* aol_ButtonBehaviour_behavior */
extern void aol_ButtonBehaviour_behavior(
  inC_aol_ButtonBehaviour_behavior *inC,
  outC_aol_ButtonBehaviour_behavior *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void aol_ButtonBehaviour_behavior_reset(
  outC_aol_ButtonBehaviour_behavior *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void aol_ButtonBehaviour_behavior_init(
  outC_aol_ButtonBehaviour_behavior *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _aol_ButtonBehaviour_behavior_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** aol_ButtonBehaviour_behavior.h
** Generation date: 2017-05-30T13:27:39
*************************************************************$ */

