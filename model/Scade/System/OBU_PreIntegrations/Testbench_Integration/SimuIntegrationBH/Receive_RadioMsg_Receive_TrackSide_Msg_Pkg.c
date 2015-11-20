/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Receive_RadioMsg_Receive_TrackSide_Msg_Pkg.h"

/* Receive_TrackSide_Msg_Pkg::Receive_RadioMsg */
void Receive_RadioMsg_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::Receive_RadioMsg::API_TrackSide_Msg */ API_TrackSideInput_T_API_Msg_Pkg *API_TrackSide_Msg,
  /* Receive_TrackSide_Msg_Pkg::Receive_RadioMsg::outTrackMessage_for_check */ TrackSide_ForCheck_T_Common_Types_Pkg *outTrackMessage_for_check)
{
  /* Receive_TrackSide_Msg_Pkg::Receive_RadioMsg::_L12 */
  static API_TrackSideInput_T_API_Msg_Pkg _L12;
  /* Receive_TrackSide_Msg_Pkg::Receive_RadioMsg::_L14 */
  static TrackSide_ForCheck_T_Common_Types_Pkg _L14;
  /* Receive_TrackSide_Msg_Pkg::Receive_RadioMsg::_L15 */
  static kcg_bool _L15;
  /* Receive_TrackSide_Msg_Pkg::Receive_RadioMsg::_L16 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L16;
  /* Receive_TrackSide_Msg_Pkg::Receive_RadioMsg::_L17 */
  static MsgSource_T_Common_Types_Pkg _L17;
  /* Receive_TrackSide_Msg_Pkg::Receive_RadioMsg::_L19 */
  static RadioMessage_T_Radio_Types_Pkg _L19;
  /* Receive_TrackSide_Msg_Pkg::Receive_RadioMsg::_L34 */
  static kcg_bool _L34;
  /* Receive_TrackSide_Msg_Pkg::Receive_RadioMsg::_L36 */
  static kcg_bool _L36;
  /* Receive_TrackSide_Msg_Pkg::Receive_RadioMsg::_L37 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L37;
  /* Receive_TrackSide_Msg_Pkg::Receive_RadioMsg::_L21 */
  static RadioMetadata_T_Common_Types_Pkg _L21;
  /* Receive_TrackSide_Msg_Pkg::Receive_RadioMsg::_L67 */
  static CompressedPackets_T_Common_Types_Pkg _L67;
  /* Receive_TrackSide_Msg_Pkg::Receive_RadioMsg::_L68 */
  static BG_Message_T_BG_Types_Pkg _L68;
  /* Receive_TrackSide_Msg_Pkg::Receive_RadioMsg::_L92 */
  static RBC_Id_T_Common_Types_Pkg _L92;
  
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&_L12, API_TrackSide_Msg);
  _L15 = _L12.valid;
  _L16 = _L12.systemTimeMsgReceived;
  _L17 = _L12.msg_type;
  kcg_copy_BG_Message_T_BG_Types_Pkg(
    &_L68,
    (BG_Message_T_BG_Types_Pkg *) &cEmptyBGMessages_BG_Types_Pkg);
  _L36 = _L12.rtm_msg.present;
  _L34 = _L12.rtm_msg.apiConsistencyError;
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &_L37,
    &_L12.rtm_msg.Radio_Common_Header);
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &_L21,
    &_L12.rtm_msg.Radio_MetaData);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L67, &_L12.packets);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&_L92, &_L12.rtm_msg.sendingRBC_Id);
  _L19.present = _L36;
  _L19.consistencyError = _L34;
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(&_L19.header, &_L37);
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(&_L19.radioMetadata, &_L21);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L19.packets, &_L67);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&_L19.sendingRBC, &_L92);
  _L14.valid = _L15;
  _L14.systemTime = _L16;
  _L14.msg_type = _L17;
  kcg_copy_BG_Message_T_BG_Types_Pkg(&_L14.telegramHeaders, &_L68);
  kcg_copy_RadioMessage_T_Radio_Types_Pkg(&_L14.radio_Msg, &_L19);
  kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
    outTrackMessage_for_check,
    &_L14);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Receive_RadioMsg_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

