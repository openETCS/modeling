/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckIfSinglePacketIsAllowedForRadioMessage_CheckEuroradioMessage_SubFunctions.h"

/* CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage */
kcg_bool CheckIfSinglePacketIsAllowedForRadioMessage_CheckEuroradioMessage_SubFunctions(
  /* CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::accumulator */ kcg_bool accumulator,
  /* CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::currentPacket */ MetadataElement_T_Common_Types_Pkg *currentPacket,
  /* CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::nid_message */ NID_MESSAGE nid_message,
  /* CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::permittedPackets */ MetadataTruthtable_T1_CheckEuroradioMessage *permittedPackets)
{
  /* CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::validTmp */
  static kcg_bool _1_validTmp;
  /* CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::IfBlock2::then::IfBlock1 */
  static kcg_bool IfBlock1_clock_IfBlock2;
  /* CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::IfBlock2::then::IfBlock1::else::_L1 */
  static kcg_bool _L14_IfBlock2_IfBlock1;
  /* CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::validTmp */
  static kcg_bool _2_validTmp;
  /* CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::IfBlock2::then::IfBlock1::then::_L5 */
  static kcg_int _L5_IfBlock2_IfBlock1;
  /* CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::IfBlock2::then::IfBlock1::then::_L4 */
  static kcg_bool _L4_IfBlock2_IfBlock1;
  /* CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::IfBlock2::then::IfBlock1::then::_L3 */
  static NID_MESSAGE _L3_IfBlock2_IfBlock1;
  /* CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::IfBlock2::then::IfBlock1::then::_L2 */
  static MetadataTruthtable_T1_CheckEuroradioMessage _L2_IfBlock2_IfBlock1;
  /* CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::IfBlock2::then::IfBlock1::then::_L1 */
  static kcg_bool _L1_IfBlock2_IfBlock1;
  /* CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::IfBlock2::then::IfBlock1::then::_L7 */
  static kcg_int _L7_IfBlock2_IfBlock1;
  /* CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::validTmp */
  static kcg_bool _3_validTmp;
  /* CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::validTmp */
  static kcg_bool validTmp;
  /* CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::IfBlock2::else::_L1 */
  static kcg_bool _L1_IfBlock2;
  /* CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::IfBlock2 */
  static kcg_bool IfBlock2_clock;
  /* CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::present */
  static kcg_bool present;
  /* CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::nid_packet */
  static kcg_int nid_packet;
  /* CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::validTmp */
  static kcg_bool _5_validTmp;
  /* CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::_L3 */
  static MetadataElement_T_Common_Types_Pkg _L3;
  /* CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::_L12 */
  static NID_PACKET _L12;
  /* CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::_L14 */
  static kcg_bool _L14;
  /* CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::_L15 */
  static kcg_bool _L15;
  /* CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::_L16 */
  static kcg_bool _L16;
  /* CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::_L19 */
  static kcg_bool _L19;
  /* CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::_L20 */
  static kcg_int _L20;
  /* CheckEuroradioMessage::SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::valid */
  static kcg_bool valid;
  
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&_L3, currentPacket);
  _L19 = _L3.valid;
  present = _L19;
  _L12 = _L3.nid_packet;
  _L20 = /* 1 */ T_extract_nid_packet_from_metadata_selector_TM(_L12);
  nid_packet = _L20;
  _L14 = accumulator;
  IfBlock2_clock = nid_packet != 0;
  /* ck_IfBlock2 */ if (IfBlock2_clock) {
    IfBlock1_clock_IfBlock2 = present == kcg_true;
    /* ck_IfBlock1 */ if (IfBlock1_clock_IfBlock2) {
      kcg_copy_MetadataTruthtable_T1_CheckEuroradioMessage(
        &_L2_IfBlock2_IfBlock1,
        permittedPackets);
      _L4_IfBlock2_IfBlock1 = kcg_false;
      _L3_IfBlock2_IfBlock1 = nid_message;
      _L5_IfBlock2_IfBlock1 = (kcg_int) _L3_IfBlock2_IfBlock1;
      _L7_IfBlock2_IfBlock1 = nid_packet;
      if ((0 <= _L5_IfBlock2_IfBlock1) & (_L5_IfBlock2_IfBlock1 < 46) & ((0 <=
            _L7_IfBlock2_IfBlock1) & (_L7_IfBlock2_IfBlock1 < 256))) {
        _L1_IfBlock2_IfBlock1 =
          _L2_IfBlock2_IfBlock1[_L5_IfBlock2_IfBlock1][_L7_IfBlock2_IfBlock1];
      }
      else {
        _L1_IfBlock2_IfBlock1 = _L4_IfBlock2_IfBlock1;
      }
      _3_validTmp = _L1_IfBlock2_IfBlock1;
      _1_validTmp = _3_validTmp;
    }
    else {
      _L14_IfBlock2_IfBlock1 = kcg_true;
      _2_validTmp = _L14_IfBlock2_IfBlock1;
      _1_validTmp = _2_validTmp;
    }
    _5_validTmp = _1_validTmp;
  }
  else {
    _L1_IfBlock2 = kcg_true;
    validTmp = _L1_IfBlock2;
    _5_validTmp = validTmp;
  }
  _L16 = _5_validTmp;
  _L15 = _L14 & _L16;
  valid = _L15;
  return valid;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** CheckIfSinglePacketIsAllowedForRadioMessage_CheckEuroradioMessage_SubFunctions.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

