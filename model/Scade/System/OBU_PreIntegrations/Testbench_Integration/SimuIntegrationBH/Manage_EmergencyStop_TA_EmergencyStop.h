/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _Manage_EmergencyStop_TA_EmergencyStop_H_
#define _Manage_EmergencyStop_TA_EmergencyStop_H_

#include "kcg_types.h"
#include "ES_ReceiveAndControl_TA_EmergencyStop.h"
#include "ES_ExtractMsgParams_TA_EmergencyStop.h"
#include "ES_Build_Acknowledgement_TA_EmergencyStop.h"
#include "ES_Build_AcknowledgementNew_TA_EmergencyStop.h"
#include "C_legacy_P001_TM_conversions_TrainToTrack.h"
#include "C_legacy_P000_TM_conversions_TrainToTrack.h"
#include "Send_M147_TM_radio_messages.h"
#include "ES_Process_Unconditional_TA_EmergencyStop.h"
#include "ES_Process_Conditional_TA_EmergencyStop.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TA_EmergencyStop::Manage_EmergencyStop::rejectNewMA */ rejectNewMA;
  Radio_TrainTrack_Message_T_TM_transitional /* TA_EmergencyStop::Manage_EmergencyStop::message147 */ message147;
  kcg_bool /* TA_EmergencyStop::Manage_EmergencyStop::tripTrain */ tripTrain;
  kcg_bool /* TA_EmergencyStop::Manage_EmergencyStop::cesAccepted */ cesAccepted;
  kcg_bool /* TA_EmergencyStop::Manage_EmergencyStop::updateEOA */ updateEOA;
  L_internal_Type_Obu_BasicTypes_Pkg /* TA_EmergencyStop::Manage_EmergencyStop::newEOA */ newEOA;
  kcg_bool /* TA_EmergencyStop::Manage_EmergencyStop::cesRevoked */ cesRevoked;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* TA_EmergencyStop::Manage_EmergencyStop::bus_out */ bus_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Send_M147_TM_radio_messages /* 2 */ Context_2;
  outC_ES_Process_Unconditional_TA_EmergencyStop /* 1 */ _1_Context_1;
  outC_ES_Process_Conditional_TA_EmergencyStop /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_Manage_EmergencyStop_TA_EmergencyStop;

/* ===========  node initialization and cycle functions  =========== */
/* TA_EmergencyStop::Manage_EmergencyStop */
extern void Manage_EmergencyStop_TA_EmergencyStop(
  /* TA_EmergencyStop::Manage_EmergencyStop::messageIn */ ReceivedMessage_T_Common_Types_Pkg *messageIn,
  /* TA_EmergencyStop::Manage_EmergencyStop::t_train */ T_TRAIN t_train,
  /* TA_EmergencyStop::Manage_EmergencyStop::trainProps */ trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* TA_EmergencyStop::Manage_EmergencyStop::packet0 */ PT0_PositionReport_T_Packet_TrainTypes_Pkg *packet0,
  /* TA_EmergencyStop::Manage_EmergencyStop::packet1 */ PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *packet1,
  /* TA_EmergencyStop::Manage_EmergencyStop::TrainPositionIn */ trainPosition_T_TrainPosition_Types_Pck *TrainPositionIn,
  /* TA_EmergencyStop::Manage_EmergencyStop::currentEOA */ L_internal_Type_Obu_BasicTypes_Pkg currentEOA,
  /* TA_EmergencyStop::Manage_EmergencyStop::bus_in */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *bus_in,
  outC_Manage_EmergencyStop_TA_EmergencyStop *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Manage_EmergencyStop_reset_TA_EmergencyStop(
  outC_Manage_EmergencyStop_TA_EmergencyStop *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Manage_EmergencyStop_init_TA_EmergencyStop(
  outC_Manage_EmergencyStop_TA_EmergencyStop *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Manage_EmergencyStop_TA_EmergencyStop_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Manage_EmergencyStop_TA_EmergencyStop.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

