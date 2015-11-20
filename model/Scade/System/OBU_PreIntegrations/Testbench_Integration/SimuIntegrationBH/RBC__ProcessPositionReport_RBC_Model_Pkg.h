/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _RBC__ProcessPositionReport_RBC_Model_Pkg_H_
#define _RBC__ProcessPositionReport_RBC_Model_Pkg_H_

#include "kcg_types.h"
#include "SessionManagement__GetPosData_RBC_Session_Pkg.h"
#include "SessionManagement__SetPosData_RBC_Session_Pkg.h"
#include "PosData__Update_RBC_Session_Pkg.h"
#include "PosData__Get_M_LEVEL_RBC_Session_Pkg.h"
#include "RadioTrainTrackMessage__GetHeader_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "RadioTrainTrackHeader__Get_NID_MESSAGE_RBC_Messaging_Pkg_RBC_RadioTrainTrack_Pkg.h"
#include "RBC__PingTrain_RBC_Model_Pkg.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  RBC_Data_T_RBC_DataBus_Pkg /* RBC_Model_Pkg::RBC__ProcessPositionReport::outDataBus */ outDataBus;
  Radio_TrainTrack_Message_T_Radio_Types_Pkg /* RBC_Model_Pkg::RBC__ProcessPositionReport::outRadioTrainTrackMessage */ outRadioTrainTrackMessage;
  CompressedRadioMessage_TM /* RBC_Model_Pkg::RBC__ProcessPositionReport::outTriggeredRadioTrackTrainMessage */ outTriggeredRadioTrackTrainMessage;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_POSITION_REPORT_SM /* RBC_Model_Pkg::RBC__ProcessPositionReport::POSITION_REPORT_SM */ POSITION_REPORT_SM_state_nxt;
  kcg_bool /* RBC_Model_Pkg::RBC__ProcessPositionReport::POSITION_REPORT_SM */ POSITION_REPORT_SM_reset_act;
  kcg_bool /* RBC_Model_Pkg::RBC__ProcessPositionReport::POSITION_REPORT_SM */ POSITION_REPORT_SM_reset_nxt;
  kcg_bool /* RBC_Model_Pkg::RBC__ProcessPositionReport::terminateSessionInCaseOfLevelLoss */ terminateSessionInCaseOfLevelLoss;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RBC__PingTrain_RBC_Model_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_RBC__ProcessPositionReport_RBC_Model_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Model_Pkg::RBC__ProcessPositionReport */
extern void RBC__ProcessPositionReport_RBC_Model_Pkg(
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::inDataBus */ RBC_Data_T_RBC_DataBus_Pkg *inDataBus,
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::inRadioTrainTrackMessage */ Radio_TrainTrack_Message_T_Radio_Types_Pkg *inRadioTrainTrackMessage,
  /* RBC_Model_Pkg::RBC__ProcessPositionReport::inTriggeredRadioTrackTrainMessage */ CompressedRadioMessage_TM *inTriggeredRadioTrackTrainMessage,
  outC_RBC__ProcessPositionReport_RBC_Model_Pkg *outC);

extern void RBC__ProcessPositionReport_reset_RBC_Model_Pkg(
  outC_RBC__ProcessPositionReport_RBC_Model_Pkg *outC);

#ifndef KCG_USER_DEFINED_INIT
extern void RBC__ProcessPositionReport_init_RBC_Model_Pkg(
  outC_RBC__ProcessPositionReport_RBC_Model_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _RBC__ProcessPositionReport_RBC_Model_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** RBC__ProcessPositionReport_RBC_Model_Pkg.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

