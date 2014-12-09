/* $************* KCG Version 6.4 beta3 (build i9) **************
** Command: kcg64.exe -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC/KCG/config.txt
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */
#ifndef _MoRC_Initiate_a_Session_H_
#define _MoRC_Initiate_a_Session_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* Initiate_a_Session::initiate_a_communicationSession_Request */ initiate_a_communicationSession_Request;
  kcg_bool /* Initiate_a_Session::communicationSessionInitiatedByOBU_ */ communicationSessionInitiatedByOBU_;
  kcg_bool /* Initiate_a_Session::communicationSessionInitiatedFromTrackside_ */ communicationSessionInitiatedFromTrackside_;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  MoRC_M_MODE_Type /* Initiate_a_Session::etcs_mode */ rem_etcs_mode;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} MoRC_outC_Initiate_a_Session;

/* ===========  node initialization and cycle functions  =========== */
/* Initiate_a_Session */
extern void MoRC_Initiate_a_Session(
  /* Initiate_a_Session::initiateRequest_fromOnboardEquipment */ kcg_bool initiateRequest_fromOnboardEquipment,
  /* Initiate_a_Session::initiateRequest_fromRBC */ kcg_bool initiateRequest_fromRBC,
  /* Initiate_a_Session::initiateRequest_fromRadio_InfillUnit */ kcg_bool initiateRequest_fromRadio_InfillUnit,
  /* Initiate_a_Session::etcs_level */ MoRC_M_LEVEL_Type etcs_level,
  /* Initiate_a_Session::atStartOfMission */ kcg_bool atStartOfMission,
  /* Initiate_a_Session::establishSessionOrderedFromTrackside */ kcg_bool establishSessionOrderedFromTrackside,
  /* Initiate_a_Session::etcs_mode */ MoRC_M_MODE_Type etcs_mode,
  /* Initiate_a_Session::modeChangeHasToBeReportedToRBC */ kcg_bool modeChangeHasToBeReportedToRBC,
  /* Initiate_a_Session::driverHasManuallyChangedLevel */ kcg_bool driverHasManuallyChangedLevel,
  /* Initiate_a_Session::trainFrontReachesEndOfAnnouncedRadioHole */ kcg_bool trainFrontReachesEndOfAnnouncedRadioHole,
  /* Initiate_a_Session::prevSessionTerminatedDueToLossOfSafeRadioConnection */ kcg_bool prevSessionTerminatedDueToLossOfSafeRadioConnection,
  /* Initiate_a_Session::startOfMissionProcedureCompleted */ kcg_bool startOfMissionProcedureCompleted,
  /* Initiate_a_Session::NoCommunicationSessionEstablished */ kcg_bool NoCommunicationSessionEstablished,
  /* Initiate_a_Session::initiateEstablishingNewSessionRequest */ kcg_bool initiateEstablishingNewSessionRequest,
  MoRC_outC_Initiate_a_Session *outC);

extern void MoRC_Initiate_a_Session_reset(MoRC_outC_Initiate_a_Session *outC);
extern void MoRC_Initiate_a_Session_init(MoRC_outC_Initiate_a_Session *outC);

#endif /* _MoRC_Initiate_a_Session_H_ */
/* $************* KCG Version 6.4 beta3 (build i9) **************
** MoRC_Initiate_a_Session.h
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */

