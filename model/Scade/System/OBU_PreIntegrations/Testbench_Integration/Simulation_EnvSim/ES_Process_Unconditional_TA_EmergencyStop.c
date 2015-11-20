/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:18
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ES_Process_Unconditional_TA_EmergencyStop.h"

void ES_Process_Unconditional_reset_TA_EmergencyStop(
  outC_ES_Process_Unconditional_TA_EmergencyStop *outC)
{
  outC->init = kcg_true;
}

/* TA_EmergencyStop::ES_Process_Unconditional */
void ES_Process_Unconditional_TA_EmergencyStop(
  /* TA_EmergencyStop::ES_Process_Unconditional::nid_em */NID_EM nid_em,
  /* TA_EmergencyStop::ES_Process_Unconditional::receivedMsg16 */kcg_bool receivedMsg16,
  /* TA_EmergencyStop::ES_Process_Unconditional::receivedMsg18 */kcg_bool receivedMsg18,
  outC_ES_Process_Unconditional_TA_EmergencyStop *outC)
{
  /* TA_EmergencyStop::ES_Process_Unconditional::IfBlock1::then::_L6 */
  static kcg_bool _L6_IfBlock1;
  /* TA_EmergencyStop::ES_Process_Unconditional::store */
  static NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store last_store;
  /* TA_EmergencyStop::ES_Process_Unconditional::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  
  if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
      &last_store,
      (NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store *)
        &cNID_EM_STORE_EMPTY_TA_EmergencyStop_NID_EM_Store);
  }
  else {
    kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
      &last_store,
      &outC->store);
  }
  IfBlock1_clock = receivedMsg16 | receivedMsg18;
  if (IfBlock1_clock) {
    /* 2 */
    Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store(
      receivedMsg16,
      receivedMsg18,
      nid_em,
      &last_store,
      &_L6_IfBlock1,
      &outC->store);
  }
  else {
    kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
      &outC->store,
      &last_store);
  }
  outC->uesActive = outC->store.nfree <
    cNID_EM_STORE_SIZE_TA_EmergencyStop_NID_EM_Store;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ES_Process_Unconditional_TA_EmergencyStop.c
** Generation date: 2015-11-20T19:47:18
*************************************************************$ */

