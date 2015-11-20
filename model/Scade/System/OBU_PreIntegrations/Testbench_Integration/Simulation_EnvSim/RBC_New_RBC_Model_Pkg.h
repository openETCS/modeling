/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:03
*************************************************************$ */
#ifndef _RBC_New_RBC_Model_Pkg_H_
#define _RBC_New_RBC_Model_Pkg_H_

#include "kcg_types.h"
#include "RBC_Clock_Tick_RBC_Time_Pkg.h"
#include "RadioTrackTrainMsgQueue_RBC_Messaging_Pkg.h"
#include "RBC__ProcessController_RBC_Model_Pkg.h"
#include "ToOldRadioTrainTrackMsg_RBC_Model_Pkg_TrainTrackMsgConversion.h"
#include "DataBusFactory_RBC_DataBus_Pkg.h"
#include "RadioTrainTrackInputHandler_RBC_Messaging_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  SessionManagement_T /* RBC_Model_Pkg::RBC_New::outSessionManagement */ outSessionManagement;
  CompressedRadioMessage_TM /* RBC_Model_Pkg::RBC_New::outRadioTrackTrainMessage */ outRadioTrackTrainMessage;
  Clock_T /* RBC_Model_Pkg::RBC_New::outClock */ outClock;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  RBC_Data_T_RBC_DataBus_Pkg /* RBC_Model_Pkg::RBC_New::dataBus */ dataBus;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_DataBusFactory_RBC_DataBus_Pkg /* 1 */ _3_Context_1;
  outC_ToOldRadioTrainTrackMsg_RBC_Model_Pkg_TrainTrackMsgConversion /* 1 */ _2_Context_1;
  outC_RadioTrainTrackInputHandler_RBC_Messaging_Pkg /* 1 */ _1_Context_1;
  outC_RBC__ProcessController_RBC_Model_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_RBC_New_RBC_Model_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* RBC_Model_Pkg::RBC_New */
extern void RBC_New_RBC_Model_Pkg(
  /* RBC_Model_Pkg::RBC_New::inDynamicConfigInit */DynamicConfig_T *inDynamicConfigInit,
  /* RBC_Model_Pkg::RBC_New::inRadioTrainTrackMsg */M_TrainTrack_Message_T_TM_radio_messages *inRadioTrainTrackMsg,
  /* RBC_Model_Pkg::RBC_New::inTriggeredRadioTrackTrainMessage */CompressedRadioMessage_TM *inTriggeredRadioTrackTrainMessage,
  outC_RBC_New_RBC_Model_Pkg *outC);

extern void RBC_New_reset_RBC_Model_Pkg(outC_RBC_New_RBC_Model_Pkg *outC);

#endif /* _RBC_New_RBC_Model_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** RBC_New_RBC_Model_Pkg.h
** Generation date: 2015-11-20T19:47:03
*************************************************************$ */

