/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:00
*************************************************************$ */
#ifndef _mergeMsgToBus_RCM_Utils_Pkg_encoders_H_
#define _mergeMsgToBus_RCM_Utils_Pkg_encoders_H_

#include "kcg_types.h"
#include "MergeMessageToBus_TM_TrainTrack_Bus.h"
#include "CheckSpace_TM_TrainTrack_Bus.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* RCM_Utils_Pkg::encoders::mergeMsgToBus::messageBus_out */ messageBus_out;
  kcg_int /* RCM_Utils_Pkg::encoders::mergeMsgToBus::t_train_assigned */ t_train_assigned;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  _1_SSM_ST_SM1 /* RCM_Utils_Pkg::encoders::mergeMsgToBus::SM1 */ SM1_state_nxt;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_mergeMsgToBus_RCM_Utils_Pkg_encoders;

/* ===========  node initialization and cycle functions  =========== */
/* RCM_Utils_Pkg::encoders::mergeMsgToBus */
extern void mergeMsgToBus_RCM_Utils_Pkg_encoders(
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::request */kcg_bool request,
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::messageAvailable */kcg_bool messageAvailable,
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::message */M_TrainTrack_Message_T_TM_radio_messages *message,
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::messageBus_in */M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *messageBus_in,
  /* RCM_Utils_Pkg::encoders::mergeMsgToBus::t_train_global */T_internal_Type_Obu_BasicTypes_Pkg t_train_global,
  outC_mergeMsgToBus_RCM_Utils_Pkg_encoders *outC);

extern void mergeMsgToBus_reset_RCM_Utils_Pkg_encoders(
  outC_mergeMsgToBus_RCM_Utils_Pkg_encoders *outC);

#endif /* _mergeMsgToBus_RCM_Utils_Pkg_encoders_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** mergeMsgToBus_RCM_Utils_Pkg_encoders.h
** Generation date: 2015-11-20T19:47:00
*************************************************************$ */

