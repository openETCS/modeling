/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "msg_2_passedBG_CalculateTrainPosition_Pkg_msgAdapter_Pkg.h"

/* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG */
void msg_2_passedBG_CalculateTrainPosition_Pkg_msgAdapter_Pkg(
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::msgFromTrack */ ReceivedMessage_T_Common_Types_Pkg *msgFromTrack,
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::passedBG */ passedBG_T_BG_Types_Pkg *passedBG,
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::BG_passed */ kcg_bool *BG_passed,
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::onlyBGsAnnouncedViaRadio */ kcg_bool *onlyBGsAnnouncedViaRadio)
{
  static RadioMetadata_T_Common_Types_Pkg noname;
  static NID_BG _1_noname;
  static RBC_Id_T_Common_Types_Pkg _2_noname;
  static NID_LRBG _3_noname;
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L12 */
  static CompressedPackets_T_Common_Types_Pkg _L12;
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L11 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L11;
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L10 */
  static BG_Header_T_BG_Types_Pkg _L10;
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L9 */
  static RadioMetadata_T_Common_Types_Pkg _L9;
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L8 */
  static MsgSource_T_Common_Types_Pkg _L8;
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L7 */
  static kcg_bool _L7;
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L13 */
  static ReceivedMessage_T_Common_Types_Pkg _L13;
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L80 */
  static passedBG_T_BG_Types_Pkg _L80;
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L90 */
  static NID_LRBG _L90;
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L91 */
  static kcg_bool _L91;
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L93 */
  static kcg_bool _L93;
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L94 */
  static kcg_bool _L94;
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L95 */
  static kcg_bool _L95;
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L109 */
  static MsgSource_T_Common_Types_Pkg _L109;
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L108 */
  static MsgSource_T_Common_Types_Pkg _L108;
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L110 */
  static kcg_bool _L110;
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L111 */
  static kcg_bool _L111;
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L112 */
  static kcg_bool _L112;
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L113 */
  static kcg_bool _L113;
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L245 */
  static kcg_bool _L245;
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L114 */
  static kcg_bool _L114;
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L295 */
  static LinkedBGs_T_BG_Types_Pkg _L295;
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L296 */
  static NID_LRBG _L296;
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L297 */
  static NID_C _L297;
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L298 */
  static NID_BG _L298;
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L299 */
  static NID_LRBG _L299;
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L300 */
  static kcg_bool _L300;
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L306 */
  static NID_BG _L306;
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L305 */
  static NID_C _L305;
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L322 */
  static RBC_Id_T_Common_Types_Pkg _L322;
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L324 */
  static NID_BG _L324;
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L323 */
  static NID_C _L323;
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L325 */
  static NID_LRBG _L325;
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L326 */
  static kcg_bool _L326;
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L327 */
  static kcg_int _L327;
  /* CalculateTrainPosition_Pkg::msgAdapter_Pkg::msg_2_passedBG::_L328 */
  static kcg_int _L328;
  
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L13, msgFromTrack);
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&_L322, &_L13.sendingRBC);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L12, &_L13.packets);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &_L11,
    &_L13.Radio_Common_Header);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&_L10, &_L13.BG_Common_Header);
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(&_L9, &_L13.radioMetadata);
  _L8 = _L13.source;
  _L7 = _L13.valid;
  _L94 = _L10.valid;
  _L93 = _L7 & _L94;
  _L109 = msrc_Euroradio_Common_Types_Pkg;
  _L114 = _L8 == _L109;
  _L326 = kcg_true;
  _L90 = _L11.nid_lrbg;
  /* 1 */ DECODE_NID_LRBG_TM_conversions(_L90, &_L323, &_L324);
  _L328 = 100000;
  _L327 = _L324 % _L328;
  _L325 = /* 2 */
    nidC_nidBG_2_NIDLRBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      _L326,
      _L323,
      _L327);
  _L300 = _L10.valid;
  _L297 = _L10.nid_c;
  _L298 = _L10.nid_bg;
  _L299 = /* 1 */
    nidC_nidBG_2_NIDLRBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      _L300,
      _L297,
      _L298);
  /* 1 */ if (_L114) {
    _L296 = _L325;
  }
  else {
    _L296 = _L299;
  }
  /* 3 */
  NIDLRBG_2_nidC_nidBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    _L7,
    _L296,
    &_L305,
    &_L306);
  /* 2 */ Read_P005_ForCalcTrainPos_TM_specific(&_L12, _L296, _L305, &_L295);
  _L245 = _L295[0].valid;
  _L91 = _L7 & _L245;
  _L95 = _L93 | _L91;
  _L80.valid = _L95;
  kcg_copy_BG_Header_T_BG_Types_Pkg(&_L80.BG_Header, &_L10);
  kcg_copy_LinkedBGs_T_BG_Types_Pkg(&_L80.linkedBGs, &_L295);
  kcg_copy_passedBG_T_BG_Types_Pkg(passedBG, &_L80);
  _L108 = msrc_Eurobalise_Common_Types_Pkg;
  _L110 = _L108 == _L8;
  _L111 = _L7 & _L110 & _L94;
  *BG_passed = _L111;
  _L112 = !_L94;
  _L113 = _L7 & _L112 & _L114 & _L245;
  *onlyBGsAnnouncedViaRadio = _L113;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(&noname, &_L9);
  _1_noname = _L306;
  kcg_copy_RBC_Id_T_Common_Types_Pkg(&_2_noname, &_L322);
  _3_noname = _L90;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** msg_2_passedBG_CalculateTrainPosition_Pkg_msgAdapter_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

