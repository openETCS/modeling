/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckIfPacketRadioMetadataElementIsPacket15_CheckEuroradioMessage_SubFunctions.h"

/* CheckEuroradioMessage::SubFunctions::CheckIfPacketRadioMetadataElementIsPacket15 */
kcg_bool CheckIfPacketRadioMetadataElementIsPacket15_CheckEuroradioMessage_SubFunctions(
  /* CheckEuroradioMessage::SubFunctions::CheckIfPacketRadioMetadataElementIsPacket15::accumulatorInput */ kcg_bool accumulatorInput,
  /* CheckEuroradioMessage::SubFunctions::CheckIfPacketRadioMetadataElementIsPacket15::metadataElement */ MetadataElement_T_Common_Types_Pkg *metadataElement)
{
  /* CheckEuroradioMessage::SubFunctions::CheckIfPacketRadioMetadataElementIsPacket15::_L1 */
  static MetadataElement_T_Common_Types_Pkg _L1;
  /* CheckEuroradioMessage::SubFunctions::CheckIfPacketRadioMetadataElementIsPacket15::_L2 */
  static NID_PACKET _L2;
  /* CheckEuroradioMessage::SubFunctions::CheckIfPacketRadioMetadataElementIsPacket15::_L3 */
  static kcg_bool _L3;
  /* CheckEuroradioMessage::SubFunctions::CheckIfPacketRadioMetadataElementIsPacket15::_L4 */
  static kcg_int _L4;
  /* CheckEuroradioMessage::SubFunctions::CheckIfPacketRadioMetadataElementIsPacket15::_L6 */
  static kcg_bool _L6;
  /* CheckEuroradioMessage::SubFunctions::CheckIfPacketRadioMetadataElementIsPacket15::_L8 */
  static kcg_bool _L8;
  /* CheckEuroradioMessage::SubFunctions::CheckIfPacketRadioMetadataElementIsPacket15::_L9 */
  static kcg_int _L9;
  /* CheckEuroradioMessage::SubFunctions::CheckIfPacketRadioMetadataElementIsPacket15::result */
  static kcg_bool result;
  
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&_L1, metadataElement);
  _L2 = _L1.nid_packet;
  _L9 = /* 1 */ T_extract_nid_packet_from_metadata_selector_TM(_L2);
  _L4 = 15;
  _L3 = _L9 == _L4;
  _L6 = accumulatorInput;
  _L8 = _L6 | _L3;
  result = _L8;
  return result;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CheckIfPacketRadioMetadataElementIsPacket15_CheckEuroradioMessage_SubFunctions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

