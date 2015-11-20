/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "validateDataDirection_General_ValidateDataDirectionGeneral_Pkg.h"

/* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General */
void validateDataDirection_General_ValidateDataDirectionGeneral_Pkg(
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::inMessage */ ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::trainRunningDirectionFromBG */ Q_DIRTRAIN trainRunningDirectionFromBG,
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::LRBGKnown */ kcg_bool LRBGKnown,
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::coordinateSystemAssigned */ kcg_bool coordinateSystemAssigned,
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::outMessage */ ReceivedMessage_T_Common_Types_Pkg *outMessage)
{
  static kcg_int i4;
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  static CompressedPackets_T_Common_Types_Pkg noname;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::trainRunningDirectionToBG */
  static Q_DIRTRAIN trainRunningDirectionToBG;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::trainPositionKnown */
  static kcg_bool trainPositionKnown;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::mandatoryVariableQ_DIR */
  static Q_DIR mandatoryVariableQ_DIR;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::msgSrc */
  static MsgSource_T_Common_Types_Pkg msgSrc;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::nid_message */
  static NID_MESSAGE nid_message;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::inputValid */
  static kcg_bool inputValid;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::outputValid */
  static kcg_bool outputValid;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::tmpPackets */
  static CompressedPackets_T_Common_Types_Pkg tmpPackets;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L1 */
  static ReceivedMessage_T_Common_Types_Pkg _L1;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L6 */
  static Metadata_T_Common_Types_Pkg _L6;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L7 */
  static Metadata_T_Common_Types_Pkg _L7;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L8 */
  static array_169747 _L8;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L9 */
  static ReceivedMessage_T_Common_Types_Pkg _L9;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L10 */
  static ReceivedMessage_T_Common_Types_Pkg _L10;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L17 */
  static kcg_bool _L17;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L16 */
  static MsgSource_T_Common_Types_Pkg _L16;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L15 */
  static RadioMetadata_T_Common_Types_Pkg _L15;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L14 */
  static BG_Header_T_BG_Types_Pkg _L14;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L13 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L13;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L12 */
  static CompressedPackets_T_Common_Types_Pkg _L12;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L19 */
  static array_169776 _L19;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L24 */
  static Q_DIRTRAIN _L24;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L25 */
  static Q_DIRTRAIN _L25;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L43 */
  static kcg_bool _L43;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L42 */
  static kcg_bool _L42;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L41 */
  static kcg_bool _L41;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L40 */
  static Q_DIR _L40;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L39 */
  static kcg_bool _L39;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L38 */
  static Q_DIRTRAIN _L38;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L36 */
  static kcg_bool _L36;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L35 */
  static kcg_bool _L35;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L34 */
  static kcg_bool _L34;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L33 */
  static Q_DIR _L33;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L32 */
  static kcg_bool _L32;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L31 */
  static Q_DIRTRAIN _L31;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L29 */
  static kcg_bool _L29;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L28 */
  static kcg_bool _L28;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L27 */
  static Q_DIR _L27;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L44 */
  static Q_DIR _L44;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L45 */
  static NID_MESSAGE _L45;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L46 */
  static Q_DIR _L46;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L47 */
  static Q_DIR _L47;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L48 */
  static Q_DIR _L48;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L49 */
  static Q_DIRTRAIN _L49;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L50 */
  static Q_DIRTRAIN _L50;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L51 */
  static kcg_bool _L51;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L52 */
  static NID_MESSAGE _L52;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L53 */
  static kcg_int _L53;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L54 */
  static kcg_bool _L54;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L55 */
  static kcg_bool _L55;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L56 */
  static MsgSource_T_Common_Types_Pkg _L56;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L57 */
  static MsgSource_T_Common_Types_Pkg _L57;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L60 */
  static kcg_bool _L60;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L64 */
  static kcg_bool _L64;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L67 */
  static MsgSource_T_Common_Types_Pkg _L67;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L66 */
  static MsgSource_T_Common_Types_Pkg _L66;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L65 */
  static kcg_bool _L65;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L68 */
  static kcg_bool _L68;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L69 */
  static kcg_bool _L69;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L72 */
  static kcg_bool _L72;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L71 */
  static MsgSource_T_Common_Types_Pkg _L71;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L70 */
  static MsgSource_T_Common_Types_Pkg _L70;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L73 */
  static kcg_bool _L73;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L76 */
  static NID_MESSAGE _L76;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L75 */
  static kcg_int _L75;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L74 */
  static kcg_bool _L74;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L77 */
  static kcg_bool _L77;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L78 */
  static kcg_bool _L78;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L79 */
  static kcg_bool _L79;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L80 */
  static DMI_Available_Menu_int_T_DATA _L80;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L81 */
  static kcg_bool _L81;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L82 */
  static kcg_bool _L82;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L83 */
  static kcg_bool _L83;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L84 */
  static DMI_Available_Menu_int_T_DATA _L84;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L98 */
  static CompressedPackets_T_Common_Types_Pkg _L98;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L99 */
  static CompressedPackets_T_Common_Types_Pkg _L99;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L100 */
  static CompressedPackets_T_Common_Types_Pkg _L100;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L101 */
  static RBC_Id_T_Common_Types_Pkg _L101;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L106 */
  static kcg_bool _L106;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L105 */
  static kcg_bool _L105;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L104 */
  static trainPosition_T_TrainPosition_Types_Pck _L104;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L103 */
  static kcg_bool _L103;
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::_L102 */
  static kcg_bool _L102;
  
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L1, inMessage);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L10, inMessage);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &_L13,
    &_L10.Radio_Common_Header);
  _L45 = _L13.nid_message;
  nid_message = _L45;
  _L52 = nid_message;
  _L53 = 15;
  _L51 = _L52 == _L53;
  _L44 = _L13.q_dir;
  mandatoryVariableQ_DIR = _L44;
  _L46 = mandatoryVariableQ_DIR;
  _L40 = Q_DIR_Nominal;
  _L32 = _L46 == _L40;
  _L31 = Q_DIRTRAIN_Nominal;
  _L24 = trainRunningDirectionFromBG;
  trainRunningDirectionToBG = _L24;
  _L49 = trainRunningDirectionToBG;
  _L36 = _L31 == _L49;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L104, trainPosition);
  _L106 = _L104.valid;
  _L102 = _L104.trainPositionIsUnknown;
  _L103 = !_L102;
  _L105 = _L106 & _L103;
  trainPositionKnown = _L105;
  _L35 = trainPositionKnown;
  _L77 = coordinateSystemAssigned;
  _L82 = LRBGKnown;
  _L42 = _L32 & _L36 & _L35 & _L77 & _L82;
  _L47 = mandatoryVariableQ_DIR;
  _L27 = Q_DIR_Reverse;
  _L28 = _L47 == _L27;
  _L38 = Q_DIRTRAIN_Reverse;
  _L50 = trainRunningDirectionToBG;
  _L39 = _L38 == _L50;
  _L43 = trainPositionKnown;
  _L78 = coordinateSystemAssigned;
  _L83 = LRBGKnown;
  _L29 = _L28 & _L39 & _L43 & _L78 & _L83;
  _L48 = mandatoryVariableQ_DIR;
  _L33 = Q_DIR_Both_directions;
  _L34 = _L48 == _L33;
  _L41 = _L42 | _L29 | _L34;
  _L16 = _L10.source;
  msgSrc = _L16;
  _L56 = msgSrc;
  _L57 = msrc_Euroradio_Common_Types_Pkg;
  _L55 = _L56 == _L57;
  _L54 = _L51 & _L41 & _L55;
  _L67 = msgSrc;
  _L66 = msrc_Eurobalise_Common_Types_Pkg;
  _L65 = _L67 == _L66;
  _L71 = msgSrc;
  _L70 = msrc_Euroradio_Common_Types_Pkg;
  _L72 = _L71 == _L70;
  _L76 = nid_message;
  _L75 = 15;
  _L74 = _L76 != _L75;
  _L73 = _L72 & _L74;
  _L64 = _L54 | _L65 | _L73;
  _L17 = _L10.valid;
  inputValid = _L17;
  _L69 = inputValid;
  _L68 = _L64 & _L69;
  outputValid = _L68;
  _L60 = outputValid;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(&_L15, &_L10.radioMetadata);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&_L14, &_L10.BG_Common_Header);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L99, &_L1.packets);
  kcg_copy_Metadata_T_Common_Types_Pkg(&_L6, &_L1.packets.PacketHeaders);
  _L25 = trainRunningDirectionToBG;
  /* pow */ for (i4 = 0; i4 < 30; i4++) {
    _L8[i4] = _L25;
  }
  _L81 = LRBGKnown;
  /* pow */ for (i3 = 0; i3 < 30; i3++) {
    _L84[i3] = _L81;
  }
  /* pow */ for (i2 = 0; i2 < 30; i2++) {
    kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L19[i2], &_L104);
  }
  _L79 = coordinateSystemAssigned;
  /* pow */ for (i1 = 0; i1 < 30; i1++) {
    _L80[i1] = _L79;
  }
  for (i = 0; i < 30; i++) {
    /* 1 */
    validateDataDirectionForSinglePacket_ValidateDataDirectionGeneral_Pkg_Subfunctions(
      &_L6[i],
      _L8[i],
      _L84[i],
      &_L19[i],
      _L80[i],
      &_L7[i]);
  }
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L98, &_L99);
  if (kcg_true) {
    kcg_copy_Metadata_T_Common_Types_Pkg(&_L98.PacketHeaders, &_L7);
  }
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&tmpPackets, &_L98);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L100, &tmpPackets);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&_L101, &_L10.sendingRBC);
  _L9.valid = _L60;
  _L9.source = _L16;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(&_L9.radioMetadata, &_L15);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&_L9.BG_Common_Header, &_L14);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &_L9.Radio_Common_Header,
    &_L13);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L9.packets, &_L100);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&_L9.sendingRBC, &_L101);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(outMessage, &_L9);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L12, &_L10.packets);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&noname, &_L12);
}

/* $**************** KCG Version 6.4 (build i21) ****************
** validateDataDirection_General_ValidateDataDirectionGeneral_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

