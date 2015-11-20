/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:00
*************************************************************$ */
#ifndef _mobileBusRouter_out_Handover_Pkg_handoverUtils_Pkg_H_
#define _mobileBusRouter_out_Handover_Pkg_handoverUtils_Pkg_H_

#include "kcg_types.h"
#include "extractPositionReportFromBus_RCM_Utils_Pkg_encoders.h"
#include "genMsgToBus_RCM_Utils_Pkg_encoders.h"
#include "mergeMsgToBus_RCM_Utils_Pkg_encoders.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::msgBus_2_RBC_1 */ msgBus_2_RBC_1;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::msgBus_2_RBC_2 */ msgBus_2_RBC_2;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_genMsgToBus_RCM_Utils_Pkg_encoders /* 3 */ Context_3;
  outC_mergeMsgToBus_RCM_Utils_Pkg_encoders /* 4 */ Context_4;
  outC_mergeMsgToBus_RCM_Utils_Pkg_encoders /* 1 */ _1_Context_1;
  outC_genMsgToBus_RCM_Utils_Pkg_encoders /* 1 */ Context_1;
  outC_mergeMsgToBus_RCM_Utils_Pkg_encoders /* 7 */ Context_7;
  outC_genMsgToBus_RCM_Utils_Pkg_encoders /* 2 */ Context_2;
  outC_mergeMsgToBus_RCM_Utils_Pkg_encoders /* 5 */ Context_5;
  /* ----------------- no clocks of observable data ------------------ */
} outC_mobileBusRouter_out_Handover_Pkg_handoverUtils_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out */
extern void mobileBusRouter_out_Handover_Pkg_handoverUtils_Pkg(
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::morcMsgTriggersToRBC_1 */msgToTrackTriggers_T_RCM_MsgTypes_Pkg *morcMsgTriggersToRBC_1,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::morcMsgTriggersToRBC_2 */msgToTrackTriggers_T_RCM_MsgTypes_Pkg *morcMsgTriggersToRBC_2,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::useInformationFromAcceptingRBC */kcg_bool useInformationFromAcceptingRBC,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::handingOverRBC_is_RBC_1 */kcg_bool handingOverRBC_is_RBC_1,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::sendPositionReport_2_acceptingRBC */kcg_bool sendPositionReport_2_acceptingRBC,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::sendPositionReport_2_handingOverRBC */kcg_bool sendPositionReport_2_handingOverRBC,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::sendPositionReport_2_RBC_1 */kcg_bool sendPositionReport_2_RBC_1,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::sendPositionReport_2_RBC_2 */kcg_bool sendPositionReport_2_RBC_2,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::sendTrainData_2_acceptingRBC */kcg_bool sendTrainData_2_acceptingRBC,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::t_train */T_TRAIN t_train,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::t_train_global */T_internal_Type_Obu_BasicTypes_Pkg t_train_global,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::msgBusToRBC_in */M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *msgBusToRBC_in,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::sessionManagementAbility */abilityToHandleCommunicationSessions_Handover_Pkg sessionManagementAbility,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::nid_engine */NID_ENGINE nid_engine,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::onboardPhoneNumbers_b */P003_TM_TrainToTrack *onboardPhoneNumbers_b,
  /* Handover_Pkg::handoverUtils_Pkg::mobileBusRouter_out::m_version */M_VERSION m_version,
  outC_mobileBusRouter_out_Handover_Pkg_handoverUtils_Pkg *outC);

extern void mobileBusRouter_out_reset_Handover_Pkg_handoverUtils_Pkg(
  outC_mobileBusRouter_out_Handover_Pkg_handoverUtils_Pkg *outC);

#endif /* _mobileBusRouter_out_Handover_Pkg_handoverUtils_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** mobileBusRouter_out_Handover_Pkg_handoverUtils_Pkg.h
** Generation date: 2015-11-20T19:47:00
*************************************************************$ */

