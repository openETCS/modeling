/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _ES_Process_Unconditional_TA_EmergencyStop_H_
#define _ES_Process_Unconditional_TA_EmergencyStop_H_

#include "kcg_types.h"
#include "Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TA_EmergencyStop::ES_Process_Unconditional::uesActive */ uesActive;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store /* TA_EmergencyStop::ES_Process_Unconditional::store */ store;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_ES_Process_Unconditional_TA_EmergencyStop;

/* ===========  node initialization and cycle functions  =========== */
/* TA_EmergencyStop::ES_Process_Unconditional */
extern void ES_Process_Unconditional_TA_EmergencyStop(
  /* TA_EmergencyStop::ES_Process_Unconditional::nid_em */ NID_EM nid_em,
  /* TA_EmergencyStop::ES_Process_Unconditional::receivedMsg16 */ kcg_bool receivedMsg16,
  /* TA_EmergencyStop::ES_Process_Unconditional::receivedMsg18 */ kcg_bool receivedMsg18,
  outC_ES_Process_Unconditional_TA_EmergencyStop *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ES_Process_Unconditional_reset_TA_EmergencyStop(
  outC_ES_Process_Unconditional_TA_EmergencyStop *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ES_Process_Unconditional_init_TA_EmergencyStop(
  outC_ES_Process_Unconditional_TA_EmergencyStop *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _ES_Process_Unconditional_TA_EmergencyStop_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** ES_Process_Unconditional_TA_EmergencyStop.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

