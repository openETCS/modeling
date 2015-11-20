/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "processHandingOver_Handover_Pkg_handoverUtils_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void processHandingOver_init_Handover_Pkg_handoverUtils_Pkg(
  outC_processHandingOver_Handover_Pkg_handoverUtils_Pkg *outC)
{
  static kcg_int i3;
  static kcg_int i2;
  static kcg_int i1;
  static kcg_int i;
  
  outC->init = kcg_true;
  outC->handoverFinished = kcg_true;
  outC->useInformationFromAcceptingRBC_loc = kcg_true;
  outC->handoverInprogress = kcg_true;
  outC->_L8_1.valid = kcg_true;
  outC->_L8_1.source = msrc_undefined_Common_Types_Pkg;
  outC->_L8_1.nid_lrbg = 0;
  outC->_L8_1.location.nominal = 0;
  outC->_L8_1.location.d_min = 0;
  outC->_L8_1.location.d_max = 0;
  outC->_L8_1.contactLastKnownRBC = kcg_true;
  outC->_L8_1.useTheShortNumberStoredOnboard = kcg_true;
  outC->_L8_1.order.valid = kcg_true;
  outC->_L8_1.order.q_dir = Q_DIR_Reverse;
  outC->_L8_1.order.q_scale = Q_SCALE_10_cm_scale;
  outC->_L8_1.order.d_rbctr = 0;
  outC->_L8_1.order.nid_c = 0;
  outC->_L8_1.order.nid_rbc = 0;
  outC->_L8_1.order.nid_radio = 0;
  outC->_L8_1.order.q_sleepsession =
    Q_SLEEPSESSION_Ignore_session_establishment_order;
  outC->notReady = kcg_true;
  outC->trainPassesA_RBC_RBC_border_WithItsFrontEnd = kcg_true;
  outC->handingOverMobile_is_mobile_1 = kcg_true;
  outC->useInformationFromAcceptingRBC = kcg_true;
  outC->supervisingRBC.valid = kcg_true;
  outC->supervisingRBC.mobileDeviceNo = 0;
  outC->supervisingRBC.nid_c = 0;
  outC->supervisingRBC.nid_RBC = 0;
  outC->supervisingRBC.nid_radio = 0;
  outC->supervisingRBC.nid_mn = 0;
  outC->bufferInformationFromAcceptingRBC = kcg_true;
  outC->sendTrainData_2_acceptingRBC = kcg_true;
  outC->sendPositionReport_2_acceptingRBC = kcg_true;
  outC->sendPositionReport_2_handingOverRBC = kcg_true;
  outC->sessionCmds_2_MoRC_2.valid = kcg_true;
  outC->sessionCmds_2_MoRC_2.source = msrc_undefined_Common_Types_Pkg;
  outC->sessionCmds_2_MoRC_2.radioMetadata.t_train_reference = kcg_true;
  outC->sessionCmds_2_MoRC_2.radioMetadata.nid_em = kcg_true;
  outC->sessionCmds_2_MoRC_2.radioMetadata.q_scale = kcg_true;
  outC->sessionCmds_2_MoRC_2.radioMetadata.d_sr = kcg_true;
  outC->sessionCmds_2_MoRC_2.radioMetadata.t_sh_rqst = kcg_true;
  outC->sessionCmds_2_MoRC_2.radioMetadata.d_ref = kcg_true;
  outC->sessionCmds_2_MoRC_2.radioMetadata.q_dir = kcg_true;
  outC->sessionCmds_2_MoRC_2.radioMetadata.d_emergencystop = kcg_true;
  outC->sessionCmds_2_MoRC_2.radioMetadata.m_version = kcg_true;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.valid = kcg_true;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.m_mcount = 0;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.nid_c = 0;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.nid_bg = 0;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.bgPosition.timestamp = 0;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.bgPosition.odo.o_nominal = 0;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.bgPosition.odo.o_min = 0;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.bgPosition.odo.o_max = 0;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.bgPosition.speed.v_rawNominal = 0;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.bgPosition.speed.v_lower = 0;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.bgPosition.speed.v_upper = 0;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.bgPosition.acceleration = 0;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.q_nvlocacc = 0;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->sessionCmds_2_MoRC_2.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->sessionCmds_2_MoRC_2.Radio_Common_Header.radioDevice = 0;
  outC->sessionCmds_2_MoRC_2.Radio_Common_Header.receivedSystemTime = 0;
  outC->sessionCmds_2_MoRC_2.Radio_Common_Header.nid_message = 0;
  outC->sessionCmds_2_MoRC_2.Radio_Common_Header.t_train = 0;
  outC->sessionCmds_2_MoRC_2.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->sessionCmds_2_MoRC_2.Radio_Common_Header.nid_lrbg = 0;
  outC->sessionCmds_2_MoRC_2.Radio_Common_Header.t_train_reference = 0;
  outC->sessionCmds_2_MoRC_2.Radio_Common_Header.nid_em = 0;
  outC->sessionCmds_2_MoRC_2.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->sessionCmds_2_MoRC_2.Radio_Common_Header.d_sr = 0;
  outC->sessionCmds_2_MoRC_2.Radio_Common_Header.t_sh_rqst = 0;
  outC->sessionCmds_2_MoRC_2.Radio_Common_Header.d_ref = 0;
  outC->sessionCmds_2_MoRC_2.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->sessionCmds_2_MoRC_2.Radio_Common_Header.d_emergencystop = 0;
  outC->sessionCmds_2_MoRC_2.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i = 0; i < 30; i++) {
    outC->sessionCmds_2_MoRC_2.packets.PacketHeaders[i].nid_packet = 0;
    outC->sessionCmds_2_MoRC_2.packets.PacketHeaders[i].q_dir = Q_DIR_Reverse;
    outC->sessionCmds_2_MoRC_2.packets.PacketHeaders[i].valid = kcg_true;
    outC->sessionCmds_2_MoRC_2.packets.PacketHeaders[i].startAddress = 0;
    outC->sessionCmds_2_MoRC_2.packets.PacketHeaders[i].endAddress = 0;
  }
  for (i1 = 0; i1 < 500; i1++) {
    outC->sessionCmds_2_MoRC_2.packets.PacketData[i1] = 0;
  }
  outC->sessionCmds_2_MoRC_2.sendingRBC.valid = kcg_true;
  outC->sessionCmds_2_MoRC_2.sendingRBC.nid_c = 0;
  outC->sessionCmds_2_MoRC_2.sendingRBC.rbc_id = 0;
  outC->sessionCmds_2_MoRC_2.sendingRBC.device_id = 0;
  outC->sessionCmds_2_MoRC_1.valid = kcg_true;
  outC->sessionCmds_2_MoRC_1.source = msrc_undefined_Common_Types_Pkg;
  outC->sessionCmds_2_MoRC_1.radioMetadata.t_train_reference = kcg_true;
  outC->sessionCmds_2_MoRC_1.radioMetadata.nid_em = kcg_true;
  outC->sessionCmds_2_MoRC_1.radioMetadata.q_scale = kcg_true;
  outC->sessionCmds_2_MoRC_1.radioMetadata.d_sr = kcg_true;
  outC->sessionCmds_2_MoRC_1.radioMetadata.t_sh_rqst = kcg_true;
  outC->sessionCmds_2_MoRC_1.radioMetadata.d_ref = kcg_true;
  outC->sessionCmds_2_MoRC_1.radioMetadata.q_dir = kcg_true;
  outC->sessionCmds_2_MoRC_1.radioMetadata.d_emergencystop = kcg_true;
  outC->sessionCmds_2_MoRC_1.radioMetadata.m_version = kcg_true;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.valid = kcg_true;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.q_updown =
    Q_UPDOWN_Down_link_telegram;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.q_media = Q_MEDIA_Balise;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.n_total =
    N_TOTAL_1_balise_in_the_group;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.m_mcount = 0;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.nid_c = 0;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.nid_bg = 0;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.q_link = Q_LINK_Unlinked;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.bgPosition.valid = kcg_true;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.bgPosition.timestamp = 0;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.bgPosition.odo.o_nominal = 0;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.bgPosition.odo.o_min = 0;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.bgPosition.odo.o_max = 0;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.bgPosition.speed.v_safeNominal =
    0;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.bgPosition.speed.v_rawNominal = 0;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.bgPosition.speed.v_lower = 0;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.bgPosition.speed.v_upper = 0;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.bgPosition.acceleration = 0;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.bgPosition.motionState =
    noMotion_Obu_BasicTypes_Pkg;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.bgPosition.motionDirection =
    unknownDirection_Obu_BasicTypes_Pkg;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.nominal =
    0;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_min =
    0;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.BG_centerDetectionInaccuraccuracies.d_max =
    0;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.q_nvlocacc = 0;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
    kcg_true;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.trainOrientationToBG =
    Q_DIRLRBG_Reverse;
  outC->sessionCmds_2_MoRC_1.BG_Common_Header.trainRunningDirectionToBG =
    Q_DIRTRAIN_Reverse;
  outC->sessionCmds_2_MoRC_1.Radio_Common_Header.radioDevice = 0;
  outC->sessionCmds_2_MoRC_1.Radio_Common_Header.receivedSystemTime = 0;
  outC->sessionCmds_2_MoRC_1.Radio_Common_Header.nid_message = 0;
  outC->sessionCmds_2_MoRC_1.Radio_Common_Header.t_train = 0;
  outC->sessionCmds_2_MoRC_1.Radio_Common_Header.m_ack =
    M_ACK_No_acknowledgement_required;
  outC->sessionCmds_2_MoRC_1.Radio_Common_Header.nid_lrbg = 0;
  outC->sessionCmds_2_MoRC_1.Radio_Common_Header.t_train_reference = 0;
  outC->sessionCmds_2_MoRC_1.Radio_Common_Header.nid_em = 0;
  outC->sessionCmds_2_MoRC_1.Radio_Common_Header.q_scale = Q_SCALE_10_cm_scale;
  outC->sessionCmds_2_MoRC_1.Radio_Common_Header.d_sr = 0;
  outC->sessionCmds_2_MoRC_1.Radio_Common_Header.t_sh_rqst = 0;
  outC->sessionCmds_2_MoRC_1.Radio_Common_Header.d_ref = 0;
  outC->sessionCmds_2_MoRC_1.Radio_Common_Header.q_dir = Q_DIR_Reverse;
  outC->sessionCmds_2_MoRC_1.Radio_Common_Header.d_emergencystop = 0;
  outC->sessionCmds_2_MoRC_1.Radio_Common_Header.m_version =
    M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS;
  for (i2 = 0; i2 < 30; i2++) {
    outC->sessionCmds_2_MoRC_1.packets.PacketHeaders[i2].nid_packet = 0;
    outC->sessionCmds_2_MoRC_1.packets.PacketHeaders[i2].q_dir = Q_DIR_Reverse;
    outC->sessionCmds_2_MoRC_1.packets.PacketHeaders[i2].valid = kcg_true;
    outC->sessionCmds_2_MoRC_1.packets.PacketHeaders[i2].startAddress = 0;
    outC->sessionCmds_2_MoRC_1.packets.PacketHeaders[i2].endAddress = 0;
  }
  for (i3 = 0; i3 < 500; i3++) {
    outC->sessionCmds_2_MoRC_1.packets.PacketData[i3] = 0;
  }
  outC->sessionCmds_2_MoRC_1.sendingRBC.valid = kcg_true;
  outC->sessionCmds_2_MoRC_1.sendingRBC.nid_c = 0;
  outC->sessionCmds_2_MoRC_1.sendingRBC.rbc_id = 0;
  outC->sessionCmds_2_MoRC_1.sendingRBC.device_id = 0;
  /* 2 */ EitherEdge_init_digital(&outC->_3_Context_2);
  /* 1 */ EitherEdge_init_digital(&outC->_2_Context_1);
  /* 1 */
  handOverSequencer_init_Handover_Pkg_handoverUtils_Pkg(&outC->_1_Context_1);
  /* 2 */ locReachedOrPassed_init_BasicLocationFunctions_Pkg(&outC->Context_2);
  /* 1 */ locReachedOrPassed_init_BasicLocationFunctions_Pkg(&outC->Context_1);
  /* 3 */
  changeoverSwitch_init_Handover_Pkg_handoverUtils_Pkg(&outC->Context_3);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void processHandingOver_reset_Handover_Pkg_handoverUtils_Pkg(
  outC_processHandingOver_Handover_Pkg_handoverUtils_Pkg *outC)
{
  outC->init = kcg_true;
  /* 2 */ EitherEdge_reset_digital(&outC->_3_Context_2);
  /* 1 */ EitherEdge_reset_digital(&outC->_2_Context_1);
  /* 1 */
  handOverSequencer_reset_Handover_Pkg_handoverUtils_Pkg(&outC->_1_Context_1);
  /* 2 */ locReachedOrPassed_reset_BasicLocationFunctions_Pkg(&outC->Context_2);
  /* 1 */ locReachedOrPassed_reset_BasicLocationFunctions_Pkg(&outC->Context_1);
  /* 3 */
  changeoverSwitch_reset_Handover_Pkg_handoverUtils_Pkg(&outC->Context_3);
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Handover_Pkg::handoverUtils_Pkg::processHandingOver */
void processHandingOver_Handover_Pkg_handoverUtils_Pkg(
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::mode */ M_MODE mode,
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::morcStatus_1 */ morcStatus_T_RCM_Session_Types_Pkg *morcStatus_1,
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::morcStatus_2 */ morcStatus_T_RCM_Session_Types_Pkg *morcStatus_2,
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::dataFromTrack_in */ msgFromTrack_T_RCM_MsgTypes_Pkg *dataFromTrack_in,
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::trainPosition */ trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::BGs */ positionedBGs_T_TrainPosition_Types_Pck *BGs,
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::sessionManagementAbility */ abilityToHandleCommunicationSessions_Handover_Pkg sessionManagementAbility,
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::trainProperties */ trainProperties_T_TrainPosition_Types_Pck *trainProperties,
  outC_processHandingOver_Handover_Pkg_handoverUtils_Pkg *outC)
{
  /* linear::Memory::Out */
  static p131_q_rbcTransitionOrder_T_Handover_Pkg Out_1;
  /* linear::Memory::InitVal */
  static p131_q_rbcTransitionOrder_T_Handover_Pkg InitVal_1;
  /* linear::Memory::MemCond */
  static kcg_bool MemCond_1;
  /* linear::Memory::Reset */
  static kcg_bool Reset_1;
  /* linear::Memory::M_Input */
  static p131_q_rbcTransitionOrder_T_Handover_Pkg M_Input_1;
  /* linear::Memory::_L9 */
  static p131_q_rbcTransitionOrder_T_Handover_Pkg _L9_1;
  /* linear::Memory::_L1 */
  static kcg_bool _L1_1;
  /* linear::Memory::_L2 */
  static p131_q_rbcTransitionOrder_T_Handover_Pkg _L2_1;
  /* linear::Memory::_L3 */
  static kcg_bool _L3_1;
  /* linear::Memory::_L5 */
  static p131_q_rbcTransitionOrder_T_Handover_Pkg _L5_1;
  /* linear::Memory::_L6 */
  static p131_q_rbcTransitionOrder_T_Handover_Pkg _L6_1;
  /* linear::Memory::_L7 */
  static p131_q_rbcTransitionOrder_T_Handover_Pkg _L7_1;
  static msgFromTrack_T_RCM_MsgTypes_Pkg noname;
  static msgFromTrack_T_RCM_MsgTypes_Pkg _1_noname;
  static kcg_bool _2_noname;
  static kcg_bool _3_noname;
  static kcg_bool _4_noname;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::handoverFinished */
  static kcg_bool last_handoverFinished;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::useInformationFromAcceptingRBC_loc */
  static kcg_bool last_useInformationFromAcceptingRBC_loc;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::handoverInprogress */
  static kcg_bool last_handoverInprogress;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::sNotReady */
  static kcg_bool sNotReady;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::handingOverMobile_is_mobile_1_loc */
  static kcg_bool handingOverMobile_is_mobile_1_loc;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::dataFromHandingOverMobile */
  static msgFromTrack_T_RCM_MsgTypes_Pkg dataFromHandingOverMobile;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::dataFromAcceptingMobile */
  static msgFromTrack_T_RCM_MsgTypes_Pkg dataFromAcceptingMobile;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::dataFromTrack */
  static msgFromTrack_T_RCM_MsgTypes_Pkg dataFromTrack;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::dataFromBalise */
  static msgFromTrack_T_RCM_MsgTypes_Pkg dataFromBalise;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::p131_RBCTransitionOrder_dec */
  static p131_q_rbcTransitionOrder_T_Handover_Pkg p131_RBCTransitionOrder_dec;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::locationOfRBCTransition */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg locationOfRBCTransition;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::maxSafeFrontEndPassesHandOverLocation */
  static kcg_bool maxSafeFrontEndPassesHandOverLocation;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::minSafeReadEndPassesHandOverLocation */
  static kcg_bool minSafeReadEndPassesHandOverLocation;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L8 */
  static kcg_bool _L8;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L6 */
  static kcg_bool _L6;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L5 */
  static kcg_bool _L5;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L4 */
  static kcg_bool _L4;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L3 */
  static kcg_bool _L3;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L2 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L2;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L1 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L1;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L14 */
  static kcg_bool _L14;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L38 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L38;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L37 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L37;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L36 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L36;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L35 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L35;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L41 */
  static M_MODE _L41;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L42 */
  static morcStatus_T_RCM_Session_Types_Pkg _L42;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L43 */
  static morcStatus_T_RCM_Session_Types_Pkg _L43;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L45 */
  static morcStatus_T_RCM_Session_Types_Pkg _L45;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L44 */
  static morcStatus_T_RCM_Session_Types_Pkg _L44;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L49 */
  static kcg_bool _L49;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L50 */
  static kcg_bool _L50;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L55 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L55;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L54 */
  static p131_q_rbcTransitionOrder_T_Handover_Pkg _L54;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L53 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L53;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L72 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L72;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L81 */
  static kcg_bool _L81;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L78 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L78;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L79 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L79;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L77 */
  static kcg_bool _L77;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L89 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L89;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L90 */
  static trainPosition_T_TrainPosition_Types_Pck _L90;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L119 */
  static kcg_bool _L119;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L122 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L122;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L123 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L123;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L124 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L124;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L126 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L126;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L127 */
  static kcg_int _L127;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L128 */
  static kcg_int _L128;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L129 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L129;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L130 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L130;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L131 */
  static p131_q_rbcTransitionOrder_T_Handover_Pkg _L131;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L162 */
  static kcg_bool _L162;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L163 */
  static NID_LRBG _L163;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L164 */
  static P131_RBCTransitionOrder_T_Packet_Types_Pkg _L164;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L165 */
  static kcg_bool _L165;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L166 */
  static Q_SCALE _L166;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L167 */
  static D_RBCTR _L167;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L169 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L169;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L174 */
  static kcg_bool _L174;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L173 */
  static kcg_bool _L173;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L172 */
  static kcg_int _L172;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L176 */
  static NID_BG _L176;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L175 */
  static NID_C _L175;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L186 */
  static positionedBG_T_TrainPosition_Types_Pck _L186;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L187 */
  static positionedBG_T_TrainPosition_Types_Pck _L187;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L188 */
  static positionedBG_T_TrainPosition_Types_Pck _L188;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L189 */
  static positionedBG_T_TrainPosition_Types_Pck _L189;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L190 */
  static positionedBGs_T_TrainPosition_Types_Pck _L190;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L191 */
  static positionedBG_T_TrainPosition_Types_Pck _L191;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L192 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L192;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L193 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L193;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L195 */
  static kcg_int _L195;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L196 */
  static kcg_bool _L196;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L197 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L197;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L200 */
  static p131_q_rbcTransitionOrder_T_Handover_Pkg _L200;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L202 */
  static p131_q_rbcTransitionOrder_T_Handover_Pkg _L202;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L203 */
  static kcg_bool _L203;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L204 */
  static kcg_bool _L204;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L206 */
  static kcg_bool _L206;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L207 */
  static kcg_bool _L207;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L208 */
  static kcg_bool _L208;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L209 */
  static trainProperties_T_TrainPosition_Types_Pck _L209;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L210 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L210;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L211 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L211;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L212 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L212;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L213 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L213;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L219 */
  static LocWithInAcc_T_Obu_BasicTypes_Pkg _L219;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L222 */
  static kcg_bool _L222;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L223 */
  static kcg_bool _L223;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L224 */
  static kcg_bool _L224;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L225 */
  static kcg_bool _L225;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L226 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L226;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L228 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L228;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L229 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L229;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L236 */
  static kcg_bool _L236;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L235 */
  static kcg_bool _L235;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L234 */
  static connection_ids_T_Handover_Pkg _L234;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L239 */
  static kcg_bool _L239;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L240 */
  static kcg_bool _L240;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L242 */
  static kcg_bool _L242;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L241 */
  static kcg_bool _L241;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L243 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L243;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L244 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L244;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L245 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L245;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L246 */
  static msgFromTrack_T_RCM_MsgTypes_Pkg _L246;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L247 */
  static morcStatus_T_RCM_Session_Types_Pkg _L247;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L248 */
  static morcStatus_T_RCM_Session_Types_Pkg _L248;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L249 */
  static morcStatus_T_RCM_Session_Types_Pkg _L249;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L250 */
  static morcStatus_T_RCM_Session_Types_Pkg _L250;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L251 */
  static morcStatus_T_RCM_Session_Types_Pkg _L251;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L252 */
  static morcStatus_T_RCM_Session_Types_Pkg _L252;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L253 */
  static kcg_bool _L253;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L254 */
  static kcg_bool _L254;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L255 */
  static kcg_bool _L255;
  /* Handover_Pkg::handoverUtils_Pkg::processHandingOver::_L256 */
  static kcg_bool _L256;
  
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L124, dataFromTrack_in);
  /* last_init_ck_useInformationFromAcceptingRBC_loc */ if (outC->init) {
    last_useInformationFromAcceptingRBC_loc = kcg_false;
  }
  else {
    last_useInformationFromAcceptingRBC_loc =
      outC->useInformationFromAcceptingRBC_loc;
  }
  _L81 = last_useInformationFromAcceptingRBC_loc;
  /* last_init_ck_handoverInprogress */ if (outC->init) {
    last_handoverInprogress = kcg_false;
  }
  else {
    last_handoverInprogress = outC->handoverInprogress;
  }
  _L242 = last_handoverInprogress;
  /* 3 */
  changeoverSwitch_Handover_Pkg_handoverUtils_Pkg(
    _L242,
    sessionManagementAbility,
    &outC->Context_3);
  _L241 = outC->Context_3.handingOverMobile_is_mobile_1;
  handingOverMobile_is_mobile_1_loc = _L241;
  _L77 = handingOverMobile_is_mobile_1_loc;
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&_L249, morcStatus_1);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&_L250, morcStatus_2);
  /* 2 */
  splitInputData_Handover_Pkg_handoverUtils_Pkg(
    &_L124,
    _L81,
    _L77,
    &_L249,
    &_L250,
    sessionManagementAbility,
    &_L78,
    &_L79,
    &_L122,
    &_L123);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&dataFromTrack, &_L123);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L126, &dataFromTrack);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&dataFromHandingOverMobile, &_L78);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L72, &dataFromHandingOverMobile);
  /* 1 */
  fishHandoverCmds_Handover_Pkg_handoverUtils_Pkg(
    &_L126,
    &_L72,
    &_L53,
    &_L54,
    &_L243,
    &_L55,
    &_L226);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&_L251, morcStatus_1);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&_L252, morcStatus_2);
  _L50 = handingOverMobile_is_mobile_1_loc;
  /* 1 */
  radioStatusRouter_Handover_Pkg_handoverUtils_Pkg(
    &_L251,
    &_L252,
    _L50,
    sessionManagementAbility,
    &_L44,
    &_L45);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&_L90, trainPosition);
  _L119 = _L90.valid;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&_L190, BGs);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &_L186,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cNoPositionedBG_CalculateTrainPosition_Pkg);
  kcg_copy_p131_q_rbcTransitionOrder_T_Handover_Pkg(
    &_L202,
    (p131_q_rbcTransitionOrder_T_Handover_Pkg *)
      &cNoP131_RBCTransitionOrder_Handover_Pkg);
  kcg_copy_p131_q_rbcTransitionOrder_T_Handover_Pkg(&InitVal_1, &_L202);
  kcg_copy_p131_q_rbcTransitionOrder_T_Handover_Pkg(&_L9_1, &InitVal_1);
  /* 1_fby_1_init_7 */ if (outC->init) {
    kcg_copy_p131_q_rbcTransitionOrder_T_Handover_Pkg(&_L5_1, &_L9_1);
  }
  else {
    kcg_copy_p131_q_rbcTransitionOrder_T_Handover_Pkg(&_L5_1, &outC->_L8_1);
  }
  /* last_init_ck_handoverFinished */ if (outC->init) {
    last_handoverFinished = kcg_false;
  }
  else {
    last_handoverFinished = outC->handoverFinished;
  }
  _L206 = last_handoverFinished;
  Reset_1 = _L206;
  _L1_1 = Reset_1;
  kcg_copy_p131_q_rbcTransitionOrder_T_Handover_Pkg(&_L2_1, &InitVal_1);
  kcg_copy_p131_q_rbcTransitionOrder_T_Handover_Pkg(
    &p131_RBCTransitionOrder_dec,
    &_L54);
  kcg_copy_p131_q_rbcTransitionOrder_T_Handover_Pkg(
    &_L131,
    &p131_RBCTransitionOrder_dec);
  _L203 = _L131.valid;
  MemCond_1 = _L203;
  _L3_1 = MemCond_1;
  kcg_copy_p131_q_rbcTransitionOrder_T_Handover_Pkg(&M_Input_1, &_L131);
  kcg_copy_p131_q_rbcTransitionOrder_T_Handover_Pkg(&_L6_1, &M_Input_1);
  /* 4 */ if (_L3_1) {
    kcg_copy_p131_q_rbcTransitionOrder_T_Handover_Pkg(&_L7_1, &_L6_1);
  }
  else {
    kcg_copy_p131_q_rbcTransitionOrder_T_Handover_Pkg(&_L7_1, &_L5_1);
  }
  /* 1 */ if (_L1_1) {
    kcg_copy_p131_q_rbcTransitionOrder_T_Handover_Pkg(&outC->_L8_1, &_L2_1);
  }
  else {
    kcg_copy_p131_q_rbcTransitionOrder_T_Handover_Pkg(&outC->_L8_1, &_L7_1);
  }
  kcg_copy_p131_q_rbcTransitionOrder_T_Handover_Pkg(&Out_1, &outC->_L8_1);
  kcg_copy_p131_q_rbcTransitionOrder_T_Handover_Pkg(&_L200, &Out_1);
  _L162 = _L200.valid;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L187, &_L186);
  if (kcg_true) {
    _L187.valid = _L162;
  }
  _L163 = _L200.nid_lrbg;
  /* 1 */
  NIDLRBG_2_nidC_nidBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    _L162,
    _L163,
    &_L175,
    &_L176);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L188, &_L187);
  if (kcg_true) {
    _L188.nid_c = _L175;
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L189, &_L188);
  if (kcg_true) {
    _L189.nid_bg = _L176;
  }
  kcg_copy_P131_RBCTransitionOrder_T_Packet_Types_Pkg(&_L164, &_L200.order);
  _L165 = _L164.valid;
  _L196 = _L162 & _L165;
  /* 1 */
  indexOfBG_by_id_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
    &_L189,
    &_L190,
    _L196,
    &_L172,
    &_L173,
    &_L174);
  if ((0 <= _L172) & (_L172 < 41)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&_L191, &_L190[_L172]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &_L191,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoPositionedBG_CalculateTrainPosition_Pkg);
  }
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L192, &_L191.location);
  _L166 = _L164.q_scale;
  _L167 = _L164.d_rbctr;
  _L195 = 0;
  /* 1 */
  scaledDLINK_2_dlink_BasicLocationFunctions_Pkg(_L166, _L167, _L195, &_L193);
  /* 1 */ add_2_Distances_BasicLocationFunctions_Pkg(&_L192, &_L193, &_L197);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&locationOfRBCTransition, &_L197);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L219, &locationOfRBCTransition);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_L169, &_L90.trainPosition);
  kcg_copy_trainProperties_T_TrainPosition_Types_Pck(&_L209, trainProperties);
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &_L210,
    &_L209.d_baliseAntenna_2_frontend);
  /* 2 */ add_2_Distances_BasicLocationFunctions_Pkg(&_L169, &_L210, &_L212);
  /* 1 */
  locReachedOrPassed_BasicLocationFunctions_Pkg(
    &_L219,
    &_L212,
    &outC->Context_1);
  _L222 = outC->Context_1.hit;
  _L224 = _L119 & _L222 & _L196 & _L173;
  maxSafeFrontEndPassesHandOverLocation = _L224;
  _L207 = maxSafeFrontEndPassesHandOverLocation;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &_L211,
    &_L209.d_frontend_2_rearend);
  /* 1 */ sub_2_distances_BasicLocationFunctions_Pkg(&_L212, &_L211, &_L213);
  /* 2 */
  locReachedOrPassed_BasicLocationFunctions_Pkg(
    &_L219,
    &_L213,
    &outC->Context_2);
  _L223 = outC->Context_2.hit;
  _L225 = _L119 & _L223 & _L196 & _L173;
  minSafeReadEndPassesHandOverLocation = _L225;
  _L208 = minSafeReadEndPassesHandOverLocation;
  _L41 = mode;
  /* 1 */
  handOverSequencer_Handover_Pkg_handoverUtils_Pkg(
    &_L53,
    &_L243,
    &_L55,
    &_L44,
    &_L45,
    _L207,
    _L208,
    _L41,
    sessionManagementAbility,
    &outC->_1_Context_1);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &_L89,
    &outC->_1_Context_1.p42_sessionCmd_for_acceptingRBC);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &_L1,
    &outC->_1_Context_1.p42_sessionCmd_for_handingOverRBC);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &_L2,
    &outC->_1_Context_1.p45_radioNetworkRegistrationOrder_for_handingOverRBC);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(
    &_L246,
    &outC->_1_Context_1.p45_radioNetworkRegistrationOrder_for_acceptingRBC);
  _L3 = outC->_1_Context_1.sendPositionReport_2_handingOverRBC;
  _L4 = outC->_1_Context_1.sendPositionReport_2_acceptingRBC;
  _L5 = outC->_1_Context_1.sendTrainData_2_acceptingRBC;
  _L6 = outC->_1_Context_1.useInformationFromAcceptingRBC;
  _L8 = outC->_1_Context_1.bufferInformationFromAcceptingRBC;
  _L14 = outC->_1_Context_1.handoverInprogress;
  _L204 = outC->_1_Context_1.handoverFinished;
  _L253 = outC->_1_Context_1.notReady;
  /* 1 */ EitherEdge_digital(_L14, &outC->_2_Context_1);
  _L254 = outC->_2_Context_1.EE_Output;
  /* 2 */ EitherEdge_digital(_L204, &outC->_3_Context_2);
  _L255 = outC->_3_Context_2.EE_Output;
  sNotReady = _L253 | _L254 | _L255;
  _L49 = handingOverMobile_is_mobile_1_loc;
  /* 1 */
  mobileCtrlCmdRouter_out_Handover_Pkg_handoverUtils_Pkg(
    &_L226,
    &_L89,
    &_L1,
    &_L2,
    &_L246,
    _L49,
    _L6,
    sessionManagementAbility,
    &_L37,
    &_L35,
    &_L228,
    &_L38,
    &_L36,
    &_L229);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&_L43, morcStatus_2);
  _L128 = cMobileDeviceNo_2_Handover_Pkg;
  /* 1 */
  processRadioCtrlCmds_v2_Handover_Pkg_handoverUtils_Pkg(
    &_L38,
    &_L36,
    &_L229,
    &_L43,
    _L128,
    &_L245);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&_L42, morcStatus_1);
  _L127 = cMobileDeviceNo_1_Handover_Pkg;
  /* 2 */
  processRadioCtrlCmds_v2_Handover_Pkg_handoverUtils_Pkg(
    &_L37,
    &_L35,
    &_L228,
    &_L42,
    _L127,
    &_L244);
  outC->handoverInprogress = _L14;
  outC->sendPositionReport_2_handingOverRBC = _L3;
  outC->sendPositionReport_2_acceptingRBC = _L4;
  outC->sendTrainData_2_acceptingRBC = _L5;
  outC->bufferInformationFromAcceptingRBC = _L8;
  outC->useInformationFromAcceptingRBC_loc = _L6;
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&dataFromAcceptingMobile, &_L79);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&dataFromBalise, &_L122);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L129, &dataFromAcceptingMobile);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&noname, &_L129);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_L130, &dataFromBalise);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&_1_noname, &_L130);
  _2_noname = _L174;
  outC->handoverFinished = _L204;
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&_L247, morcStatus_1);
  kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(&_L248, morcStatus_2);
  _L239 = handingOverMobile_is_mobile_1_loc;
  _L240 = outC->useInformationFromAcceptingRBC_loc;
  /* 1 */
  determineSupervisingRBC_Handover_Pkg_handoverUtils_Pkg(
    &_L247,
    &_L248,
    _L239,
    _L240,
    sessionManagementAbility,
    &_L234,
    &_L235,
    &_L236);
  kcg_copy_connection_ids_T_Handover_Pkg(&outC->supervisingRBC, &_L234);
  _3_noname = _L235;
  _4_noname = _L236;
  outC->useInformationFromAcceptingRBC = _L6;
  outC->handingOverMobile_is_mobile_1 = _L241;
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&outC->sessionCmds_2_MoRC_1, &_L244);
  kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg(&outC->sessionCmds_2_MoRC_2, &_L245);
  outC->trainPassesA_RBC_RBC_border_WithItsFrontEnd = _L224;
  _L256 = sNotReady;
  outC->notReady = _L256;
  outC->init = kcg_false;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** processHandingOver_Handover_Pkg_handoverUtils_Pkg.c
** Generation date: 2015-11-20T14:27:50
*************************************************************$ */

