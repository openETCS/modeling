/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */
#ifndef _initiate_a_Session_MoRC_Pck_Subfunc_Pkg_H_
#define _initiate_a_Session_MoRC_Pck_Subfunc_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::initiate_a_Session::initiate_a_communicationSession_Request */ initiate_a_communicationSession_Request;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::initiate_a_Session::communicationSessionInitiatedByOBU_ */ communicationSessionInitiatedByOBU_;
  kcg_bool /* MoRC_Pck::Subfunc_Pkg::initiate_a_Session::communicationSessionInitiatedFromTrackside_ */ communicationSessionInitiatedFromTrackside_;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  M_MODE /* MoRC_Pck::Subfunc_Pkg::initiate_a_Session::mode */ rem_mode;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_initiate_a_Session_MoRC_Pck_Subfunc_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* MoRC_Pck::Subfunc_Pkg::initiate_a_Session */
extern void initiate_a_Session_MoRC_Pck_Subfunc_Pkg(
  /* MoRC_Pck::Subfunc_Pkg::initiate_a_Session::initiateRequest_fromOnboardEquipment */ kcg_bool initiateRequest_fromOnboardEquipment,
  /* MoRC_Pck::Subfunc_Pkg::initiate_a_Session::initiateRequest_fromRBC */ kcg_bool initiateRequest_fromRBC,
  /* MoRC_Pck::Subfunc_Pkg::initiate_a_Session::initiateRequest_fromRadio_InfillUnit */ kcg_bool initiateRequest_fromRadio_InfillUnit,
  /* MoRC_Pck::Subfunc_Pkg::initiate_a_Session::m38_initiationOfACommunicationSession */ kcg_bool m38_initiationOfACommunicationSession,
  /* MoRC_Pck::Subfunc_Pkg::initiate_a_Session::level */ M_LEVEL level,
  /* MoRC_Pck::Subfunc_Pkg::initiate_a_Session::atStartOfMission */ kcg_bool atStartOfMission,
  /* MoRC_Pck::Subfunc_Pkg::initiate_a_Session::establishSessionOrderedFromTrackside */ kcg_bool establishSessionOrderedFromTrackside,
  /* MoRC_Pck::Subfunc_Pkg::initiate_a_Session::mode */ M_MODE mode,
  /* MoRC_Pck::Subfunc_Pkg::initiate_a_Session::modeChangeHasToBeReportedToRBC */ kcg_bool modeChangeHasToBeReportedToRBC,
  /* MoRC_Pck::Subfunc_Pkg::initiate_a_Session::driverHasManuallyChangedLevel */ kcg_bool driverHasManuallyChangedLevel,
  /* MoRC_Pck::Subfunc_Pkg::initiate_a_Session::trainFrontReachesEndOfAnnouncedRadioHole */ kcg_bool trainFrontReachesEndOfAnnouncedRadioHole,
  /* MoRC_Pck::Subfunc_Pkg::initiate_a_Session::prevSessionTerminatedDueToLossOfSafeRadioConnection */ kcg_bool prevSessionTerminatedDueToLossOfSafeRadioConnection,
  /* MoRC_Pck::Subfunc_Pkg::initiate_a_Session::startOfMissionProcedureCompleted */ kcg_bool startOfMissionProcedureCompleted,
  /* MoRC_Pck::Subfunc_Pkg::initiate_a_Session::NoCommunicationSessionEstablished */ kcg_bool NoCommunicationSessionEstablished,
  /* MoRC_Pck::Subfunc_Pkg::initiate_a_Session::initiateEstablishingNewSessionRequest */ kcg_bool initiateEstablishingNewSessionRequest,
  outC_initiate_a_Session_MoRC_Pck_Subfunc_Pkg *outC);

extern void initiate_a_Session_reset_MoRC_Pck_Subfunc_Pkg(
  outC_initiate_a_Session_MoRC_Pck_Subfunc_Pkg *outC);
extern void initiate_a_Session_init_MoRC_Pck_Subfunc_Pkg(
  outC_initiate_a_Session_MoRC_Pck_Subfunc_Pkg *outC);

#endif /* _initiate_a_Session_MoRC_Pck_Subfunc_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** initiate_a_Session_MoRC_Pck_Subfunc_Pkg.h
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */

