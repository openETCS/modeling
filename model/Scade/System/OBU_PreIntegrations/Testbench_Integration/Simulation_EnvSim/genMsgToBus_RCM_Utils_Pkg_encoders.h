/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:00
*************************************************************$ */
#ifndef _genMsgToBus_RCM_Utils_Pkg_encoders_H_
#define _genMsgToBus_RCM_Utils_Pkg_encoders_H_

#include "kcg_types.h"
#include "Send_M154_TM_radio_messages.h"
#include "Send_M159_TM_radio_messages.h"
#include "Send_M156_TM_radio_messages.h"
#include "Send_M155_TM_radio_messages.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* RCM_Utils_Pkg::encoders::genMsgToBus::msgBus_out */ msgBus_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Send_M155_TM_radio_messages /* 1 */ _2_Context_1;
  outC_Send_M156_TM_radio_messages /* 1 */ _1_Context_1;
  outC_Send_M159_TM_radio_messages /* 2 */ Context_2;
  outC_Send_M154_TM_radio_messages /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_genMsgToBus_RCM_Utils_Pkg_encoders;

/* ===========  node initialization and cycle functions  =========== */
/* RCM_Utils_Pkg::encoders::genMsgToBus */
extern void genMsgToBus_RCM_Utils_Pkg_encoders(
  /* RCM_Utils_Pkg::encoders::genMsgToBus::msgToTrackTriggers */msgToTrackTriggers_T_RCM_MsgTypes_Pkg *msgToTrackTriggers,
  /* RCM_Utils_Pkg::encoders::genMsgToBus::t_train */T_TRAIN t_train,
  /* RCM_Utils_Pkg::encoders::genMsgToBus::t_train_global */T_internal_Type_Obu_BasicTypes_Pkg t_train_global,
  /* RCM_Utils_Pkg::encoders::genMsgToBus::msgBus_in */M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *msgBus_in,
  /* RCM_Utils_Pkg::encoders::genMsgToBus::nid_engine */NID_ENGINE nid_engine,
  /* RCM_Utils_Pkg::encoders::genMsgToBus::onboardPhoneNumbers_b */P003_TM_TrainToTrack *onboardPhoneNumbers_b,
  /* RCM_Utils_Pkg::encoders::genMsgToBus::m_version */M_VERSION m_version,
  outC_genMsgToBus_RCM_Utils_Pkg_encoders *outC);

extern void genMsgToBus_reset_RCM_Utils_Pkg_encoders(
  outC_genMsgToBus_RCM_Utils_Pkg_encoders *outC);

#endif /* _genMsgToBus_RCM_Utils_Pkg_encoders_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** genMsgToBus_RCM_Utils_Pkg_encoders.h
** Generation date: 2015-11-20T19:47:00
*************************************************************$ */

