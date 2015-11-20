/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ES_Process_Unconditional_TA_EmergencyStop.h"

#ifndef KCG_USER_DEFINED_INIT
void ES_Process_Unconditional_init_TA_EmergencyStop(
  outC_ES_Process_Unconditional_TA_EmergencyStop *outC)
{
  static kcg_int i;
  
  outC->init = kcg_true;
  outC->store.nfree = 0;
  for (i = 0; i < 8; i++) {
    outC->store.items[i].nid_em = 0;
    outC->store.items[i].valid = kcg_true;
  }
  outC->uesActive = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ES_Process_Unconditional_reset_TA_EmergencyStop(
  outC_ES_Process_Unconditional_TA_EmergencyStop *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TA_EmergencyStop::ES_Process_Unconditional */
void ES_Process_Unconditional_TA_EmergencyStop(
  /* TA_EmergencyStop::ES_Process_Unconditional::nid_em */ NID_EM nid_em,
  /* TA_EmergencyStop::ES_Process_Unconditional::receivedMsg16 */ kcg_bool receivedMsg16,
  /* TA_EmergencyStop::ES_Process_Unconditional::receivedMsg18 */ kcg_bool receivedMsg18,
  outC_ES_Process_Unconditional_TA_EmergencyStop *outC)
{
  /* TA_EmergencyStop::ES_Process_Unconditional::store */
  static NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store store1;
  /* TA_EmergencyStop::ES_Process_Unconditional::IfBlock1::then::_L6 */
  static kcg_bool _L6_IfBlock1;
  /* TA_EmergencyStop::ES_Process_Unconditional::IfBlock1::then::_L1 */
  static NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store _L1_IfBlock1;
  /* TA_EmergencyStop::ES_Process_Unconditional::IfBlock1::then::_L2 */
  static kcg_bool _L2_IfBlock1;
  /* TA_EmergencyStop::ES_Process_Unconditional::IfBlock1::then::_L3 */
  static NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store _L3_IfBlock1;
  /* TA_EmergencyStop::ES_Process_Unconditional::IfBlock1::then::_L4 */
  static NID_EM _L4_IfBlock1;
  /* TA_EmergencyStop::ES_Process_Unconditional::IfBlock1::then::_L5 */
  static kcg_bool _L5_IfBlock1;
  static kcg_bool noname;
  /* TA_EmergencyStop::ES_Process_Unconditional::store */
  static NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store store;
  /* TA_EmergencyStop::ES_Process_Unconditional::IfBlock1::else::_L1 */
  static NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store _L12_IfBlock1;
  /* TA_EmergencyStop::ES_Process_Unconditional::store */
  static NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store last_store;
  /* TA_EmergencyStop::ES_Process_Unconditional::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TA_EmergencyStop::ES_Process_Unconditional::_L13 */
  static kcg_bool _L13;
  
  /* last_init_ck_store */ if (outC->init) {
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
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L2_IfBlock1 = receivedMsg16;
    _L5_IfBlock1 = receivedMsg18;
    _L4_IfBlock1 = nid_em;
    kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
      &_L3_IfBlock1,
      &last_store);
    /* 2 */
    Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store(
      _L2_IfBlock1,
      _L5_IfBlock1,
      _L4_IfBlock1,
      &_L3_IfBlock1,
      &_L6_IfBlock1,
      &_L1_IfBlock1);
    kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
      &store1,
      &_L1_IfBlock1);
    kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
      &outC->store,
      &store1);
  }
  else {
    kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
      &_L12_IfBlock1,
      &last_store);
    kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
      &store,
      &_L12_IfBlock1);
    kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(&outC->store, &store);
  }
  _L13 = outC->store.nfree < cNID_EM_STORE_SIZE_TA_EmergencyStop_NID_EM_Store;
  outC->uesActive = _L13;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    noname = _L6_IfBlock1;
  }
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ES_Process_Unconditional_TA_EmergencyStop.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

