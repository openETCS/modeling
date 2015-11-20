/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:18
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NID_EM_Store_Remove_TA_EmergencyStop_NID_EM_Store.h"

/* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Remove */
void NID_EM_Store_Remove_TA_EmergencyStop_NID_EM_Store(
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Remove::inAcc */NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store *inAcc,
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Remove::inEntry */NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store *inEntry,
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Remove::outAcc */NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store *outAcc,
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Remove::outEntry */NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store *outEntry)
{
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Remove::_L1 */
  static kcg_bool _L1;
  
  _L1 = !(*inAcc).handled & (*inEntry).valid & ((*inEntry).nid_em ==
      (*inAcc).nid_em);
  if (_L1) {
    (*outEntry).nid_em = 0;
    (*outEntry).valid = kcg_false;
    (*outAcc).handled = kcg_true;
    (*outAcc).nid_em = (*inAcc).nid_em;
    (*outAcc).nfree = (*inAcc).nfree + 1;
  }
  else {
    kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(outAcc, inAcc);
    kcg_copy_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store(
      outEntry,
      inEntry);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** NID_EM_Store_Remove_TA_EmergencyStop_NID_EM_Store.c
** Generation date: 2015-11-20T19:47:18
*************************************************************$ */

