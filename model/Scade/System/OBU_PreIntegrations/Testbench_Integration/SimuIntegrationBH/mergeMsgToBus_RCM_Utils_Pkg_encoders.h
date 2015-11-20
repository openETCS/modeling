/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */
#ifndef _mergeMsgToBus_RCM_Utils_Pkg_encoders_H_
#define _mergeMsgToBus_RCM_Utils_Pkg_encoders_H_

#include "kcg_types.h"
#include "MergeMessageToBus_TM_TrainTrack_Bus.h"
#include "CheckSpace_TM_TrainTrack_Bus.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* RCM_Utils_Pkg::encoders::mergeMsgToBus::messageBus_out */ messageBus_out;
  kcg_int /* RCM_Utils_Pkg::encoders::mergeMsgToBus::t_train_assigned */ t_train_assigned;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  _17_SSM_ST_SM1 /* RCM_Utils_Pkg::encoders::mergeMsgToBus::SM1 */ SM1_state_nxt;
  kcg_bool /* RCM_Utils_Pkg::encoders::mergeMsgToBus::SM1 */ SM1_reset_act;
  kcg_bool /* RCM_Utils_Pkg::encoders::mergeMsgToBus::SM1 */ SM1_reset_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_mergeMsgToBus_RCM_Utils_Pkg_encoders;

/* ===========  node initialization and cycle functions  =========== */
/* RCM_Utils_Pkg::encoders::mergeMsgToBus */
extern void mergeMsgToBus_RCM_Utils_Pkg_encoders(
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::request */ kcg_bool request,
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::messageAvailable */ kcg_bool messageAvailable,
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::message */ M_TrainTrack_Message_T_TM_radio_messages *message,
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::messageBus_in */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *messageBus_in,
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::t_train_global */ T_internal_Type_Obu_BasicTypes_Pkg t_train_global,
  outC_mergeMsgToBus_RCM_Utils_Pkg_encoders *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void mergeMsgToBus_reset_RCM_Utils_Pkg_encoders(
  outC_mergeMsgToBus_RCM_Utils_Pkg_encoders *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void mergeMsgToBus_init_RCM_Utils_Pkg_encoders(
  outC_mergeMsgToBus_RCM_Utils_Pkg_encoders *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _mergeMsgToBus_RCM_Utils_Pkg_encoders_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** mergeMsgToBus_RCM_Utils_Pkg_encoders.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */

