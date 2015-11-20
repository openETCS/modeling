/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _RBC__ProcessUnconditionalEmergencyStop_RBC_Model_Pkg_H_
#define _RBC__ProcessUnconditionalEmergencyStop_RBC_Model_Pkg_H_

#include "kcg_types.h"
#include "SessionManagement__GetPosData_RBC_Session_Pkg.h"
#include "SessionManagement__SetPosData_RBC_Session_Pkg.h"
#include "PosData__Update_RBC_Session_Pkg.h"
#include "RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "RadioTrainTrackHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "RadioTrainTrackHeader__Get_Q_EMERGENCYSTOP_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "RadioTrainTrackHeader__Get_NID_EM_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"
#include "RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"
#include "RadioTrackTrainHeader__Get_NID_EM_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"
#include "RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg.h"
#include "RadioTrackTrainMessageQueueEntry__Create_RBC_Collections_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  RBC_Data_T_RBC_DataBus_Pkg /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::outDataBus */ outDataBus;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::outRadioTrainTrackMessage */ outRadioTrainTrackMessage;
  CompressedRadioMessage_TM /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::outTriggeredRadioTrackTrainMessage */ outTriggeredRadioTrackTrainMessage;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::invalidAck */ invalidAck;
  kcg_bool /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::validAck */ validAck;
  SSM_ST_UNCONDITIONAL_EMERGENCY_STOP_SM /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM */ UNCONDITIONAL_EMERGENCY_STOP_SM_state_nxt;
  kcg_bool /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM */ UNCONDITIONAL_EMERGENCY_STOP_SM_reset_act;
  kcg_bool /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM */ UNCONDITIONAL_EMERGENCY_STOP_SM_reset_nxt;
  NID_EM /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::radioTrackTrainMessageWasSentEmergencyStopId */ radioTrackTrainMessageWasSentEmergencyStopId;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_RBC__ProcessUnconditionalEmergencyStop_RBC_Model_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop */
extern void RBC__ProcessUnconditionalEmergencyStop_RBC_Model_Pkg(
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::inDataBus */ RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::inRadioTrainTrackMessage */ Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  /* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::inTriggeredRadioTrackTrainMessage */ CompressedRadioMessage_TM *inTriggeredRadioTrackTrainMessage,
  outC_RBC__ProcessUnconditionalEmergencyStop_RBC_Model_Pkg *outC);

extern void RBC__ProcessUnconditionalEmergencyStop_reset_RBC_Model_Pkg(
  outC_RBC__ProcessUnconditionalEmergencyStop_RBC_Model_Pkg *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void RBC__ProcessUnconditionalEmergencyStop_init_RBC_Model_Pkg(
  outC_RBC__ProcessUnconditionalEmergencyStop_RBC_Model_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _RBC__ProcessUnconditionalEmergencyStop_RBC_Model_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** RBC__ProcessUnconditionalEmergencyStop_RBC_Model_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

