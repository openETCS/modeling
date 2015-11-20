/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckIfPacket15IsPresent_CheckEuroradioMessage_SubFunctions.h"

/* CheckEuroradioMessage::SubFunctions::CheckIfPacket15IsPresent */
kcg_bool CheckIfPacket15IsPresent_CheckEuroradioMessage_SubFunctions(
  /* CheckEuroradioMessage::SubFunctions::CheckIfPacket15IsPresent::rtmMessage */ReceivedMessage_T_Common_Types_Pkg *rtmMessage)
{
  static kcg_int i;
  /* CheckEuroradioMessage::SubFunctions::CheckIfPacket15IsPresent::result */
  static kcg_bool result;
  
  result = kcg_false;
  for (i = 0; i < 30; i++) {
    result = /* 1 */
      CheckIfPacketRadioMetadataElementIsPacket15_CheckEuroradioMessage_SubFunctions(
        result,
        &(*rtmMessage).packets.PacketHeaders[i]);
  }
  return result;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckIfPacket15IsPresent_CheckEuroradioMessage_SubFunctions.c
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

