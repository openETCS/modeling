/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ErrorManager_ProvidePositionReport_Pkg_PositionReportErrorManager_Pkg.h"

/* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager */
void ErrorManager_ProvidePositionReport_Pkg_PositionReportErrorManager_Pkg(
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::BG_LinkingConsistencyError */kcg_bool BG_LinkingConsistencyError,
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::LinkedBG_MessageConsistencyError */kcg_bool LinkedBG_MessageConsistencyError,
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::UnlinkedBG_MessageConsistencyError */kcg_bool UnlinkedBG_MessageConsistencyError,
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::RadioMessageConsistencyError */kcg_bool RadioMessageConsistencyError,
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::RadioSequenceError */kcg_bool RadioSequenceError,
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::RadioSafeRadioConnectionError */kcg_bool RadioSafeRadioConnectionError,
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::SafetyCriticalFailure */kcg_bool SafetyCriticalFailure,
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::DoubleLinkingError */kcg_bool DoubleLinkingError,
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::DoubleRepositioningError */kcg_bool DoubleRepositioningError,
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::errorVector */array__158675 *errorVector)
{
  (*errorVector)[0].present = BG_LinkingConsistencyError;
  (*errorVector)[0].errorType = M_ERROR_Balise_group_linking_consistency_error;
  (*errorVector)[1].present = LinkedBG_MessageConsistencyError;
  (*errorVector)[1].errorType =
    M_ERROR_Linked_balise_group_message_consistency_erro;
  (*errorVector)[2].present = UnlinkedBG_MessageConsistencyError;
  (*errorVector)[2].errorType =
    M_ERROR_Unlinked_balise_group_message_consistency_error;
  (*errorVector)[3].present = RadioMessageConsistencyError;
  (*errorVector)[3].errorType = M_ERROR_Radio_message_consistency_error;
  (*errorVector)[4].present = RadioSequenceError;
  (*errorVector)[4].errorType = M_ERROR_Radio_sequence_error;
  (*errorVector)[5].present = RadioSafeRadioConnectionError;
  (*errorVector)[5].errorType = M_ERROR_Radio_safe_radio_connection_error;
  (*errorVector)[6].present = SafetyCriticalFailure;
  (*errorVector)[6].errorType = M_ERROR_Safety_critical_failure;
  (*errorVector)[7].present = DoubleLinkingError;
  (*errorVector)[7].errorType = M_ERROR_Double_linking_error;
  (*errorVector)[8].present = DoubleRepositioningError;
  (*errorVector)[8].errorType = M_ERROR_Double_repositioning_error;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ErrorManager_ProvidePositionReport_Pkg_PositionReportErrorManager_Pkg.c
** Generation date: 2015-11-20T19:47:14
*************************************************************$ */

