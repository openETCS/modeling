/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
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
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::errorVector */ array_168990 *errorVector)
{
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::_L39 */
  static M_ERROR _L39;
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::_L38 */
  static ErrorMessage_T_ProvidePositionReport_Pkg _L38;
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::_L36 */
  static M_ERROR _L36;
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::_L35 */
  static ErrorMessage_T_ProvidePositionReport_Pkg _L35;
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::_L34 */
  static ErrorMessage_T_ProvidePositionReport_Pkg _L34;
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::_L32 */
  static ErrorMessage_T_ProvidePositionReport_Pkg _L32;
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::_L30 */
  static M_ERROR _L30;
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::_L29 */
  static ErrorMessage_T_ProvidePositionReport_Pkg _L29;
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::_L28 */
  static ErrorMessage_T_ProvidePositionReport_Pkg _L28;
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::_L26 */
  static M_ERROR _L26;
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::_L25 */
  static M_ERROR _L25;
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::_L24 */
  static M_ERROR _L24;
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::_L20 */
  static ErrorMessage_T_ProvidePositionReport_Pkg _L20;
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::_L18 */
  static M_ERROR _L18;
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::_L16 */
  static M_ERROR _L16;
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::_L15 */
  static ErrorMessage_T_ProvidePositionReport_Pkg _L15;
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::_L14 */
  static ErrorMessage_T_ProvidePositionReport_Pkg _L14;
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::_L13 */
  static M_ERROR _L13;
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::_L40 */
  static kcg_bool _L40;
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::_L41 */
  static kcg_bool _L41;
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::_L42 */
  static kcg_bool _L42;
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::_L43 */
  static kcg_bool _L43;
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::_L44 */
  static kcg_bool _L44;
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::_L45 */
  static kcg_bool _L45;
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::_L46 */
  static kcg_bool _L46;
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::_L47 */
  static kcg_bool _L47;
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::_L48 */
  static kcg_bool _L48;
  /* ProvidePositionReport_Pkg::PositionReportErrorManager_Pkg::ErrorManager::_L50 */
  static array_168990 _L50;
  
  _L13 = M_ERROR_Double_repositioning_error;
  _L48 = RadioMessageConsistencyError;
  _L25 = M_ERROR_Radio_message_consistency_error;
  _L14.present = _L48;
  _L14.errorType = _L25;
  _L41 = LinkedBG_MessageConsistencyError;
  _L26 = M_ERROR_Linked_balise_group_message_consistency_erro;
  _L15.present = _L41;
  _L15.errorType = _L26;
  _L16 = M_ERROR_Radio_safe_radio_connection_error;
  _L18 = M_ERROR_Radio_sequence_error;
  _L40 = BG_LinkingConsistencyError;
  _L24 = M_ERROR_Balise_group_linking_consistency_error;
  _L20.present = _L40;
  _L20.errorType = _L24;
  _L42 = UnlinkedBG_MessageConsistencyError;
  _L39 = M_ERROR_Unlinked_balise_group_message_consistency_error;
  _L28.present = _L42;
  _L28.errorType = _L39;
  _L44 = DoubleLinkingError;
  _L36 = M_ERROR_Double_linking_error;
  _L29.present = _L44;
  _L29.errorType = _L36;
  _L30 = M_ERROR_Safety_critical_failure;
  _L47 = RadioSequenceError;
  _L32.present = _L47;
  _L32.errorType = _L18;
  _L43 = DoubleRepositioningError;
  _L34.present = _L43;
  _L34.errorType = _L13;
  _L45 = SafetyCriticalFailure;
  _L35.present = _L45;
  _L35.errorType = _L30;
  _L46 = RadioSafeRadioConnectionError;
  _L38.present = _L46;
  _L38.errorType = _L16;
  kcg_copy_ErrorMessage_T_ProvidePositionReport_Pkg(&_L50[0], &_L20);
  kcg_copy_ErrorMessage_T_ProvidePositionReport_Pkg(&_L50[1], &_L15);
  kcg_copy_ErrorMessage_T_ProvidePositionReport_Pkg(&_L50[2], &_L28);
  kcg_copy_ErrorMessage_T_ProvidePositionReport_Pkg(&_L50[3], &_L14);
  kcg_copy_ErrorMessage_T_ProvidePositionReport_Pkg(&_L50[4], &_L32);
  kcg_copy_ErrorMessage_T_ProvidePositionReport_Pkg(&_L50[5], &_L38);
  kcg_copy_ErrorMessage_T_ProvidePositionReport_Pkg(&_L50[6], &_L35);
  kcg_copy_ErrorMessage_T_ProvidePositionReport_Pkg(&_L50[7], &_L29);
  kcg_copy_ErrorMessage_T_ProvidePositionReport_Pkg(&_L50[8], &_L34);
  kcg_copy_array_168990(errorVector, &_L50);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ErrorManager_ProvidePositionReport_Pkg_PositionReportErrorManager_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

