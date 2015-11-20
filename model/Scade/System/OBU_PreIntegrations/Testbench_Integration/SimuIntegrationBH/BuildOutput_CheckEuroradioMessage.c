/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BuildOutput_CheckEuroradioMessage.h"

/* CheckEuroradioMessage::BuildOutput */
void BuildOutput_CheckEuroradioMessage(
  /* CheckEuroradioMessage::BuildOutput::message */ ReceivedMessage_T_Common_Types_Pkg *message,
  /* CheckEuroradioMessage::BuildOutput::valid */ kcg_bool valid,
  /* CheckEuroradioMessage::BuildOutput::ReceivedMessage */ ReceivedMessage_T_Common_Types_Pkg *ReceivedMessage)
{
  /* CheckEuroradioMessage::BuildOutput::_L1 */
  static ReceivedMessage_T_Common_Types_Pkg _L1;
  /* CheckEuroradioMessage::BuildOutput::_L2 */
  static kcg_bool _L2;
  /* CheckEuroradioMessage::BuildOutput::_L10 */
  static kcg_bool _L10;
  /* CheckEuroradioMessage::BuildOutput::_L11 */
  static ReceivedMessage_T_Common_Types_Pkg _L11;
  /* CheckEuroradioMessage::BuildOutput::_L19 */
  static kcg_bool _L19;
  /* CheckEuroradioMessage::BuildOutput::_L18 */
  static MsgSource_T_Common_Types_Pkg _L18;
  /* CheckEuroradioMessage::BuildOutput::_L17 */
  static RadioMetadata_T_Common_Types_Pkg _L17;
  /* CheckEuroradioMessage::BuildOutput::_L16 */
  static BG_Header_T_BG_Types_Pkg _L16;
  /* CheckEuroradioMessage::BuildOutput::_L15 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L15;
  /* CheckEuroradioMessage::BuildOutput::_L14 */
  static CompressedPackets_T_Common_Types_Pkg _L14;
  /* CheckEuroradioMessage::BuildOutput::_L20 */
  static RBC_Id_T_Common_Types_Pkg _L20;
  
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L1, message);
  _L2 = valid;
  _L19 = _L1.valid;
  _L10 = _L19 & _L2;
  _L18 = _L1.source;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(&_L17, &_L1.radioMetadata);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&_L16, &_L1.BG_Common_Header);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &_L15,
    &_L1.Radio_Common_Header);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L14, &_L1.packets);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&_L20, &_L1.sendingRBC);
  _L11.valid = _L10;
  _L11.source = _L18;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(&_L11.radioMetadata, &_L17);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&_L11.BG_Common_Header, &_L16);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &_L11.Radio_Common_Header,
    &_L15);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L11.packets, &_L14);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&_L11.sendingRBC, &_L20);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(ReceivedMessage, &_L11);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** BuildOutput_CheckEuroradioMessage.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

