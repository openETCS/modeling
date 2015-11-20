/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:01
*************************************************************$ */
#ifndef _RBC__PingTrain_RBC_Model_Pkg_H_
#define _RBC__PingTrain_RBC_Model_Pkg_H_

#include "kcg_types.h"
#include "SessionManagement__GetPosData_RBC_Session_Pkg.h"
#include "PosData__Get_NID_LRBG_RBC_Session_Pkg.h"
#include "PosData__Get_M_LEVEL_RBC_Session_Pkg.h"
#include "Clock__GetSeconds_RBC_Time_Pkg.h"
#include "RadioTrackTrainFactory__CreateMsg024_BSL2_RBC_Messaging_Pkg_RBC_RadioTrackTrainFactory_Pkg.h"
#include "RadioTrackTrainMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"
#include "RadioTrackTrainHeader__Get_T_TRAIN_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"
#include "RadioTrackTrainMessage__IsValid_RBC_Messaging_Pkg_RBC_RadioTrackTrain_Pkg.h"
#include "NationalParams__Get_T_NVCONTACT_RBC_Config_Pkg.h"
#include "DynamicConfig__GetNationalParams_RBC_Config_Pkg.h"
#include "RadioTrackTrainMessageQueue__TryPut_RBC_Collections_Pkg.h"
#include "RadioTrackTrainMessageQueue__GetRemainingCapacity_RBC_Collections_Pkg.h"
#include "RadioTrackTrainMessageQueueEntry__Create_RBC_Collections_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  RBC_Data_T_RBC_DataBus_Pkg /* RBC_Model_Pkg::RBC__PingTrain::outDataBus */ outDataBus;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* RBC_Model_Pkg::RBC__PingTrain::outRadioTrainTrackMessage */ outRadioTrainTrackMessage;
  CompressedRadioMessage_TM /* RBC_Model_Pkg::RBC__PingTrain::outTriggeredRadioTrackTrainMessage */ outTriggeredRadioTrackTrainMessage;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  T_TRAIN /* RBC_Model_Pkg::RBC__PingTrain::lastRadioTrackTrainMessageWasSentTimestamp */ lastRadioTrackTrainMessageWasSentTimestamp;
  kcg_bool /* RBC_Model_Pkg::RBC__PingTrain::Level_2_or_3 */ Level_2_or_3;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_RBC__PingTrain_RBC_Model_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Model_Pkg::RBC__PingTrain */
extern void RBC__PingTrain_RBC_Model_Pkg(
  /* RBC_Model_Pkg::RBC__PingTrain::inForceTrigger */kcg_bool inForceTrigger,
  /* RBC_Model_Pkg::RBC__PingTrain::inDataBus */RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  /* RBC_Model_Pkg::RBC__PingTrain::inRadioTrainTrackMessage */Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  /* RBC_Model_Pkg::RBC__PingTrain::inTriggeredRadioTrackTrainMessage */CompressedRadioMessage_TM *inTriggeredRadioTrackTrainMessage,
  outC_RBC__PingTrain_RBC_Model_Pkg *outC);

extern void RBC__PingTrain_reset_RBC_Model_Pkg(
  outC_RBC__PingTrain_RBC_Model_Pkg *outC);

#endif /* _RBC__PingTrain_RBC_Model_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** RBC__PingTrain_RBC_Model_Pkg.h
** Generation date: 2015-11-20T19:47:01
*************************************************************$ */

