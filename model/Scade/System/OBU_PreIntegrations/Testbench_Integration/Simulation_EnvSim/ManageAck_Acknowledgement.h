/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */
#ifndef _ManageAck_Acknowledgement_H_
#define _ManageAck_Acknowledgement_H_

#include "kcg_types.h"
#include "IsAckNeeded_Acknowledgement.h"
#include "RequestAck_Acknowledgement.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Acknowledgement::ManageAck::needsAckFromDriver */ needsAckFromDriver;
  kcg_bool /* Acknowledgement::ManageAck::service_brake */ service_brake;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_RequestAck_Acknowledgement /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_ManageAck_Acknowledgement;

/* ===========  node initialization and cycle functions  =========== */
/* Acknowledgement::ManageAck */
extern void ManageAck_Acknowledgement(
  /* Acknowledgement::ManageAck::selected_level_transition */T_LevelTransition_Level_And_Mode_Types_Pkg *selected_level_transition,
  /* Acknowledgement::ManageAck::trainPosition */trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* Acknowledgement::ManageAck::last_level */M_LEVEL last_level,
  /* Acknowledgement::ManageAck::levelAck */kcg_bool levelAck,
  /* Acknowledgement::ManageAck::IsNewLevel */kcg_bool IsNewLevel,
  outC_ManageAck_Acknowledgement *outC);

extern void ManageAck_reset_Acknowledgement(
  outC_ManageAck_Acknowledgement *outC);

#endif /* _ManageAck_Acknowledgement_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ManageAck_Acknowledgement.h
** Generation date: 2015-11-20T19:46:58
*************************************************************$ */

