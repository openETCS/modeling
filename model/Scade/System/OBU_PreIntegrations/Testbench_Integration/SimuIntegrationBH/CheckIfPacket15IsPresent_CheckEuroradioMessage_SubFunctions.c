/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckIfPacket15IsPresent_CheckEuroradioMessage_SubFunctions.h"

/* CheckEuroradioMessage::SubFunctions::CheckIfPacket15IsPresent */
kcg_bool CheckIfPacket15IsPresent_CheckEuroradioMessage_SubFunctions(
  /* CheckEuroradioMessage::SubFunctions::CheckIfPacket15IsPresent::rtmMessage */ ReceivedMessage_T_Common_Types_Pkg *rtmMessage)
{
  /* CheckEuroradioMessage::SubFunctions::CheckIfPacket15IsPresent */
  static kcg_bool acc;
  static kcg_int i;
  /* CheckEuroradioMessage::SubFunctions::CheckIfPacket15IsPresent::_L1 */
  static ReceivedMessage_T_Common_Types_Pkg _L1;
  /* CheckEuroradioMessage::SubFunctions::CheckIfPacket15IsPresent::_L3 */
  static kcg_bool _L3;
  /* CheckEuroradioMessage::SubFunctions::CheckIfPacket15IsPresent::_L4 */
  static Metadata_T_Common_Types_Pkg _L4;
  /* CheckEuroradioMessage::SubFunctions::CheckIfPacket15IsPresent::_L5 */
  static kcg_bool _L5;
  /* CheckEuroradioMessage::SubFunctions::CheckIfPacket15IsPresent::result */
  static kcg_bool result;
  
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L1, rtmMessage);
  _L3 = kcg_false;
  kcg_copy_Metadata_T_Common_Types_Pkg(&_L4, &_L1.packets.PacketHeaders);
  _L5 = _L3;
  for (i = 0; i < 30; i++) {
    acc = _L5;
    _L5 = /* 1 */
      CheckIfPacketRadioMetadataElementIsPacket15_CheckEuroradioMessage_SubFunctions(
        acc,
        &_L4[i]);
  }
  result = _L5;
  return result;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CheckIfPacket15IsPresent_CheckEuroradioMessage_SubFunctions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

