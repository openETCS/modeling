/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */
#ifndef _CheckIfSinglePacketIsAllowedForRadioMessage_SubFunctions_H_
#define _CheckIfSinglePacketIsAllowedForRadioMessage_SubFunctions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */


/* SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage */
extern kcg_bool CheckIfSinglePacketIsAllowedForRadioMessage_SubFunctions(
  /* SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::accumulator */ kcg_bool accumulator,
  /* SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::currentPacket */ MetadataElement_T_Common_Types_Pkg *currentPacket,
  /* SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::nid_message */ NID_MESSAGE nid_message,
  /* SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::permittedPackets */ MetadataTruthtable_T *permittedPackets);

#endif /* _CheckIfSinglePacketIsAllowedForRadioMessage_SubFunctions_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** CheckIfSinglePacketIsAllowedForRadioMessage_SubFunctions.h
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */

