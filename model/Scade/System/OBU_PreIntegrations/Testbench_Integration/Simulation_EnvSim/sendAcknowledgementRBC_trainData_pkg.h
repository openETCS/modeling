/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */
#ifndef _sendAcknowledgementRBC_trainData_pkg_H_
#define _sendAcknowledgementRBC_trainData_pkg_H_

#include "kcg_types.h"
#include "headerMsg146_ng_trainData_pkg.h"
#include "Send_M146_TM_radio_messages.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  trainDataStatus_T_trainData_Types_pkg /* trainData_pkg::sendAcknowledgementRBC::updatedStatus */ updatedStatus;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* trainData_pkg::sendAcknowledgementRBC::outMessageBus */ outMessageBus;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Send_M146_TM_radio_messages /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_sendAcknowledgementRBC_trainData_pkg;

/* ===========  node initialization and cycle functions  =========== */
/* trainData_pkg::sendAcknowledgementRBC */
extern void sendAcknowledgementRBC_trainData_pkg(
  /* trainData_pkg::sendAcknowledgementRBC::EVC_t_train */T_TRAIN EVC_t_train,
  /* trainData_pkg::sendAcknowledgementRBC::nidEngine */NID_ENGINE nidEngine,
  /* trainData_pkg::sendAcknowledgementRBC::RBC_timeStamp */T_TRAIN RBC_timeStamp,
  /* trainData_pkg::sendAcknowledgementRBC::actualStatus */trainDataStatus_T_trainData_Types_pkg *actualStatus,
  /* trainData_pkg::sendAcknowledgementRBC::MessageBus */M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* trainData_pkg::sendAcknowledgementRBC::inVersion */M_VERSION inVersion,
  outC_sendAcknowledgementRBC_trainData_pkg *outC);

extern void sendAcknowledgementRBC_reset_trainData_pkg(
  outC_sendAcknowledgementRBC_trainData_pkg *outC);

#endif /* _sendAcknowledgementRBC_trainData_pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** sendAcknowledgementRBC_trainData_pkg.h
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */

