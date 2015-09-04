/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */
#ifndef _ES_AcceptOrReject_CES_TA_EmergencyStop_H_
#define _ES_AcceptOrReject_CES_TA_EmergencyStop_H_

#include "kcg_types.h"
#include "ES_Normalize_D_EMERGENCYSTOP_TA_EmergencyStop.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TA_EmergencyStop::ES_AcceptOrReject_CES::updateEOA */ updateEOA;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_EmergencyStop::ES_AcceptOrReject_CES::newEOA */ newEOA;
  kcg_bool /* TA_EmergencyStop::ES_AcceptOrReject_CES::cesAccepted */ cesAccepted;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_ES_Normalize_D_EMERGENCYSTOP_TA_EmergencyStop /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Q_SCALE /* TA_EmergencyStop::ES_AcceptOrReject_CES::_L1 */ _L1;
  D_REF /* TA_EmergencyStop::ES_AcceptOrReject_CES::_L2 */ _L2;
  Q_DIR /* TA_EmergencyStop::ES_AcceptOrReject_CES::_L3 */ _L3;
  D_EMERGENCYSTOP /* TA_EmergencyStop::ES_AcceptOrReject_CES::_L4 */ _L4;
  trainPosition_T_TrainPosition_Types_Pck /* TA_EmergencyStop::ES_AcceptOrReject_CES::_L5 */ _L5;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_EmergencyStop::ES_AcceptOrReject_CES::_L8 */ _L8;
  Location_T_Obu_BasicTypes_Pkg /* TA_EmergencyStop::ES_AcceptOrReject_CES::_L9 */ _L9;
  kcg_bool /* TA_EmergencyStop::ES_AcceptOrReject_CES::_L12 */ _L12;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_EmergencyStop::ES_AcceptOrReject_CES::_L13 */ _L13;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_EmergencyStop::ES_AcceptOrReject_CES::_L14 */ _L14;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_EmergencyStop::ES_AcceptOrReject_CES::_L16 */ _L16;
  kcg_bool /* TA_EmergencyStop::ES_AcceptOrReject_CES::_L17 */ _L17;
  kcg_bool /* TA_EmergencyStop::ES_AcceptOrReject_CES::_L18 */ _L18;
} outC_ES_AcceptOrReject_CES_TA_EmergencyStop;

/* ===========  node initialization and cycle functions  =========== */
/* TA_EmergencyStop::ES_AcceptOrReject_CES */
extern void ES_AcceptOrReject_CES_TA_EmergencyStop(
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::q_scale */Q_SCALE q_scale,
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::d_ref */D_REF d_ref,
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::q_dir */Q_DIR q_dir,
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::d_emergencystop */D_EMERGENCYSTOP d_emergencystop,
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::TrainPositionIn */trainPosition_T_TrainPosition_Types_Pck *TrainPositionIn,
  /* TA_EmergencyStop::ES_AcceptOrReject_CES::currentEOA */L_internal_Type_Obu_BasicTypes_Pkg currentEOA,
  outC_ES_AcceptOrReject_CES_TA_EmergencyStop *outC);

extern void ES_AcceptOrReject_CES_reset_TA_EmergencyStop(
  outC_ES_AcceptOrReject_CES_TA_EmergencyStop *outC);

#endif /* _ES_AcceptOrReject_CES_TA_EmergencyStop_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ES_AcceptOrReject_CES_TA_EmergencyStop.h
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

