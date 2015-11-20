/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SecondFilter_InformationFilter_Pkg_SecondFilter.h"

/* InformationFilter_Pkg::SecondFilter::SecondFilter */
void SecondFilter_InformationFilter_Pkg_SecondFilter(
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::messageForFilter2 */ ReceivedMessage_T_Common_Types_Pkg *messageForFilter2,
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::inMessageForBuffer */ ReceivedMessage_T_Common_Types_Pkg *inMessageForBuffer,
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::inSupervisingDevice */ kcg_int inSupervisingDevice,
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::storeInBuffer2 */ kcg_bool *_32_storeInBuffer2,
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::outMessageForBuffer */ ReceivedMessage_T_Common_Types_Pkg *_31_outMessageForBuffer,
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::messageForFilter3 */ ReceivedMessage_T_Common_Types_Pkg *_30_messageForFilter3)
{
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::messageForFilter3 */
  static ReceivedMessage_T_Common_Types_Pkg _3_messageForFilter3;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::outMessageForBuffer */
  static ReceivedMessage_T_Common_Types_Pkg _2_outMessageForBuffer;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::storeInBuffer2 */
  static kcg_bool _1_storeInBuffer2;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2 */
  static kcg_bool IfBlock2_clock_IfBlock1;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::else::_L2 */
  static ReceivedMessage_T_Common_Types_Pkg _L2_IfBlock1_IfBlock2;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::else::_L1 */
  static ReceivedMessage_T_Common_Types_Pkg _L1_IfBlock1_IfBlock2;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::storeInBuffer2 */
  static kcg_bool _4_storeInBuffer2;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::outMessageForBuffer */
  static ReceivedMessage_T_Common_Types_Pkg _5_outMessageForBuffer;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::messageForFilter3 */
  static ReceivedMessage_T_Common_Types_Pkg _6_messageForFilter3;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::messageForFilter3 */
  static ReceivedMessage_T_Common_Types_Pkg _15_messageForFilter3;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::outMessageForBuffer */
  static ReceivedMessage_T_Common_Types_Pkg _14_outMessageForBuffer;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::storeInBuffer2 */
  static kcg_bool _13_storeInBuffer2;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::IfBlock3::then::_L12 */
  static kcg_int _L12_IfBlock1_IfBlock2_IfBlock3;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::IfBlock3::then::_L11 */
  static kcg_bool _L11_IfBlock1_IfBlock2_IfBlock3;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::IfBlock3::then::_L10 */
  static kcg_bool _L10_IfBlock1_IfBlock2_IfBlock3;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::IfBlock3::then::_L9 */
  static kcg_bool _L9_IfBlock1_IfBlock2_IfBlock3;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::IfBlock3::then::_L8 */
  static kcg_bool _L8_IfBlock1_IfBlock2_IfBlock3;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::IfBlock3::then::_L7 */
  static kcg_bool _L7_IfBlock1_IfBlock2_IfBlock3;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::IfBlock3::then::_L5 */
  static kcg_bool _L5_IfBlock1_IfBlock2_IfBlock3;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::IfBlock3::then::messagesForTransitionBuffer */
  static kcg_bool messagesForTransitionBuffer_IfBlock1_IfBlock2_IfBlock3;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::IfBlock3::then::IfBlock4 */
  static kcg_bool IfBlock4_clock_IfBlock1_IfBlock2_IfBlock3;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::IfBlock3::then::IfBlock4::else::_L2 */
  static ReceivedMessage_T_Common_Types_Pkg _L2_IfBlock1_IfBlock2_IfBlock3_IfBlock4;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::IfBlock3::then::IfBlock4::else::_L1 */
  static ReceivedMessage_T_Common_Types_Pkg _L123_IfBlock1_IfBlock2_IfBlock3_IfBlock4;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::storeInBuffer2 */
  static kcg_bool _16_storeInBuffer2;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::outMessageForBuffer */
  static ReceivedMessage_T_Common_Types_Pkg _17_outMessageForBuffer;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::messageForFilter3 */
  static ReceivedMessage_T_Common_Types_Pkg _18_messageForFilter3;
  static kcg_bool _22_noname;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::IfBlock3::then::IfBlock4::then::_L1 */
  static kcg_bool _L1_IfBlock1_IfBlock2_IfBlock3_IfBlock4;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::IfBlock3::then::IfBlock4::then::_L15 */
  static kcg_bool _L15_IfBlock1_IfBlock2_IfBlock3_IfBlock4;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::IfBlock3::then::IfBlock4::then::_L14 */
  static ReceivedMessage_T_Common_Types_Pkg _L14_IfBlock1_IfBlock2_IfBlock3_IfBlock4;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::IfBlock3::then::IfBlock4::then::_L13 */
  static ReceivedMessage_T_Common_Types_Pkg _L13_IfBlock1_IfBlock2_IfBlock3_IfBlock4;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::IfBlock3::then::IfBlock4::then::_L6 */
  static kcg_bool _L6_IfBlock1_IfBlock2_IfBlock3_IfBlock4;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::IfBlock3::then::IfBlock4::then::_L7 */
  static MsgSource_T_Common_Types_Pkg _L7_IfBlock1_IfBlock2_IfBlock3_IfBlock4;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::IfBlock3::then::IfBlock4::then::_L8 */
  static RadioMetadata_T_Common_Types_Pkg _L8_IfBlock1_IfBlock2_IfBlock3_IfBlock4;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::IfBlock3::then::IfBlock4::then::_L9 */
  static BG_Header_T_BG_Types_Pkg _L9_IfBlock1_IfBlock2_IfBlock3_IfBlock4;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::IfBlock3::then::IfBlock4::then::_L10 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L10_IfBlock1_IfBlock2_IfBlock3_IfBlock4;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::IfBlock3::then::IfBlock4::then::_L11 */
  static CompressedPackets_T_Common_Types_Pkg _L11_IfBlock1_IfBlock2_IfBlock3_IfBlock4;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::IfBlock3::then::IfBlock4::then::_L12 */
  static RBC_Id_T_Common_Types_Pkg _L12_IfBlock1_IfBlock2_IfBlock3_IfBlock4;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::IfBlock3::then::IfBlock4::then::_L16 */
  static ReceivedMessage_T_Common_Types_Pkg _L16_IfBlock1_IfBlock2_IfBlock3_IfBlock4;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::IfBlock3::then::IfBlock4::then::_L17 */
  static ReceivedMessage_T_Common_Types_Pkg _L17_IfBlock1_IfBlock2_IfBlock3_IfBlock4;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::storeInBuffer2 */
  static kcg_bool _19_storeInBuffer2;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::outMessageForBuffer */
  static ReceivedMessage_T_Common_Types_Pkg _20_outMessageForBuffer;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::messageForFilter3 */
  static ReceivedMessage_T_Common_Types_Pkg _21_messageForFilter3;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::messageForFilter3 */
  static ReceivedMessage_T_Common_Types_Pkg _12_messageForFilter3;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::outMessageForBuffer */
  static ReceivedMessage_T_Common_Types_Pkg _11_outMessageForBuffer;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::storeInBuffer2 */
  static kcg_bool _10_storeInBuffer2;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::IfBlock3::else::_L14 */
  static kcg_bool _L14_IfBlock1_IfBlock2_IfBlock3;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::IfBlock3::else::_L13 */
  static ReceivedMessage_T_Common_Types_Pkg _L13_IfBlock1_IfBlock2_IfBlock3;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::IfBlock3::else::_L6 */
  static kcg_bool _L6_IfBlock1_IfBlock2_IfBlock3;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::IfBlock3::else::_L7 */
  static MsgSource_T_Common_Types_Pkg _L724_IfBlock1_IfBlock2_IfBlock3;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::IfBlock3::else::_L8 */
  static RadioMetadata_T_Common_Types_Pkg _L825_IfBlock1_IfBlock2_IfBlock3;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::IfBlock3::else::_L9 */
  static BG_Header_T_BG_Types_Pkg _L926_IfBlock1_IfBlock2_IfBlock3;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::IfBlock3::else::_L10 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L1027_IfBlock1_IfBlock2_IfBlock3;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::IfBlock3::else::_L11 */
  static CompressedPackets_T_Common_Types_Pkg _L1128_IfBlock1_IfBlock2_IfBlock3;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::IfBlock3::else::_L12 */
  static RBC_Id_T_Common_Types_Pkg _L1229_IfBlock1_IfBlock2_IfBlock3;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::IfBlock3::else::_L3 */
  static ReceivedMessage_T_Common_Types_Pkg _L3_IfBlock1_IfBlock2_IfBlock3;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::IfBlock3::else::_L4 */
  static ReceivedMessage_T_Common_Types_Pkg _L4_IfBlock1_IfBlock2_IfBlock3;
  static kcg_bool noname;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::IfBlock3 */
  static kcg_bool IfBlock3_clock_IfBlock1_IfBlock2;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::messagesToReject */
  static kcg_bool messagesToReject_IfBlock1_IfBlock2;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::_L4 */
  static kcg_bool _L4_IfBlock1_IfBlock2;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::_L5 */
  static kcg_bool _L5_IfBlock1_IfBlock2;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::_L6 */
  static kcg_bool _L6_IfBlock1_IfBlock2;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::then::IfBlock2::then::_L7 */
  static kcg_int _L7_IfBlock1_IfBlock2;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::storeInBuffer2 */
  static kcg_bool _7_storeInBuffer2;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::outMessageForBuffer */
  static ReceivedMessage_T_Common_Types_Pkg _8_outMessageForBuffer;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::messageForFilter3 */
  static ReceivedMessage_T_Common_Types_Pkg _9_messageForFilter3;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::messageForFilter3 */
  static ReceivedMessage_T_Common_Types_Pkg messageForFilter3;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::outMessageForBuffer */
  static ReceivedMessage_T_Common_Types_Pkg outMessageForBuffer;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::storeInBuffer2 */
  static kcg_bool storeInBuffer2;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::else::_L2 */
  static ReceivedMessage_T_Common_Types_Pkg _L2_IfBlock1;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1::else::_L1 */
  static ReceivedMessage_T_Common_Types_Pkg _L1_IfBlock1;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::IfBlock1 */
  static kcg_bool IfBlock1_clock;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::isFromRBC */
  static kcg_bool isFromRBC;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::messageId */
  static kcg_int messageId;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::isFromSupervisingRBC */
  static kcg_bool isFromSupervisingRBC;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::_L14 */
  static ReceivedMessage_T_Common_Types_Pkg _L14;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::_L24 */
  static MsgSource_T_Common_Types_Pkg _L24;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::_L25 */
  static kcg_bool _L25;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::_L26 */
  static MsgSource_T_Common_Types_Pkg _L26;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::_L27 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L27;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::_L28 */
  static kcg_int _L28;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::_L29 */
  static NID_MESSAGE _L29;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::_L36 */
  static kcg_bool _L36;
  /* InformationFilter_Pkg::SecondFilter::SecondFilter::_L37 */
  static kcg_int _L37;
  
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L14, messageForFilter2);
  _L24 = _L14.source;
  _L26 = msrc_Euroradio_Common_Types_Pkg;
  _L25 = _L24 == _L26;
  isFromRBC = _L25;
  IfBlock1_clock = isFromRBC;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
  }
  else {
    storeInBuffer2 = kcg_false;
  }
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &_L27,
    &_L14.Radio_Common_Header);
  _L28 = _L27.radioDevice;
  _L37 = inSupervisingDevice;
  _L36 = _L28 == _L37;
  isFromSupervisingRBC = _L36;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    IfBlock2_clock_IfBlock1 = !isFromSupervisingRBC;
    /* ck_IfBlock2 */ if (IfBlock2_clock_IfBlock1) {
    }
    else {
      _4_storeInBuffer2 = kcg_false;
    }
  }
  _L29 = _L27.nid_message;
  messageId = _L29;
  /* ck_IfBlock1 */ if (IfBlock1_clock) {
    /* ck_IfBlock2 */ if (IfBlock2_clock_IfBlock1) {
      _L7_IfBlock1_IfBlock2 = messageId;
      _L5_IfBlock1_IfBlock2 = kcg_true;
      _L6_IfBlock1_IfBlock2 = kcg_false;
      switch (_L7_IfBlock1_IfBlock2) {
        case 9 :
          _L4_IfBlock1_IfBlock2 = _L5_IfBlock1_IfBlock2;
          break;
        case 18 :
          _L4_IfBlock1_IfBlock2 = _L5_IfBlock1_IfBlock2;
          break;
        
        default :
          _L4_IfBlock1_IfBlock2 = _L6_IfBlock1_IfBlock2;
      }
      messagesToReject_IfBlock1_IfBlock2 = _L4_IfBlock1_IfBlock2;
      IfBlock3_clock_IfBlock1_IfBlock2 = !messagesToReject_IfBlock1_IfBlock2;
      /* ck_IfBlock3 */ if (IfBlock3_clock_IfBlock1_IfBlock2) {
        _L12_IfBlock1_IfBlock2_IfBlock3 = messageId;
        _L7_IfBlock1_IfBlock2_IfBlock3 = kcg_true;
        _L8_IfBlock1_IfBlock2_IfBlock3 = kcg_true;
        _L9_IfBlock1_IfBlock2_IfBlock3 = kcg_true;
        _L10_IfBlock1_IfBlock2_IfBlock3 = kcg_false;
        switch (_L12_IfBlock1_IfBlock2_IfBlock3) {
          case 8 :
            _L5_IfBlock1_IfBlock2_IfBlock3 = _L7_IfBlock1_IfBlock2_IfBlock3;
            break;
          case 38 :
            _L5_IfBlock1_IfBlock2_IfBlock3 = _L8_IfBlock1_IfBlock2_IfBlock3;
            break;
          case 39 :
            _L5_IfBlock1_IfBlock2_IfBlock3 = _L9_IfBlock1_IfBlock2_IfBlock3;
            break;
          
          default :
            _L5_IfBlock1_IfBlock2_IfBlock3 = _L10_IfBlock1_IfBlock2_IfBlock3;
        }
        _L11_IfBlock1_IfBlock2_IfBlock3 = !_L5_IfBlock1_IfBlock2_IfBlock3;
        messagesForTransitionBuffer_IfBlock1_IfBlock2_IfBlock3 =
          _L11_IfBlock1_IfBlock2_IfBlock3;
        IfBlock4_clock_IfBlock1_IfBlock2_IfBlock3 =
          messagesForTransitionBuffer_IfBlock1_IfBlock2_IfBlock3;
        /* ck_IfBlock4 */ if (IfBlock4_clock_IfBlock1_IfBlock2_IfBlock3) {
          _L1_IfBlock1_IfBlock2_IfBlock3_IfBlock4 = kcg_true;
          _19_storeInBuffer2 = _L1_IfBlock1_IfBlock2_IfBlock3_IfBlock4;
          _13_storeInBuffer2 = _19_storeInBuffer2;
        }
        else {
          _16_storeInBuffer2 = kcg_false;
          _13_storeInBuffer2 = _16_storeInBuffer2;
        }
        _7_storeInBuffer2 = _13_storeInBuffer2;
      }
      else {
        _10_storeInBuffer2 = kcg_false;
        _7_storeInBuffer2 = _10_storeInBuffer2;
      }
      _1_storeInBuffer2 = _7_storeInBuffer2;
    }
    else {
      _1_storeInBuffer2 = _4_storeInBuffer2;
    }
    *_32_storeInBuffer2 = _1_storeInBuffer2;
    /* ck_IfBlock2 */ if (IfBlock2_clock_IfBlock1) {
      /* ck_IfBlock3 */ if (IfBlock3_clock_IfBlock1_IfBlock2) {
        /* ck_IfBlock4 */ if (IfBlock4_clock_IfBlock1_IfBlock2_IfBlock3) {
          kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
            &_L13_IfBlock1_IfBlock2_IfBlock3_IfBlock4,
            messageForFilter2);
          kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
            &_L16_IfBlock1_IfBlock2_IfBlock3_IfBlock4,
            inMessageForBuffer);
          /* 1 */
          DetermineBufferMessage_InformationFilter_Pkg_SecondFilter(
            &_L13_IfBlock1_IfBlock2_IfBlock3_IfBlock4,
            &_L16_IfBlock1_IfBlock2_IfBlock3_IfBlock4,
            &_L17_IfBlock1_IfBlock2_IfBlock3_IfBlock4);
          kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
            &_20_outMessageForBuffer,
            &_L17_IfBlock1_IfBlock2_IfBlock3_IfBlock4);
          kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
            &_14_outMessageForBuffer,
            &_20_outMessageForBuffer);
        }
        else {
          kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
            &_L2_IfBlock1_IfBlock2_IfBlock3_IfBlock4,
            inMessageForBuffer);
          kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
            &_17_outMessageForBuffer,
            &_L2_IfBlock1_IfBlock2_IfBlock3_IfBlock4);
          kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
            &_14_outMessageForBuffer,
            &_17_outMessageForBuffer);
        }
        kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
          &_8_outMessageForBuffer,
          &_14_outMessageForBuffer);
      }
      else {
        kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
          &_L4_IfBlock1_IfBlock2_IfBlock3,
          inMessageForBuffer);
        kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
          &_11_outMessageForBuffer,
          &_L4_IfBlock1_IfBlock2_IfBlock3);
        kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
          &_8_outMessageForBuffer,
          &_11_outMessageForBuffer);
      }
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &_2_outMessageForBuffer,
        &_8_outMessageForBuffer);
    }
    else {
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &_L2_IfBlock1_IfBlock2,
        inMessageForBuffer);
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &_5_outMessageForBuffer,
        &_L2_IfBlock1_IfBlock2);
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &_2_outMessageForBuffer,
        &_5_outMessageForBuffer);
    }
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      _31_outMessageForBuffer,
      &_2_outMessageForBuffer);
    /* ck_IfBlock2 */ if (IfBlock2_clock_IfBlock1) {
      /* ck_IfBlock3 */ if (IfBlock3_clock_IfBlock1_IfBlock2) {
        /* ck_IfBlock4 */ if (IfBlock4_clock_IfBlock1_IfBlock2_IfBlock3) {
          _L15_IfBlock1_IfBlock2_IfBlock3_IfBlock4 = kcg_false;
          _L7_IfBlock1_IfBlock2_IfBlock3_IfBlock4 =
            _L13_IfBlock1_IfBlock2_IfBlock3_IfBlock4.source;
          kcg_copy_RadioMetadata_T_Common_Types_Pkg(
            &_L8_IfBlock1_IfBlock2_IfBlock3_IfBlock4,
            &_L13_IfBlock1_IfBlock2_IfBlock3_IfBlock4.radioMetadata);
          kcg_copy_BG_Header_T_BG_Types_Pkg(
            &_L9_IfBlock1_IfBlock2_IfBlock3_IfBlock4,
            &_L13_IfBlock1_IfBlock2_IfBlock3_IfBlock4.BG_Common_Header);
          kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
            &_L10_IfBlock1_IfBlock2_IfBlock3_IfBlock4,
            &_L13_IfBlock1_IfBlock2_IfBlock3_IfBlock4.Radio_Common_Header);
          kcg_copy_CompressedPackets_T_Common_Types_Pkg(
            &_L11_IfBlock1_IfBlock2_IfBlock3_IfBlock4,
            &_L13_IfBlock1_IfBlock2_IfBlock3_IfBlock4.packets);
          kcg_copy_RBC_Id_T_Common_Types_Pkg(
            &_L12_IfBlock1_IfBlock2_IfBlock3_IfBlock4,
            &_L13_IfBlock1_IfBlock2_IfBlock3_IfBlock4.sendingRBC);
          _L14_IfBlock1_IfBlock2_IfBlock3_IfBlock4.valid =
            _L15_IfBlock1_IfBlock2_IfBlock3_IfBlock4;
          _L14_IfBlock1_IfBlock2_IfBlock3_IfBlock4.source =
            _L7_IfBlock1_IfBlock2_IfBlock3_IfBlock4;
          kcg_copy_RadioMetadata_T_Common_Types_Pkg(
            &_L14_IfBlock1_IfBlock2_IfBlock3_IfBlock4.radioMetadata,
            &_L8_IfBlock1_IfBlock2_IfBlock3_IfBlock4);
          kcg_copy_BG_Header_T_BG_Types_Pkg(
            &_L14_IfBlock1_IfBlock2_IfBlock3_IfBlock4.BG_Common_Header,
            &_L9_IfBlock1_IfBlock2_IfBlock3_IfBlock4);
          kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
            &_L14_IfBlock1_IfBlock2_IfBlock3_IfBlock4.Radio_Common_Header,
            &_L10_IfBlock1_IfBlock2_IfBlock3_IfBlock4);
          kcg_copy_CompressedPackets_T_Common_Types_Pkg(
            &_L14_IfBlock1_IfBlock2_IfBlock3_IfBlock4.packets,
            &_L11_IfBlock1_IfBlock2_IfBlock3_IfBlock4);
          kcg_copy_RBC_Id_T_Common_Types_Pkg(
            &_L14_IfBlock1_IfBlock2_IfBlock3_IfBlock4.sendingRBC,
            &_L12_IfBlock1_IfBlock2_IfBlock3_IfBlock4);
          kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
            &_21_messageForFilter3,
            &_L14_IfBlock1_IfBlock2_IfBlock3_IfBlock4);
          kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
            &_15_messageForFilter3,
            &_21_messageForFilter3);
        }
        else {
          kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
            &_L123_IfBlock1_IfBlock2_IfBlock3_IfBlock4,
            messageForFilter2);
          kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
            &_18_messageForFilter3,
            &_L123_IfBlock1_IfBlock2_IfBlock3_IfBlock4);
          kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
            &_15_messageForFilter3,
            &_18_messageForFilter3);
        }
        kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
          &_9_messageForFilter3,
          &_15_messageForFilter3);
      }
      else {
        _L14_IfBlock1_IfBlock2_IfBlock3 = kcg_false;
        kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
          &_L3_IfBlock1_IfBlock2_IfBlock3,
          messageForFilter2);
        _L724_IfBlock1_IfBlock2_IfBlock3 =
          _L3_IfBlock1_IfBlock2_IfBlock3.source;
        kcg_copy_RadioMetadata_T_Common_Types_Pkg(
          &_L825_IfBlock1_IfBlock2_IfBlock3,
          &_L3_IfBlock1_IfBlock2_IfBlock3.radioMetadata);
        kcg_copy_BG_Header_T_BG_Types_Pkg(
          &_L926_IfBlock1_IfBlock2_IfBlock3,
          &_L3_IfBlock1_IfBlock2_IfBlock3.BG_Common_Header);
        kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
          &_L1027_IfBlock1_IfBlock2_IfBlock3,
          &_L3_IfBlock1_IfBlock2_IfBlock3.Radio_Common_Header);
        kcg_copy_CompressedPackets_T_Common_Types_Pkg(
          &_L1128_IfBlock1_IfBlock2_IfBlock3,
          &_L3_IfBlock1_IfBlock2_IfBlock3.packets);
        kcg_copy_RBC_Id_T_Common_Types_Pkg(
          &_L1229_IfBlock1_IfBlock2_IfBlock3,
          &_L3_IfBlock1_IfBlock2_IfBlock3.sendingRBC);
        _L13_IfBlock1_IfBlock2_IfBlock3.valid = _L14_IfBlock1_IfBlock2_IfBlock3;
        _L13_IfBlock1_IfBlock2_IfBlock3.source =
          _L724_IfBlock1_IfBlock2_IfBlock3;
        kcg_copy_RadioMetadata_T_Common_Types_Pkg(
          &_L13_IfBlock1_IfBlock2_IfBlock3.radioMetadata,
          &_L825_IfBlock1_IfBlock2_IfBlock3);
        kcg_copy_BG_Header_T_BG_Types_Pkg(
          &_L13_IfBlock1_IfBlock2_IfBlock3.BG_Common_Header,
          &_L926_IfBlock1_IfBlock2_IfBlock3);
        kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
          &_L13_IfBlock1_IfBlock2_IfBlock3.Radio_Common_Header,
          &_L1027_IfBlock1_IfBlock2_IfBlock3);
        kcg_copy_CompressedPackets_T_Common_Types_Pkg(
          &_L13_IfBlock1_IfBlock2_IfBlock3.packets,
          &_L1128_IfBlock1_IfBlock2_IfBlock3);
        kcg_copy_RBC_Id_T_Common_Types_Pkg(
          &_L13_IfBlock1_IfBlock2_IfBlock3.sendingRBC,
          &_L1229_IfBlock1_IfBlock2_IfBlock3);
        kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
          &_12_messageForFilter3,
          &_L13_IfBlock1_IfBlock2_IfBlock3);
        kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
          &_9_messageForFilter3,
          &_12_messageForFilter3);
      }
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &_3_messageForFilter3,
        &_9_messageForFilter3);
    }
    else {
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &_L1_IfBlock1_IfBlock2,
        messageForFilter2);
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &_6_messageForFilter3,
        &_L1_IfBlock1_IfBlock2);
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &_3_messageForFilter3,
        &_6_messageForFilter3);
    }
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      _30_messageForFilter3,
      &_3_messageForFilter3);
    /* ck_IfBlock2 */ if (IfBlock2_clock_IfBlock1) {
      /* ck_IfBlock3 */ if (IfBlock3_clock_IfBlock1_IfBlock2) {
        /* ck_IfBlock4 */ if (IfBlock4_clock_IfBlock1_IfBlock2_IfBlock3) {
          _L6_IfBlock1_IfBlock2_IfBlock3_IfBlock4 =
            _L13_IfBlock1_IfBlock2_IfBlock3_IfBlock4.valid;
          _22_noname = _L6_IfBlock1_IfBlock2_IfBlock3_IfBlock4;
        }
      }
      else {
        _L6_IfBlock1_IfBlock2_IfBlock3 = _L3_IfBlock1_IfBlock2_IfBlock3.valid;
        noname = _L6_IfBlock1_IfBlock2_IfBlock3;
      }
    }
  }
  else {
    *_32_storeInBuffer2 = storeInBuffer2;
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &_L2_IfBlock1,
      inMessageForBuffer);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outMessageForBuffer,
      &_L2_IfBlock1);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      _31_outMessageForBuffer,
      &outMessageForBuffer);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &_L1_IfBlock1,
      messageForFilter2);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &messageForFilter3,
      &_L1_IfBlock1);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      _30_messageForFilter3,
      &messageForFilter3);
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SecondFilter_InformationFilter_Pkg_SecondFilter.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

