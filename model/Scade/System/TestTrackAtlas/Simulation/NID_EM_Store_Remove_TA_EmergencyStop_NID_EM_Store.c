/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NID_EM_Store_Remove_TA_EmergencyStop_NID_EM_Store.h"

void NID_EM_Store_Remove_reset_TA_EmergencyStop_NID_EM_Store(
  outC_NID_EM_Store_Remove_TA_EmergencyStop_NID_EM_Store *outC)
{
}

/* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Remove */
void NID_EM_Store_Remove_TA_EmergencyStop_NID_EM_Store(
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Remove::inAcc */NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store *inAcc,
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Remove::inEntry */NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store *inEntry,
  outC_NID_EM_Store_Remove_TA_EmergencyStop_NID_EM_Store *outC)
{
  outC->_L1 = !(*inAcc).handled & (*inEntry).valid & ((*inEntry).nid_em ==
      (*inAcc).nid_em);
  outC->_L4.handled = kcg_true;
  outC->_L4.nid_em = (*inAcc).nid_em;
  outC->_L4.nfree = (*inAcc).nfree + 1;
  kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(&outC->_L3, inAcc);
  if (outC->_L1) {
    kcg_copy_struct__23791(&outC->_L7, &outC->_L4);
  }
  else {
    kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(
      &outC->_L7,
      &outC->_L3);
  }
  outC->_L5.nid_em = 0;
  outC->_L5.valid = kcg_false;
  kcg_copy_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store(
    &outC->_L2,
    inEntry);
  if (outC->_L1) {
    kcg_copy_struct__23797(&outC->_L6, &outC->_L5);
  }
  else {
    kcg_copy_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store(
      &outC->_L6,
      &outC->_L2);
  }
  kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(
    &outC->outAcc,
    &outC->_L7);
  kcg_copy_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store(
    &outC->outEntry,
    &outC->_L6);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** NID_EM_Store_Remove_TA_EmergencyStop_NID_EM_Store.c
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

