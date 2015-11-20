/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConvertTrackSideMessageToRadioMessage_CheckEuroradioMessage.h"

/* CheckEuroradioMessage::ConvertTrackSideMessageToRadioMessage */
void ConvertTrackSideMessageToRadioMessage_CheckEuroradioMessage(
  /* CheckEuroradioMessage::ConvertTrackSideMessageToRadioMessage::TrackSideMessage */TrackSide_ForCheck_T_Common_Types_Pkg *TrackSideMessage,
  /* CheckEuroradioMessage::ConvertTrackSideMessageToRadioMessage::ReceivedMessage */ReceivedMessage_T_Common_Types_Pkg *ReceivedMessage)
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
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &(*ReceivedMessage).packets,
    &(*TrackSideMessage).radio_Msg.packets);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(
    &(*ReceivedMessage).sendingRBC,
    &(*TrackSideMessage).radio_Msg.sendingRBC);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &(*ReceivedMessage).Radio_Common_Header,
    &(*TrackSideMessage).radio_Msg.header);
  (*ReceivedMessage).Radio_Common_Header.receivedSystemTime =
    (*TrackSideMessage).systemTime;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ConvertTrackSideMessageToRadioMessage_CheckEuroradioMessage.c
** Generation date: 2015-11-20T19:47:13
*************************************************************$ */

