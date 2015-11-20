/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "fishHandoverCmds_Handover_Pkg_handoverUtils_Pkg.h"

/* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds */
void fishHandoverCmds_Handover_Pkg_handoverUtils_Pkg(
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::dataFromTrack */ msgFromTrack_T_RCM_MsgTypes_Pkg *dataFromTrack,
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::dataFromHandingOverRBC */ msgFromTrack_T_RCM_MsgTypes_Pkg *dataFromHandingOverRBC,
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::p45_radioNetworkRegistrationOrder */ msgFromTrack_T_RCM_MsgTypes_Pkg *p45_radioNetworkRegistrationOrder,
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::p131_RBCTransitionOrder_decoced */ p131_q_rbcTransitionOrder_T_Handover_Pkg *p131_RBCTransitionOrder_decoced,
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::p131_RBCTransitionOrder */ msgFromTrack_T_RCM_MsgTypes_Pkg *p131_RBCTransitionOrder,
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::p42_terminateCmd_from_handingOverRBC */ msgFromTrack_T_RCM_MsgTypes_Pkg *p42_terminateCmd_from_handingOverRBC,
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::sessionCmdsFromTrack */ msgFromTrack_T_RCM_MsgTypes_Pkg *sessionCmdsFromTrack)
{
  static P42_SessionManagement_T_Packet_Types_Pkg noname;
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg _1_noname;
  static kcg_bool _2_noname;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::handoverRelevantCmdValid */
  static kcg_bool handoverRelevantCmdValid;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L4 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L4;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L1 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L1;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L6 */
  static kcg_bool _L6;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L7 */
  static CompressedPackets_T_Common_Types_Pkg _L7;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L8 */
  static kcg_bool _L8;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L9 */
  static p131_q_rbcTransitionOrder_T_Handover_Pkg _L9;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L27 */
  static kcg_bool _L27;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L28 */
  static kcg_bool _L28;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L29 */
  static kcg_bool _L29;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L30 */
  static MsgSource_T_Common_Types_Pkg _L30;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L34 */
  static kcg_bool _L34;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L31 */
  static MsgSource_T_Common_Types_Pkg _L31;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L35 */
  static BG_Header_T_BG_Types_Pkg _L35;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L36 */
  static kcg_bool _L36;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L37 */
  static NID_C _L37;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L39 */
  static NID_BG _L39;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L40 */
  static NID_LRBG _L40;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L41 */
  static NID_LRBG _L41;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L42 */
  static NID_LRBG _L42;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L43 */
  static NID_RBC _L43;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L45 */
  static kcg_int _L45;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L46 */
  static kcg_int _L46;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L47 */
  static CompressedPackets_T_Common_Types_Pkg _L47;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L48 */
  static kcg_bool _L48;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L49 */
  static NID_RADIO _L49;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L50 */
  static kcg_bool _L50;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L51 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L51;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L78 */
  static P45_RadioNetworkRegistration_T_Packet_Types_Pkg _L78;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L79 */
  static P131_OBU_T_TM _L79;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L95 */
  static Q_RBC _L95;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L94 */
  static kcg_bool _L94;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L92 */
  static kcg_bool _L92;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L91 */
  static Q_RBC _L91;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L90 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L90;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L89 */
  static kcg_bool _L89;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L97 */
  static kcg_bool _L97;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L98 */
  static MsgSource_T_Common_Types_Pkg _L98;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L100 */
  static MsgSource_T_Common_Types_Pkg _L100;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L99 */
  static kcg_bool _L99;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L105 */
  static kcg_bool _L105;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L107 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L107;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L108 */
  static kcg_bool _L108;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L109 */
  static kcg_bool _L109;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L112 */
  static kcg_bool _L112;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L114 */
  static kcg_bool _L114;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L115 */
  static P42_SessionManagement_T_Packet_Types_Pkg _L115;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L113 */
  static CompressedPackets_T_Common_Types_Pkg _L113;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L162 */
  static kcg_bool _L162;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L163 */
  static MsgSource_T_Common_Types_Pkg _L163;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L164 */
  static kcg_bool _L164;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L165 */
  static MsgSource_T_Common_Types_Pkg _L165;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L166 */
  static Radio_TrackTrain_Header_T_Radio_Types_Pkg _L166;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L167 */
  static NID_MESSAGE _L167;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L168 */
  static NID_MESSAGE _L168;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L169 */
  static NID_MESSAGE _L169;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L170 */
  static NID_MESSAGE _L170;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L171 */
  static kcg_bool _L171;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L172 */
  static kcg_bool _L172;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L173 */
  static kcg_bool _L173;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L174 */
  static kcg_bool _L174;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L176 */
  static kcg_bool _L176;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L177 */
  static kcg_bool _L177;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L178 */
  static kcg_bool _L178;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L179 */
  static kcg_bool _L179;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L180 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L180;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L181 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L181;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L103 */
  static P42_SessionManagement_T_Packet_Types_Pkg _L103;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L102 */
  static kcg_bool _L102;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L101 */
  static CompressedPackets_T_Common_Types_Pkg _L101;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L182 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L182;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L183 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L183;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L184 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L184;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L185 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L185;
  /* Handover_Pkg::handoverUtils_Pkg::fishHandoverCmds::_L186 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L186;
  
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L1, dataFromTrack);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L7, &_L1.packets);
  /* 1 */ Read_P045_TM(&_L7, &_L6, &_L78);
  _L27 = _L1.valid;
  _L109 = _L6 & _L27;
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &_L182,
    (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
  /* 4 */ if (_L109) {
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L183, &_L1);
  }
  else {
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L183, &_L182);
  }
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    p45_radioNetworkRegistrationOrder,
    &_L183);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L4, dataFromHandingOverRBC);
  _L97 = _L4.valid;
  _L98 = _L4.source;
  _L100 = msrc_Euroradio_Common_Types_Pkg;
  _L99 = _L98 == _L100;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L101, &_L4.packets);
  /* 1 */ Read_P042_TM(&_L101, &_L102, &_L103);
  _L91 = Q_RBC_Terminate_communication_session;
  _L95 = _L103.q_rbc;
  _L92 = _L91 == _L95;
  _L94 = _L103.valid;
  _L89 = _L97 & _L99 & _L102 & _L92 & _L94;
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &_L186,
    (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
  /* 2 */ if (_L89) {
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L90, &_L4);
  }
  else {
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L90, &_L186);
  }
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    p42_terminateCmd_from_handingOverRBC,
    &_L90);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L47, &_L1.packets);
  /* 1 */ Read_P131_TM(&_L47, &_L8, &_L79);
  _L28 = _L79.valid;
  _L29 = _L27 & _L28 & _L8;
  _L30 = _L1.source;
  _L31 = msrc_Eurobalise_Common_Types_Pkg;
  _L34 = _L31 == _L30;
  kcg_copy_BG_Header_T_BG_Types_Pkg(&_L35, &_L1.BG_Common_Header);
  _L36 = _L35.valid;
  _L37 = _L35.nid_c;
  _L39 = _L35.nid_bg;
  _L40 = /* 1 */
    nidC_nidBG_2_NIDLRBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
      _L36,
      _L37,
      _L39);
  _L41 = _L1.Radio_Common_Header.nid_lrbg;
  /* 1 */ if (_L34) {
    _L42 = _L40;
  }
  else {
    _L42 = _L41;
  }
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &_L51,
    (LocWithInAcc_T_Obu_BasicTypes_Pkg *) &cLocWithInAcc_0_Obu_BasicTypes_Pkg);
  _L46 = cNID_RBC_contactLastKnownRBC_MoRC_Pck_Coder_Pkg;
  _L43 = _L79.nid_rbc;
  _L48 = _L46 == _L43;
  _L45 = cNID_RADIO_useTheShortNumberStoredOnboard_MoRC_Pck_Coder_Pkg;
  _L49 = _L79.nid_radio;
  _L50 = _L45 == _L49;
  _L9.valid = _L29;
  _L9.source = _L30;
  _L9.nid_lrbg = _L42;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L9.location, &_L51);
  _L9.contactLastKnownRBC = _L48;
  _L9.useTheShortNumberStoredOnboard = _L50;
  kcg_copy_P131_RBCTransitionOrder_T_Packet_Types_Pkg(&_L9.order, &_L79);
  kcg_copy_p131_q_rbcTransitionOrder_T_Handover_Pkg(
    p131_RBCTransitionOrder_decoced,
    &_L9);
  _L105 = _L109 | _L29 | _L89;
  handoverRelevantCmdValid = _L105;
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L107, dataFromTrack);
  _L108 = handoverRelevantCmdValid;
  _L112 = _L107.valid;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_L113, &_L107.packets);
  /* 2 */ Read_P042_TM(&_L113, &_L114, &_L115);
  _L162 = !_L108;
  _L163 = _L107.source;
  _L165 = msrc_Euroradio_Common_Types_Pkg;
  _L164 = _L163 == _L165;
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &_L166,
    &_L107.Radio_Common_Header);
  _L167 = _L166.nid_message;
  _L168 = cm38_Initiation_of_a_Communication_Session_Id_Pkg;
  _L169 = cm39_Acknowledgement_of_termination_of_a_communication_session_Id_Pkg;
  _L170 = cm32_RBC_RIU_System_Version_Id_Pkg;
  _L171 = _L167 == _L168;
  _L172 = _L167 == _L169;
  _L173 = _L167 == _L170;
  _L174 = _L171 | _L172 | _L173;
  _L176 = _L112 & _L114;
  _L177 = _L112 & _L164 & _L174;
  _L178 = _L176 | _L177;
  _L179 = _L178 & _L178;
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &_L181,
    (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
  /* 3 */ if (_L179) {
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L180, &_L107);
  }
  else {
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L180, &_L181);
  }
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(sessionCmdsFromTrack, &_L180);
  kcg_copy_P42_SessionManagement_T_Packet_Types_Pkg(&noname, &_L115);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &_L185,
    (msgFromTrack_T_RCM_MsgTypes_Pkg *) &cNoMessageFromTrack_Handover_Pkg);
  /* 5 */ if (_L29) {
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L184, &_L1);
  }
  else {
    kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L184, &_L185);
  }
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(p131_RBCTransitionOrder, &_L184);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(&_1_noname, &_L78);
  _2_noname = _L162;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** fishHandoverCmds_Handover_Pkg_handoverUtils_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

