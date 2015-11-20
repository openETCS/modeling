/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:18
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NID_EM_Store_Find_TA_EmergencyStop_NID_EM_Store.h"

/* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Find */
void NID_EM_Store_Find_TA_EmergencyStop_NID_EM_Store(
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Find::inAcc */NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store *inAcc,
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Find::inEntry */NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store *inEntry,
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Find::outAcc */NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store *outAcc)
{
  if (((*inAcc).nid_em == (*inEntry).nid_em) & (*inEntry).valid) {
    (*outAcc).handled = kcg_true;
    (*outAcc).nid_em = (*inAcc).nid_em;
    (*outAcc).nfree = (*inAcc).nfree;
  }
  else {
    kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(outAcc, inAcc);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** NID_EM_Store_Find_TA_EmergencyStop_NID_EM_Store.c
** Generation date: 2015-11-20T19:47:18
*************************************************************$ */

