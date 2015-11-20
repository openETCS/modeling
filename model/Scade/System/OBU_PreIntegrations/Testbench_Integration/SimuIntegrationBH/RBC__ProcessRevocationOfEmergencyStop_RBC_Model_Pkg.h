/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _RBC__ProcessRevocationOfEmergencyStop_RBC_Model_Pkg_H_
#define _RBC__ProcessRevocationOfEmergencyStop_RBC_Model_Pkg_H_

#include "kcg_types.h"
#include "RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "RadioTrainTrackHeader__Get_T_TRAIN_Ref_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "RadioTrainTrackHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"
#include "RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"
#include "RadioTrackTrainHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"
#include "RadioTrackTrainHeader__Get_M_ACK_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"
#include "RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg.h"
#include "RadioTrackTrainMessageQueueEntry__Create_RBC_Collections_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  RBC_Data_T_RBC_DataBus_Pkg /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::outDataBus */ outDataBus;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::outRadioTrainTrackMessage */ outRadioTrainTrackMessage;
  CompressedRadioMessage_TM /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::outTriggeredRadioTrackTrainMessage */ outTriggeredRadioTrackTrainMessage;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::invalidAck */ invalidAck;
  kcg_bool /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::validAck */ validAck;
  SSM_ST_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM */ REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_state_nxt;
  kcg_bool /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM */ REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_act;
  kcg_bool /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM */ REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM_reset_nxt;
  kcg_bool /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::ackRequired */ ackRequired;
  T_TRAIN /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::revocationMessageWasSentTimestamp */ revocationMessageWasSentTimestamp;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_RBC__ProcessRevocationOfEmergencyStop_RBC_Model_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop */
extern void RBC__ProcessRevocationOfEmergencyStop_RBC_Model_Pkg(
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::inDataBus */ RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::inRadioTrainTrackMessage */ Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  /* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::inTriggeredRadioTrackTrainMessage */ CompressedRadioMessage_TM *inTriggeredRadioTrackTrainMessage,
  outC_RBC__ProcessRevocationOfEmergencyStop_RBC_Model_Pkg *outC);

extern void RBC__ProcessRevocationOfEmergencyStop_reset_RBC_Model_Pkg(
  outC_RBC__ProcessRevocationOfEmergencyStop_RBC_Model_Pkg *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void RBC__ProcessRevocationOfEmergencyStop_init_RBC_Model_Pkg(
  outC_RBC__ProcessRevocationOfEmergencyStop_RBC_Model_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _RBC__ProcessRevocationOfEmergencyStop_RBC_Model_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** RBC__ProcessRevocationOfEmergencyStop_RBC_Model_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

