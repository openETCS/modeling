/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NID_EM_Store_Remove_TA_EmergencyStop_NID_EM_Store.h"

/* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Remove */
void NID_EM_Store_Remove_TA_EmergencyStop_NID_EM_Store(
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Remove::inAcc */ NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store *inAcc,
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Remove::inEntry */ NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store *inEntry,
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Remove::outAcc */ NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store *outAcc,
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Remove::outEntry */ NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store *outEntry)
{
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Remove::_L6 */
  static NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store _L6;
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Remove::_L7 */
  static NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store _L7;
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Remove::_L5 */
  static NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store _L5;
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Remove::_L4 */
  static NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store _L4;
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Remove::_L3 */
  static NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store _L3;
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Remove::_L2 */
  static NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store _L2;
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Remove::_L1 */
  static kcg_bool _L1;
  
  _L1 = !(*inAcc).handled & (*inEntry).valid & ((*inEntry).nid_em ==
      (*inAcc).nid_em);
  _L5.nid_em = 0;
  _L5.valid = kcg_false;
  kcg_copy_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store(&_L2, inEntry);
  /* 1 */ if (_L1) {
    kcg_copy_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store(&_L6, &_L5);
  }
  else {
    kcg_copy_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store(&_L6, &_L2);
  }
  kcg_copy_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store(outEntry, &_L6);
  _L4.handled = kcg_true;
  _L4.nid_em = (*inAcc).nid_em;
  _L4.nfree = (*inAcc).nfree + 1;
  kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(&_L3, inAcc);
  /* 1 */ if (_L1) {
    kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(&_L7, &_L4);
  }
  else {
    kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(&_L7, &_L3);
  }
  kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(outAcc, &_L7);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** NID_EM_Store_Remove_TA_EmergencyStop_NID_EM_Store.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

