/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */
#ifndef _ES_ExtractMsgParams_TA_EmergencyStop_H_
#define _ES_ExtractMsgParams_TA_EmergencyStop_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  NID_EM /* TA_EmergencyStop::ES_ExtractMsgParams::nid_em */ nid_em;
  Q_SCALE /* TA_EmergencyStop::ES_ExtractMsgParams::q_scale */ q_scale;
  D_REF /* TA_EmergencyStop::ES_ExtractMsgParams::d_ref */ d_ref;
  Q_DIR /* TA_EmergencyStop::ES_ExtractMsgParams::q_dir */ q_dir;
  D_EMERGENCYSTOP /* TA_EmergencyStop::ES_ExtractMsgParams::d_emergencystop */ d_emergencystop;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* TA_EmergencyStop::ES_ExtractMsgParams::_L1 */ _L1;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* TA_EmergencyStop::ES_ExtractMsgParams::_L2 */ _L2;
  NID_EM /* TA_EmergencyStop::ES_ExtractMsgParams::_L3 */ _L3;
  NID_EM /* TA_EmergencyStop::ES_ExtractMsgParams::_L4 */ _L4;
  kcg_int /* TA_EmergencyStop::ES_ExtractMsgParams::_L5 */ _L5;
  kcg_bool /* TA_EmergencyStop::ES_ExtractMsgParams::_L6 */ _L6;
  Q_SCALE /* TA_EmergencyStop::ES_ExtractMsgParams::_L7 */ _L7;
  D_REF /* TA_EmergencyStop::ES_ExtractMsgParams::_L10 */ _L10;
  Q_DIR /* TA_EmergencyStop::ES_ExtractMsgParams::_L11 */ _L11;
  D_EMERGENCYSTOP /* TA_EmergencyStop::ES_ExtractMsgParams::_L12 */ _L12;
} outC_ES_ExtractMsgParams_TA_EmergencyStop;

/* ===========  node initialization and cycle functions  =========== */
/* TA_EmergencyStop::ES_ExtractMsgParams */
extern void ES_ExtractMsgParams_TA_EmergencyStop(
  /* TA_EmergencyStop::ES_ExtractMsgParams::messageIn */ReceivedMessage_T_Common_Types_Pkg *messageIn,
  /* TA_EmergencyStop::ES_ExtractMsgParams::receivedESMsg */kcg_bool receivedESMsg,
  outC_ES_ExtractMsgParams_TA_EmergencyStop *outC);

extern void ES_ExtractMsgParams_reset_TA_EmergencyStop(
  outC_ES_ExtractMsgParams_TA_EmergencyStop *outC);

#endif /* _ES_ExtractMsgParams_TA_EmergencyStop_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ES_ExtractMsgParams_TA_EmergencyStop.h
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

