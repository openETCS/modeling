/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckAllowedPacketsRadio_CheckEuroradioMessage.h"

/* CheckEuroradioMessage::CheckAllowedPacketsRadio */
kcg_bool CheckAllowedPacketsRadio_CheckEuroradioMessage(
  /* CheckEuroradioMessage::CheckAllowedPacketsRadio::rtmMessage */ReceivedMessage_T_Common_Types_Pkg *rtmMessage)
{
  static kcg_int i;
  /* CheckEuroradioMessage::CheckAllowedPacketsRadio::valid */
  static kcg_bool valid;
  
  valid = kcg_true;
  for (i = 0; i < 30; i++) {
    valid = /* 1 */
      CheckIfSinglePacketIsAllowedForRadioMessage_CheckEuroradioMessage_SubFunctions(
        valid,
        &(*rtmMessage).packets.PacketHeaders[i],
        (*rtmMessage).Radio_Common_Header.nid_message,
        (MetadataTruthtable_T1_CheckEuroradioMessage *)
          &cPermittedRadioPackets1_CheckEuroradioMessage);
  }
  return valid;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckAllowedPacketsRadio_CheckEuroradioMessage.c
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

