/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ES_Process_Unconditional_TA_EmergencyStop.h"

void ES_Process_Unconditional_reset_TA_EmergencyStop(
  outC_ES_Process_Unconditional_TA_EmergencyStop *outC)
{
  outC->init = kcg_true;
  /* 2 */
  Manage_NID_EM_Store_reset_TA_EmergencyStop_NID_EM_Store(&outC->Context_2);
}

/* TA_EmergencyStop::ES_Process_Unconditional */
void ES_Process_Unconditional_TA_EmergencyStop(
  /* TA_EmergencyStop::ES_Process_Unconditional::nid_em */NID_EM nid_em,
  /* TA_EmergencyStop::ES_Process_Unconditional::receivedMsg16 */kcg_bool receivedMsg16,
  /* TA_EmergencyStop::ES_Process_Unconditional::receivedMsg18 */kcg_bool receivedMsg18,
  outC_ES_Process_Unconditional_TA_EmergencyStop *outC)
{
  /* TA_EmergencyStop::ES_Process_Unconditional::store */ NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store store1;
  kcg_bool noname;
  /* TA_EmergencyStop::ES_Process_Unconditional::store */ NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store store;
  /* TA_EmergencyStop::ES_Process_Unconditional::store */ NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store last_store;
  
  if (outC->init) {
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
  outC->IfBlock1_clock = receivedMsg16 | receivedMsg18;
  if (outC->IfBlock1_clock) {
    outC->_L2_IfBlock1 = receivedMsg16;
    outC->_L5_IfBlock1 = receivedMsg18;
    outC->_L4_IfBlock1 = nid_em;
    kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
      &outC->_L3_IfBlock1,
      &last_store);
    /* 2 */
    Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store(
      outC->_L2_IfBlock1,
      outC->_L5_IfBlock1,
      outC->_L4_IfBlock1,
      &outC->_L3_IfBlock1,
      &outC->Context_2);
    outC->_L6_IfBlock1 = outC->Context_2.handled;
    kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
      &outC->_L1_IfBlock1,
      &outC->Context_2.outStore);
    noname = outC->_L6_IfBlock1;
    kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
      &store1,
      &outC->_L1_IfBlock1);
    kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
      &outC->store,
      &store1);
  }
  else {
    kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
      &outC->_L11_IfBlock1,
      &last_store);
    kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
      &store,
      &outC->_L11_IfBlock1);
    kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(&outC->store, &store);
  }
  outC->_L13 = outC->store.nfree <
    cNID_EM_STORE_SIZE_TA_EmergencyStop_NID_EM_Store;
  outC->uesActive = outC->_L13;
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ES_Process_Unconditional_TA_EmergencyStop.c
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

