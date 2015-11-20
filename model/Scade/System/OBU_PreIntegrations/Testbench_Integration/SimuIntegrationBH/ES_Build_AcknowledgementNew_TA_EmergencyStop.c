/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ES_Build_AcknowledgementNew_TA_EmergencyStop.h"

/* TA_EmergencyStop::ES_Build_AcknowledgementNew */
void ES_Build_AcknowledgementNew_TA_EmergencyStop(
  /* TA_EmergencyStop::ES_Build_AcknowledgementNew::nid_em */ NID_EM nid_em,
  /* TA_EmergencyStop::ES_Build_AcknowledgementNew::t_train */ T_TRAIN t_train,
  /* TA_EmergencyStop::ES_Build_AcknowledgementNew::trainProps */ trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* TA_EmergencyStop::ES_Build_AcknowledgementNew::receivedMsg16 */ kcg_bool receivedMsg16,
  /* TA_EmergencyStop::ES_Build_AcknowledgementNew::cesAccepted */ kcg_bool cesAccepted,
  /* TA_EmergencyStop::ES_Build_AcknowledgementNew::updateEOA */ kcg_bool updateEOA,
  /* TA_EmergencyStop::ES_Build_AcknowledgementNew::m147 */ M_147_T_TM_radio_messages *m147)
{
  /* TA_EmergencyStop::ES_Build_AcknowledgementNew::q_emergencystop */
  static Q_EMERGENCYSTOP q_emergencystop;
  /* TA_EmergencyStop::ES_Build_AcknowledgementNew::_L4 */
  static NID_EM _L4;
  /* TA_EmergencyStop::ES_Build_AcknowledgementNew::_L5 */
  static T_TRAIN _L5;
  /* TA_EmergencyStop::ES_Build_AcknowledgementNew::_L9 */
  static kcg_bool _L9;
  /* TA_EmergencyStop::ES_Build_AcknowledgementNew::_L10 */
  static kcg_int _L10;
  /* TA_EmergencyStop::ES_Build_AcknowledgementNew::_L11 */
  static trainProperties_T_TrainPosition_Types_Pck _L11;
  /* TA_EmergencyStop::ES_Build_AcknowledgementNew::_L12 */
  static NID_ENGINE _L12;
  /* TA_EmergencyStop::ES_Build_AcknowledgementNew::_L13 */
  static Q_EMERGENCYSTOP _L13;
  /* TA_EmergencyStop::ES_Build_AcknowledgementNew::_L14 */
  static Q_EMERGENCYSTOP _L14;
  /* TA_EmergencyStop::ES_Build_AcknowledgementNew::_L33 */
  static Q_EMERGENCYSTOP _L33;
  /* TA_EmergencyStop::ES_Build_AcknowledgementNew::_L34 */
  static kcg_bool _L34;
  /* TA_EmergencyStop::ES_Build_AcknowledgementNew::_L35 */
  static Q_EMERGENCYSTOP _L35;
  /* TA_EmergencyStop::ES_Build_AcknowledgementNew::_L36 */
  static kcg_bool _L36;
  /* TA_EmergencyStop::ES_Build_AcknowledgementNew::_L38 */
  static Q_EMERGENCYSTOP _L38;
  /* TA_EmergencyStop::ES_Build_AcknowledgementNew::_L39 */
  static Q_EMERGENCYSTOP _L39;
  /* TA_EmergencyStop::ES_Build_AcknowledgementNew::_L40 */
  static kcg_bool _L40;
  /* TA_EmergencyStop::ES_Build_AcknowledgementNew::_L42 */
  static Q_EMERGENCYSTOP _L42;
  /* TA_EmergencyStop::ES_Build_AcknowledgementNew::_L43 */
  static Q_EMERGENCYSTOP _L43;
  /* TA_EmergencyStop::ES_Build_AcknowledgementNew::_L50 */
  static M_147_T_TM_radio_messages _L50;
  /* TA_EmergencyStop::ES_Build_AcknowledgementNew::_L51 */
  static kcg_int _L51;
  
  _L4 = nid_em;
  _L5 = t_train;
  _L9 = kcg_true;
  _L10 = 147;
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&_L11, trainProps);
  _L12 = _L11.nid_engine;
  _L13 = Q_EMERGENCYSTOP_Unconditional_Emergency_Stop_accepted;
  _L34 = receivedMsg16;
  _L36 = cesAccepted;
  _L40 = updateEOA;
  _L42 = Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  _L43 =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_no_update_of_EOA;
  /* 3 */ if (_L40) {
    _L39 = _L42;
  }
  else {
    _L39 = _L43;
  }
  _L38 = Q_EMERGENCYSTOP_Emergency_stop;
  /* 2 */ if (_L36) {
    _L35 = _L39;
  }
  else {
    _L35 = _L38;
  }
  /* 1 */ if (_L34) {
    _L33 = _L13;
  }
  else {
    _L33 = _L35;
  }
  q_emergencystop = _L33;
  _L14 = q_emergencystop;
  _L51 = 0;
  _L50.valid = _L9;
  _L50.nid_message = _L10;
  _L50.l_message = _L51;
  _L50.t_train = _L5;
  _L50.nid_engine = _L12;
  _L50.nid_em = _L4;
  _L50.q_emergencystop = _L14;
  kcg_copy_M_147_T_TM_radio_messages(m147, &_L50);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ES_Build_AcknowledgementNew_TA_EmergencyStop.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

