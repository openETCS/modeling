/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ES_Process_Conditional_TA_EmergencyStop.h"

#ifndef KCG_USER_DEFINED_INIT
void ES_Process_Conditional_init_TA_EmergencyStop(
  outC_ES_Process_Conditional_TA_EmergencyStop *outC)
{
  static kcg_int i;
  
  outC->init = kcg_true;
  outC->store.nfree = 0;
  for (i = 0; i < 8; i++) {
    outC->store.items[i].nid_em = 0;
    outC->store.items[i].valid = kcg_true;
  }
  outC->cesRevoked = kcg_true;
  outC->cesActive = kcg_true;
  outC->newEOA = 0;
  outC->updateEOA = kcg_true;
  outC->cesAccepted = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ES_Process_Conditional_reset_TA_EmergencyStop(
  outC_ES_Process_Conditional_TA_EmergencyStop *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TA_EmergencyStop::ES_Process_Conditional */
void ES_Process_Conditional_TA_EmergencyStop(
  /* TA_EmergencyStop::ES_Process_Conditional::nid_em */ NID_EM nid_em,
  /* TA_EmergencyStop::ES_Process_Conditional::q_scale */ Q_SCALE q_scale,
  /* TA_EmergencyStop::ES_Process_Conditional::d_ref */ D_REF d_ref,
  /* TA_EmergencyStop::ES_Process_Conditional::q_dir */ Q_DIR q_dir,
  /* TA_EmergencyStop::ES_Process_Conditional::d_emergencystop */ D_EMERGENCYSTOP d_emergencystop,
  /* TA_EmergencyStop::ES_Process_Conditional::receivedMsg15 */ kcg_bool receivedMsg15,
  /* TA_EmergencyStop::ES_Process_Conditional::receivedMsg18 */ kcg_bool receivedMsg18,
  /* TA_EmergencyStop::ES_Process_Conditional::TrainPositionIn */ trainPosition_T_TrainPosition_Types_Pck *TrainPositionIn,
  /* TA_EmergencyStop::ES_Process_Conditional::currentEOA */ L_internal_Type_Obu_BasicTypes_Pkg currentEOA,
  outC_ES_Process_Conditional_TA_EmergencyStop *outC)
{
  /* TA_EmergencyStop::ES_Process_Conditional::store */
  static NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store store5;
  /* TA_EmergencyStop::ES_Process_Conditional::cesRevoked */
  static kcg_bool _4_cesRevoked;
  /* TA_EmergencyStop::ES_Process_Conditional::newEOA */
  static L_internal_Type_Obu_BasicTypes_Pkg _3_newEOA;
  /* TA_EmergencyStop::ES_Process_Conditional::updateEOA */
  static kcg_bool _2_updateEOA;
  /* TA_EmergencyStop::ES_Process_Conditional::cesAccepted */
  static kcg_bool _1_cesAccepted;
  /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1::then::_L15 */
  static kcg_bool _L15_IfBlock1;
  /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1::then::_L14 */
  static kcg_bool _L14_IfBlock1;
  /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1::then::_L13 */
  static NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store _L13_IfBlock1;
  /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1::then::_L12 */
  static NID_EM _L12_IfBlock1;
  /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1::then::_L11 */
  static kcg_bool _L11_IfBlock1;
  /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1::then::_L10 */
  static NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store _L10_IfBlock1;
  /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1::then::_L9 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L9_IfBlock1;
  /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1::then::_L8 */
  static trainPosition_T_TrainPosition_Types_Pck _L8_IfBlock1;
  /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1::then::_L7 */
  static D_EMERGENCYSTOP _L7_IfBlock1;
  /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1::then::_L6 */
  static Q_DIR _L6_IfBlock1;
  /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1::then::_L5 */
  static D_REF _L5_IfBlock1;
  /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1::then::_L4 */
  static Q_SCALE _L4_IfBlock1;
  /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1::then::_L1 */
  static kcg_bool _L1_IfBlock1;
  /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1::then::_L2 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L2_IfBlock1;
  /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1::then::_L3 */
  static kcg_bool _L3_IfBlock1;
  /* TA_EmergencyStop::ES_Process_Conditional::store */
  static NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store store;
  /* TA_EmergencyStop::ES_Process_Conditional::cesRevoked */
  static kcg_bool cesRevoked;
  /* TA_EmergencyStop::ES_Process_Conditional::newEOA */
  static L_internal_Type_Obu_BasicTypes_Pkg newEOA;
  /* TA_EmergencyStop::ES_Process_Conditional::updateEOA */
  static kcg_bool updateEOA;
  /* TA_EmergencyStop::ES_Process_Conditional::cesAccepted */
  static kcg_bool cesAccepted;
  /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1::else */
  static kcg_bool else_clock_IfBlock1;
  /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1::else::else::_L4 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L428_IfBlock1;
  /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1::else::else::_L3 */
  static kcg_bool _L327_IfBlock1;
  /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1::else::else::_L5 */
  static kcg_bool _L526_IfBlock1;
  /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1::else::else::_L6 */
  static kcg_bool _L625_IfBlock1;
  /* TA_EmergencyStop::ES_Process_Conditional::cesAccepted */
  static kcg_bool _6_cesAccepted;
  /* TA_EmergencyStop::ES_Process_Conditional::updateEOA */
  static kcg_bool _7_updateEOA;
  /* TA_EmergencyStop::ES_Process_Conditional::newEOA */
  static L_internal_Type_Obu_BasicTypes_Pkg _8_newEOA;
  /* TA_EmergencyStop::ES_Process_Conditional::cesRevoked */
  static kcg_bool _9_cesRevoked;
  /* TA_EmergencyStop::ES_Process_Conditional::store */
  static NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store store10;
  /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1::else::then::_L1 */
  static NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store _L124_IfBlock1;
  /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1::else::then::_L2 */
  static kcg_bool _L223_IfBlock1;
  /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1::else::then::_L3 */
  static kcg_bool _L322_IfBlock1;
  /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1::else::then::_L4 */
  static NID_EM _L421_IfBlock1;
  /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1::else::then::_L5 */
  static NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store _L520_IfBlock1;
  /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1::else::then::_L6 */
  static kcg_bool _L619_IfBlock1;
  /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1::else::then::_L7 */
  static kcg_bool _L718_IfBlock1;
  /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1::else::then::_L8 */
  static kcg_bool _L817_IfBlock1;
  /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1::else::then::_L10 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L1016_IfBlock1;
  /* TA_EmergencyStop::ES_Process_Conditional::cesAccepted */
  static kcg_bool _11_cesAccepted;
  /* TA_EmergencyStop::ES_Process_Conditional::updateEOA */
  static kcg_bool _12_updateEOA;
  /* TA_EmergencyStop::ES_Process_Conditional::newEOA */
  static L_internal_Type_Obu_BasicTypes_Pkg _13_newEOA;
  /* TA_EmergencyStop::ES_Process_Conditional::cesRevoked */
  static kcg_bool _14_cesRevoked;
  /* TA_EmergencyStop::ES_Process_Conditional::store */
  static NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store store15;
  /* TA_EmergencyStop::ES_Process_Conditional::store */
  static NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store last_store;
  /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* TA_EmergencyStop::ES_Process_Conditional::_L1 */
  static kcg_bool _L1;
  
  IfBlock1_clock = receivedMsg15;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    _L4_IfBlock1 = q_scale;
    _L5_IfBlock1 = d_ref;
    _L6_IfBlock1 = q_dir;
    _L7_IfBlock1 = d_emergencystop;
    kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
      &_L8_IfBlock1,
      TrainPositionIn);
    _L9_IfBlock1 = currentEOA;
    /* 2 */
    ES_AcceptOrReject_CES_TA_EmergencyStop(
      _L4_IfBlock1,
      _L5_IfBlock1,
      _L6_IfBlock1,
      _L7_IfBlock1,
      &_L8_IfBlock1,
      _L9_IfBlock1,
      &_L1_IfBlock1,
      &_L2_IfBlock1,
      &_L3_IfBlock1);
    _L11_IfBlock1 = kcg_false;
    _L12_IfBlock1 = nid_em;
  }
  else {
    else_clock_IfBlock1 = receivedMsg18;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      _L817_IfBlock1 = kcg_false;
      _11_cesAccepted = _L817_IfBlock1;
      cesAccepted = _11_cesAccepted;
    }
    else {
      _L526_IfBlock1 = kcg_false;
      _6_cesAccepted = _L526_IfBlock1;
      cesAccepted = _6_cesAccepted;
    }
  }
  /* last_init_ck_store */ if (outC->init) {
    kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
      &last_store,
      (NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store *)
        &cNID_EM_STORE_EMPTY_TA_EmergencyStop_NID_EM_Store);
  }
  else {
    kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
      &last_store,
      &outC->store);
  }
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
      &_L13_IfBlock1,
      &last_store);
    /* 1 */
    Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store(
      _L3_IfBlock1,
      _L11_IfBlock1,
      _L12_IfBlock1,
      &_L13_IfBlock1,
      &_L15_IfBlock1,
      &_L10_IfBlock1);
    _1_cesAccepted = _L15_IfBlock1;
    outC->cesAccepted = _1_cesAccepted;
    _2_updateEOA = _L1_IfBlock1;
    outC->updateEOA = _2_updateEOA;
    _3_newEOA = _L2_IfBlock1;
    outC->newEOA = _3_newEOA;
    _L14_IfBlock1 = kcg_false;
    _4_cesRevoked = _L14_IfBlock1;
    outC->cesRevoked = _4_cesRevoked;
    kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
      &store5,
      &_L10_IfBlock1);
    kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
      &outC->store,
      &store5);
  }
  else {
    outC->cesAccepted = cesAccepted;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      _L718_IfBlock1 = kcg_false;
      _12_updateEOA = _L718_IfBlock1;
      updateEOA = _12_updateEOA;
    }
    else {
      _L327_IfBlock1 = kcg_false;
      _7_updateEOA = _L327_IfBlock1;
      updateEOA = _7_updateEOA;
    }
    outC->updateEOA = updateEOA;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      _L1016_IfBlock1 = cEOA_NONE_TA_EmergencyStop;
      _13_newEOA = _L1016_IfBlock1;
      newEOA = _13_newEOA;
    }
    else {
      _L428_IfBlock1 = cEOA_NONE_TA_EmergencyStop;
      _8_newEOA = _L428_IfBlock1;
      newEOA = _8_newEOA;
    }
    outC->newEOA = newEOA;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      _L223_IfBlock1 = kcg_false;
      _L322_IfBlock1 = kcg_true;
      _L421_IfBlock1 = nid_em;
      kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
        &_L520_IfBlock1,
        &last_store);
      /* 2 */
      Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store(
        _L223_IfBlock1,
        _L322_IfBlock1,
        _L421_IfBlock1,
        &_L520_IfBlock1,
        &_L619_IfBlock1,
        &_L124_IfBlock1);
      _14_cesRevoked = _L619_IfBlock1;
      cesRevoked = _14_cesRevoked;
    }
    else {
      _L625_IfBlock1 = kcg_false;
      _9_cesRevoked = _L625_IfBlock1;
      cesRevoked = _9_cesRevoked;
    }
    outC->cesRevoked = cesRevoked;
    /* ck_anon_activ */ if (else_clock_IfBlock1) {
      kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
        &store15,
        &_L124_IfBlock1);
      kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(&store, &store15);
    }
    else {
      kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
        &store10,
        &last_store);
      kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(&store, &store10);
    }
    kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(&outC->store, &store);
  }
  _L1 = outC->store.nfree < cNID_EM_STORE_SIZE_TA_EmergencyStop_NID_EM_Store;
  outC->cesActive = _L1;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ES_Process_Conditional_TA_EmergencyStop.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

