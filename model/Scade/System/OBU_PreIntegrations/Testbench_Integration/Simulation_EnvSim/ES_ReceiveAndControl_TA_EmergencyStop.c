/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:18
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ES_ReceiveAndControl_TA_EmergencyStop.h"

/* TA_EmergencyStop::ES_ReceiveAndControl */
void ES_ReceiveAndControl_TA_EmergencyStop(
  /* TA_EmergencyStop::ES_ReceiveAndControl::messageIn */ReceivedMessage_T_Common_Types_Pkg *messageIn,
  /* TA_EmergencyStop::ES_ReceiveAndControl::receivedMsg15 */kcg_bool *receivedMsg15,
  /* TA_EmergencyStop::ES_ReceiveAndControl::receivedMsg16 */kcg_bool *receivedMsg16,
  /* TA_EmergencyStop::ES_ReceiveAndControl::receivedMsg18 */kcg_bool *receivedMsg18,
  /* TA_EmergencyStop::ES_ReceiveAndControl::sendMsg147 */kcg_bool *sendMsg147)
{
  /* 1 */
  ES_Filter_Messages_TA_EmergencyStop(
    messageIn,
    receivedMsg15,
    receivedMsg16,
    receivedMsg18);
  *sendMsg147 = *receivedMsg15 | *receivedMsg16;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ES_ReceiveAndControl_TA_EmergencyStop.c
** Generation date: 2015-11-20T19:47:18
*************************************************************$ */

