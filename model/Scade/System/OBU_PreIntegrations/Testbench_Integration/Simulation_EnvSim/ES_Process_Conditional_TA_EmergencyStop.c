/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:18
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ES_Process_Conditional_TA_EmergencyStop.h"

void ES_Process_Conditional_reset_TA_EmergencyStop(
  outC_ES_Process_Conditional_TA_EmergencyStop *outC)
{
  outC->init = kcg_true;
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
  /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1::then::_L3 */
  static kcg_bool _L3_IfBlock1;
  /* TA_EmergencyStop::ES_Process_Conditional::store */
  static NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store last_store;
  
  if (outC->init) {
    outC->init = kcg_false;
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
  if (receivedMsg15) {
    /* 2 */
    ES_AcceptOrReject_CES_TA_EmergencyStop(
      q_scale,
      d_ref,
      q_dir,
      d_emergencystop,
      TrainPositionIn,
      currentEOA,
      &outC->updateEOA,
      &outC->newEOA,
      &_L3_IfBlock1);
    /* 1 */
    Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store(
      _L3_IfBlock1,
      kcg_false,
      nid_em,
      &last_store,
      &outC->cesAccepted,
      &outC->store);
    outC->cesRevoked = kcg_false;
  }
  else if (receivedMsg18) {
    /* 2 */
    Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store(
      kcg_false,
      kcg_true,
      nid_em,
      &last_store,
      &outC->cesRevoked,
      &outC->store);
    outC->updateEOA = kcg_false;
    outC->cesAccepted = kcg_false;
    outC->newEOA = cEOA_NONE_TA_EmergencyStop;
  }
  else {
    kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
      &outC->store,
      &last_store);
    outC->cesRevoked = kcg_false;
    outC->updateEOA = kcg_false;
    outC->cesAccepted = kcg_false;
    outC->newEOA = cEOA_NONE_TA_EmergencyStop;
  }
  outC->cesActive = outC->store.nfree <
    cNID_EM_STORE_SIZE_TA_EmergencyStop_NID_EM_Store;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ES_Process_Conditional_TA_EmergencyStop.c
** Generation date: 2015-11-20T19:47:18
*************************************************************$ */

