/* $************* KCG Version 6.4 beta3 (build i9) **************
** Command: kcg64.exe -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/030_System/Components/OBU/S026_3_C3_5_ManagementOfRadioCommuniction/MoRC/KCG/config.txt
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "MoRC_Initiate_a_Session.h"

void MoRC_Initiate_a_Session_init(MoRC_outC_Initiate_a_Session *outC)
{
  outC->init = kcg_true;
  outC->rem_etcs_mode = MoRC_ETCS_Mode_FullSupervision;
  outC->communicationSessionInitiatedFromTrackside_ = kcg_true;
  outC->communicationSessionInitiatedByOBU_ = kcg_true;
  outC->initiate_a_communicationSession_Request = kcg_true;
}


void MoRC_Initiate_a_Session_reset(MoRC_outC_Initiate_a_Session *outC)
{
  outC->init = kcg_true;
}

/* Initiate_a_Session */
void MoRC_Initiate_a_Session(
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
  MoRC_outC_Initiate_a_Session *outC)
{
  kcg_bool tmp1;
  MoRC_M_MODE_Type tmp;
  /* Initiate_a_Session::_L11 */ kcg_bool _L11;
  
  _L11 = etcs_level == MoRC_ETCS_Level_3 || etcs_level == MoRC_ETCS_Level_2;
  switch (etcs_mode) {
    case MoRC_ETCS_Mode_FullSupervision :
      tmp1 = kcg_true;
      break;
    case MoRC_ETCS_Mode_OnSight :
      tmp1 = kcg_true;
      break;
    case MoRC_ETCS_Mode_StaffResponsible :
      tmp1 = kcg_true;
      break;
    case MoRC_ETCS_Mode_Shunting :
      tmp1 = kcg_true;
      break;
    case MoRC_ETCS_Mode_Trip :
      tmp1 = kcg_true;
      break;
    case MoRC_ETCS_Mode_LimitedSupervision :
      tmp1 = kcg_true;
      break;
    case MoRC_ETCS_Mode_NationalSystem :
      tmp1 = kcg_true;
      break;
    case MoRC_ETCS_Mode_Reversing :
      tmp1 = kcg_true;
      break;
    
    default :
      tmp1 = kcg_false;
  }
  if (outC->init) {
    outC->init = kcg_false;
    tmp = MoRC_ETCS_Mode_SystemFailure;
  }
  else {
    tmp = outC->rem_etcs_mode;
  }
  outC->initiate_a_communicationSession_Request =
    initiateRequest_fromOnboardEquipment || initiateRequest_fromRBC ||
    ((atStartOfMission && _L11) || establishSessionOrderedFromTrackside ||
      (_L11 && tmp1 && etcs_mode != tmp && modeChangeHasToBeReportedToRBC) ||
      (_L11 && driverHasManuallyChangedLevel) ||
      trainFrontReachesEndOfAnnouncedRadioHole ||
      prevSessionTerminatedDueToLossOfSafeRadioConnection || (_L11 &&
        startOfMissionProcedureCompleted &&
        NoCommunicationSessionEstablished) ||
      initiateEstablishingNewSessionRequest);
  outC->communicationSessionInitiatedFromTrackside_ =
    outC->initiate_a_communicationSession_Request && (initiateRequest_fromRBC ||
      initiateRequest_fromRadio_InfillUnit ||
      establishSessionOrderedFromTrackside);
  outC->communicationSessionInitiatedByOBU_ =
    (trainFrontReachesEndOfAnnouncedRadioHole ||
      initiateRequest_fromOnboardEquipment) &&
    outC->initiate_a_communicationSession_Request;
  outC->rem_etcs_mode = etcs_mode;
}

/* $************* KCG Version 6.4 beta3 (build i9) **************
** MoRC_Initiate_a_Session.c
** Generation date: 2014-04-28T16:05:35
*************************************************************$ */

