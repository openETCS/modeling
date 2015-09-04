/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */
#ifndef _NID_EM_Store_Remove_TA_EmergencyStop_NID_EM_Store_H_
#define _NID_EM_Store_Remove_TA_EmergencyStop_NID_EM_Store_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Remove::outAcc */ outAcc;
  NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Remove::outEntry */ outEntry;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  struct__23713 /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Remove::_L6 */ _L6;
  struct__23707 /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Remove::_L7 */ _L7;
  struct__23713 /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Remove::_L5 */ _L5;
  struct__23707 /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Remove::_L4 */ _L4;
  NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Remove::_L3 */ _L3;
  NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Remove::_L2 */ _L2;
  kcg_bool /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Remove::_L1 */ _L1;
} outC_NID_EM_Store_Remove_TA_EmergencyStop_NID_EM_Store;

/* ===========  node initialization and cycle functions  =========== */
/* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Remove */
extern void NID_EM_Store_Remove_TA_EmergencyStop_NID_EM_Store(
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Remove::inAcc */NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store *inAcc,
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Remove::inEntry */NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store *inEntry,
  outC_NID_EM_Store_Remove_TA_EmergencyStop_NID_EM_Store *outC);

extern void NID_EM_Store_Remove_reset_TA_EmergencyStop_NID_EM_Store(
  outC_NID_EM_Store_Remove_TA_EmergencyStop_NID_EM_Store *outC);

#endif /* _NID_EM_Store_Remove_TA_EmergencyStop_NID_EM_Store_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** NID_EM_Store_Remove_TA_EmergencyStop_NID_EM_Store.h
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

