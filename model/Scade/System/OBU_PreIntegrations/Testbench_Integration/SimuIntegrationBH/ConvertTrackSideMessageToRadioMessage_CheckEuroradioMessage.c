/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ConvertTrackSideMessageToRadioMessage_CheckEuroradioMessage.h"

/* CheckEuroradioMessage::ConvertTrackSideMessageToRadioMessage */
void ConvertTrackSideMessageToRadioMessage_CheckEuroradioMessage(
  /* CheckEuroradioMessage::ConvertTrackSideMessageToRadioMessage::TrackSideMessage */ TrackSide_ForCheck_T_Common_Types_Pkg *TrackSideMessage,
  /* CheckEuroradioMessage::ConvertTrackSideMessageToRadioMessage::ReceivedMessage */ ReceivedMessage_T_Common_Types_Pkg *ReceivedMessage)
{
  static BG_Message_T_BG_Types_Pkg noname;
  /* CheckEuroradioMessage::ConvertTrackSideMessageToRadioMessage::_L1 */
  static TrackSide_ForCheck_T_Common_Types_Pkg _L1;
  /* CheckEuroradioMessage::ConvertTrackSideMessageToRadioMessage::_L6 */
  static kcg_bool _L6;
  /* CheckEuroradioMessage::ConvertTrackSideMessageToRadioMessage::_L5 */
  static T_internal_Type_Obu_BasicTypes_Pkg _L5;
  /* CheckEuroradioMessage::ConvertTrackSideMessageToRadioMessage::_L4 */
  static MsgSource_T_Common_Types_Pkg _L4;
  /* CheckEuroradioMessage::ConvertTrackSideMessageToRadioMessage::_L3 */
  static BG_Message_T_BG_Types_Pkg _L3;
  /* CheckEuroradioMessage::ConvertTrackSideMessageToRadioMessage::_L2 */
  static RadioMessage_T_Radio_Types_Pkg _L2;
  /* CheckEuroradioMessage::ConvertTrackSideMessageToRadioMessage::_L7 */
  static ReceivedMessage_T_Common_Types_Pkg _L7;
  /* CheckEuroradioMessage::ConvertTrackSideMessageToRadioMessage::_L13 */
  static kcg_bool _L13;
  /* CheckEuroradioMessage::ConvertTrackSideMessageToRadioMessage::_L14 */
  static kcg_bool _L14;
  /* CheckEuroradioMessage::ConvertTrackSideMessageToRadioMessage::_L15 */
  static kcg_bool _L15;
  /* CheckEuroradioMessage::ConvertTrackSideMessageToRadioMessage::_L16 */
  static BG_Header_T_BG_Types_Pkg _L16;
  /* CheckEuroradioMessage::ConvertTrackSideMessageToRadioMessage::_L17 */
  static kcg_bool _L17;
  /* CheckEuroradioMessage::ConvertTrackSideMessageToRadioMessage::_L9 */
  static CompressedPackets_T_Common_Types_Pkg _L9;
  /* CheckEuroradioMessage::ConvertTrackSideMessageToRadioMessage::_L10 */
  static RadioMetadata_T_Common_Types_Pkg _L10;
  /* CheckEuroradioMessage::ConvertTrackSideMessageToRadioMessage::_L11 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L11;
  /* CheckEuroradioMessage::ConvertTrackSideMessageToRadioMessage::_L12 */
  static kcg_bool _L12;
  /* CheckEuroradioMessage::ConvertTrackSideMessageToRadioMessage::_L19 */
  static RBC_Id_T_Common_Types_Pkg _L19;
  /* CheckEuroradioMessage::ConvertTrackSideMessageToRadioMessage::_L20 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L20;
  
  kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(&_L1, TrackSideMessage);
  _L6 = _L1.valid;
  kcg_copy_RadioMessage_T_Radio_Types_Pkg(&_L2, &_L1.radio_Msg);
  _L13 = _L2.present;
  _L12 = _L2.consistencyError;
  _L17 = !_L12;
  _L14 = _L13 & _L17;
  _L15 = _L6 & _L14;
  _L4 = _L1.msg_type;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(&_L10, &_L2.radioMetadata);
  kcg_copy_BG_Header_T_BG_Types_Pkg(
    &_L16,
    (BG_Header_T_BG_Types_Pkg *) &cEmptyBG_Header_BG_Types_Pkg);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(&_L11, &_L2.header);
  _L5 = _L1.systemTime;
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(&_L20, &_L11);
  if (kcg_true) {
    _L20.receivedSystemTime = _L5;
  }
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L9, &_L2.packets);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&_L19, &_L2.sendingRBC);
  _L7.valid = _L15;
  _L7.source = _L4;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(&_L7.radioMetadata, &_L10);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&_L7.BG_Common_Header, &_L16);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &_L7.Radio_Common_Header,
    &_L20);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L7.packets, &_L9);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&_L7.sendingRBC, &_L19);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(ReceivedMessage, &_L7);
  kcg_copy_BG_Message_T_BG_Types_Pkg(&_L3, &_L1.telegramHeaders);
  kcg_copy_BG_Message_T_BG_Types_Pkg(&noname, &_L3);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ConvertTrackSideMessageToRadioMessage_CheckEuroradioMessage.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

