/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ProvidePositionReport_ProvidePositionReport_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void ProvidePositionReport_init_ProvidePositionReport_Pkg(
  outC_ProvidePositionReport_ProvidePositionReport_Pkg *outC)
{
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->init = kcg_true;
  outC->rem_odometry.valid = kcg_true;
  outC->rem_odometry.timestamp = 0;
  outC->rem_odometry.odo.o_nominal = 0;
  outC->rem_odometry.odo.o_min = 0;
  outC->rem_odometry.odo.o_max = 0;
  outC->rem_odometry.speed.v_safeNominal = 0;
  outC->rem_odometry.speed.v_rawNominal = 0;
  outC->rem_odometry.speed.v_lower = 0;
  outC->rem_odometry.speed.v_upper = 0;
  outC->rem_odometry.acceleration = 0;
  outC->rem_odometry.motionState = noMotion_Obu_BasicTypes_Pkg;
  outC->rem_odometry.motionDirection = unknownDirection_Obu_BasicTypes_Pkg;
  outC->rem_modeLevelStatus.currMode = M_MODE_Full_Supervision;
  outC->rem_modeLevelStatus.currLevel = M_LEVEL_Level_0;
  outC->rem_modeLevelStatus.levelTransitionBorderPassed = kcg_true;
  for (i = 0; i < 8; i++) {
    outC->rem_reportedBGs[i].valid = kcg_true;
    outC->rem_reportedBGs[i].nidBG = 0;
    outC->rem_reportedBGs[i].location.nominal = 0;
    outC->rem_reportedBGs[i].location.d_min = 0;
    outC->rem_reportedBGs[i].location.d_max = 0;
  }
  for (i2 = 0; i2 < 5; i2++) {
    outC->posReport[i2].Message.valid = kcg_true;
    outC->posReport[i2].Message.nid_message = 0;
    outC->posReport[i2].Message.l_message = 0;
    outC->posReport[i2].Message.t_train = 0;
    outC->posReport[i2].Message.nid_engine = 0;
    outC->posReport[i2].Message.field1 = 0;
    outC->posReport[i2].Message.field2 = 0;
    outC->posReport[i2].Message.field3 = 0;
    for (i1 = 0; i1 < 50; i1++) {
      outC->posReport[i2].OptionalPackets[i1] = 0;
    }
  }
  outC->packet1.valid = kcg_true;
  outC->packet1.packet1.NID_PACKET = 0;
  outC->packet1.packet1.L_PACKET = 0;
  outC->packet1.packet1.qscale = Q_SCALE_10_cm_scale;
  outC->packet1.packet1.NID_LRBG = 0;
  outC->packet1.packet1.NID_PRVLRBG = 0;
  outC->packet1.packet1.D_LRBG = 0;
  outC->packet1.packet1.dirlrbg = Q_DIRLRBG_Reverse;
  outC->packet1.packet1.dlrbg = Q_DLRBG_Reverse;
  outC->packet1.packet1.L_DOUBTOVER = 0;
  outC->packet1.packet1.L_DOUBTUNDER = 0;
  outC->packet1.packet1.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->packet1.packet1.L_TRAININT = 0;
  outC->packet1.packet1.V_TRAIN = 0;
  outC->packet1.packet1.dirtrain = Q_DIRTRAIN_Reverse;
  outC->packet1.packet1.mode = M_MODE_Full_Supervision;
  outC->packet1.packet1.level = M_LEVEL_Level_0;
  outC->packet1.packet1.NID_NTC = 0;
  outC->packet0.valid = kcg_true;
  outC->packet0.packet0.NID_PACKET = 0;
  outC->packet0.packet0.L_PACKET = 0;
  outC->packet0.packet0.qscale = Q_SCALE_10_cm_scale;
  outC->packet0.packet0.NID_LRBG = 0;
  outC->packet0.packet0.D_LRBG = 0;
  outC->packet0.packet0.dirlrbg = Q_DIRLRBG_Reverse;
  outC->packet0.packet0.dlrbg = Q_DLRBG_Reverse;
  outC->packet0.packet0.L_DOUBTOVER = 0;
  outC->packet0.packet0.L_DOUBTUNDER = 0;
  outC->packet0.packet0.length =
    Q_LENGTH_No_train_integrity_information_available;
  outC->packet0.packet0.L_TRAININT = 0;
  outC->packet0.packet0.V_TRAIN = 0;
  outC->packet0.packet0.dirtrain = Q_DIRTRAIN_Reverse;
  outC->packet0.packet0.mode = M_MODE_Full_Supervision;
  outC->packet0.packet0.level = M_LEVEL_Level_0;
  outC->packet0.packet0.NID_NTC = 0;
  for (i3 = 0; i3 < 8; i3++) {
    outC->out_reportedBGs[i3].valid = kcg_true;
    outC->out_reportedBGs[i3].nidBG = 0;
    outC->out_reportedBGs[i3].location.nominal = 0;
    outC->out_reportedBGs[i3].location.d_min = 0;
    outC->out_reportedBGs[i3].location.d_max = 0;
  }
  /* 1 */ nextGen_Msg136_init_radioOutput_Pkg(&outC->_3_Context_1);
  /* 1 */ Build_Packets0_1_init_ProvidePositionReport_Pkg(&outC->_2_Context_1);
  /* 1 */
  PosReport_Supervision_init_ProvidePositionReport_Pkg(&outC->_1_Context_1);
  /* 1 */
  ReceiveReportParameters_init_ProvidePositionReport_Pkg(&outC->Context_1);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void ProvidePositionReport_reset_ProvidePositionReport_Pkg(
  outC_ProvidePositionReport_ProvidePositionReport_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */ nextGen_Msg136_reset_radioOutput_Pkg(&outC->_3_Context_1);
  /* 1 */ Build_Packets0_1_reset_ProvidePositionReport_Pkg(&outC->_2_Context_1);
  /* 1 */
  PosReport_Supervision_reset_ProvidePositionReport_Pkg(&outC->_1_Context_1);
  /* 1 */
  ReceiveReportParameters_reset_ProvidePositionReport_Pkg(&outC->Context_1);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* ProvidePositionReport_Pkg::ProvidePositionReport */
void ProvidePositionReport_ProvidePositionReport_Pkg(
  /* ProvidePositionReport_Pkg::ProvidePositionReport::posBGs */ positionedBGs_T_TrainPosition_Types_Pck *posBGs,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::trainPos */ trainPosition_T_TrainPosition_Types_Pck *trainPos,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::odometry */ odometry_T_Obu_BasicTypes_Pkg *odometry,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::trainProps */ trainProperties_T_TrainPosition_Types_Pck *trainProps,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::trackInfo */ LocationBasedEvents_T_ProvidePositionReport_Pkg *trackInfo,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::inMessage */ ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::systemTime */ SystemTime_T_ProvidePositionReport_Pkg systemTime,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::rcbComm */ RBC_Communication_T_ProvidePositionReport_Pkg *rcbComm,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::train2trackStatus */ TrainToTrackStatus_T_BG_Types_Pkg *train2trackStatus,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::prvDirTrain */ Q_DIRTRAIN prvDirTrain,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::BG_LinkingConsistencyError */ kcg_bool BG_LinkingConsistencyError,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::LinkedBG_MessageConsistencyError */ kcg_bool LinkedBG_MessageConsistencyError,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::UnlinkedBG_MessageConsistencyError */ kcg_bool UnlinkedBG_MessageConsistencyError,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::RadioMessageConsistencyError */ kcg_bool RadioMessageConsistencyError,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::RadioSequenceError */ kcg_bool RadioSequenceError,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::RadioSafeRadioConnectionError */ kcg_bool RadioSafeRadioConnectionError,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::SafetyCriticalFailure */ kcg_bool SafetyCriticalFailure,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::DoubleLinkingError */ kcg_bool DoubleLinkingError,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::DoubleRepositioningError */ kcg_bool DoubleRepositioningError,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::modeLevelStatus */ ModeLevel2PositionReport_T_ProvidePositionReport_Pkg *modeLevelStatus,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::reportedBGs */ ReportedBGList_T_ProvidePositionReport_Pkg *reportedBGs,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::MessageBus */ M_TrainTrackMessageBus_t_TM_TrainTrack_Bus *MessageBus,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::inVersion */ M_VERSION inVersion,
  /* ProvidePositionReport_Pkg::ProvidePositionReport::t_train */ T_TRAIN t_train,
  outC_ProvidePositionReport_ProvidePositionReport_Pkg *outC)
{
  /* ProvidePositionReport_Pkg::ProvidePositionReport */
  static PT5_TrainRunningNumber_Packet_TrainTypes_Pkg op_call;
  /* ProvidePositionReport_Pkg::ProvidePositionReport */
  static PT4_ErrorReporting_T_Packet_TrainTypes_Pkg _1_op_call;
  /* ProvidePositionReport_Pkg::ProvidePositionReport */
  static PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg _2_op_call;
  /* ProvidePositionReport_Pkg::ProvidePositionReport */
  static PT0_PositionReport_T_Packet_TrainTypes_Pkg _3_op_call;
  /* ProvidePositionReport_Pkg::ProvidePositionReport */
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg _4_op_call;
  /* ProvidePositionReport_Pkg::ProvidePositionReport */
  static kcg_bool ck_every;
  /* ProvidePositionReport_Pkg::ProvidePositionReport::reportedBGs */
  static ReportedBGList_T_ProvidePositionReport_Pkg last_reportedBGs;
  /* ProvidePositionReport_Pkg::ProvidePositionReport::modeLevelStatus */
  static ModeLevel2PositionReport_T_ProvidePositionReport_Pkg last_modeLevelStatus;
  /* ProvidePositionReport_Pkg::ProvidePositionReport::odometry */
  static odometry_T_Obu_BasicTypes_Pkg last_odometry;
  /* ProvidePositionReport_Pkg::ProvidePositionReport::_L4 */
  static positionedBGs_T_TrainPosition_Types_Pck _L4;
  /* ProvidePositionReport_Pkg::ProvidePositionReport::_L5 */
  static trainPosition_T_TrainPosition_Types_Pck _L5;
  /* ProvidePositionReport_Pkg::ProvidePositionReport::_L6 */
  static trainProperties_T_TrainPosition_Types_Pck _L6;
  /* ProvidePositionReport_Pkg::ProvidePositionReport::_L10 */
  static LocationBasedEvents_T_ProvidePositionReport_Pkg _L10;
  /* ProvidePositionReport_Pkg::ProvidePositionReport::_L11 */
  static ReceivedMessage_T_Common_Types_Pkg _L11;
  /* ProvidePositionReport_Pkg::ProvidePositionReport::_L12 */
  static SystemTime_T_ProvidePositionReport_Pkg _L12;
  /* ProvidePositionReport_Pkg::ProvidePositionReport::_L13 */
  static TrainToTrackStatus_T_BG_Types_Pkg _L13;
  /* ProvidePositionReport_Pkg::ProvidePositionReport::_L15 */
  static RBC_Communication_T_ProvidePositionReport_Pkg _L15;
  /* ProvidePositionReport_Pkg::ProvidePositionReport::_L277 */
  static Q_DIRTRAIN _L277;
  /* ProvidePositionReport_Pkg::ProvidePositionReport::_L279 */
  static array_168990 _L279;
  /* ProvidePositionReport_Pkg::ProvidePositionReport::_L281 */
  static kcg_bool _L281;
  /* ProvidePositionReport_Pkg::ProvidePositionReport::_L282 */
  static kcg_bool _L282;
  /* ProvidePositionReport_Pkg::ProvidePositionReport::_L283 */
  static kcg_bool _L283;
  /* ProvidePositionReport_Pkg::ProvidePositionReport::_L284 */
  static kcg_bool _L284;
  /* ProvidePositionReport_Pkg::ProvidePositionReport::_L285 */
  static kcg_bool _L285;
  /* ProvidePositionReport_Pkg::ProvidePositionReport::_L286 */
  static kcg_bool _L286;
  /* ProvidePositionReport_Pkg::ProvidePositionReport::_L287 */
  static kcg_bool _L287;
  /* ProvidePositionReport_Pkg::ProvidePositionReport::_L288 */
  static kcg_bool _L288;
  /* ProvidePositionReport_Pkg::ProvidePositionReport::_L289 */
  static kcg_bool _L289;
  /* ProvidePositionReport_Pkg::ProvidePositionReport::_L290 */
  static odometry_T_Obu_BasicTypes_Pkg _L290;
  /* ProvidePositionReport_Pkg::ProvidePositionReport::_L291 */
  static ModeLevel2PositionReport_T_ProvidePositionReport_Pkg _L291;
  /* ProvidePositionReport_Pkg::ProvidePositionReport::_L297 */
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg _L297;
  /* ProvidePositionReport_Pkg::ProvidePositionReport::_L296 */
  static PT5_TrainRunningNumber_Packet_TrainTypes_Pkg _L296;
  /* ProvidePositionReport_Pkg::ProvidePositionReport::_L295 */
  static PT4_ErrorReporting_T_Packet_TrainTypes_Pkg _L295;
  /* ProvidePositionReport_Pkg::ProvidePositionReport::_L294 */
  static PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg _L294;
  /* ProvidePositionReport_Pkg::ProvidePositionReport::_L293 */
  static PT0_PositionReport_T_Packet_TrainTypes_Pkg _L293;
  /* ProvidePositionReport_Pkg::ProvidePositionReport::_L303 */
  static PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg _L303;
  /* ProvidePositionReport_Pkg::ProvidePositionReport::_L302 */
  static PT4_ErrorReporting_T_Packet_TrainTypes_Pkg _L302;
  /* ProvidePositionReport_Pkg::ProvidePositionReport::_L301 */
  static PT5_TrainRunningNumber_Packet_TrainTypes_Pkg _L301;
  /* ProvidePositionReport_Pkg::ProvidePositionReport::_L300 */
  static Radio_TrainTrack_Header_T_Radio_Types_Pkg _L300;
  /* ProvidePositionReport_Pkg::ProvidePositionReport::_L299 */
  static PT0_PositionReport_T_Packet_TrainTypes_Pkg _L299;
  /* ProvidePositionReport_Pkg::ProvidePositionReport::_L307 */
  static P58_PositionReportParameters_T_Packet_Types_Pkg _L307;
  /* ProvidePositionReport_Pkg::ProvidePositionReport::_L312 */
  static kcg_bool _L312;
  /* ProvidePositionReport_Pkg::ProvidePositionReport::_L314 */
  static kcg_bool _L314;
  /* ProvidePositionReport_Pkg::ProvidePositionReport::_L328 */
  static ReportedBGList_T_ProvidePositionReport_Pkg _L328;
  /* ProvidePositionReport_Pkg::ProvidePositionReport::_L329 */
  static ReportedBGList_T_ProvidePositionReport_Pkg _L329;
  /* ProvidePositionReport_Pkg::ProvidePositionReport::_L332 */
  static ReportedBGList_T_ProvidePositionReport_Pkg _L332;
  /* ProvidePositionReport_Pkg::ProvidePositionReport::_L333 */
  static outPackets_T_Common_Types_Pkg _L333;
  /* ProvidePositionReport_Pkg::ProvidePositionReport::_L340 */
  static Radio_TrainTrack_Message_T_Radio_Types_Pkg _L340;
  /* ProvidePositionReport_Pkg::ProvidePositionReport::_L343 */
  static PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg _L343;
  /* ProvidePositionReport_Pkg::ProvidePositionReport::_L346 */
  static PT0_PositionReport_T_Packet_TrainTypes_Pkg _L346;
  /* ProvidePositionReport_Pkg::ProvidePositionReport::_L347 */
  static T_TRAIN _L347;
  /* ProvidePositionReport_Pkg::ProvidePositionReport::_L348 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L348;
  /* ProvidePositionReport_Pkg::ProvidePositionReport::_L349 */
  static M_TrainTrackMessageBus_t_TM_TrainTrack_Bus _L349;
  /* ProvidePositionReport_Pkg::ProvidePositionReport::_L350 */
  static T_TRAIN _L350;
  /* ProvidePositionReport_Pkg::ProvidePositionReport::_L351 */
  static M_VERSION _L351;
  
  /* last_init_ck_reportedBGs */ if (outC->init) {
    kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(
      &last_reportedBGs,
      (ReportedBGList_T_ProvidePositionReport_Pkg *)
        &cReportedBGList_ProvidePositionReport_Pkg);
  }
  else {
    kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(
      &last_reportedBGs,
      &outC->rem_reportedBGs);
  }
  kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(
    &_L329,
    &last_reportedBGs);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&_L11, inMessage);
  /* 1 */
  ReceiveReportParameters_ProvidePositionReport_Pkg(
    &_L329,
    &_L11,
    &outC->Context_1);
  kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(
    &_L328,
    &outC->Context_1.out_reportedBGs);
  _L314 = outC->Context_1.present;
  kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg(
    &_L307,
    &outC->Context_1.posRepParam);
  _L12 = systemTime;
  kcg_copy_RBC_Communication_T_ProvidePositionReport_Pkg(&_L15, rcbComm);
  kcg_copy_LocationBasedEvents_T_ProvidePositionReport_Pkg(&_L10, trackInfo);
  kcg_copy_TrainToTrackStatus_T_BG_Types_Pkg(&_L13, train2trackStatus);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L5, trainPos);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&_L290, odometry);
  kcg_copy_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg(
    &_L291,
    modeLevelStatus);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L4, posBGs);
  /* 1 */
  PosReport_Supervision_ProvidePositionReport_Pkg(
    _L314,
    &_L307,
    _L12,
    &_L15,
    &_L10,
    &_L13,
    &_L5,
    &_L290,
    &_L291,
    &_L4,
    &outC->_1_Context_1);
  _L312 = outC->_1_Context_1.trigger;
  ck_every = _L312;
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&_L6, trainProps);
  _L277 = prvDirTrain;
  /* 1 */
  Build_Packets0_1_ProvidePositionReport_Pkg(
    &_L6,
    &_L4,
    &_L291,
    &_L290,
    &_L5,
    &_L13,
    _L277,
    &outC->_2_Context_1);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
    &_L346,
    &outC->_2_Context_1.packet0);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
    &_L343,
    &outC->_2_Context_1.packet1);
  _L281 = BG_LinkingConsistencyError;
  _L282 = LinkedBG_MessageConsistencyError;
  _L283 = UnlinkedBG_MessageConsistencyError;
  _L284 = RadioMessageConsistencyError;
  _L285 = RadioSequenceError;
  _L286 = RadioSafeRadioConnectionError;
  _L287 = SafetyCriticalFailure;
  _L288 = DoubleLinkingError;
  _L289 = DoubleRepositioningError;
  /* 1 */
  ErrorManager_ProvidePositionReport_Pkg_PositionReportErrorManager_Pkg(
    _L281,
    _L282,
    _L283,
    _L284,
    _L285,
    _L286,
    _L287,
    _L288,
    _L289,
    &_L279);
  _L347 = t_train;
  /* ck_ProvidePositionReport */ if (ck_every) {
    /* 1 */
    Build_PosReport_ProvidePositionReport_Pkg(
      &_L6,
      &_L346,
      &_L343,
      &_L279,
      _L347,
      &_4_op_call,
      &_3_op_call,
      &_2_op_call,
      &_1_op_call,
      &op_call);
  }
  kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(
    &_L301,
    (PT5_TrainRunningNumber_Packet_TrainTypes_Pkg *)
      &emptyPacket5_ProvidePositionReport_Pkg);
  /* ck_ProvidePositionReport */ if (ck_every) {
    kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(&_L296, &op_call);
  }
  else {
    kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(&_L296, &_L301);
  }
  kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(
    &_L302,
    (PT4_ErrorReporting_T_Packet_TrainTypes_Pkg *)
      &emptyPacket4_ProvidePositionReport_Pkg);
  /* ck_ProvidePositionReport */ if (ck_every) {
    kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(&_L295, &_1_op_call);
  }
  else {
    kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(&_L295, &_L302);
  }
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
    &_L303,
    (PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *)
      &emptyPacket1_ProvidePositionReport_Pkg);
  /* ck_ProvidePositionReport */ if (ck_every) {
    kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
      &_L294,
      &_2_op_call);
  }
  else {
    kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(&_L294, &_L303);
  }
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
    &_L299,
    (PT0_PositionReport_T_Packet_TrainTypes_Pkg *)
      &emptyPacket0_ProvidePositionReport_Pkg);
  /* ck_ProvidePositionReport */ if (ck_every) {
    kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&_L293, &_3_op_call);
  }
  else {
    kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&_L293, &_L299);
  }
  kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(
    &_L300,
    (Radio_TrainTrack_Header_T_Radio_Types_Pkg *)
      &emptyHeader_ProvidePositionReport_Pkg);
  /* ck_ProvidePositionReport */ if (ck_every) {
    kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(&_L297, &_4_op_call);
  }
  else {
    kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(&_L297, &_L300);
  }
  /* AddBGToFIFO */
  AddBGToFIFO_ProvidePositionReport_Pkg(&_L328, _L312, &_L5, &_L332);
  kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(
    &outC->out_reportedBGs,
    &_L332);
  /* 1 */
  AggregatePackets_ProvidePositionReport_Pkg(
    &_L293,
    &_L294,
    &_L295,
    &_L296,
    &_L333);
  _L340.present = _L312;
  kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg(&_L340.header, &_L297);
  kcg_copy_outPackets_T_Common_Types_Pkg(&_L340.packets, &_L333);
  kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(&outC->packet0, &_L346);
  kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
    &outC->packet1,
    &_L343);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&_L349, MessageBus);
  _L351 = inVersion;
  _L350 = t_train;
  /* 1 */
  nextGen_Msg136_radioOutput_Pkg(
    &_L349,
    &_L340,
    _L351,
    _L350,
    &outC->_3_Context_1);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(
    &_L348,
    &outC->_3_Context_1.MessageBus_out);
  kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus(&outC->posReport, &_L348);
  /* last_init_ck_odometry */ if (outC->init) {
    kcg_copy_odometry_T_Obu_BasicTypes_Pkg(
      &last_odometry,
      (odometry_T_Obu_BasicTypes_Pkg *) &cOdomerty_ProvidePositionReport_Pkg);
  }
  else {
    kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&last_odometry, &outC->rem_odometry);
  }
  /* last_init_ck_modeLevelStatus */ if (outC->init) {
    kcg_copy_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg(
      &last_modeLevelStatus,
      (ModeLevel2PositionReport_T_ProvidePositionReport_Pkg *)
        &cModeAndLevelStatus_ProvidePositionReport_Pkg);
  }
  else {
    kcg_copy_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg(
      &last_modeLevelStatus,
      &outC->rem_modeLevelStatus);
  }
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->rem_odometry, odometry);
  kcg_copy_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg(
    &outC->rem_modeLevelStatus,
    modeLevelStatus);
  kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(
    &outC->rem_reportedBGs,
    reportedBGs);
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** ProvidePositionReport_ProvidePositionReport_Pkg.c
** Generation date: 2015-11-20T14:27:49
*************************************************************$ */

