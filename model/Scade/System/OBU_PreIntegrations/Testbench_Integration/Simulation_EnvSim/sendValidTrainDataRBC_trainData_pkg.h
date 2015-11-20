/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */
#ifndef _sendValidTrainDataRBC_trainData_pkg_H_
#define _sendValidTrainDataRBC_trainData_pkg_H_

#include "kcg_types.h"
#include "nextGen_P00_radioOutput_Pkg.h"
#include "nextGen_P01_radioOutput_Pkg.h"
#include "headerMsg129_ng_trainData_pkg.h"
#include "packet_11_trainData_pkg.h"
#include "Send_M129_TM_radio_messages.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  trainDataStatus_T_trainData_Types_pkg /* trainData_pkg::sendValidTrainDataRBC::updatedStatus */ updatedStatus;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* trainData_pkg::sendValidTrainDataRBC::outMessageBus */ outMessageBus;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Send_M129_TM_radio_messages /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_sendValidTrainDataRBC_trainData_pkg;

/* ===========  node initialization and cycle functions  =========== */
/* trainData_pkg::sendValidTrainDataRBC */
extern void sendValidTrainDataRBC_trainData_pkg(
  /* trainData_pkg::sendValidTrainDataRBC::trainData */trainData_T_TIU_Types_Pkg *trainData,
  /* trainData_pkg::sendValidTrainDataRBC::evc_t_train */T_TRAIN evc_t_train,
  /* trainData_pkg::sendValidTrainDataRBC::nidEngine */NID_ENGINE nidEngine,
  /* trainData_pkg::sendValidTrainDataRBC::actualStatus */trainDataStatus_T_trainData_Types_pkg *actualStatus,
  /* trainData_pkg::sendValidTrainDataRBC::p0_positionReport */PT0_PositionReport_T_Packet_TrainTypes_Pkg *p0_positionReport,
  /* trainData_pkg::sendValidTrainDataRBC::p1_positionReport */PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *p1_positionReport,
  /* trainData_pkg::sendValidTrainDataRBC::MessageBus */M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* trainData_pkg::sendValidTrainDataRBC::inVersion */M_VERSION inVersion,
  outC_sendValidTrainDataRBC_trainData_pkg *outC);

extern void sendValidTrainDataRBC_reset_trainData_pkg(
  outC_sendValidTrainDataRBC_trainData_pkg *outC);

#endif /* _sendValidTrainDataRBC_trainData_pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** sendValidTrainDataRBC_trainData_pkg.h
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */

