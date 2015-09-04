/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */
#ifndef _ES_Process_Conditional_TA_EmergencyStop_H_
#define _ES_Process_Conditional_TA_EmergencyStop_H_

#include "kcg_types.h"
#include "ES_AcceptOrReject_CES_TA_EmergencyStop.h"
#include "Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TA_EmergencyStop::ES_Process_Conditional::cesAccepted */ cesAccepted;
  kcg_bool /* TA_EmergencyStop::ES_Process_Conditional::updateEOA */ updateEOA;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_EmergencyStop::ES_Process_Conditional::newEOA */ newEOA;
  kcg_bool /* TA_EmergencyStop::ES_Process_Conditional::cesActive */ cesActive;
  kcg_bool /* TA_EmergencyStop::ES_Process_Conditional::cesRevoked */ cesRevoked;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store /* TA_EmergencyStop::ES_Process_Conditional::store */ store;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store /* 1 */ Context_1;
  outC_ES_AcceptOrReject_CES_TA_EmergencyStop /* 2 */ _1_Context_2;
  outC_Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store /* 2 */ Context_2;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1::else */ else_clock_IfBlock1;
  kcg_bool /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1 */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1::then::_L15 */ _L15_IfBlock1;
  kcg_bool /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1::then::_L14 */ _L14_IfBlock1;
  NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1::then::_L13 */ _L13_IfBlock1;
  NID_EM /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1::then::_L12 */ _L12_IfBlock1;
  kcg_bool /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1::then::_L11 */ _L11_IfBlock1;
  NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1::then::_L10 */ _L10_IfBlock1;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1::then::_L9 */ _L9_IfBlock1;
  trainPosition_T_TrainPosition_Types_Pck /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1::then::_L8 */ _L8_IfBlock1;
  D_EMERGENCYSTOP /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1::then::_L7 */ _L7_IfBlock1;
  Q_DIR /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1::then::_L6 */ _L6_IfBlock1;
  D_REF /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1::then::_L5 */ _L5_IfBlock1;
  Q_SCALE /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1::then::_L4 */ _L4_IfBlock1;
  kcg_bool /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1::then::_L1 */ _L1_IfBlock1;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1::then::_L2 */ _L2_IfBlock1;
  kcg_bool /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1::then::_L3 */ _L3_IfBlock1;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1::else::else::_L4 */ _L414_IfBlock1;
  kcg_bool /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1::else::else::_L3 */ _L313_IfBlock1;
  kcg_bool /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1::else::else::_L5 */ _L512_IfBlock1;
  kcg_bool /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1::else::else::_L6 */ _L611_IfBlock1;
  NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1::else::then::_L1 */ _L110_IfBlock1;
  kcg_bool /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1::else::then::_L2 */ _L29_IfBlock1;
  kcg_bool /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1::else::then::_L3 */ _L38_IfBlock1;
  NID_EM /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1::else::then::_L4 */ _L47_IfBlock1;
  NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1::else::then::_L5 */ _L56_IfBlock1;
  kcg_bool /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1::else::then::_L6 */ _L65_IfBlock1;
  kcg_bool /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1::else::then::_L7 */ _L74_IfBlock1;
  kcg_bool /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1::else::then::_L8 */ _L83_IfBlock1;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_EmergencyStop::ES_Process_Conditional::IfBlock1::else::then::_L10 */ _L102_IfBlock1;
  kcg_bool /* TA_EmergencyStop::ES_Process_Conditional::_L1 */ _L1;
} outC_ES_Process_Conditional_TA_EmergencyStop;

/* ===========  node initialization and cycle functions  =========== */
/* TA_EmergencyStop::ES_Process_Conditional */
extern void ES_Process_Conditional_TA_EmergencyStop(
  /* TA_EmergencyStop::ES_Process_Conditional::nid_em */NID_EM nid_em,
  /* TA_EmergencyStop::ES_Process_Conditional::q_scale */Q_SCALE q_scale,
  /* TA_EmergencyStop::ES_Process_Conditional::d_ref */D_REF d_ref,
  /* TA_EmergencyStop::ES_Process_Conditional::q_dir */Q_DIR q_dir,
  /* TA_EmergencyStop::ES_Process_Conditional::d_emergencystop */D_EMERGENCYSTOP d_emergencystop,
  /* TA_EmergencyStop::ES_Process_Conditional::receivedMsg15 */kcg_bool receivedMsg15,
  /* TA_EmergencyStop::ES_Process_Conditional::receivedMsg18 */kcg_bool receivedMsg18,
  /* TA_EmergencyStop::ES_Process_Conditional::TrainPositionIn */trainPosition_T_TrainPosition_Types_Pck *TrainPositionIn,
  /* TA_EmergencyStop::ES_Process_Conditional::currentEOA */L_internal_Type_Obu_BasicTypes_Pkg currentEOA,
  outC_ES_Process_Conditional_TA_EmergencyStop *outC);

extern void ES_Process_Conditional_reset_TA_EmergencyStop(
  outC_ES_Process_Conditional_TA_EmergencyStop *outC);

#endif /* _ES_Process_Conditional_TA_EmergencyStop_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ES_Process_Conditional_TA_EmergencyStop.h
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

