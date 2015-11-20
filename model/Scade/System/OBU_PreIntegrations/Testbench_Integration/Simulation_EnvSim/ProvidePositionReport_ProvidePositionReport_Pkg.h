/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:57
*************************************************************$ */
#ifndef _ProvidePositionReport_ProvidePositionReport_Pkg_H_
#define _ProvidePositionReport_ProvidePositionReport_Pkg_H_

#include "kcg_types.h"
#include "Build_PosReport_ProvidePositionReport_Pkg.h"
#include "AddBGToFIFO_ProvidePositionReport_Pkg.h"
#include "AggregatePackets_ProvidePositionReport_Pkg.h"
#include "ErrorManager_ProvidePositionReport_Pkg_PositionReportErrorManager_Pkg.h"
#include "ReceiveReportParameters_ProvidePositionReport_Pkg.h"
#include "PosReport_Supervision_ProvidePositionReport_Pkg.h"
#include "Build_Packets0_1_ProvidePositionReport_Pkg.h"
#include "nextGen_Msg136_radioOutput_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReportedBGList_T_ProvidePositionReport_Pkg /* ProvidePositionReport_Pkg::ProvidePositionReport::out_reportedBGs */ out_reportedBGs;
  PT0_PositionReport_T_Packet_TrainTypes_Pkg /* ProvidePositionReport_Pkg::ProvidePositionReport::packet0 */ packet0;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg /* ProvidePositionReport_Pkg::ProvidePositionReport::packet1 */ packet1;
  M_TrainTrackMessageBus_t_TM_TrainTrack_Bus /* ProvidePositionReport_Pkg::ProvidePositionReport::posReport */ posReport;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  ReportedBGList_T_ProvidePositionReport_Pkg /* ProvidePositionReport_Pkg::ProvidePositionReport::reportedBGs */ rem_reportedBGs;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_ReceiveReportParameters_ProvidePositionReport_Pkg /* 1 */ _3_Context_1;
  outC_PosReport_Supervision_ProvidePositionReport_Pkg /* 1 */ _2_Context_1;
  outC_Build_Packets0_1_ProvidePositionReport_Pkg /* 1 */ _1_Context_1;
  outC_nextGen_Msg136_radioOutput_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_ProvidePositionReport_ProvidePositionReport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ProvidePositionReport_Pkg::ProvidePositionReport */
extern void ProvidePositionReport_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::ProvidePositionReport::posBGs */positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::trainPos */trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::odometry */odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::trainProps */trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::trackInfo */LocationBasedEvents_T_ProvidePositionReport_Pkg *trackInfo,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::inMessage */ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::systemTime */SystemTime_T_ProvidePositionReport_Pkg systemTime,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::rcbComm */RBC_Communication_T_ProvidePositionReport_Pkg *rcbComm,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::train2trackStatus */TrainToTrackStatus_T_BG_Types_Pkg *train2trackStatus,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::prvDirTrain */Q_DIRTRAIN prvDirTrain,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::BG_LinkingConsistencyError */kcg_bool BG_LinkingConsistencyError,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::LinkedBG_MessageConsistencyError */kcg_bool LinkedBG_MessageConsistencyError,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::UnlinkedBG_MessageConsistencyError */kcg_bool UnlinkedBG_MessageConsistencyError,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::RadioMessageConsistencyError */kcg_bool RadioMessageConsistencyError,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::RadioSequenceError */kcg_bool RadioSequenceError,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::RadioSafeRadioConnectionError */kcg_bool RadioSafeRadioConnectionError,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::SafetyCriticalFailure */kcg_bool SafetyCriticalFailure,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::DoubleLinkingError */kcg_bool DoubleLinkingError,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::DoubleRepositioningError */kcg_bool DoubleRepositioningError,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::modeLevelStatus */ModeLevel2PositionReport_T_ProvidePositionReport_Pkg *modeLevelStatus,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::reportedBGs */ReportedBGList_T_ProvidePositionReport_Pkg *reportedBGs,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::MessageBus */M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::inVersion */M_VERSION inVersion,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::t_train */T_TRAIN t_train,
  outC_ProvidePositionReport_ProvidePositionReport_Pkg *outC);

extern void ProvidePositionReport_reset_ProvidePositionReport_Pkg(
  outC_ProvidePositionReport_ProvidePositionReport_Pkg *outC);

#endif /* _ProvidePositionReport_ProvidePositionReport_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ProvidePositionReport_ProvidePositionReport_Pkg.h
** Generation date: 2015-11-20T19:46:57
*************************************************************$ */

