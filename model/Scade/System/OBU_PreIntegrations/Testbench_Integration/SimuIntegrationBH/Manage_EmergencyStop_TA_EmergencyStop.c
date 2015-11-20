/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Manage_EmergencyStop_TA_EmergencyStop.h"

#ifndef KCG_USER_DEFINED_INIT
void Manage_EmergencyStop_init_TA_EmergencyStop(
  outC_Manage_EmergencyStop_TA_EmergencyStop *outC)
{
  static kcg_int i5;
  static kcg_int i4;
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  for (i1 = 0; i1 < 5; i1++) {
    outC->bus_out[i1].Message.valid = kcg_true;
    outC->bus_out[i1].Message.nid_message = 0;
    outC->bus_out[i1].Message.l_message = 0;
    outC->bus_out[i1].Message.t_train = 0;
    outC->bus_out[i1].Message.nid_engine = 0;
    outC->bus_out[i1].Message.field1 = 0;
    outC->bus_out[i1].Message.field2 = 0;
    outC->bus_out[i1].Message.field3 = 0;
    for (i = 0; i < 50; i++) {
      outC->bus_out[i1].OptionalPackets[i] = 0;
    }
  }
  outC->cesRevoked = kcg_true;
  outC->newEOA = 0;
  outC->updateEOA = kcg_true;
  outC->cesAccepted = kcg_true;
  outC->tripTrain = kcg_true;
  outC->message147.present = kcg_true;
  outC->message147.header.present = kcg_true;
  outC->message147.header.nid_message = 0;
  outC->message147.header.t_train = 0;
  outC->message147.header.nid_engine = 0;
  outC->message147.header.xQ_MARQSTREASON =
    Q_MARQSTREASON_Start_selected_by_driver;
  outC->message147.header.xT_TRAIN = 0;
  outC->message147.header.xNID_EM = 0;
  outC->message147.header.xQ_EMERGENCYSTOP =
    Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA;
  outC->message147.header.xNID_TEXTMESSAGE = 0;
  outC->message147.packets.p0.valid = kcg_true;
  outC->message147.packets.p0.packet0.NID_PACKET = 0;
  outC->message147.packets.p0.packet0.L_PACKET = 0;
  outC->message147.packets.p0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->message147.packets.p0.packet0.NID_LRBG = 0;
  outC->message147.packets.p0.packet0.D_LRBG = 0;
  outC->message147.packets.p0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->message147.packets.p0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->message147.packets.p0.packet0.L_DOUBTOVER = 0;
  outC->message147.packets.p0.packet0.L_DOUBTUNDER = 0;
  outC->message147.packets.p0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->message147.packets.p0.packet0.L_TRAININT = 0;
  outC->message147.packets.p0.packet0.V_TRAIN = 0;
  outC->message147.packets.p0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->message147.packets.p0.packet0.mode = M_MODE_Full_Supervision;
  outC->message147.packets.p0.packet0.level = M_LEVEL_Level_0;
  outC->message147.packets.p0.packet0.NID_NTC = 0;
  outC->message147.packets.p1.valid = kcg_true;
  outC->message147.packets.p1.packet1.NID_PACKET = 0;
  outC->message147.packets.p1.packet1.L_PACKET = 0;
  outC->message147.packets.p1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->message147.packets.p1.packet1.NID_LRBG = 0;
  outC->message147.packets.p1.packet1.NID_PRVLRBG = 0;
  outC->message147.packets.p1.packet1.D_LRBG = 0;
  outC->message147.packets.p1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->message147.packets.p1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->message147.packets.p1.packet1.L_DOUBTOVER = 0;
  outC->message147.packets.p1.packet1.L_DOUBTUNDER = 0;
  outC->message147.packets.p1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->message147.packets.p1.packet1.L_TRAININT = 0;
  outC->message147.packets.p1.packet1.V_TRAIN = 0;
  outC->message147.packets.p1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->message147.packets.p1.packet1.mode = M_MODE_Full_Supervision;
  outC->message147.packets.p1.packet1.level = M_LEVEL_Level_0;
  outC->message147.packets.p1.packet1.NID_NTC = 0;
  outC->message147.packets.p3.valid = kcg_true;
  outC->message147.packets.p3.number = 0;
  for (i3 = 0; i3 < 1; i3++) {
    outC->message147.packets.p3.aNID_RADIO[i3].valid = kcg_true;
    for (i2 = 0; i2 < 15; i2++) {
      outC->message147.packets.p3.aNID_RADIO[i3].telephoneNumber[i2] = 0;
    }
  }
  outC->message147.packets.p4.valid = kcg_true;
  outC->message147.packets.p4.m_error =
    M_ERROR_Balise_group_linking_consistency_error;
  outC->message147.packets.p5.valid = kcg_true;
  outC->message147.packets.p5.TrainRunningNumber = 0;
  outC->message147.packets.p9.valid = kcg_true;
  outC->message147.packets.p9.transitionInformation = 0;
  outC->message147.packets.p11.valid = kcg_true;
  outC->message147.packets.p11.nc_cdtrain = NC_CDTRAIN_Cant_Deficiency_80_mm;
  outC->message147.packets.p11.nc_train =
    NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category;
  outC->message147.packets.p11.l_train = 0;
  outC->message147.packets.p11.v_maxtrain = 0;
  outC->message147.packets.p11.m_loadinggoage =
    M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles;
  outC->message147.packets.p11.m_axleloadcat = M_AXLELOADCAT_A;
  outC->message147.packets.p11.m_airtight = M_AIRTIGHT_Not_fitted;
  outC->message147.packets.p11.n_axle = 0;
  outC->message147.packets.p11.nIter_tractionIdentity = 0;
  for (i4 = 0; i4 < 4; i4++) {
    outC->message147.packets.p11.tractionIdentity[i4].m_voltage =
      M_VOLTAGE_Line_not_fitted_with_any_traction_system;
    outC->message147.packets.p11.tractionIdentity[i4].nid_ctraction = 0;
  }
  outC->message147.packets.p11.nIter_ntc = 0;
  for (i5 = 0; i5 < 5; i5++) {
    outC->message147.packets.p11.nid_ntc[i5] = 0;
  }
  outC->rejectNewMA = kcg_true;
  /* 2 */ Send_M147_init_TM_radio_messages(&outC->Context_2);
  /* 1 */ ES_Process_Unconditional_init_TA_EmergencyStop(&outC->_1_Context_1);
  /* 1 */ ES_Process_Conditional_init_TA_EmergencyStop(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Manage_EmergencyStop_reset_TA_EmergencyStop(
  outC_Manage_EmergencyStop_TA_EmergencyStop *outC)
{
  /* 2 */ Send_M147_reset_TM_radio_messages(&outC->Context_2);
  /* 1 */ ES_Process_Unconditional_reset_TA_EmergencyStop(&outC->_1_Context_1);
  /* 1 */ ES_Process_Conditional_reset_TA_EmergencyStop(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TA_EmergencyStop::Manage_EmergencyStop */
void Manage_EmergencyStop_TA_EmergencyStop(
  /* TA_EmergencyStop::Manage_EmergencyStop::messageIn */ ReceivedMessage_T_Common_Types_Pkg *messageIn,
  /* TA_EmergencyStop::Manage_EmergencyStop::t_train */ T_TRAIN t_train,
  /* TA_EmergencyStop::Manage_EmergencyStop::trainProps */ trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* TA_EmergencyStop::Manage_EmergencyStop::packet0 */ PT0_PositionReport_T_Packet_TrainTypes_Pkg *packet0,
  /* TA_EmergencyStop::Manage_EmergencyStop::packet1 */ PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *packet1,
  /* TA_EmergencyStop::Manage_EmergencyStop::TrainPositionIn */ trainPosition_T_TrainPosition_Types_Pck *TrainPositionIn,
  /* TA_EmergencyStop::Manage_EmergencyStop::currentEOA */ L_internal_Type_Obu_BasicTypes_Pkg currentEOA,
  /* TA_EmergencyStop::Manage_EmergencyStop::bus_in */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *bus_in,
  outC_Manage_EmergencyStop_TA_EmergencyStop *outC)
{
  /* TA_EmergencyStop::Manage_EmergencyStop */
  static M_147_T_TM_radio_messages _1_op_call;
  /* TA_EmergencyStop::Manage_EmergencyStop */
  static Radio_TrainTrack_Message_T_TM_transitional op_call;
  /* TA_EmergencyStop::Manage_EmergencyStop */
  static kcg_bool ck_every;
  /* TA_EmergencyStop::Manage_EmergencyStop */
  static kcg_bool _2_ck_every;
  static kcg_int noname;
  /* TA_EmergencyStop::Manage_EmergencyStop::receivedMsg16 */
  static kcg_bool receivedMsg16;
  /* TA_EmergencyStop::Manage_EmergencyStop::receivedMsg15 */
  static kcg_bool receivedMsg15;
  /* TA_EmergencyStop::Manage_EmergencyStop::receivedMsg18 */
  static kcg_bool receivedMsg18;
  /* TA_EmergencyStop::Manage_EmergencyStop::receivedESMsg */
  static kcg_bool receivedESMsg;
  /* TA_EmergencyStop::Manage_EmergencyStop::sendMsg147 */
  static kcg_bool sendMsg147;
  /* TA_EmergencyStop::Manage_EmergencyStop::nid_em */
  static NID_EM nid_em;
  /* TA_EmergencyStop::Manage_EmergencyStop::uesActive */
  static kcg_bool uesActive;
  /* TA_EmergencyStop::Manage_EmergencyStop::cesActive */
  static kcg_bool cesActive;
  /* TA_EmergencyStop::Manage_EmergencyStop::triggerCES */
  static kcg_bool triggerCES;
  /* TA_EmergencyStop::Manage_EmergencyStop::cesEOA */
  static L_internal_Type_Obu_BasicTypes_Pkg cesEOA;
  /* TA_EmergencyStop::Manage_EmergencyStop::q_scale */
  static Q_SCALE q_scale;
  /* TA_EmergencyStop::Manage_EmergencyStop::d_ref */
  static D_REF d_ref;
  /* TA_EmergencyStop::Manage_EmergencyStop::q_dir */
  static Q_DIR q_dir;
  /* TA_EmergencyStop::Manage_EmergencyStop::d_emergencystop */
  static D_EMERGENCYSTOP d_emergencystop;
  /* TA_EmergencyStop::Manage_EmergencyStop::revokeCES */
  static kcg_bool revokeCES;
  /* TA_EmergencyStop::Manage_EmergencyStop::cesUpdateEOA */
  static kcg_bool cesUpdateEOA;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L1 */
  static ReceivedMessage_T_Common_Types_Pkg _L1;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L20 */
  static kcg_bool _L20;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L33 */
  static kcg_bool _L33;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L34 */
  static kcg_bool _L34;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L35 */
  static kcg_bool _L35;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L46 */
  static NID_EM _L46;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L51 */
  static kcg_bool _L51;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L52 */
  static kcg_bool _L52;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L53 */
  static ReceivedMessage_T_Common_Types_Pkg _L53;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L57 */
  static kcg_bool _L57;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L59 */
  static NID_EM _L59;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L60 */
  static Radio_TrainTrack_Message_T_TM_transitional _L60;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L61 */
  static kcg_bool _L61;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L62 */
  static kcg_bool _L62;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L63 */
  static NID_EM _L63;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L64 */
  static kcg_bool _L64;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L65 */
  static kcg_bool _L65;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L67 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L67;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L68 */
  static T_TRAIN _L68;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L69 */
  static trainProperties_T_TrainPosition_Types_Pck _L69;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L70 */
  static PT0_PositionReport_T_Packet_TrainTypes_Pkg _L70;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L71 */
  static PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg _L71;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L72 */
  static kcg_bool _L72;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L73 */
  static kcg_bool _L73;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L79 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L79;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L78 */
  static kcg_bool _L78;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L82 */
  static NID_EM _L82;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L83 */
  static Q_SCALE _L83;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L84 */
  static D_EMERGENCYSTOP _L84;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L85 */
  static Q_DIR _L85;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L86 */
  static D_REF _L86;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L87 */
  static Q_DIR _L87;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L88 */
  static Q_SCALE _L88;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L89 */
  static D_REF _L89;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L90 */
  static D_EMERGENCYSTOP _L90;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L91 */
  static kcg_bool _L91;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L92 */
  static kcg_bool _L92;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L93 */
  static kcg_bool _L93;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L94 */
  static kcg_bool _L94;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L95 */
  static trainPosition_T_TrainPosition_Types_Pck _L95;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L97 */
  static kcg_bool _L97;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L98 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L98;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L99 */
  static kcg_bool _L99;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L101 */
  static kcg_bool _L101;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L102 */
  static kcg_bool _L102;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L103 */
  static kcg_bool _L103;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L104 */
  static kcg_bool _L104;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L105 */
  static L_internal_Type_Obu_BasicTypes_Pkg _L105;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L107 */
  static kcg_bool _L107;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L115 */
  static PT0_PositionReport_T_Packet_TrainTypes_Pkg _L115;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L114 */
  static P000_TM_TrainToTrack _L114;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L113 */
  static T_TRAIN _L113;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L112 */
  static PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg _L112;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L111 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L111;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L110 */
  static P001_TM_TrainToTrack _L110;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L109 */
  static M_VERSION _L109;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L116 */
  static M_147_T_TM_radio_messages _L116;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L124 */
  static NID_EM _L124;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L122 */
  static trainProperties_T_TrainPosition_Types_Pck _L122;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L121 */
  static kcg_bool _L121;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L119 */
  static kcg_bool _L119;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L118 */
  static T_TRAIN _L118;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L117 */
  static kcg_bool _L117;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L125 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L125;
  /* TA_EmergencyStop::Manage_EmergencyStop::_L126 */
  static kcg_int _L126;
  
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L1, messageIn);
  /* 1 */
  ES_ReceiveAndControl_TA_EmergencyStop(&_L1, &_L35, &_L20, &_L33, &_L34);
  sendMsg147 = _L34;
  _L62 = sendMsg147;
  ck_every = _L62;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L53, messageIn);
  _L52 = _L35 | _L20 | _L33;
  receivedESMsg = _L52;
  _L51 = receivedESMsg;
  /* 3 */
  ES_ExtractMsgParams_TA_EmergencyStop(
    &_L53,
    _L51,
    &_L46,
    &_L83,
    &_L86,
    &_L85,
    &_L84);
  nid_em = _L46;
  _L124 = nid_em;
  _L118 = t_train;
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&_L122, trainProps);
  receivedMsg16 = _L20;
  _L121 = receivedMsg16;
  _L82 = nid_em;
  q_scale = _L83;
  _L88 = q_scale;
  d_ref = _L86;
  _L89 = d_ref;
  q_dir = _L85;
  _L87 = q_dir;
  d_emergencystop = _L84;
  _L90 = d_emergencystop;
  receivedMsg15 = _L35;
  _L91 = receivedMsg15;
  receivedMsg18 = _L33;
  _L92 = receivedMsg18;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L95, TrainPositionIn);
  _L105 = currentEOA;
  /* 1 */
  ES_Process_Conditional_TA_EmergencyStop(
    _L82,
    _L88,
    _L89,
    _L87,
    _L90,
    _L91,
    _L92,
    &_L95,
    _L105,
    &outC->Context_1);
  _L78 = outC->Context_1.cesAccepted;
  _L103 = outC->Context_1.updateEOA;
  _L79 = outC->Context_1.newEOA;
  _L93 = outC->Context_1.cesActive;
  _L94 = outC->Context_1.cesRevoked;
  triggerCES = _L78;
  _L119 = triggerCES;
  cesUpdateEOA = _L103;
  _L117 = cesUpdateEOA;
  /* ck_Manage_EmergencyStop */ if (ck_every) {
    /* 1 */
    ES_Build_AcknowledgementNew_TA_EmergencyStop(
      _L124,
      _L118,
      &_L122,
      _L121,
      _L119,
      _L117,
      &_1_op_call);
  }
  _2_ck_every = _L62;
  _L63 = nid_em;
  _L68 = t_train;
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&_L69, trainProps);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&_L70, packet0);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(&_L71, packet1);
  _L101 = receivedMsg16;
  _L102 = triggerCES;
  _L107 = cesUpdateEOA;
  /* ck_Manage_EmergencyStop */ if (_2_ck_every) {
    /* 2 */
    ES_Build_Acknowledgement_TA_EmergencyStop(
      _L63,
      _L68,
      &_L69,
      &_L70,
      &_L71,
      _L101,
      _L102,
      _L107,
      &op_call);
  }
  _L59 = nid_em;
  _L64 = receivedMsg16;
  _L65 = receivedMsg18;
  /* 1 */
  ES_Process_Unconditional_TA_EmergencyStop(
    _L59,
    _L64,
    _L65,
    &outC->_1_Context_1);
  _L57 = outC->_1_Context_1.uesActive;
  uesActive = _L57;
  _L61 = uesActive;
  cesActive = _L93;
  _L72 = cesActive;
  _L73 = _L61 | _L72;
  outC->rejectNewMA = _L73;
  kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg(
    &_L67,
    (Radio_TrainTrack_Message_T_Radio_Types_Pkg *)
      &cMSG147_NONE_TA_EmergencyStop);
  /* ck_Manage_EmergencyStop */ if (_2_ck_every) {
    kcg_copy_Radio_TrainTrack_Message_T_TM_transitional(&_L60, &op_call);
  }
  else {
    kcg_copy_Radio_TrainTrack_Message_T_TM_transitional(&_L60, &_L67);
  }
  kcg_copy_Radio_TrainTrack_Message_T_TM_transitional(&outC->message147, &_L60);
  outC->tripTrain = _L61;
  _L99 = triggerCES;
  outC->cesAccepted = _L99;
  cesEOA = _L79;
  _L98 = cesEOA;
  outC->newEOA = _L98;
  revokeCES = _L94;
  _L97 = revokeCES;
  outC->cesRevoked = _L97;
  _L104 = cesUpdateEOA;
  outC->updateEOA = _L104;
  _L109 = cM_version_MA_Request;
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(&_L112, packet1);
  /* 1 */ C_legacy_P001_TM_conversions_TrainToTrack(&_L112, &_L110);
  _L113 = t_train;
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&_L125, bus_in);
  /* ck_Manage_EmergencyStop */ if (ck_every) {
    kcg_copy_M_147_T_TM_radio_messages(&_L116, &_1_op_call);
  }
  else {
    kcg_copy_M_147_T_TM_radio_messages(
      &_L116,
      (M_147_T_TM_radio_messages *) &DEFAULT_M147_TA_EmergencyStop);
  }
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&_L115, packet0);
  /* 1 */ C_legacy_P000_TM_conversions_TrainToTrack(&_L115, &_L114);
  /* 2 */
  Send_M147_TM_radio_messages(
    _L113,
    &_L125,
    &_L116,
    &_L114,
    &_L110,
    _L109,
    &outC->Context_2);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &_L111,
    &outC->Context_2.MessageBus_out);
  _L126 = outC->Context_2.t_train_assigned;
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&outC->bus_out, &_L111);
  noname = _L126;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Manage_EmergencyStop_TA_EmergencyStop.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

