/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:18
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store.h"

/* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store */
void Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store(
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::add */kcg_bool add,
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::remove */kcg_bool remove,
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::nid_em */NID_EM nid_em,
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::inStore */NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store *inStore,
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::handled */kcg_bool *handled,
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::outStore */NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store *outStore)
{
  static struct__156988 tmp2;
  static NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store tmp1;
  static struct__156988 tmp;
  static kcg_int i;
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::IfBlock1::then::_L2 */
  static array__156999 _L2_IfBlock1;
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::IfBlock1::then::_L1 */
  static NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store _L1_IfBlock1;
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::IfBlock1::else::then::_L2 */
  static array__156999 _L24_IfBlock1;
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::IfBlock1::else::then::_L1 */
  static NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store _L13_IfBlock1;
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  
  IfBlock1_clock = add & ((*inStore).nfree > 0);
  if (IfBlock1_clock) {
    _L1_IfBlock1.handled = kcg_false;
    _L1_IfBlock1.nid_em = nid_em;
    _L1_IfBlock1.nfree = (*inStore).nfree;
    for (i = 0; i < 8; i++) {
      kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(
        &tmp2,
        &_L1_IfBlock1);
      /* 1 */
      NID_EM_Store_Find_TA_EmergencyStop_NID_EM_Store(
        &tmp2,
        &(*inStore).items[i],
        &_L1_IfBlock1);
    }
    for (i = 0; i < 8; i++) {
      kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(
        &tmp1,
        &_L1_IfBlock1);
      /* 2 */
      NID_EM_Store_Add_TA_EmergencyStop_NID_EM_Store(
        &tmp1,
        &(*inStore).items[i],
        &_L1_IfBlock1,
        &_L2_IfBlock1[i]);
    }
    (*outStore).nfree = _L1_IfBlock1.nfree;
    kcg_copy_array__156999(&(*outStore).items, &_L2_IfBlock1);
    *handled = _L1_IfBlock1.handled;
  }
  else {
    else_clock_IfBlock1 = remove & ((*inStore).nfree <
        cNID_EM_STORE_SIZE_TA_EmergencyStop_NID_EM_Store);
    if (else_clock_IfBlock1) {
      _L13_IfBlock1.handled = kcg_false;
      _L13_IfBlock1.nid_em = nid_em;
      _L13_IfBlock1.nfree = (*inStore).nfree;
      for (i = 0; i < 8; i++) {
        kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(
          &tmp,
          &_L13_IfBlock1);
        /* 1 */
        NID_EM_Store_Remove_TA_EmergencyStop_NID_EM_Store(
          &tmp,
          &(*inStore).items[i],
          &_L13_IfBlock1,
          &_L24_IfBlock1[i]);
      }
      (*outStore).nfree = _L13_IfBlock1.nfree;
      kcg_copy_array__156999(&(*outStore).items, &_L24_IfBlock1);
      *handled = _L13_IfBlock1.handled;
    }
    else {
      *handled = kcg_false;
      kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(outStore, inStore);
    }
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store.c
** Generation date: 2015-11-20T19:47:18
*************************************************************$ */

