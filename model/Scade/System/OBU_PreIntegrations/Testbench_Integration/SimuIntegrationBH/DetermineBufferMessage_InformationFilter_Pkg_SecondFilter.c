/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "DetermineBufferMessage_InformationFilter_Pkg_SecondFilter.h"

/* InformationFilter_Pkg::SecondFilter::DetermineBufferMessage */
void DetermineBufferMessage_InformationFilter_Pkg_SecondFilter(
  /* InformationFilter_Pkg::SecondFilter::DetermineBufferMessage::messageForFilter2 */ ReceivedMessage_T_Common_Types_Pkg *messageForFilter2,
  /* InformationFilter_Pkg::SecondFilter::DetermineBufferMessage::inMessageForBuffer */ ReceivedMessage_T_Common_Types_Pkg *inMessageForBuffer,
  /* InformationFilter_Pkg::SecondFilter::DetermineBufferMessage::outMessageForBuffer */ ReceivedMessage_T_Common_Types_Pkg *outMessageForBuffer)
{
  static kcg_int i;
  /* InformationFilter_Pkg::SecondFilter::DetermineBufferMessage::_L1 */
  static ReceivedMessage_T_Common_Types_Pkg _L1;
  /* InformationFilter_Pkg::SecondFilter::DetermineBufferMessage::_L2 */
  static ReceivedMessage_T_Common_Types_Pkg _L2;
  /* InformationFilter_Pkg::SecondFilter::DetermineBufferMessage::_L16 */
  static RBC_Id_T_Common_Types_Pkg _L16;
  /* InformationFilter_Pkg::SecondFilter::DetermineBufferMessage::_L15 */
  static CompressedPackets_T_Common_Types_Pkg _L15;
  /* InformationFilter_Pkg::SecondFilter::DetermineBufferMessage::_L14 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L14;
  /* InformationFilter_Pkg::SecondFilter::DetermineBufferMessage::_L13 */
  static BG_Header_T_BG_Types_Pkg _L13;
  /* InformationFilter_Pkg::SecondFilter::DetermineBufferMessage::_L12 */
  static RadioMetadata_T_Common_Types_Pkg _L12;
  /* InformationFilter_Pkg::SecondFilter::DetermineBufferMessage::_L11 */
  static MsgSource_T_Common_Types_Pkg _L11;
  /* InformationFilter_Pkg::SecondFilter::DetermineBufferMessage::_L10 */
  static kcg_bool _L10;
  /* InformationFilter_Pkg::SecondFilter::DetermineBufferMessage::_L17 */
  static ReceivedMessage_T_Common_Types_Pkg _L17;
  /* InformationFilter_Pkg::SecondFilter::DetermineBufferMessage::_L19 */
  static Metadata_T_Common_Types_Pkg _L19;
  /* InformationFilter_Pkg::SecondFilter::DetermineBufferMessage::_L30 */
  static CompressedPackets_T_Common_Types_Pkg _L30;
  /* InformationFilter_Pkg::SecondFilter::DetermineBufferMessage::_L52 */
  static Metadata_T_Common_Types_Pkg _L52;
  /* InformationFilter_Pkg::SecondFilter::DetermineBufferMessage::_L123 */
  static CompressedPackets_T_Common_Types_Pkg _L123;
  /* InformationFilter_Pkg::SecondFilter::DetermineBufferMessage::_L125 */
  static Metadata_T_Common_Types_Pkg _L125;
  
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L1, messageForFilter2);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L2, inMessageForBuffer);
  _L10 = _L1.valid;
  _L11 = _L1.source;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(&_L12, &_L1.radioMetadata);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&_L13, &_L1.BG_Common_Header);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &_L14,
    &_L1.Radio_Common_Header);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L15, &_L1.packets);
  kcg_copy_Metadata_T_Common_Types_Pkg(&_L19, &_L15.PacketHeaders);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L30, &_L2.packets);
  kcg_copy_Metadata_T_Common_Types_Pkg(&_L52, &_L30.PacketHeaders);
  /* 4 */ for (i = 0; i < 30; i++) {
    /* DetermineValidFlags */
    DetermineValidFlags_InformationFilter_Pkg_SecondFilter(
      &_L19[i],
      &_L52[i],
      &_L125[i]);
  }
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L123, &_L15);
  if (kcg_true) {
    kcg_copy_Metadata_T_Common_Types_Pkg(&_L123.PacketHeaders, &_L125);
  }
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&_L16, &_L1.sendingRBC);
  _L17.valid = _L10;
  _L17.source = _L11;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(&_L17.radioMetadata, &_L12);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&_L17.BG_Common_Header, &_L13);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &_L17.Radio_Common_Header,
    &_L14);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L17.packets, &_L123);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&_L17.sendingRBC, &_L16);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(outMessageForBuffer, &_L17);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** DetermineBufferMessage_InformationFilter_Pkg_SecondFilter.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

