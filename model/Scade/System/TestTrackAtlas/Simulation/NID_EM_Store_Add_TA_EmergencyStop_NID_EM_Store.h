/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */
#ifndef _NID_EM_Store_Add_TA_EmergencyStop_NID_EM_Store_H_
#define _NID_EM_Store_Add_TA_EmergencyStop_NID_EM_Store_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Add::outAcc */ outAcc;
  NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Add::outEntry */ outEntry;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Add::_L1 */ _L1;
  struct__23713 /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Add::_L3 */ _L3;
  kcg_bool /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Add::_L7 */ _L7;
  NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Add::_L8 */ _L8;
  struct__23707 /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Add::_L9 */ _L9;
  struct__23707 /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Add::_L10 */ _L10;
  struct__23713 /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Add::_L11 */ _L11;
} outC_NID_EM_Store_Add_TA_EmergencyStop_NID_EM_Store;

/* ===========  node initialization and cycle functions  =========== */
/* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Add */
extern void NID_EM_Store_Add_TA_EmergencyStop_NID_EM_Store(
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Add::inAcc */NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store *inAcc,
  /* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Add::inEntry */NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store *inEntry,
  outC_NID_EM_Store_Add_TA_EmergencyStop_NID_EM_Store *outC);

extern void NID_EM_Store_Add_reset_TA_EmergencyStop_NID_EM_Store(
  outC_NID_EM_Store_Add_TA_EmergencyStop_NID_EM_Store *outC);

#endif /* _NID_EM_Store_Add_TA_EmergencyStop_NID_EM_Store_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** NID_EM_Store_Add_TA_EmergencyStop_NID_EM_Store.h
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */

