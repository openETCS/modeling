/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */
#ifndef _Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store_H_
#define _Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store_H_

#include "kcg_types.h"
#include "NID_EM_Store_Remove_TA_EmergencyStop_NID_EM_Store.h"
#include "NID_EM_Store_Add_TA_EmergencyStop_NID_EM_Store.h"
#include "NID_EM_Store_Find_TA_EmergencyStop_NID_EM_Store.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::handled */ handled;
  NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::outStore */ outStore;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_NID_EM_Store_Add_TA_EmergencyStop_NID_EM_Store /* 2 */ Context_2[8];
  outC_NID_EM_Store_Find_TA_EmergencyStop_NID_EM_Store /* 1 */ _1_Context_1[8];
  outC_NID_EM_Store_Remove_TA_EmergencyStop_NID_EM_Store /* 1 */ Context_1[8];
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::IfBlock1::else */ else_clock_IfBlock1;
  kcg_bool /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::IfBlock1 */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  array__23802 /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::IfBlock1::then::_L16 */ _L16_IfBlock1;
  NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::IfBlock1::then::_L15 */ _L15_IfBlock1;
  kcg_int /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::IfBlock1::then::_L11 */ _L11_IfBlock1;
  NID_EM /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::IfBlock1::then::_L12 */ _L12_IfBlock1;
  kcg_bool /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::IfBlock1::then::_L13 */ _L13_IfBlock1;
  array__23802 /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::IfBlock1::then::_L2 */ _L2_IfBlock1;
  NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::IfBlock1::then::_L1 */ _L1_IfBlock1;
  struct__23791 /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::IfBlock1::then::_L3 */ _L3_IfBlock1;
  NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::IfBlock1::then::_L4 */ _L4_IfBlock1;
  array__23802 /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::IfBlock1::then::_L5 */ _L5_IfBlock1;
  NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::IfBlock1::else::else::_L1 */ _L110_IfBlock1;
  kcg_bool /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::IfBlock1::else::else::_L2 */ _L29_IfBlock1;
  array__23802 /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::IfBlock1::else::then::_L2 */ _L28_IfBlock1;
  NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::IfBlock1::else::then::_L1 */ _L17_IfBlock1;
  array__23802 /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::IfBlock1::else::then::_L4 */ _L44_IfBlock1;
  struct__23791 /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::IfBlock1::else::then::_L3 */ _L33_IfBlock1;
  NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::IfBlock1::else::then::_L5 */ _L52_IfBlock1;
  kcg_bool /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::IfBlock1::else::then::_L8 */ _L8_IfBlock1;
  NID_EM /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::IfBlock1::else::then::_L9 */ _L9_IfBlock1;
  kcg_int /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::IfBlock1::else::then::_L10 */ _L10_IfBlock1;
} outC_Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store;

/* ===========  node initialization and cycle functions  =========== */
/* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store */
extern void Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store(
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::add */kcg_bool add,
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::remove */kcg_bool remove,
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::nid_em */NID_EM nid_em,
  /* TA_EmergencyStop::NID_EM_Store::Manage_NID_EM_Store::inStore */NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store *inStore,
  outC_Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store *outC);

extern void Manage_NID_EM_Store_reset_TA_EmergencyStop_NID_EM_Store(
  outC_Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store *outC);

#endif /* _Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Manage_NID_EM_Store_TA_EmergencyStop_NID_EM_Store.h
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

