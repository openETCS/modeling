/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ES_ExtractMsgParams_TA_EmergencyStop.h"

/* TA_EmergencyStop::ES_ExtractMsgParams */
void ES_ExtractMsgParams_TA_EmergencyStop(
  /* TA_EmergencyStop::ES_ExtractMsgParams::messageIn */ ReceivedMessage_T_Common_Types_Pkg *messageIn,
  /* TA_EmergencyStop::ES_ExtractMsgParams::receivedESMsg */ kcg_bool receivedESMsg,
  /* TA_EmergencyStop::ES_ExtractMsgParams::nid_em */ NID_EM *nid_em,
  /* TA_EmergencyStop::ES_ExtractMsgParams::q_scale */ Q_SCALE *q_scale,
  /* TA_EmergencyStop::ES_ExtractMsgParams::d_ref */ D_REF *d_ref,
  /* TA_EmergencyStop::ES_ExtractMsgParams::q_dir */ Q_DIR *q_dir,
  /* TA_EmergencyStop::ES_ExtractMsgParams::d_emergencystop */ D_EMERGENCYSTOP *d_emergencystop)
{
  /* TA_EmergencyStop::ES_ExtractMsgParams::_L1 */
  static ReceivedMessage_T_Common_Types_Pkg _L1;
  /* TA_EmergencyStop::ES_ExtractMsgParams::_L2 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L2;
  /* TA_EmergencyStop::ES_ExtractMsgParams::_L3 */
  static NID_EM _L3;
  /* TA_EmergencyStop::ES_ExtractMsgParams::_L4 */
  static NID_EM _L4;
  /* TA_EmergencyStop::ES_ExtractMsgParams::_L5 */
  static kcg_int _L5;
  /* TA_EmergencyStop::ES_ExtractMsgParams::_L6 */
  static kcg_bool _L6;
  /* TA_EmergencyStop::ES_ExtractMsgParams::_L7 */
  static Q_SCALE _L7;
  /* TA_EmergencyStop::ES_ExtractMsgParams::_L10 */
  static D_REF _L10;
  /* TA_EmergencyStop::ES_ExtractMsgParams::_L11 */
  static Q_DIR _L11;
  /* TA_EmergencyStop::ES_ExtractMsgParams::_L12 */
  static D_EMERGENCYSTOP _L12;
  
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L1, messageIn);
  _L6 = receivedESMsg;
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &_L2,
    &_L1.Radio_Common_Header);
  _L3 = _L2.nid_em;
  _L5 = cNID_EM_NONE_TA_EmergencyStop;
  /* 1 */ if (_L6) {
    _L4 = _L3;
  }
  else {
    _L4 = _L5;
  }
  *nid_em = _L4;
  _L7 = _L2.q_scale;
  *q_scale = _L7;
  _L10 = _L2.d_ref;
  *d_ref = _L10;
  _L11 = _L2.q_dir;
  *q_dir = _L11;
  _L12 = _L2.d_emergencystop;
  *d_emergencystop = _L12;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ES_ExtractMsgParams_TA_EmergencyStop.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

