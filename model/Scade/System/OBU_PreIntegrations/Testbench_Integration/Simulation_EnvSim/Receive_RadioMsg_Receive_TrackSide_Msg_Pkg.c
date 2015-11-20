/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Receive_RadioMsg_Receive_TrackSide_Msg_Pkg.h"

/* Receive_TrackSide_Msg_Pkg::Receive_RadioMsg */
void Receive_RadioMsg_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::Receive_RadioMsg::API_TrackSide_Msg */API_TrackSideInput_T_API_Msg_Pkg *API_TrackSide_Msg,
  /* Receive_TrackSide_Msg_Pkg::Receive_RadioMsg::outTrackMessage_for_check */TrackSide_ForCheck_T_Common_Types_Pkg *outTrackMessage_for_check)
{
  (*outTrackMessage_for_check).valid = (*API_TrackSide_Msg).valid;
  (*outTrackMessage_for_check).systemTime =
    (*API_TrackSide_Msg).systemTimeMsgReceived;
  (*outTrackMessage_for_check).msg_type = (*API_TrackSide_Msg).msg_type;
  kcg_copy_BG_Message_T_BG_Types_Pkg(
    &(*outTrackMessage_for_check).telegramHeaders,
    (BG_Message_T_BG_Types_Pkg *) &cEmptyBGMessages_BG_Types_Pkg);
  (*outTrackMessage_for_check).radio_Msg.present =
    (*API_TrackSide_Msg).rtm_msg.present;
  (*outTrackMessage_for_check).radio_Msg.consistencyError =
    (*API_TrackSide_Msg).rtm_msg.apiConsistencyError;
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &(*outTrackMessage_for_check).radio_Msg.header,
    &(*API_TrackSide_Msg).rtm_msg.Radio_Common_Header);
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &(*outTrackMessage_for_check).radio_Msg.radioMetadata,
    &(*API_TrackSide_Msg).rtm_msg.Radio_MetaData);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &(*outTrackMessage_for_check).radio_Msg.packets,
    &(*API_TrackSide_Msg).packets);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(
    &(*outTrackMessage_for_check).radio_Msg.sendingRBC,
    &(*API_TrackSide_Msg).rtm_msg.sendingRBC_Id);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Receive_RadioMsg_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2015-11-20T19:47:12
*************************************************************$ */

