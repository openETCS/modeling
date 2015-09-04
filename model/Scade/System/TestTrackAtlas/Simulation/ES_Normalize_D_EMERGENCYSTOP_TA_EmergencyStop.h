/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */
#ifndef _ES_Normalize_D_EMERGENCYSTOP_TA_EmergencyStop_H_
#define _ES_Normalize_D_EMERGENCYSTOP_TA_EmergencyStop_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_EmergencyStop::ES_Normalize_D_EMERGENCYSTOP::d_emergencystop_normalized */ d_emergencystop_normalized;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* TA_EmergencyStop::ES_Normalize_D_EMERGENCYSTOP::WhenBlock1::Q_SCALE_10_cm_scale::_L1 */ _L1_WhenBlock1_Q_SCALE_10_cm_scale;
  kcg_int /* TA_EmergencyStop::ES_Normalize_D_EMERGENCYSTOP::WhenBlock1::Q_SCALE_10_cm_scale::_L2 */ _L2_WhenBlock1_Q_SCALE_10_cm_scale;
  D_EMERGENCYSTOP /* TA_EmergencyStop::ES_Normalize_D_EMERGENCYSTOP::WhenBlock1::Q_SCALE_10_cm_scale::_L3 */ _L3_WhenBlock1_Q_SCALE_10_cm_scale;
  D_EMERGENCYSTOP /* TA_EmergencyStop::ES_Normalize_D_EMERGENCYSTOP::WhenBlock1::Q_SCALE_1_m_scale::_L1 */ _L1_WhenBlock1_Q_SCALE_1_m_scale;
  kcg_int /* TA_EmergencyStop::ES_Normalize_D_EMERGENCYSTOP::WhenBlock1::Q_SCALE_1_m_scale::_L2 */ _L2_WhenBlock1_Q_SCALE_1_m_scale;
  kcg_int /* TA_EmergencyStop::ES_Normalize_D_EMERGENCYSTOP::WhenBlock1::Q_SCALE_1_m_scale::_L3 */ _L3_WhenBlock1_Q_SCALE_1_m_scale;
  D_EMERGENCYSTOP /* TA_EmergencyStop::ES_Normalize_D_EMERGENCYSTOP::WhenBlock1::Q_SCALE_10_m_scale::_L1 */ _L1_WhenBlock1_Q_SCALE_10_m_scale;
  kcg_int /* TA_EmergencyStop::ES_Normalize_D_EMERGENCYSTOP::WhenBlock1::Q_SCALE_10_m_scale::_L2 */ _L2_WhenBlock1_Q_SCALE_10_m_scale;
  kcg_int /* TA_EmergencyStop::ES_Normalize_D_EMERGENCYSTOP::WhenBlock1::Q_SCALE_10_m_scale::_L3 */ _L3_WhenBlock1_Q_SCALE_10_m_scale;
  Q_SCALE /* TA_EmergencyStop::ES_Normalize_D_EMERGENCYSTOP::WhenBlock1 */ WhenBlock1_clock;
} outC_ES_Normalize_D_EMERGENCYSTOP_TA_EmergencyStop;

/* ===========  node initialization and cycle functions  =========== */
/* TA_EmergencyStop::ES_Normalize_D_EMERGENCYSTOP */
extern void ES_Normalize_D_EMERGENCYSTOP_TA_EmergencyStop(
  /* TA_EmergencyStop::ES_Normalize_D_EMERGENCYSTOP::q_scale */Q_SCALE q_scale,
  /* TA_EmergencyStop::ES_Normalize_D_EMERGENCYSTOP::d_emergencystop */D_EMERGENCYSTOP d_emergencystop,
  outC_ES_Normalize_D_EMERGENCYSTOP_TA_EmergencyStop *outC);

extern void ES_Normalize_D_EMERGENCYSTOP_reset_TA_EmergencyStop(
  outC_ES_Normalize_D_EMERGENCYSTOP_TA_EmergencyStop *outC);

#endif /* _ES_Normalize_D_EMERGENCYSTOP_TA_EmergencyStop_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ES_Normalize_D_EMERGENCYSTOP_TA_EmergencyStop.h
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

