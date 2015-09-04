/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NID_EM_Store_Find_TA_EmergencyStop_NID_EM_Store.h"

void NID_EM_Store_Find_reset_TA_EmergencyStop_NID_EM_Store(
  outC_NID_EM_Store_Find_TA_EmergencyStop_NID_EM_Store *outC)
{
}

/* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Find */
void NID_EM_Store_Find_TA_EmergencyStop_NID_EM_Store(
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Find::inAcc */NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store *inAcc,
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Find::inEntry */NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store *inEntry,
  outC_NID_EM_Store_Find_TA_EmergencyStop_NID_EM_Store *outC)
{
  outC->_L5.handled = kcg_true;
  outC->_L5.nid_em = (*inAcc).nid_em;
  outC->_L5.nfree = (*inAcc).nfree;
  outC->_L4 = ((*inAcc).nid_em == (*inEntry).nid_em) & (*inEntry).valid;
  kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(&outC->_L1, inAcc);
  if (outC->_L4) {
    kcg_copy_struct__23791(&outC->_L3, &outC->_L5);
  }
  else {
    kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(
      &outC->_L3,
      &outC->_L1);
  }
  kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(
    &outC->outAcc,
    &outC->_L3);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** NID_EM_Store_Find_TA_EmergencyStop_NID_EM_Store.c
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

