/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckIfPacket15IsPresent_SubFunctions.h"

/* SubFunctions::CheckIfPacket15IsPresent */
kcg_bool CheckIfPacket15IsPresent_SubFunctions(
  /* SubFunctions::CheckIfPacket15IsPresent::rtmMessage */ ReceivedMessage_T_Common_Types_Pkg *rtmMessage)
{
  kcg_int i;
  /* SubFunctions::CheckIfPacket15IsPresent::result */ kcg_bool result;
  
  result = kcg_false;
  for (i = 0; i < 30; i++) {
    result = /* 1 */
      CheckIfPacketRadioMetadataElementIsPacket15_SubFunctions(
        result,
        &(*rtmMessage).packets.PacketHeaders[i]);
  }
  return result;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** CheckIfPacket15IsPresent_SubFunctions.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

