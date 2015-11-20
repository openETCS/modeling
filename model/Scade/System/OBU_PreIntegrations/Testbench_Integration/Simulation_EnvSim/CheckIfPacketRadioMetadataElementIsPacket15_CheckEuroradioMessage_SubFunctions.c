/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckIfPacketRadioMetadataElementIsPacket15_CheckEuroradioMessage_SubFunctions.h"

/* CheckEuroradioMessage::SubFunctions::CheckIfPacketRadioMetadataElementIsPacket15 */
kcg_bool CheckIfPacketRadioMetadataElementIsPacket15_CheckEuroradioMessage_SubFunctions(
  /* CheckEuroradioMessage::SubFunctions::CheckIfPacketRadioMetadataElementIsPacket15::accumulatorInput */kcg_bool accumulatorInput,
  /* CheckEuroradioMessage::SubFunctions::CheckIfPacketRadioMetadataElementIsPacket15::metadataElement */MetadataElement_T_Common_Types_Pkg *metadataElement)
{
  /* CheckEuroradioMessage::SubFunctions::CheckIfPacketRadioMetadataElementIsPacket15::result */
  static kcg_bool result;
  
  result = accumulatorInput | (/* 1 */
      T_extract_nid_packet_from_metadata_selector_TM(
        (*metadataElement).nid_packet) == 15);
  return result;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckIfPacketRadioMetadataElementIsPacket15_CheckEuroradioMessage_SubFunctions.c
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

