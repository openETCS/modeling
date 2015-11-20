/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:56
*************************************************************$ */
#ifndef _CheckIfSinglePacketIsAllowedForRadioMessage_CheckEuroradioMessage_SubFunctions_H_
#define _CheckIfSinglePacketIsAllowedForRadioMessage_CheckEuroradioMessage_SubFunctions_H_

#include "kcg_types.h"
#include "T_extract_nid_packet_from_metadata_selector_TM.h"

/* =====================  no input structure  ====================== */


/* CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage */
extern kcg_bool CheckIfSinglePacketIsAllowedForRadioMessage_CheckEuroradioMessage_SubFunctions(
  /* CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::accumulator */kcg_bool accumulator,
  /* CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::currentPacket */MetadataElement_T_Common_Types_Pkg *currentPacket,
  /* CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::nid_message */NID_MESSAGE nid_message,
  /* CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::permittedPackets */MetadataTruthtable_T1_CheckEuroradioMessage *permittedPackets);

#endif /* _CheckIfSinglePacketIsAllowedForRadioMessage_CheckEuroradioMessage_SubFunctions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckIfSinglePacketIsAllowedForRadioMessage_CheckEuroradioMessage_SubFunctions.h
** Generation date: 2015-11-20T19:46:56
*************************************************************$ */

