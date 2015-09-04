/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */
#ifndef _ES_Build_Acknowledgement_TA_EmergencyStop_H_
#define _ES_Build_Acknowledgement_TA_EmergencyStop_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* TA_EmergencyStop::ES_Build_Acknowledgement::message147 */ message147;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Q_EMERGENCYSTOP /* TA_EmergencyStop::ES_Build_Acknowledgement::q_emergencystop */ q_emergencystop;
  NID_EM /* TA_EmergencyStop::ES_Build_Acknowledgement::_L4 */ _L4;
  T_TRAIN /* TA_EmergencyStop::ES_Build_Acknowledgement::_L5 */ _L5;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* TA_EmergencyStop::ES_Build_Acknowledgement::_L6 */ _L6;
  kcg_bool /* TA_EmergencyStop::ES_Build_Acknowledgement::_L7 */ _L7;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg /* TA_EmergencyStop::ES_Build_Acknowledgement::_L8 */ _L8;
  kcg_bool /* TA_EmergencyStop::ES_Build_Acknowledgement::_L9 */ _L9;
  kcg_int /* TA_EmergencyStop::ES_Build_Acknowledgement::_L10 */ _L10;
  trainProperties_T_TrainPosition_Types_Pck /* TA_EmergencyStop::ES_Build_Acknowledgement::_L11 */ _L11;
  NID_ENGINE /* TA_EmergencyStop::ES_Build_Acknowledgement::_L12 */ _L12;
  Q_EMERGENCYSTOP /* TA_EmergencyStop::ES_Build_Acknowledgement::_L13 */ _L13;
  Q_EMERGENCYSTOP /* TA_EmergencyStop::ES_Build_Acknowledgement::_L14 */ _L14;
  Q_MARQSTREASON /* TA_EmergencyStop::ES_Build_Acknowledgement::_L17 */ _L17;
  NID_TEXTMESSAGE /* TA_EmergencyStop::ES_Build_Acknowledgement::_L18 */ _L18;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg /* TA_EmergencyStop::ES_Build_Acknowledgement::_L26 */ _L26;
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* TA_EmergencyStop::ES_Build_Acknowledgement::_L22 */ _L22;
  outPackets_T_Common_Types_Pkg /* TA_EmergencyStop::ES_Build_Acknowledgement::_L27 */ _L27;
  PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg /* TA_EmergencyStop::ES_Build_Acknowledgement::_L28 */ _L28;
  PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg /* TA_EmergencyStop::ES_Build_Acknowledgement::_L29 */ _L29;
  PT4_ErrorReporting_T_Packet_TrainTypes_Pkg /* TA_EmergencyStop::ES_Build_Acknowledgement::_L30 */ _L30;
  PT5_TrainRunningNumber_Packet_TrainTypes_Pkg /* TA_EmergencyStop::ES_Build_Acknowledgement::_L31 */ _L31;
  PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg /* TA_EmergencyStop::ES_Build_Acknowledgement::_L32 */ _L32;
  Q_EMERGENCYSTOP /* TA_EmergencyStop::ES_Build_Acknowledgement::_L33 */ _L33;
  kcg_bool /* TA_EmergencyStop::ES_Build_Acknowledgement::_L34 */ _L34;
  Q_EMERGENCYSTOP /* TA_EmergencyStop::ES_Build_Acknowledgement::_L35 */ _L35;
  kcg_bool /* TA_EmergencyStop::ES_Build_Acknowledgement::_L36 */ _L36;
  Q_EMERGENCYSTOP /* TA_EmergencyStop::ES_Build_Acknowledgement::_L38 */ _L38;
  Q_EMERGENCYSTOP /* TA_EmergencyStop::ES_Build_Acknowledgement::_L39 */ _L39;
  kcg_bool /* TA_EmergencyStop::ES_Build_Acknowledgement::_L40 */ _L40;
  Q_EMERGENCYSTOP /* TA_EmergencyStop::ES_Build_Acknowledgement::_L42 */ _L42;
  Q_EMERGENCYSTOP /* TA_EmergencyStop::ES_Build_Acknowledgement::_L43 */ _L43;
} outC_ES_Build_Acknowledgement_TA_EmergencyStop;

/* ===========  node initialization and cycle functions  =========== */
/* TA_EmergencyStop::ES_Build_Acknowledgement */
extern void ES_Build_Acknowledgement_TA_EmergencyStop(
  /* TA_EmergencyStop::ES_Build_Acknowledgement::nid_em */NID_EM nid_em,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::t_train */T_TRAIN t_train,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::trainProps */trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::packet0 */PT0_PositionReport_T_Packet_TrainTypes_Pkg *packet0,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::packet1 */PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *packet1,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::receivedMsg16 */kcg_bool receivedMsg16,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::cesAccepted */kcg_bool cesAccepted,
  /* TA_EmergencyStop::ES_Build_Acknowledgement::updateEOA */kcg_bool updateEOA,
  outC_ES_Build_Acknowledgement_TA_EmergencyStop *outC);

extern void ES_Build_Acknowledgement_reset_TA_EmergencyStop(
  outC_ES_Build_Acknowledgement_TA_EmergencyStop *outC);

#endif /* _ES_Build_Acknowledgement_TA_EmergencyStop_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ES_Build_Acknowledgement_TA_EmergencyStop.h
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

