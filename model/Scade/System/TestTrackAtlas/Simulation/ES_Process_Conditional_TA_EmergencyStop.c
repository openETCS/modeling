/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ES_Process_Conditional_TA_EmergencyStop.h"

void ES_Process_Conditional_reset_TA_EmergencyStop(
  outC_ES_Process_Conditional_TA_EmergencyStop *outC)
{
  outC->init = kcg_true;
  /* 1 */
  Manage_NID_EM_Store_reset_TA_EmergencyStop_NID_EM_Store(&outC->Context_1);
  /* 2 */ ES_AcceptOrReject_CES_reset_TA_EmergencyStop(&outC->_1_Context_2);
  /* 2 */
  Manage_NID_EM_Store_reset_TA_EmergencyStop_NID_EM_Store(&outC->Context_2);
}

/* TA_EmergencyStop::ES_Process_Conditional */
void ES_Process_Conditional_TA_EmergencyStop(
  /* TA_EmergencyStop::ES_Process_Conditional::nid_em */NID_EM nid_em,
  /* TA_EmergencyStop::ES_Process_Conditional::q_scale */Q_SCALE q_scale,
  /* TA_EmergencyStop::ES_Process_Conditional::d_ref */D_REF d_ref,
  /* TA_EmergencyStop::ES_Process_Conditional::q_dir */Q_DIR q_dir,
  /* TA_EmergencyStop::ES_Process_Conditional::d_emergencystop */D_EMERGENCYSTOP d_emergencystop,
  /* TA_EmergencyStop::ES_Process_Conditional::receivedMsg15 */kcg_bool receivedMsg15,
  /* TA_EmergencyStop::ES_Process_Conditional::receivedMsg18 */kcg_bool receivedMsg18,
  /* TA_EmergencyStop::ES_Process_Conditional::TrainPositionIn */trainPosition_T_TrainPosition_Types_Pck *TrainPositionIn,
  /* TA_EmergencyStop::ES_Process_Conditional::currentEOA */L_internal_Type_Obu_BasicTypes_Pkg currentEOA,
  outC_ES_Process_Conditional_TA_EmergencyStop *outC)
{
  /* TA_EmergencyStop::ES_Process_Conditional::cesAccepted */ kcg_bool _5_cesAccepted;
  /* TA_EmergencyStop::ES_Process_Conditional::updateEOA */ kcg_bool _4_updateEOA;
  /* TA_EmergencyStop::ES_Process_Conditional::newEOA */ L_internal_Type_Obu_BasicTypes_Pkg _3_newEOA;
  /* TA_EmergencyStop::ES_Process_Conditional::cesRevoked */ kcg_bool _2_cesRevoked;
  /* TA_EmergencyStop::ES_Process_Conditional::store */ NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store store1;
  /* TA_EmergencyStop::ES_Process_Conditional::cesAccepted */ kcg_bool cesAccepted;
  /* TA_EmergencyStop::ES_Process_Conditional::updateEOA */ kcg_bool updateEOA;
  /* TA_EmergencyStop::ES_Process_Conditional::newEOA */ L_internal_Type_Obu_BasicTypes_Pkg newEOA;
  /* TA_EmergencyStop::ES_Process_Conditional::cesRevoked */ kcg_bool cesRevoked;
  /* TA_EmergencyStop::ES_Process_Conditional::store */ NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store store;
  /* TA_EmergencyStop::ES_Process_Conditional::cesAccepted */ kcg_bool _6_cesAccepted;
  /* TA_EmergencyStop::ES_Process_Conditional::updateEOA */ kcg_bool _7_updateEOA;
  /* TA_EmergencyStop::ES_Process_Conditional::newEOA */ L_internal_Type_Obu_BasicTypes_Pkg _8_newEOA;
  /* TA_EmergencyStop::ES_Process_Conditional::cesRevoked */ kcg_bool _9_cesRevoked;
  /* TA_EmergencyStop::ES_Process_Conditional::store */ NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store store10;
  /* TA_EmergencyStop::ES_Process_Conditional::cesAccepted */ kcg_bool _11_cesAccepted;
  /* TA_EmergencyStop::ES_Process_Conditional::updateEOA */ kcg_bool _12_updateEOA;
  /* TA_EmergencyStop::ES_Process_Conditional::newEOA */ L_internal_Type_Obu_BasicTypes_Pkg _13_newEOA;
  /* TA_EmergencyStop::ES_Process_Conditional::cesRevoked */ kcg_bool _14_cesRevoked;
  /* TA_EmergencyStop::ES_Process_Conditional::store */ NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store store15;
  /* TA_EmergencyStop::ES_Process_Conditional::store */ NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store last_store;
  
  if (outC->init) {
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
  outC->IfBlock1_clock = receivedMsg15;
  if (outC->IfBlock1_clock) {
    outC->_L4_IfBlock1 = q_scale;
    outC->_L5_IfBlock1 = d_ref;
    outC->_L6_IfBlock1 = q_dir;
    outC->_L7_IfBlock1 = d_emergencystop;
    kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
      &outC->_L8_IfBlock1,
      TrainPositionIn);
    outC->_L9_IfBlock1 = currentEOA;
    /* 2 */
    ES_AcceptOrReject_CES_TA_EmergencyStop(
      outC->_L4_IfBlock1,
      outC->_L5_IfBlock1,
      outC->_L6_IfBlock1,
      outC->_L7_IfBlock1,
      &outC->_L8_IfBlock1,
      outC->_L9_IfBlock1,
      &outC->_1_Context_2);
    outC->_L1_IfBlock1 = outC->_1_Context_2.updateEOA;
    outC->_L2_IfBlock1 = outC->_1_Context_2.newEOA;
    outC->_L3_IfBlock1 = outC->_1_Context_2.cesAccepted;
    outC->_L11_IfBlock1 = kcg_false;
    outC->_L12_IfBlock1 = nid_em;
    kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
      &outC->_L13_IfBlock1,
      &last_store);
    /* 1 */
    Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store(
      outC->_L3_IfBlock1,
      outC->_L11_IfBlock1,
      outC->_L12_IfBlock1,
      &outC->_L13_IfBlock1,
      &outC->Context_1);
    outC->_L15_IfBlock1 = outC->Context_1.handled;
    kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
      &outC->_L10_IfBlock1,
      &outC->Context_1.outStore);
    kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
      &store1,
      &outC->_L10_IfBlock1);
    kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
      &outC->store,
      &store1);
  }
  else {
    outC->else_clock_IfBlock1 = receivedMsg18;
    if (outC->else_clock_IfBlock1) {
      outC->_L29_IfBlock1 = kcg_false;
      outC->_L38_IfBlock1 = kcg_true;
      outC->_L47_IfBlock1 = nid_em;
      kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
        &outC->_L56_IfBlock1,
        &last_store);
      /* 2 */
      Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store(
        outC->_L29_IfBlock1,
        outC->_L38_IfBlock1,
        outC->_L47_IfBlock1,
        &outC->_L56_IfBlock1,
        &outC->Context_2);
      outC->_L65_IfBlock1 = outC->Context_2.handled;
      kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
        &outC->_L110_IfBlock1,
        &outC->Context_2.outStore);
      kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
        &store15,
        &outC->_L110_IfBlock1);
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
  outC->_L1 = outC->store.nfree <
    cNID_EM_STORE_SIZE_TA_EmergencyStop_NID_EM_Store;
  outC->cesActive = outC->_L1;
  if (outC->IfBlock1_clock) {
    outC->_L14_IfBlock1 = kcg_false;
    _2_cesRevoked = outC->_L14_IfBlock1;
    _3_newEOA = outC->_L2_IfBlock1;
    _4_updateEOA = outC->_L1_IfBlock1;
    _5_cesAccepted = outC->_L15_IfBlock1;
    outC->cesAccepted = _5_cesAccepted;
    outC->updateEOA = _4_updateEOA;
    outC->newEOA = _3_newEOA;
    outC->cesRevoked = _2_cesRevoked;
  }
  else {
    if (outC->else_clock_IfBlock1) {
      outC->_L102_IfBlock1 = cEOA_NONE_TA_EmergencyStop;
      outC->_L83_IfBlock1 = kcg_false;
      outC->_L74_IfBlock1 = kcg_false;
      _13_newEOA = outC->_L102_IfBlock1;
      _11_cesAccepted = outC->_L83_IfBlock1;
      _14_cesRevoked = outC->_L65_IfBlock1;
      _12_updateEOA = outC->_L74_IfBlock1;
      cesRevoked = _14_cesRevoked;
      newEOA = _13_newEOA;
      updateEOA = _12_updateEOA;
      cesAccepted = _11_cesAccepted;
    }
    else {
      outC->_L611_IfBlock1 = kcg_false;
      _9_cesRevoked = outC->_L611_IfBlock1;
      outC->_L512_IfBlock1 = kcg_false;
      _6_cesAccepted = outC->_L512_IfBlock1;
      outC->_L414_IfBlock1 = cEOA_NONE_TA_EmergencyStop;
      outC->_L313_IfBlock1 = kcg_false;
      _7_updateEOA = outC->_L313_IfBlock1;
      _8_newEOA = outC->_L414_IfBlock1;
      cesRevoked = _9_cesRevoked;
      newEOA = _8_newEOA;
      updateEOA = _7_updateEOA;
      cesAccepted = _6_cesAccepted;
    }
    outC->cesAccepted = cesAccepted;
    outC->updateEOA = updateEOA;
    outC->newEOA = newEOA;
    outC->cesRevoked = cesRevoked;
  }
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ES_Process_Conditional_TA_EmergencyStop.c
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

