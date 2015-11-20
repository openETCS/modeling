/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NID_EM_Store_Find_TA_EmergencyStop_NID_EM_Store.h"

/* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Find */
void NID_EM_Store_Find_TA_EmergencyStop_NID_EM_Store(
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Find::inAcc */ NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store *inAcc,
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Find::inEntry */ NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store *inEntry,
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Find::outAcc */ NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store *outAcc)
{
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Find::_L1 */
  static NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store _L1;
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Find::_L3 */
  static NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store _L3;
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Find::_L4 */
  static kcg_bool _L4;
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Find::_L5 */
  static NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store _L5;
  
  kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(&_L1, inAcc);
  _L4 = ((*inAcc).nid_em == (*inEntry).nid_em) & (*inEntry).valid;
  _L5.handled = kcg_true;
  _L5.nid_em = (*inAcc).nid_em;
  _L5.nfree = (*inAcc).nfree;
  /* 1 */ if (_L4) {
    kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(&_L3, &_L5);
  }
  else {
    kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(&_L3, &_L1);
  }
  kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(outAcc, &_L3);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** NID_EM_Store_Find_TA_EmergencyStop_NID_EM_Store.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

