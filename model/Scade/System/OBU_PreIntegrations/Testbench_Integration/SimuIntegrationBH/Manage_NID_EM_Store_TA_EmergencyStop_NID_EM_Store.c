/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store.h"

/* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store */
void Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store(
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::add */ kcg_bool add,
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::remove */ kcg_bool remove,
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::nid_em */ NID_EM nid_em,
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::inStore */ NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store *inStore,
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::handled */ kcg_bool *_20_handled,
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::outStore */ NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store *_19_outStore)
{
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store */
  static NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store acc4;
  static kcg_int i3;
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store */
  static NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store acc2;
  static kcg_int i1;
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store */
  static NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store acc;
  static kcg_int i;
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::outStore */
  static NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store _6_outStore;
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::handled */
  static kcg_bool _5_handled;
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::IfBlock1::then::_L16 */
  static array_170353 _L16_IfBlock1;
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::IfBlock1::then::_L15 */
  static NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store _L15_IfBlock1;
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::IfBlock1::then::_L11 */
  static kcg_int _L11_IfBlock1;
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::IfBlock1::then::_L12 */
  static NID_EM _L12_IfBlock1;
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::IfBlock1::then::_L13 */
  static kcg_bool _L13_IfBlock1;
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::IfBlock1::then::_L2 */
  static array_170353 _L2_IfBlock1;
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::IfBlock1::then::_L1 */
  static NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store _L1_IfBlock1;
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::IfBlock1::then::_L3 */
  static NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store _L3_IfBlock1;
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::IfBlock1::then::_L4 */
  static NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store _L4_IfBlock1;
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::IfBlock1::then::_L5 */
  static array_170353 _L5_IfBlock1;
  static NID_EM _11_noname;
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::outStore */
  static NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store outStore;
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::handled */
  static kcg_bool handled;
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::IfBlock1::else::else::_L1 */
  static NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store _L118_IfBlock1;
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::IfBlock1::else::else::_L2 */
  static kcg_bool _L217_IfBlock1;
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::handled */
  static kcg_bool _7_handled;
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::outStore */
  static NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store _8_outStore;
  static NID_EM noname;
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::IfBlock1::else::then::_L2 */
  static array_170353 _L216_IfBlock1;
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::IfBlock1::else::then::_L1 */
  static NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store _L115_IfBlock1;
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::IfBlock1::else::then::_L4 */
  static array_170353 _L414_IfBlock1;
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::IfBlock1::else::then::_L3 */
  static NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store _L313_IfBlock1;
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::IfBlock1::else::then::_L5 */
  static NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store _L512_IfBlock1;
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::IfBlock1::else::then::_L8 */
  static kcg_bool _L8_IfBlock1;
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::IfBlock1::else::then::_L9 */
  static NID_EM _L9_IfBlock1;
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::IfBlock1::else::then::_L10 */
  static kcg_int _L10_IfBlock1;
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::handled */
  static kcg_bool _9_handled;
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::outStore */
  static NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store _10_outStore;
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  
  IfBlock1_clock = add & ((*inStore).nfree > 0);
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L3_IfBlock1.handled = kcg_false;
    _L3_IfBlock1.nid_em = nid_em;
    _L3_IfBlock1.nfree = (*inStore).nfree;
    kcg_copy_array_170353(&_L16_IfBlock1, &(*inStore).items);
    kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(
      &_L15_IfBlock1,
      &_L3_IfBlock1);
    /* 9 */ for (i1 = 0; i1 < 8; i1++) {
      kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(
        &acc2,
        &_L15_IfBlock1);
      /* 1 */
      NID_EM_Store_Find_TA_EmergencyStop_NID_EM_Store(
        &acc2,
        &_L16_IfBlock1[i1],
        &_L15_IfBlock1);
    }
    kcg_copy_array_170353(&_L5_IfBlock1, &(*inStore).items);
    kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(
      &_L1_IfBlock1,
      &_L15_IfBlock1);
    /* 6 */ for (i = 0; i < 8; i++) {
      kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(
        &acc,
        &_L1_IfBlock1);
      /* 2 */
      NID_EM_Store_Add_TA_EmergencyStop_NID_EM_Store(
        &acc,
        &_L5_IfBlock1[i],
        &_L1_IfBlock1,
        &_L2_IfBlock1[i]);
    }
    _L13_IfBlock1 = _L1_IfBlock1.handled;
    _5_handled = _L13_IfBlock1;
    *_20_handled = _5_handled;
    _L11_IfBlock1 = _L1_IfBlock1.nfree;
    _L4_IfBlock1.nfree = _L11_IfBlock1;
    kcg_copy_array_170353(&_L4_IfBlock1.items, &_L2_IfBlock1);
    kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
      &_6_outStore,
      &_L4_IfBlock1);
    kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
      _19_outStore,
      &_6_outStore);
    _L12_IfBlock1 = _L1_IfBlock1.nid_em;
    _11_noname = _L12_IfBlock1;
  }
  else {
    else_clock_IfBlock1 = remove & ((*inStore).nfree <
        cNID_EM_STORE_SIZE_TA_EmergencyStop_NID_EM_Store);
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      _L313_IfBlock1.handled = kcg_false;
      _L313_IfBlock1.nid_em = nid_em;
      _L313_IfBlock1.nfree = (*inStore).nfree;
      kcg_copy_array_170353(&_L414_IfBlock1, &(*inStore).items);
      kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(
        &_L115_IfBlock1,
        &_L313_IfBlock1);
      /* 7 */ for (i3 = 0; i3 < 8; i3++) {
        kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(
          &acc4,
          &_L115_IfBlock1);
        /* 1 */
        NID_EM_Store_Remove_TA_EmergencyStop_NID_EM_Store(
          &acc4,
          &_L414_IfBlock1[i3],
          &_L115_IfBlock1,
          &_L216_IfBlock1[i3]);
      }
      _L8_IfBlock1 = _L115_IfBlock1.handled;
      _9_handled = _L8_IfBlock1;
      handled = _9_handled;
    }
    else {
      _L217_IfBlock1 = kcg_false;
      _7_handled = _L217_IfBlock1;
      handled = _7_handled;
    }
    *_20_handled = handled;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      _L10_IfBlock1 = _L115_IfBlock1.nfree;
      _L512_IfBlock1.nfree = _L10_IfBlock1;
      kcg_copy_array_170353(&_L512_IfBlock1.items, &_L216_IfBlock1);
      kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
        &_10_outStore,
        &_L512_IfBlock1);
      kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
        &outStore,
        &_10_outStore);
    }
    else {
      kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
        &_L118_IfBlock1,
        inStore);
      kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
        &_8_outStore,
        &_L118_IfBlock1);
      kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
        &outStore,
        &_8_outStore);
    }
    kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
      _19_outStore,
      &outStore);
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      _L9_IfBlock1 = _L115_IfBlock1.nid_em;
      noname = _L9_IfBlock1;
    }
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

