/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction.h"

/* CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage */
void BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage::trackSideForCheck */ TrackSide_ForCheck_T_Common_Types_Pkg *trackSideForCheck,
  /* CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage::q_nvlocacc */ Q_NVLOCACC q_nvlocacc,
  /* CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage::checkedMessage */ ReceivedMessage_T_Common_Types_Pkg *checkedMessage)
{
  (*checkedMessage).valid = (*trackSideForCheck).telegramHeaders.present;
  (*checkedMessage).source = cEurobalise_CheckBGConsistency_Pkg;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &(*checkedMessage).radioMetadata,
    (RadioMetadata_T_Common_Types_Pkg *)
      &cRadioMetadata_CheckBGConsistency_Pkg);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &(*checkedMessage).Radio_Common_Header,
    (Radio_TrackTrain_Header_T_Radio_Types_Pkg *)
      &cNoRadioHeader_CheckBGConsistency_Pkg);
  /* 1 */
  bildBGHeader_CheckBGConsistency_Pkg_SubFunction(
    trackSideForCheck,
    q_nvlocacc,
    &(*checkedMessage).BG_Common_Header);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &(*checkedMessage).packets.PacketData,
    &(*trackSideForCheck).telegramHeaders.Telegrams[0].packets.PacketData);
  /* 1 */
  MergMetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction(
    &(*trackSideForCheck).telegramHeaders.Telegrams,
    &(*checkedMessage).packets.PacketHeaders);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

