/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:18
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "NID_EM_Store_Add_TA_EmergencyStop_NID_EM_Store.h"

/* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Add */
void NID_EM_Store_Add_TA_EmergencyStop_NID_EM_Store(
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Add::inAcc */NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store *inAcc,
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Add::inEntry */NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store *inEntry,
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Add::outAcc */NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store *outAcc,
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Add::outEntry */NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store *outEntry)
{
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Add::_L7 */
  static kcg_bool _L7;
  
  _L7 = !(*inAcc).handled & !(*inEntry).valid;
  if (_L7) {
    (*outEntry).nid_em = (*inAcc).nid_em;
    (*outEntry).valid = kcg_true;
    (*outAcc).handled = kcg_true;
    (*outAcc).nid_em = (*inAcc).nid_em;
    (*outAcc).nfree = (*inAcc).nfree - 1;
  }
  else {
    kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(outAcc, inAcc);
    kcg_copy_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store(
      outEntry,
      inEntry);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** NID_EM_Store_Add_TA_EmergencyStop_NID_EM_Store.c
** Generation date: 2015-11-20T19:47:18
*************************************************************$ */

