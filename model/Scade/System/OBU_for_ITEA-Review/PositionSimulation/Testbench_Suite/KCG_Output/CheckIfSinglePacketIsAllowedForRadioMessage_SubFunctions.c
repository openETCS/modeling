/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckIfSinglePacketIsAllowedForRadioMessage_SubFunctions.h"

/* SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage */
kcg_bool CheckIfSinglePacketIsAllowedForRadioMessage_SubFunctions(
  /* SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::accumulator */ kcg_bool accumulator,
  /* SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::currentPacket */ MetadataElement_T_Common_Types_Pkg *currentPacket,
  /* SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::nid_message */ NID_MESSAGE nid_message,
  /* SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::permittedPackets */ MetadataTruthtable_T *permittedPackets)
{
  kcg_bool tmp;
  /* SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::valid */ kcg_bool valid;
  
  if ((*currentPacket).valid) {
    if ((0 <= nid_message) & (nid_message < 46) & ((0 <=
          (*currentPacket).nid_packet) & ((*currentPacket).nid_packet < 256))) {
      tmp = (*permittedPackets)[nid_message][(*currentPacket).nid_packet];
    }
    else {
      tmp = kcg_false;
    }
  }
  else {
    tmp = kcg_true;
  }
  valid = accumulator & tmp;
  return valid;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** CheckIfSinglePacketIsAllowedForRadioMessage_SubFunctions.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

