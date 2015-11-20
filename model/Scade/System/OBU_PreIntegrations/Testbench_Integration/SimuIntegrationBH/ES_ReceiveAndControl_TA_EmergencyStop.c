/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ES_ReceiveAndControl_TA_EmergencyStop.h"

/* TA_EmergencyStop::ES_ReceiveAndControl */
void ES_ReceiveAndControl_TA_EmergencyStop(
  /* TA_EmergencyStop::ES_ReceiveAndControl::messageIn */ ReceivedMessage_T_Common_Types_Pkg *messageIn,
  /* TA_EmergencyStop::ES_ReceiveAndControl::receivedMsg15 */ kcg_bool *receivedMsg15,
  /* TA_EmergencyStop::ES_ReceiveAndControl::receivedMsg16 */ kcg_bool *receivedMsg16,
  /* TA_EmergencyStop::ES_ReceiveAndControl::receivedMsg18 */ kcg_bool *receivedMsg18,
  /* TA_EmergencyStop::ES_ReceiveAndControl::sendMsg147 */ kcg_bool *sendMsg147)
{
  /* TA_EmergencyStop::ES_ReceiveAndControl::_L23 */
  static ReceivedMessage_T_Common_Types_Pkg _L23;
  /* TA_EmergencyStop::ES_ReceiveAndControl::_L25 */
  static kcg_bool _L25;
  /* TA_EmergencyStop::ES_ReceiveAndControl::_L24 */
  static kcg_bool _L24;
  /* TA_EmergencyStop::ES_ReceiveAndControl::_L26 */
  static kcg_bool _L26;
  /* TA_EmergencyStop::ES_ReceiveAndControl::_L28 */
  static kcg_bool _L28;
  
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L23, messageIn);
  /* 1 */ ES_Filter_Messages_TA_EmergencyStop(&_L23, &_L28, &_L24, &_L25);
  *receivedMsg16 = _L24;
  *receivedMsg18 = _L25;
  _L26 = _L28 | _L24;
  *sendMsg147 = _L26;
  *receivedMsg15 = _L28;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ES_ReceiveAndControl_TA_EmergencyStop.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

