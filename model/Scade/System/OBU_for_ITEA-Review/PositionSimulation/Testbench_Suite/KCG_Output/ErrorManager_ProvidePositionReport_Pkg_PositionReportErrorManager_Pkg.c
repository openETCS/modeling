/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ErrorManager_ProvidePositionReport_Pkg_PositionReportErrorManager_Pkg.h"

/* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager */
void ErrorManager_ProvidePositionReport_Pkg_PositionReportErrorManager_Pkg(
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::BG_LinkingConsistencyError */ kcg_bool BG_LinkingConsistencyError,
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::LinkedBG_MessageConsistencyError */ kcg_bool LinkedBG_MessageConsistencyError,
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::UnlinkedBG_MessageConsistencyError */ kcg_bool UnlinkedBG_MessageConsistencyError,
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::RadioMessageConsistencyError */ kcg_bool RadioMessageConsistencyError,
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::RadioSequenceError */ kcg_bool RadioSequenceError,
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::RadioSafeRadioConnectionError */ kcg_bool RadioSafeRadioConnectionError,
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::SafetyCriticalFailure */ kcg_bool SafetyCriticalFailure,
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::DoubleLinkingError */ kcg_bool DoubleLinkingError,
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::DoubleRepositioningError */ kcg_bool DoubleRepositioningError,
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::m_error */ ErrorMessage_T_ProvidePositionReport_Pkg *m_error)
{
  if (BG_LinkingConsistencyError) {
    (*m_error).present = kcg_true;
    (*m_error).errorType = M_ERROR_Balise_group_linking_consistency_error;
  }
  else if (LinkedBG_MessageConsistencyError) {
    (*m_error).present = kcg_true;
    (*m_error).errorType = M_ERROR_Linked_balise_group_message_consistency_erro;
  }
  else if (UnlinkedBG_MessageConsistencyError) {
    (*m_error).present = kcg_true;
    (*m_error).errorType =
      M_ERROR_Unlinked_balise_group_message_consistency_error;
  }
  else if (RadioMessageConsistencyError) {
    (*m_error).present = kcg_true;
    (*m_error).errorType = M_ERROR_Radio_message_consistency_error;
  }
  else if (RadioSequenceError) {
    (*m_error).present = kcg_true;
    (*m_error).errorType = M_ERROR_Radio_sequence_error;
  }
  else if (RadioSafeRadioConnectionError) {
    (*m_error).present = kcg_true;
    (*m_error).errorType = M_ERROR_Radio_safe_radio_connection_error;
  }
  else if (SafetyCriticalFailure) {
    (*m_error).present = kcg_true;
    (*m_error).errorType = M_ERROR_Safety_critical_failure;
  }
  else if (DoubleLinkingError) {
    (*m_error).present = kcg_true;
    (*m_error).errorType = M_ERROR_Double_linking_error;
  }
  else if (DoubleRepositioningError) {
    (*m_error).present = kcg_true;
    (*m_error).errorType = M_ERROR_Double_repositioning_error;
  }
  else {
    kcg_copy_ErrorMessage_T_ProvidePositionReport_Pkg(
      m_error,
      (ErrorMessage_T_ProvidePositionReport_Pkg *)
        &cErrorMessage_ProvidePositionReport_Pkg);
  }
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** ErrorManager_ProvidePositionReport_Pkg_PositionReportErrorManager_Pkg.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

