/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NID_EM_Store_Add_TA_EmergencyStop_NID_EM_Store.h"

/* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Add */
void NID_EM_Store_Add_TA_EmergencyStop_NID_EM_Store(
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Add::inAcc */ NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store *inAcc,
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Add::inEntry */ NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store *inEntry,
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Add::outAcc */ NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store *outAcc,
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Add::outEntry */ NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store *outEntry)
{
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Add::_L1 */
  static NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store _L1;
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Add::_L3 */
  static NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store _L3;
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Add::_L7 */
  static kcg_bool _L7;
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Add::_L8 */
  static NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store _L8;
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Add::_L9 */
  static NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store _L9;
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Add::_L10 */
  static NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store _L10;
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Add::_L11 */
  static NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store _L11;
  
  kcg_copy_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store(&_L1, inEntry);
  _L7 = !(*inAcc).handled & !(*inEntry).valid;
  _L11.nid_em = (*inAcc).nid_em;
  _L11.valid = kcg_true;
  /* 1 */ if (_L7) {
    kcg_copy_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store(&_L3, &_L11);
  }
  else {
    kcg_copy_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store(&_L3, &_L1);
  }
  kcg_copy_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store(outEntry, &_L3);
  _L10.handled = kcg_true;
  _L10.nid_em = (*inAcc).nid_em;
  _L10.nfree = (*inAcc).nfree - 1;
  kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(&_L8, inAcc);
  /* 1 */ if (_L7) {
    kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(&_L9, &_L10);
  }
  else {
    kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(&_L9, &_L8);
  }
  kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(outAcc, &_L9);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** NID_EM_Store_Add_TA_EmergencyStop_NID_EM_Store.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

