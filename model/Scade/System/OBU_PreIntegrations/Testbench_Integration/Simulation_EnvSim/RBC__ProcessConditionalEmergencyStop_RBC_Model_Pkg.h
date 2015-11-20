/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:01
*************************************************************$ */
#ifndef _RBC__ProcessConditionalEmergencyStop_RBC_Model_Pkg_H_
#define _RBC__ProcessConditionalEmergencyStop_RBC_Model_Pkg_H_

#include "kcg_types.h"
#include "SessionManagement__GetPosData_RBC_Session_Pkg.h"
#include "SessionManagement__SetPosData_RBC_Session_Pkg.h"
#include "PosData__Update_RBC_Session_Pkg.h"
#include "RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "RadioTrainTrackHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "RadioTrainTrackHeader__Get_NID_EM_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"
#include "RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"
#include "RadioTrackTrainHeader__Get_NID_EM_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"
#include "RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg.h"
#include "RadioTrackTrainMessageQueueEntry__Create_RBC_Collections_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  RBC_Data_T_RBC_DataBus_Pkg /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::outDataBus */ outDataBus;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::outRadioTrainTrackMessage */ outRadioTrainTrackMessage;
  CompressedRadioMessage_TM /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::outTriggeredRadioTrackTrainMessage */ outTriggeredRadioTrackTrainMessage;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::invalidAck */ invalidAck;
  kcg_bool /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::validAck */ validAck;
  SSM_ST_CONDITIONAL_EMERGENCY_STOP_SM /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM */ CONDITIONAL_EMERGENCY_STOP_SM_state_nxt;
  NID_EM /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::radioTrackTrainMessageWasSentEmergencyStopId */ radioTrackTrainMessageWasSentEmergencyStopId;
  SessionManagement_T /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::session */ session;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_RBC__ProcessConditionalEmergencyStop_RBC_Model_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop */
extern void RBC__ProcessConditionalEmergencyStop_RBC_Model_Pkg(
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::inDataBus */RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::inRadioTrainTrackMessage */Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  /* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::inTriggeredRadioTrackTrainMessage */CompressedRadioMessage_TM *inTriggeredRadioTrackTrainMessage,
  outC_RBC__ProcessConditionalEmergencyStop_RBC_Model_Pkg *outC);

extern void RBC__ProcessConditionalEmergencyStop_reset_RBC_Model_Pkg(
  outC_RBC__ProcessConditionalEmergencyStop_RBC_Model_Pkg *outC);

#endif /* _RBC__ProcessConditionalEmergencyStop_RBC_Model_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** RBC__ProcessConditionalEmergencyStop_RBC_Model_Pkg.h
** Generation date: 2015-11-20T19:47:01
*************************************************************$ */

