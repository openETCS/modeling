/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:02
*************************************************************$ */
#ifndef _RBC__ProcessTripAndPostTrip_RBC_Model_Pkg_H_
#define _RBC__ProcessTripAndPostTrip_RBC_Model_Pkg_H_

#include "kcg_types.h"
#include "SessionManagement__GetPosData_RBC_Session_Pkg.h"
#include "PosData__Get_NID_LRBG_RBC_Session_Pkg.h"
#include "RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "RadioTrainTrackHeader__Get_T_TRAIN_Ref_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "RadioTrainTrackHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "RadioTrackTrainFactory__CreateMsg006_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg.h"
#include "RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"
#include "RadioTrackTrainHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"
#include "RadioTrackTrainHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"
#include "RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg.h"
#include "RadioTrackTrainMessageQueueEntry__Create_RBC_Collections_Pkg.h"
#include "RBC__ProcessModeAndLevel_RBC_Model_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  RBC_Data_T_RBC_DataBus_Pkg /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::outDataBus */ outDataBus;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::outRadioTrainTrackMessage */ outRadioTrainTrackMessage;
  CompressedRadioMessage_TM /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::outTriggeredRadioTrackTrainMessage */ outTriggeredRadioTrackTrainMessage;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::invalidAck */ invalidAck;
  kcg_bool /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::validAck */ validAck;
  SSM_ST_TRIP_AND_POST_TRIP_SM /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM */ TRIP_AND_POST_TRIP_SM_state_nxt;
  T_TRAIN /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::recognitionMessageWasSentTimestamp */ recognitionMessageWasSentTimestamp;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RBC__ProcessModeAndLevel_RBC_Model_Pkg /* 3 */ Context_3;
  /* ----------------- no clocks of observable data ------------------ */
} outC_RBC__ProcessTripAndPostTrip_RBC_Model_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip */
extern void RBC__ProcessTripAndPostTrip_RBC_Model_Pkg(
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::inDataBus */RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::inRadioTrainTrackMessage */Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  /* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::inTriggeredRadioTrackTrainMessage */CompressedRadioMessage_TM *inTriggeredRadioTrackTrainMessage,
  outC_RBC__ProcessTripAndPostTrip_RBC_Model_Pkg *outC);

extern void RBC__ProcessTripAndPostTrip_reset_RBC_Model_Pkg(
  outC_RBC__ProcessTripAndPostTrip_RBC_Model_Pkg *outC);

#endif /* _RBC__ProcessTripAndPostTrip_RBC_Model_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** RBC__ProcessTripAndPostTrip_RBC_Model_Pkg.h
** Generation date: 2015-11-20T19:47:02
*************************************************************$ */

