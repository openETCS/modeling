/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ThirdFilter_InformationFilter_Pkg_ThirdFilter.h"

/* InformationFilter_Pkg::ThirdFilter::ThirdFilter */
void ThirdFilter_InformationFilter_Pkg_ThirdFilter(
  /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::inMessage */ ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::inModus */ M_MODE inModus,
  /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::outMessage */ ReceivedMessage_T_Common_Types_Pkg *outMessage)
{
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::valid */
  static kcg_bool valid;
  /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::source */
  static MsgSource_T_Common_Types_Pkg source;
  /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::radio_metadata */
  static RadioMetadata_T_Common_Types_Pkg radio_metadata;
  /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::bg_header */
  static BG_Header_T_BG_Types_Pkg bg_header;
  /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::radio_header */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg radio_header;
  /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::packets */
  static CompressedPackets_T_Common_Types_Pkg packets;
  /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::sendingRBC */
  static RBC_Id_T_Common_Types_Pkg sendingRBC;
  /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::_L10 */
  static DMI_Available_Menu_int_T_DATA _L10;
  /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::_L11 */
  static ReceivedMessage_T_Common_Types_Pkg _L11;
  /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::_L12 */
  static array_int_30 _L12;
  /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::_L13 */
  static Metadata_T_Common_Types_Pkg _L13;
  /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::_L18 */
  static kcg_bool _L18;
  /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::_L22 */
  static ReceivedMessage_T_Common_Types_Pkg _L22;
  /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::_L23 */
  static array_169127 _L23;
  /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::_L24 */
  static M_MODE _L24;
  /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::_L25 */
  static kcg_bool _L25;
  /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::_L26 */
  static MsgSource_T_Common_Types_Pkg _L26;
  /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::_L27 */
  static RadioMetadata_T_Common_Types_Pkg _L27;
  /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::_L31 */
  static BG_Header_T_BG_Types_Pkg _L31;
  /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::_L32 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L32;
  /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::_L33 */
  static CompressedPackets_T_Common_Types_Pkg _L33;
  /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::_L52 */
  static CompressedPackets_T_Common_Types_Pkg _L52;
  /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::_L53 */
  static Metadata_T_Common_Types_Pkg _L53;
  /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::_L29 */
  static CompressedPackets_T_Common_Types_Pkg _L29;
  /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::_L30 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L30;
  /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::_L21 */
  static BG_Header_T_BG_Types_Pkg _L21;
  /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::_L20 */
  static RadioMetadata_T_Common_Types_Pkg _L20;
  /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::_L19 */
  static MsgSource_T_Common_Types_Pkg _L19;
  /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::_L68 */
  static RBC_Id_T_Common_Types_Pkg _L68;
  /* InformationFilter_Pkg::ThirdFilter::ThirdFilter::_L76 */
  static RBC_Id_T_Common_Types_Pkg _L76;
  
  _L24 = inModus;
  /* pow */ for (i3 = 0; i3 < 30; i3++) {
    _L23[i3] = _L24;
  }
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L11, inMessage);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L29, &_L11.packets);
  kcg_copy_Metadata_T_Common_Types_Pkg(&_L53, &_L29.PacketHeaders);
  for (i2 = 0; i2 < 30; i2++) {
    _L12[i2] = /* 1 */ GetPacketId_InformationFilter_Pkg_Common(&_L53[i2]);
  }
  for (i1 = 0; i1 < 30; i1++) {
    _L10[i1] = /* 2 */
      ModeFilter_InformationFilter_Pkg_ThirdFilter(_L23[i1], _L12[i1]);
  }
  _L18 = _L11.valid;
  valid = _L18;
  _L25 = valid;
  _L19 = _L11.source;
  source = _L19;
  _L26 = source;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(&_L20, &_L11.radioMetadata);
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(&radio_metadata, &_L20);
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(&_L27, &radio_metadata);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&_L21, &_L11.BG_Common_Header);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&bg_header, &_L21);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&_L31, &bg_header);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &_L30,
    &_L11.Radio_Common_Header);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(&radio_header, &_L30);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(&_L32, &radio_header);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&packets, &_L29);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L33, &packets);
  for (i = 0; i < 30; i++) {
    /* 1 */
    SetValidFlag_InformationFilter_Pkg_Common(_L10[i], &_L53[i], &_L13[i]);
  }
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L52, &_L33);
  if (kcg_true) {
    kcg_copy_Metadata_T_Common_Types_Pkg(&_L52.PacketHeaders, &_L13);
  }
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&_L68, &_L11.sendingRBC);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&sendingRBC, &_L68);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&_L76, &sendingRBC);
  _L22.valid = _L25;
  _L22.source = _L26;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(&_L22.radioMetadata, &_L27);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&_L22.BG_Common_Header, &_L31);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &_L22.Radio_Common_Header,
    &_L32);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L22.packets, &_L52);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&_L22.sendingRBC, &_L76);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(outMessage, &_L22);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ThirdFilter_InformationFilter_Pkg_ThirdFilter.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

