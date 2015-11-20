/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _RequestAck_Acknowledgement_H_
#define _RequestAck_Acknowledgement_H_

#include "kcg_types.h"
#include "Position_In_Ack_Area_Acknowledgement.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Acknowledgement::RequestAck::needsAckFromDriver */ needsAckFromDriver;
  kcg_bool /* Acknowledgement::RequestAck::service_brake */ service_brake;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  _46_SSM_ST_SM1 /* Acknowledgement::RequestAck::SM1 */ SM1_state_nxt;
  kcg_bool /* Acknowledgement::RequestAck::SM1 */ SM1_reset_act;
  kcg_bool /* Acknowledgement::RequestAck::SM1 */ SM1_reset_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_RequestAck_Acknowledgement;

/* ===========  node initialization and cycle functions  =========== */
/* Acknowledgement::RequestAck */
extern void RequestAck_Acknowledgement(
  /* Acknowledgement::RequestAck::isAckNeeded */ kcg_bool isAckNeeded,
  /* Acknowledgement::RequestAck::selected_level_transition */ T_LevelTransition_Level_And_Mode_Types_Pkg *selected_level_transition,
  /* Acknowledgement::RequestAck::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* Acknowledgement::RequestAck::levelAck */ kcg_bool levelAck,
  /* Acknowledgement::RequestAck::IsNewLevel */ kcg_bool IsNewLevel,
  outC_RequestAck_Acknowledgement *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void RequestAck_reset_Acknowledgement(
  outC_RequestAck_Acknowledgement *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void RequestAck_init_Acknowledgement(
  outC_RequestAck_Acknowledgement *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _RequestAck_Acknowledgement_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** RequestAck_Acknowledgement.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

