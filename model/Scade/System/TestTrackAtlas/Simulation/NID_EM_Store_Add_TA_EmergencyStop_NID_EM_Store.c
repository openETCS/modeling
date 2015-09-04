/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NID_EM_Store_Add_TA_EmergencyStop_NID_EM_Store.h"

void NID_EM_Store_Add_reset_TA_EmergencyStop_NID_EM_Store(
  outC_NID_EM_Store_Add_TA_EmergencyStop_NID_EM_Store *outC)
{
}

/* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Add */
void NID_EM_Store_Add_TA_EmergencyStop_NID_EM_Store(
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Add::inAcc */NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store *inAcc,
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Add::inEntry */NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store *inEntry,
  outC_NID_EM_Store_Add_TA_EmergencyStop_NID_EM_Store *outC)
{
  outC->_L7 = !(*inAcc).handled & !(*inEntry).valid;
  outC->_L10.handled = kcg_true;
  outC->_L10.nid_em = (*inAcc).nid_em;
  outC->_L10.nfree = (*inAcc).nfree - 1;
  kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(&outC->_L8, inAcc);
  if (outC->_L7) {
    kcg_copy_struct__23707(&outC->_L9, &outC->_L10);
  }
  else {
    kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(
      &outC->_L9,
      &outC->_L8);
  }
  outC->_L11.nid_em = (*inAcc).nid_em;
  outC->_L11.valid = kcg_true;
  kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(
    &outC->outAcc,
    &outC->_L9);
  kcg_copy_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store(
    &outC->_L1,
    inEntry);
  if (outC->_L7) {
    kcg_copy_struct__23713(&outC->_L3, &outC->_L11);
  }
  else {
    kcg_copy_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store(
      &outC->_L3,
      &outC->_L1);
  }
  kcg_copy_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store(
    &outC->outEntry,
    &outC->_L3);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** NID_EM_Store_Add_TA_EmergencyStop_NID_EM_Store.c
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

