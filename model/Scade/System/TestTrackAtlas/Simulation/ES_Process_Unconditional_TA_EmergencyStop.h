/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */
#ifndef _ES_Process_Unconditional_TA_EmergencyStop_H_
#define _ES_Process_Unconditional_TA_EmergencyStop_H_

#include "kcg_types.h"
#include "Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TA_EmergencyStop::ES_Process_Unconditional::uesActive */ uesActive;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store /* TA_EmergencyStop::ES_Process_Unconditional::store */ store;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store /* 2 */ Context_2;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* TA_EmergencyStop::ES_Process_Unconditional::IfBlock1 */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* TA_EmergencyStop::ES_Process_Unconditional::IfBlock1::then::_L6 */ _L6_IfBlock1;
  NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store /* TA_EmergencyStop::ES_Process_Unconditional::IfBlock1::then::_L1 */ _L1_IfBlock1;
  kcg_bool /* TA_EmergencyStop::ES_Process_Unconditional::IfBlock1::then::_L2 */ _L2_IfBlock1;
  NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store /* TA_EmergencyStop::ES_Process_Unconditional::IfBlock1::then::_L3 */ _L3_IfBlock1;
  NID_EM /* TA_EmergencyStop::ES_Process_Unconditional::IfBlock1::then::_L4 */ _L4_IfBlock1;
  kcg_bool /* TA_EmergencyStop::ES_Process_Unconditional::IfBlock1::then::_L5 */ _L5_IfBlock1;
  NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store /* TA_EmergencyStop::ES_Process_Unconditional::IfBlock1::else::_L1 */ _L11_IfBlock1;
  kcg_bool /* TA_EmergencyStop::ES_Process_Unconditional::_L13 */ _L13;
} outC_ES_Process_Unconditional_TA_EmergencyStop;

/* ===========  node initialization and cycle functions  =========== */
/* TA_EmergencyStop::ES_Process_Unconditional */
extern void ES_Process_Unconditional_TA_EmergencyStop(
  /* TA_EmergencyStop::ES_Process_Unconditional::nid_em */NID_EM nid_em,
  /* TA_EmergencyStop::ES_Process_Unconditional::receivedMsg16 */kcg_bool receivedMsg16,
  /* TA_EmergencyStop::ES_Process_Unconditional::receivedMsg18 */kcg_bool receivedMsg18,
  outC_ES_Process_Unconditional_TA_EmergencyStop *outC);

extern void ES_Process_Unconditional_reset_TA_EmergencyStop(
  outC_ES_Process_Unconditional_TA_EmergencyStop *outC);

#endif /* _ES_Process_Unconditional_TA_EmergencyStop_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ES_Process_Unconditional_TA_EmergencyStop.h
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

