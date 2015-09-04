/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */
#ifndef _Manage_EmergencyStop_TA_EmergencyStop_H_
#define _Manage_EmergencyStop_TA_EmergencyStop_H_

#include "kcg_types.h"
#include "ES_ReceiveAndControl_TA_EmergencyStop.h"
#include "ES_ExtractMsgParams_TA_EmergencyStop.h"
#include "ES_Process_Unconditional_TA_EmergencyStop.h"
#include "ES_Build_Acknowledgement_TA_EmergencyStop.h"
#include "ES_Process_Conditional_TA_EmergencyStop.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TA_EmergencyStop::Manage_EmergencyStop::rejectNewMA */ rejectNewMA;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* TA_EmergencyStop::Manage_EmergencyStop::message147 */ message147;
  kcg_bool /* TA_EmergencyStop::Manage_EmergencyStop::tripTrain */ tripTrain;
  kcg_bool /* TA_EmergencyStop::Manage_EmergencyStop::cesAccepted */ cesAccepted;
  kcg_bool /* TA_EmergencyStop::Manage_EmergencyStop::updateEOA */ updateEOA;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_EmergencyStop::Manage_EmergencyStop::newEOA */ newEOA;
  kcg_bool /* TA_EmergencyStop::Manage_EmergencyStop::cesRevoked */ cesRevoked;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_ES_Build_Acknowledgement_TA_EmergencyStop /* 2 */ Context_2;
  outC_ES_Process_Unconditional_TA_EmergencyStop /* 1 */ _2_Context_1;
  outC_ES_Process_Conditional_TA_EmergencyStop /* 1 */ _1_Context_1;
  outC_ES_ExtractMsgParams_TA_EmergencyStop /* 3 */ Context_3;
  outC_ES_ReceiveAndControl_TA_EmergencyStop /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool tmp;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* TA_EmergencyStop::Manage_EmergencyStop::receivedMsg16 */ receivedMsg16;
  kcg_bool /* TA_EmergencyStop::Manage_EmergencyStop::receivedMsg15 */ receivedMsg15;
  kcg_bool /* TA_EmergencyStop::Manage_EmergencyStop::receivedMsg18 */ receivedMsg18;
  kcg_bool /* TA_EmergencyStop::Manage_EmergencyStop::receivedESMsg */ receivedESMsg;
  kcg_bool /* TA_EmergencyStop::Manage_EmergencyStop::sendMsg147 */ sendMsg147;
  NID_EM /* TA_EmergencyStop::Manage_EmergencyStop::nid_em */ nid_em;
  kcg_bool /* TA_EmergencyStop::Manage_EmergencyStop::uesActive */ uesActive;
  kcg_bool /* TA_EmergencyStop::Manage_EmergencyStop::cesActive */ cesActive;
  kcg_bool /* TA_EmergencyStop::Manage_EmergencyStop::triggerCES */ triggerCES;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_EmergencyStop::Manage_EmergencyStop::cesEOA */ cesEOA;
  Q_SCALE /* TA_EmergencyStop::Manage_EmergencyStop::q_scale */ q_scale;
  D_REF /* TA_EmergencyStop::Manage_EmergencyStop::d_ref */ d_ref;
  Q_DIR /* TA_EmergencyStop::Manage_EmergencyStop::q_dir */ q_dir;
  D_EMERGENCYSTOP /* TA_EmergencyStop::Manage_EmergencyStop::d_emergencystop */ d_emergencystop;
  kcg_bool /* TA_EmergencyStop::Manage_EmergencyStop::revokeCES */ revokeCES;
  kcg_bool /* TA_EmergencyStop::Manage_EmergencyStop::cesUpdateEOA */ cesUpdateEOA;
  ReceivedMessage_T_Common_Types_Pkg /* TA_EmergencyStop::Manage_EmergencyStop::_L1 */ _L1;
  kcg_bool /* TA_EmergencyStop::Manage_EmergencyStop::_L20 */ _L20;
  kcg_bool /* TA_EmergencyStop::Manage_EmergencyStop::_L33 */ _L33;
  kcg_bool /* TA_EmergencyStop::Manage_EmergencyStop::_L34 */ _L34;
  kcg_bool /* TA_EmergencyStop::Manage_EmergencyStop::_L35 */ _L35;
  NID_EM /* TA_EmergencyStop::Manage_EmergencyStop::_L46 */ _L46;
  kcg_bool /* TA_EmergencyStop::Manage_EmergencyStop::_L51 */ _L51;
  kcg_bool /* TA_EmergencyStop::Manage_EmergencyStop::_L52 */ _L52;
  ReceivedMessage_T_Common_Types_Pkg /* TA_EmergencyStop::Manage_EmergencyStop::_L53 */ _L53;
  kcg_bool /* TA_EmergencyStop::Manage_EmergencyStop::_L57 */ _L57;
  NID_EM /* TA_EmergencyStop::Manage_EmergencyStop::_L59 */ _L59;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* TA_EmergencyStop::Manage_EmergencyStop::_L60 */ _L60;
  kcg_bool /* TA_EmergencyStop::Manage_EmergencyStop::_L61 */ _L61;
  kcg_bool /* TA_EmergencyStop::Manage_EmergencyStop::_L62 */ _L62;
  NID_EM /* TA_EmergencyStop::Manage_EmergencyStop::_L63 */ _L63;
  kcg_bool /* TA_EmergencyStop::Manage_EmergencyStop::_L64 */ _L64;
  kcg_bool /* TA_EmergencyStop::Manage_EmergencyStop::_L65 */ _L65;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* TA_EmergencyStop::Manage_EmergencyStop::_L67 */ _L67;
  T_TRAIN /* TA_EmergencyStop::Manage_EmergencyStop::_L68 */ _L68;
  trainProperties_T_TrainPosition_Types_Pck /* TA_EmergencyStop::Manage_EmergencyStop::_L69 */ _L69;
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* TA_EmergencyStop::Manage_EmergencyStop::_L70 */ _L70;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg /* TA_EmergencyStop::Manage_EmergencyStop::_L71 */ _L71;
  kcg_bool /* TA_EmergencyStop::Manage_EmergencyStop::_L72 */ _L72;
  kcg_bool /* TA_EmergencyStop::Manage_EmergencyStop::_L73 */ _L73;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_EmergencyStop::Manage_EmergencyStop::_L79 */ _L79;
  kcg_bool /* TA_EmergencyStop::Manage_EmergencyStop::_L78 */ _L78;
  NID_EM /* TA_EmergencyStop::Manage_EmergencyStop::_L82 */ _L82;
  Q_SCALE /* TA_EmergencyStop::Manage_EmergencyStop::_L83 */ _L83;
  D_EMERGENCYSTOP /* TA_EmergencyStop::Manage_EmergencyStop::_L84 */ _L84;
  Q_DIR /* TA_EmergencyStop::Manage_EmergencyStop::_L85 */ _L85;
  D_REF /* TA_EmergencyStop::Manage_EmergencyStop::_L86 */ _L86;
  Q_DIR /* TA_EmergencyStop::Manage_EmergencyStop::_L87 */ _L87;
  Q_SCALE /* TA_EmergencyStop::Manage_EmergencyStop::_L88 */ _L88;
  D_REF /* TA_EmergencyStop::Manage_EmergencyStop::_L89 */ _L89;
  D_EMERGENCYSTOP /* TA_EmergencyStop::Manage_EmergencyStop::_L90 */ _L90;
  kcg_bool /* TA_EmergencyStop::Manage_EmergencyStop::_L91 */ _L91;
  kcg_bool /* TA_EmergencyStop::Manage_EmergencyStop::_L92 */ _L92;
  kcg_bool /* TA_EmergencyStop::Manage_EmergencyStop::_L93 */ _L93;
  kcg_bool /* TA_EmergencyStop::Manage_EmergencyStop::_L94 */ _L94;
  trainPosition_T_TrainPosition_Types_Pck /* TA_EmergencyStop::Manage_EmergencyStop::_L95 */ _L95;
  kcg_bool /* TA_EmergencyStop::Manage_EmergencyStop::_L97 */ _L97;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_EmergencyStop::Manage_EmergencyStop::_L98 */ _L98;
  kcg_bool /* TA_EmergencyStop::Manage_EmergencyStop::_L99 */ _L99;
  kcg_bool /* TA_EmergencyStop::Manage_EmergencyStop::_L101 */ _L101;
  kcg_bool /* TA_EmergencyStop::Manage_EmergencyStop::_L102 */ _L102;
  kcg_bool /* TA_EmergencyStop::Manage_EmergencyStop::_L103 */ _L103;
  kcg_bool /* TA_EmergencyStop::Manage_EmergencyStop::_L104 */ _L104;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_EmergencyStop::Manage_EmergencyStop::_L105 */ _L105;
  kcg_bool /* TA_EmergencyStop::Manage_EmergencyStop::_L107 */ _L107;
} outC_Manage_EmergencyStop_TA_EmergencyStop;

/* ===========  node initialization and cycle functions  =========== */
/* TA_EmergencyStop::Manage_EmergencyStop */
extern void Manage_EmergencyStop_TA_EmergencyStop(
  /* TA_EmergencyStop::Manage_EmergencyStop::messageIn */ReceivedMessage_T_Common_Types_Pkg *messageIn,
  /* TA_EmergencyStop::Manage_EmergencyStop::t_train */T_TRAIN t_train,
  /* TA_EmergencyStop::Manage_EmergencyStop::trainProps */trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* TA_EmergencyStop::Manage_EmergencyStop::packet0 */PT0_PositionReport_T_Packet_TrainTypes_Pkg *packet0,
  /* TA_EmergencyStop::Manage_EmergencyStop::packet1 */PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *packet1,
  /* TA_EmergencyStop::Manage_EmergencyStop::TrainPositionIn */trainPosition_T_TrainPosition_Types_Pck *TrainPositionIn,
  /* TA_EmergencyStop::Manage_EmergencyStop::currentEOA */L_internal_Type_Obu_BasicTypes_Pkg currentEOA,
  outC_Manage_EmergencyStop_TA_EmergencyStop *outC);

extern void Manage_EmergencyStop_reset_TA_EmergencyStop(
  outC_Manage_EmergencyStop_TA_EmergencyStop *outC);

#endif /* _Manage_EmergencyStop_TA_EmergencyStop_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Manage_EmergencyStop_TA_EmergencyStop.h
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */

