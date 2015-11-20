/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckAllowedPacketsRadio_CheckEuroradioMessage.h"

/* CheckEuroradioMessage::CheckAllowedPacketsRadio */
kcg_bool CheckAllowedPacketsRadio_CheckEuroradioMessage(
  /* CheckEuroradioMessage::CheckAllowedPacketsRadio::rtmMessage */ ReceivedMessage_T_Common_Types_Pkg *rtmMessage)
{
  static kcg_int i2;
  static kcg_int i1;
  /* CheckEuroradioMessage::CheckAllowedPacketsRadio */
  static kcg_bool acc;
  static kcg_int i;
  /* CheckEuroradioMessage::CheckAllowedPacketsRadio::_L6 */
  static ReceivedMessage_T_Common_Types_Pkg _L6;
  /* CheckEuroradioMessage::CheckAllowedPacketsRadio::_L7 */
  static Metadata_T_Common_Types_Pkg _L7;
  /* CheckEuroradioMessage::CheckAllowedPacketsRadio::_L8 */
  static NID_MESSAGE _L8;
  /* CheckEuroradioMessage::CheckAllowedPacketsRadio::_L9 */
  static MetadataTruthtable_T1_CheckEuroradioMessage _L9;
  /* CheckEuroradioMessage::CheckAllowedPacketsRadio::_L11 */
  static kcg_bool _L11;
  /* CheckEuroradioMessage::CheckAllowedPacketsRadio::_L12 */
  static array_int_30 _L12;
  /* CheckEuroradioMessage::CheckAllowedPacketsRadio::_L13 */
  static array_bool_256_46_30 _L13;
  /* CheckEuroradioMessage::CheckAllowedPacketsRadio::_L14 */
  static kcg_bool _L14;
  /* CheckEuroradioMessage::CheckAllowedPacketsRadio::valid */
  static kcg_bool valid;
  
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L6, rtmMessage);
  kcg_copy_Metadata_T_Common_Types_Pkg(&_L7, &_L6.packets.PacketHeaders);
  _L8 = _L6.Radio_Common_Header.nid_message;
  kcg_copy_MetadataTruthtable_T1_CheckEuroradioMessage(
    &_L9,
    (MetadataTruthtable_T1_CheckEuroradioMessage *)
      &cPermittedRadioPackets1_CheckEuroradioMessage);
  _L11 = kcg_true;
  /* pow */ for (i2 = 0; i2 < 30; i2++) {
    _L12[i2] = _L8;
  }
  /* pow */ for (i1 = 0; i1 < 30; i1++) {
    kcg_copy_MetadataTruthtable_T1_CheckEuroradioMessage(&_L13[i1], &_L9);
  }
  _L14 = _L11;
  /* 1 */ for (i = 0; i < 30; i++) {
    acc = _L14;
    _L14 = /* 1 */
      CheckIfSinglePacketIsAllowedForRadioMessage_CheckEuroradioMessage_SubFunctions(
        acc,
        &_L7[i],
        _L12[i],
        &_L13[i]);
  }
  valid = _L14;
  return valid;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CheckAllowedPacketsRadio_CheckEuroradioMessage.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

