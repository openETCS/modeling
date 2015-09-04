/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store.h"

void Manage_NID_EM_Store_reset_TA_EmergencyStop_NID_EM_Store(
  outC_Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store *outC)
{
  kcg_int i;
  
  for (i = 0; i < 8; i++) {
    /* 2 */
    NID_EM_Store_Add_reset_TA_EmergencyStop_NID_EM_Store(&outC->Context_2[i]);
  }
  for (i = 0; i < 8; i++) {
    /* 1 */
    NID_EM_Store_Find_reset_TA_EmergencyStop_NID_EM_Store(
      &outC->_1_Context_1[i]);
  }
  for (i = 0; i < 8; i++) {
    /* 1 */
    NID_EM_Store_Remove_reset_TA_EmergencyStop_NID_EM_Store(
      &outC->Context_1[i]);
  }
}

/* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store */
void Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store(
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::add */kcg_bool add,
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::remove */kcg_bool remove,
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::nid_em */NID_EM nid_em,
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::inStore */NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store *inStore,
  outC_Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store *outC)
{
  struct__23791 tmp4;
  kcg_int i3;
  struct__23791 tmp2;
  kcg_int i1;
  NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store tmp;
  kcg_int i;
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::handled */ kcg_bool _6_handled;
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::outStore */ NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store _5_outStore;
  NID_EM _11_noname;
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::handled */ kcg_bool handled;
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::outStore */ NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store outStore;
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::handled */ kcg_bool _7_handled;
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::outStore */ NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store _8_outStore;
  NID_EM noname;
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::handled */ kcg_bool _9_handled;
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::outStore */ NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store _10_outStore;
  
  outC->IfBlock1_clock = add & ((*inStore).nfree > 0);
  if (outC->IfBlock1_clock) {
    outC->_L3_IfBlock1.handled = kcg_false;
    outC->_L3_IfBlock1.nid_em = nid_em;
    outC->_L3_IfBlock1.nfree = (*inStore).nfree;
    kcg_copy_array__23802(&outC->_L16_IfBlock1, &(*inStore).items);
    kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(
      &outC->_L15_IfBlock1,
      &outC->_L3_IfBlock1);
    for (i1 = 0; i1 < 8; i1++) {
      kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(
        &tmp2,
        &outC->_L15_IfBlock1);
      /* 1 */
      NID_EM_Store_Find_TA_EmergencyStop_NID_EM_Store(
        &tmp2,
        &outC->_L16_IfBlock1[i1],
        &outC->_1_Context_1[i1]);
      kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(
        &outC->_L15_IfBlock1,
        &outC->_1_Context_1[i1].outAcc);
    }
    kcg_copy_array__23802(&outC->_L5_IfBlock1, &(*inStore).items);
    kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(
      &outC->_L1_IfBlock1,
      &outC->_L15_IfBlock1);
    for (i = 0; i < 8; i++) {
      kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(
        &tmp,
        &outC->_L1_IfBlock1);
      /* 2 */
      NID_EM_Store_Add_TA_EmergencyStop_NID_EM_Store(
        &tmp,
        &outC->_L5_IfBlock1[i],
        &outC->Context_2[i]);
      kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(
        &outC->_L1_IfBlock1,
        &outC->Context_2[i].outAcc);
      kcg_copy_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store(
        &outC->_L2_IfBlock1[i],
        &outC->Context_2[i].outEntry);
    }
    outC->_L11_IfBlock1 = outC->_L1_IfBlock1.nfree;
    outC->_L12_IfBlock1 = outC->_L1_IfBlock1.nid_em;
    outC->_L13_IfBlock1 = outC->_L1_IfBlock1.handled;
    _11_noname = outC->_L12_IfBlock1;
    _6_handled = outC->_L13_IfBlock1;
    outC->_L4_IfBlock1.nfree = outC->_L11_IfBlock1;
    kcg_copy_array__23802(&outC->_L4_IfBlock1.items, &outC->_L2_IfBlock1);
    kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
      &_5_outStore,
      &outC->_L4_IfBlock1);
    outC->handled = _6_handled;
    kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
      &outC->outStore,
      &_5_outStore);
  }
  else {
    outC->else_clock_IfBlock1 = remove & ((*inStore).nfree <
        cNID_EM_STORE_SIZE_TA_EmergencyStop_NID_EM_Store);
    if (outC->else_clock_IfBlock1) {
      outC->_L33_IfBlock1.handled = kcg_false;
      outC->_L33_IfBlock1.nid_em = nid_em;
      outC->_L33_IfBlock1.nfree = (*inStore).nfree;
      kcg_copy_array__23802(&outC->_L44_IfBlock1, &(*inStore).items);
      kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(
        &outC->_L17_IfBlock1,
        &outC->_L33_IfBlock1);
      for (i3 = 0; i3 < 8; i3++) {
        kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(
          &tmp4,
          &outC->_L17_IfBlock1);
        /* 1 */
        NID_EM_Store_Remove_TA_EmergencyStop_NID_EM_Store(
          &tmp4,
          &outC->_L44_IfBlock1[i3],
          &outC->Context_1[i3]);
        kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(
          &outC->_L17_IfBlock1,
          &outC->Context_1[i3].outAcc);
        kcg_copy_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store(
          &outC->_L28_IfBlock1[i3],
          &outC->Context_1[i3].outEntry);
      }
      outC->_L10_IfBlock1 = outC->_L17_IfBlock1.nfree;
      outC->_L9_IfBlock1 = outC->_L17_IfBlock1.nid_em;
      noname = outC->_L9_IfBlock1;
      outC->_L8_IfBlock1 = outC->_L17_IfBlock1.handled;
      _9_handled = outC->_L8_IfBlock1;
      outC->_L52_IfBlock1.nfree = outC->_L10_IfBlock1;
      kcg_copy_array__23802(&outC->_L52_IfBlock1.items, &outC->_L28_IfBlock1);
      kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
        &_10_outStore,
        &outC->_L52_IfBlock1);
      kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
        &outStore,
        &_10_outStore);
      handled = _9_handled;
    }
    else {
      outC->_L29_IfBlock1 = kcg_false;
      _7_handled = outC->_L29_IfBlock1;
      kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
        &outC->_L110_IfBlock1,
        inStore);
      kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
        &_8_outStore,
        &outC->_L110_IfBlock1);
      kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
        &outStore,
        &_8_outStore);
      handled = _7_handled;
    }
    outC->handled = handled;
    kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
      &outC->outStore,
      &outStore);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store.c
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

