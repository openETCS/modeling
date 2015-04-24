/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConvertTrackSideMessageToRadioMessage.h"

/* ConvertTrackSideMessageToRadioMessage */
void ConvertTrackSideMessageToRadioMessage(
  /* ConvertTrackSideMessageToRadioMessage::TrackSideMessage */ TrackSide_ForCheck_T_Common_Types_Pkg *TrackSideMessage,
  /* ConvertTrackSideMessageToRadioMessage::ReceivedMessage */ ReceivedMessage_T_Common_Types_Pkg *ReceivedMessage)
{
  (*ReceivedMessage).valid = (*TrackSideMessage).valid &
    ((*TrackSideMessage).radio_Msg.present &
      !(*TrackSideMessage).radio_Msg.consistencyError);
  (*ReceivedMessage).source = (*TrackSideMessage).msg_type;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &(*ReceivedMessage).radioMetadata,
    &(*TrackSideMessage).radio_Msg.radioMetadata);
  kcg_copy_BG_Header_T_BG_Types_Pkg(
    &(*ReceivedMessage).BG_Common_Header,
    (BG_Header_T_BG_Types_Pkg *) &cEmptyBG_Header_BG_Types_Pkg);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &(*ReceivedMessage).Radio_Common_Header,
    &(*TrackSideMessage).radio_Msg.header);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &(*ReceivedMessage).packets,
    &(*TrackSideMessage).radio_Msg.packets);
}

/* $************* KCG Version 6.4 beta5 (build i13) *************
** ConvertTrackSideMessageToRadioMessage.c
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

