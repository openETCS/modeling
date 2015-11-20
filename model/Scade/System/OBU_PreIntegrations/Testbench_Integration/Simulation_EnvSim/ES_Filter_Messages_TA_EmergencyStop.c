/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:18
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ES_Filter_Messages_TA_EmergencyStop.h"

/* TA_EmergencyStop::ES_Filter_Messages */
void ES_Filter_Messages_TA_EmergencyStop(
  /* TA_EmergencyStop::ES_Filter_Messages::messageIn */ReceivedMessage_T_Common_Types_Pkg *messageIn,
  /* TA_EmergencyStop::ES_Filter_Messages::receivedMsg15 */kcg_bool *receivedMsg15,
  /* TA_EmergencyStop::ES_Filter_Messages::receivedMsg16 */kcg_bool *receivedMsg16,
  /* TA_EmergencyStop::ES_Filter_Messages::receivedMsg18 */kcg_bool *receivedMsg18)
{
  /* TA_EmergencyStop::ES_Filter_Messages::isValidRadioMsg */
  static kcg_bool isValidRadioMsg;
  
  isValidRadioMsg = (*messageIn).valid & ((*messageIn).source ==
      msrc_Euroradio_Common_Types_Pkg);
  *receivedMsg15 = isValidRadioMsg &
    ((*messageIn).Radio_Common_Header.nid_message ==
      cm15_Conditional_Emergency_Stop_Id_Pkg);
  *receivedMsg18 = isValidRadioMsg &
    ((*messageIn).Radio_Common_Header.nid_message ==
      cm18_Revocation_of_Emergency_Stop_Id_Pkg);
  *receivedMsg16 = isValidRadioMsg &
    ((*messageIn).Radio_Common_Header.nid_message ==
      cm16_Unconditional_Emergency_Stop_Id_Pkg);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ES_Filter_Messages_TA_EmergencyStop.c
** Generation date: 2015-11-20T19:47:18
*************************************************************$ */

