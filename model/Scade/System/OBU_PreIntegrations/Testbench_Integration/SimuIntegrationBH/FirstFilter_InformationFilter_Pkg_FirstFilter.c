/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FirstFilter_InformationFilter_Pkg_FirstFilter.h"

/* InformationFilter_Pkg::FirstFilter::FirstFilter */
void FirstFilter_InformationFilter_Pkg_FirstFilter(
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inMessage */ ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inLevel */ M_LEVEL inLevel,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inFilterEvents */ filterRelatedEvents_T_Common_Types_Pkg *inFilterEvents,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::messageForFilter2 */ ReceivedMessage_T_Common_Types_Pkg *messageForFilter2,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::messageForBuffer */ ReceivedMessage_T_Common_Types_Pkg *messageForBuffer,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::storeInBuffer1 */ kcg_bool *storeInBuffer1)
{
  static kcg_int i14;
  static kcg_int i13;
  static kcg_int i12;
  static kcg_int i11;
  static kcg_int i10;
  static kcg_int i9;
  static kcg_int i8;
  static kcg_int i7;
  static kcg_int i6;
  static kcg_int i5;
  static kcg_int i4;
  static kcg_int i3;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter */
  static kcg_bool acc;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::source */
  static MsgSource_T_Common_Types_Pkg source;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::valid */
  static kcg_bool valid;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::bg_header */
  static BG_Header_T_BG_Types_Pkg bg_header;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::radio_metadata */
  static RadioMetadata_T_Common_Types_Pkg radio_metadata;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::radio_header */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg radio_header;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::packets */
  static CompressedPackets_T_Common_Types_Pkg packets;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::sendingRBC */
  static RBC_Id_T_Common_Types_Pkg sendingRBC;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L2 */
  static ReceivedMessage_T_Common_Types_Pkg _L2;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L6 */
  static kcg_bool _L6;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L5 */
  static MsgSource_T_Common_Types_Pkg _L5;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L7 */
  static M_LEVEL _L7;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L8 */
  static RadioMetadata_T_Common_Types_Pkg _L8;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L9 */
  static BG_Header_T_BG_Types_Pkg _L9;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L1 */
  static DMI_Available_Menu_int_T_DATA _L1;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L46 */
  static array_172744 _L46;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L48 */
  static MsgSource_T_Common_Types_Pkg _L48;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L49 */
  static array_int_30 _L49;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L45 */
  static array_169300 _L45;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L82 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L82;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L81 */
  static CompressedPackets_T_Common_Types_Pkg _L81;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L98 */
  static Metadata_T_Common_Types_Pkg _L98;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L106 */
  static DMI_Available_Menu_int_T_DATA _L106;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L108 */
  static DMI_Available_Menu_int_T_DATA _L108;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L110 */
  static DMI_Available_Menu_int_T_DATA _L110;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L111 */
  static DMI_Available_Menu_int_T_DATA _L111;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L112 */
  static array_int_30 _L112;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L113 */
  static DMI_Available_Menu_int_T_DATA _L113;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L114 */
  static DMI_Available_Menu_int_T_DATA _L114;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L116 */
  static kcg_bool _L116;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L117 */
  static kcg_bool _L117;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L120 */
  static DMI_Available_Menu_int_T_DATA _L120;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L121 */
  static DMI_Available_Menu_int_T_DATA _L121;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L129 */
  static RBC_Id_T_Common_Types_Pkg _L129;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L139 */
  static filterRelatedEvents_T_Common_Types_Pkg _L139;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L148 */
  static kcg_bool _L148;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L149 */
  static kcg_bool _L149;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L150 */
  static kcg_bool _L150;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L151 */
  static kcg_bool _L151;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L152 */
  static kcg_int _L152;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L153 */
  static kcg_bool _L153;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L154 */
  static kcg_bool _L154;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L155 */
  static kcg_bool _L155;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L175 */
  static RBC_Id_T_Common_Types_Pkg _L175;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L174 */
  static ReceivedMessage_T_Common_Types_Pkg _L174;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L173 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L173;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L172 */
  static BG_Header_T_BG_Types_Pkg _L172;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L171 */
  static CompressedPackets_T_Common_Types_Pkg _L171;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L170 */
  static CompressedPackets_T_Common_Types_Pkg _L170;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L169 */
  static RadioMetadata_T_Common_Types_Pkg _L169;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L168 */
  static kcg_bool _L168;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L167 */
  static MsgSource_T_Common_Types_Pkg _L167;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L138 */
  static RBC_Id_T_Common_Types_Pkg _L138;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L105 */
  static CompressedPackets_T_Common_Types_Pkg _L105;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L85 */
  static CompressedPackets_T_Common_Types_Pkg _L85;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L84 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L84;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L83 */
  static RadioMetadata_T_Common_Types_Pkg _L83;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L78 */
  static BG_Header_T_BG_Types_Pkg _L78;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L77 */
  static MsgSource_T_Common_Types_Pkg _L77;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L76 */
  static kcg_bool _L76;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L58 */
  static ReceivedMessage_T_Common_Types_Pkg _L58;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L183 */
  static Metadata_T_Common_Types_Pkg _L183;
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::_L184 */
  static Metadata_T_Common_Types_Pkg _L184;
  
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L2, inMessage);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&_L129, &_L2.sendingRBC);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L81, &_L2.packets);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &_L82,
    &_L2.Radio_Common_Header);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&_L9, &_L2.BG_Common_Header);
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(&_L8, &_L2.radioMetadata);
  _L5 = _L2.source;
  _L6 = _L2.valid;
  _L7 = inLevel;
  kcg_copy_filterRelatedEvents_T_Common_Types_Pkg(&_L139, inFilterEvents);
  _L148 = _L139.pendingL1Transition;
  /* pow */ for (i14 = 0; i14 < 30; i14++) {
    _L106[i14] = _L148;
  }
  _L149 = _L139.pendingL12L3Transition;
  /* pow */ for (i13 = 0; i13 < 30; i13++) {
    _L108[i13] = _L149;
  }
  _L150 = _L139.pendingAckOfTrainDataFromRBC;
  /* pow */ for (i12 = 0; i12 < 30; i12++) {
    _L110[i12] = _L150;
  }
  _L151 = _L139.emergencyStopAccepted;
  /* pow */ for (i11 = 0; i11 < 30; i11++) {
    _L111[i11] = _L151;
  }
  _L152 = _L139.lastAckTextMessageId;
  /* pow */ for (i10 = 0; i10 < 30; i10++) {
    _L112[i10] = _L152;
  }
  _L153 = _L139.pendingNTCTransition;
  /* pow */ for (i9 = 0; i9 < 30; i9++) {
    _L113[i9] = _L153;
  }
  _L154 = _L139.SPPAndGradientOnBoard;
  /* pow */ for (i8 = 0; i8 < 30; i8++) {
    _L120[i8] = _L154;
  }
  _L155 = _L139.MACoverNotFullLength;
  /* pow */ for (i7 = 0; i7 < 30; i7++) {
    _L121[i7] = _L155;
  }
  /* pow */ for (i6 = 0; i6 < 30; i6++) {
    _L45[i6] = _L7;
  }
  source = _L5;
  _L48 = source;
  /* pow */ for (i5 = 0; i5 < 30; i5++) {
    _L46[i5] = _L48;
  }
  kcg_copy_Metadata_T_Common_Types_Pkg(&_L98, &_L81.PacketHeaders);
  for (i4 = 0; i4 < 30; i4++) {
    _L49[i4] = /* 1 */ GetPacketId_InformationFilter_Pkg_Common(&_L98[i4]);
  }
  for (i3 = 0; i3 < 30; i3++) {
    /* 1 */
    LevelFilter_InformationFilter_Pkg_FirstFilter(
      _L106[i3],
      _L108[i3],
      _L110[i3],
      _L111[i3],
      _L112[i3],
      _L113[i3],
      _L120[i3],
      _L121[i3],
      _L45[i3],
      _L46[i3],
      _L49[i3],
      &_L114[i3],
      &_L1[i3]);
  }
  valid = _L6;
  kcg_copy_BG_Header_T_BG_Types_Pkg(&bg_header, &_L9);
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(&radio_metadata, &_L8);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(&radio_header, &_L82);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&packets, &_L81);
  _L116 = kcg_false;
  _L117 = _L116;
  /* 2 */ for (i2 = 0; i2 < 30; i2++) {
    acc = _L117;
    _L117 = acc | _L114[i2];
  }
  *storeInBuffer1 = _L117;
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&sendingRBC, &_L129);
  _L167 = source;
  _L168 = valid;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(&_L169, &radio_metadata);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L171, &packets);
  /* 15 */ for (i1 = 0; i1 < 30; i1++) {
    /* 2 */
    SetValidFlag_InformationFilter_Pkg_Common(_L1[i1], &_L98[i1], &_L184[i1]);
  }
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L170, &_L171);
  if (kcg_true) {
    kcg_copy_Metadata_T_Common_Types_Pkg(&_L170.PacketHeaders, &_L184);
  }
  kcg_copy_BG_Header_T_BG_Types_Pkg(&_L172, &bg_header);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(&_L173, &radio_header);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&_L175, &sendingRBC);
  _L174.valid = _L168;
  _L174.source = _L167;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(&_L174.radioMetadata, &_L169);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&_L174.BG_Common_Header, &_L172);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &_L174.Radio_Common_Header,
    &_L173);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L174.packets, &_L170);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&_L174.sendingRBC, &_L175);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(messageForFilter2, &_L174);
  _L76 = valid;
  _L77 = source;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(&_L83, &radio_metadata);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&_L78, &bg_header);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(&_L84, &radio_header);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L85, &packets);
  /* 14 */ for (i = 0; i < 30; i++) {
    /* 1 */
    SetValidFlag_InformationFilter_Pkg_Common(_L114[i], &_L98[i], &_L183[i]);
  }
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L105, &_L85);
  if (kcg_true) {
    kcg_copy_Metadata_T_Common_Types_Pkg(&_L105.PacketHeaders, &_L183);
  }
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&_L138, &sendingRBC);
  _L58.valid = _L76;
  _L58.source = _L77;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(&_L58.radioMetadata, &_L83);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&_L58.BG_Common_Header, &_L78);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &_L58.Radio_Common_Header,
    &_L84);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L58.packets, &_L105);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&_L58.sendingRBC, &_L138);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(messageForBuffer, &_L58);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** FirstFilter_InformationFilter_Pkg_FirstFilter.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

