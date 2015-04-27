/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckIfPacketRadioMetadataElementIsPacket15_SubFunctions.h"

/* SubFunctions::CheckIfPacketRadioMetadataElementIsPacket15 */
kcg_bool CheckIfPacketRadioMetadataElementIsPacket15_SubFunctions(
  /* SubFunctions::CheckIfPacketRadioMetadataElementIsPacket15::accumulatorInput */ kcg_bool accumulatorInput,
  /* SubFunctions::CheckIfPacketRadioMetadataElementIsPacket15::metadataElement */ MetadataElement_T_Common_Types_Pkg *metadataElement)
{
  /* SubFunctions::CheckIfPacketRadioMetadataElementIsPacket15::result */ kcg_bool result;
  
  result = accumulatorInput | ((*metadataElement).nid_packet == 15);
  return result;
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** CheckIfPacketRadioMetadataElementIsPacket15_SubFunctions.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

