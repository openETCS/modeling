/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckAllowedPacketsRadio.h"

/* CheckAllowedPacketsRadio */
kcg_bool CheckAllowedPacketsRadio(
  /* CheckAllowedPacketsRadio::rtmMessage */ ReceivedMessage_T_Common_Types_Pkg *rtmMessage)
{
  kcg_int i;
  /* CheckAllowedPacketsRadio::valid */ kcg_bool valid;
  
  valid = kcg_true;
  for (i = 0; i < 30; i++) {
    valid = /* 3 */
      CheckIfSinglePacketIsAllowedForRadioMessage_SubFunctions(
        valid,
        &(*rtmMessage).packets.PacketHeaders[i],
        (*rtmMessage).Radio_Common_Header.nid_message,
        (MetadataTruthtable_T *) &cPermittedRadioPackets);
  }
  return valid;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** CheckAllowedPacketsRadio.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

